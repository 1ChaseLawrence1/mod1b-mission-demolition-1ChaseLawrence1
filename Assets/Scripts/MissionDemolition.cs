using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum GameMode
    {
        idle,
        playing,
        levelEnd
    }

public class MissionDemolition : MonoBehaviour {
    static private MissionDemolition S;
    static public int score = 1;

    [Header("Set in Inspector")]
    public Text uitLevel;
    public Text uitShots;
    public Text uitHighScore;
    public Text uitButton;
    public Vector3 castlePos;
    public GameObject[] castles;

    [Header("Set Dynamically")]
    public int level;
    public int levelMax;
    public int shotsTaken;
    public GameObject castle;
    public GameMode mode = GameMode.idle;
    public string showing = "Show Slingshot";

    private void Awake()
    {
        if (PlayerPrefs.HasKey("MissionHighScore"))
        {
            //sets the high score to the number of levels if it is below the number of levels since you cant win a level with 0 shots
            //theoretically the lowest number of shots is the same as the number of levels
            if (PlayerPrefs.GetInt("MissionHighScore") < castles.Length)
                        PlayerPrefs.SetInt("MissionHighScore", castles.Length);
            score = PlayerPrefs.GetInt("MissionHighScore");
        }
        PlayerPrefs.SetInt("MissionHighScore", score);
        print(levelMax);
    }
    // Use this for initialization
    void Start ()
    {
        S = this;
        level = 0;
        levelMax = castles.Length;
        StartLevel();
        

	}

    void StartLevel()
    {
        if(castle != null)
        {
            Destroy(castle);
        }

        GameObject[] gos = GameObject.FindGameObjectsWithTag("Projectile");
        foreach (GameObject pTemp in gos)
        {
            Destroy(pTemp);
        }

        castle = Instantiate<GameObject>(castles[level]);
        castle.transform.position = castlePos;
        shotsTaken = 0;

        SwitchView("Show Both");
       // ProjectileLine.S.Clear();

        Goal.goalMet = false;

        UpdateGUI();

        mode = GameMode.playing;
    }

    void UpdateGUI()
    {
        
        uitLevel.text = "Level: " + (level + 1) + " of " + levelMax;
        uitShots.text = "Shots Taken: " + shotsTaken;
        uitHighScore.text = "Least Shots Taken: " + score;
    }
	
	// Update is called once per frame
	void Update ()
    {
        if (shotsTaken <= PlayerPrefs.GetInt("MissionHighScore") && Goal.goalMet)
                        PlayerPrefs.SetInt("MissionHighScore", shotsTaken);
        UpdateGUI();
        

        if((mode == GameMode.playing) && Goal.goalMet)
        {
            mode = GameMode.levelEnd;
            SwitchView("Show Both");
            Invoke("NextLevel", 2f);
        }

        
	}

    void NextLevel()
    {
        level++;
        if(level == levelMax)
        {
            level = 0;
        }
        StartLevel();
    }

    public void SwitchView(string eView = "")
    {
        if(eView == "")
        {
            eView = uitButton.text;
        }
        showing = eView;
        switch(showing)
        {
            case "Show Slingshot":
                FollowCam.POI = null;
                uitButton.text = "Show Castle";
                break;

            case "Show Castle":
                FollowCam.POI = S.castle;
                uitButton.text = "Show Both";
                break;

            case "Show Both":
                FollowCam.POI = GameObject.Find("ViewBoth");
                uitButton.text = "Show Slingshot";
                break; 
        }
    }

    public static void ShotFired()
    {
        S.shotsTaken++;
    }
}
