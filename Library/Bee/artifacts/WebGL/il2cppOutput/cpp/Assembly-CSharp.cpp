#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Cloud
struct Cloud_t75A881299C48E5DFFC417596837361E3A142A236;
// CloudCrafter
struct CloudCrafter_t16D7F484CE3C5421D883BDE12C2461231013B6E2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// FollowCam
struct FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Goal
struct Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// MissionDemolition
struct MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ProjectileLine
struct ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RigidbodySleep
struct RigidbodySleep_tE86F0466A10244D596523F735C9FBF3B39BBC302;
// Slingshot
struct Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11D878848DFE084C18A75E0C1B0C398D2661A835;
IL2CPP_EXTERN_C String_t* _stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C;
IL2CPP_EXTERN_C String_t* _stringLiteral5629D1F90D0E97D62AA5A2A9F97219902EF623FF;
IL2CPP_EXTERN_C String_t* _stringLiteral70FE90938C64AFBCACD422E4CFAD88703F0E951B;
IL2CPP_EXTERN_C String_t* _stringLiteral939776A9D3774DE8EFB26EC22EA7ACA701791E02;
IL2CPP_EXTERN_C String_t* _stringLiteralA15BD8E6928F755B7A80611282AE5FD0D29FF7CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F;
IL2CPP_EXTERN_C String_t* _stringLiteralC132618923AE7403FF90257945E1F03A7468DBBB;
IL2CPP_EXTERN_C String_t* _stringLiteralC27A23212CD9B200FD67DD860BB8A9E67FA2C469;
IL2CPP_EXTERN_C String_t* _stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC;
IL2CPP_EXTERN_C String_t* _stringLiteralD52DC4695BCD7E2091B036E8E0C6B2BBBD062E0E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6CF9FA4DC0F97E3163A068AFC5ED1AD785F1D7;
IL2CPP_EXTERN_C String_t* _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// Cloud
struct Cloud_t75A881299C48E5DFFC417596837361E3A142A236  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Cloud::cloudSphere
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cloudSphere_4;
	// System.Int32 Cloud::numSpheresMin
	int32_t ___numSpheresMin_5;
	// System.Int32 Cloud::numSpheresMax
	int32_t ___numSpheresMax_6;
	// UnityEngine.Vector3 Cloud::sphereOffsetScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereOffsetScale_7;
	// UnityEngine.Vector2 Cloud::sphereScaleRangeX
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sphereScaleRangeX_8;
	// UnityEngine.Vector2 Cloud::sphereScaleRangeY
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sphereScaleRangeY_9;
	// UnityEngine.Vector2 Cloud::sphereScaleRangeZ
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sphereScaleRangeZ_10;
	// System.Single Cloud::scaleYMin
	float ___scaleYMin_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Cloud::spheres
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___spheres_12;
};

// CloudCrafter
struct CloudCrafter_t16D7F484CE3C5421D883BDE12C2461231013B6E2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CloudCrafter::numClouds
	int32_t ___numClouds_4;
	// UnityEngine.GameObject CloudCrafter::cloudPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cloudPrefab_5;
	// UnityEngine.Vector3 CloudCrafter::cloudPosMin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cloudPosMin_6;
	// UnityEngine.Vector3 CloudCrafter::cloudPosMax
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cloudPosMax_7;
	// System.Single CloudCrafter::cloudScaleMin
	float ___cloudScaleMin_8;
	// System.Single CloudCrafter::cloudScaleMax
	float ___cloudScaleMax_9;
	// System.Single CloudCrafter::cloudSpeedMult
	float ___cloudSpeedMult_10;
	// UnityEngine.GameObject[] CloudCrafter::cloudInstances
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___cloudInstances_11;
};

// FollowCam
struct FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FollowCam::easing
	float ___easing_5;
	// UnityEngine.Vector2 FollowCam::minXY
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minXY_6;
	// System.Single FollowCam::camZ
	float ___camZ_7;
};

struct FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields
{
	// UnityEngine.GameObject FollowCam::POI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___POI_4;
};

// Goal
struct Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_StaticFields
{
	// System.Boolean Goal::goalMet
	bool ___goalMet_4;
};

// MissionDemolition
struct MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text MissionDemolition::uitLevel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___uitLevel_6;
	// UnityEngine.UI.Text MissionDemolition::uitShots
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___uitShots_7;
	// UnityEngine.UI.Text MissionDemolition::uitHighScore
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___uitHighScore_8;
	// UnityEngine.UI.Text MissionDemolition::uitButton
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___uitButton_9;
	// UnityEngine.Vector3 MissionDemolition::castlePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___castlePos_10;
	// UnityEngine.GameObject[] MissionDemolition::castles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___castles_11;
	// System.Int32 MissionDemolition::level
	int32_t ___level_12;
	// System.Int32 MissionDemolition::levelMax
	int32_t ___levelMax_13;
	// System.Int32 MissionDemolition::shotsTaken
	int32_t ___shotsTaken_14;
	// UnityEngine.GameObject MissionDemolition::castle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___castle_15;
	// GameMode MissionDemolition::mode
	int32_t ___mode_16;
	// System.String MissionDemolition::showing
	String_t* ___showing_17;
};

struct MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_StaticFields
{
	// MissionDemolition MissionDemolition::S
	MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* ___S_4;
	// System.Int32 MissionDemolition::score
	int32_t ___score_5;
};

// ProjectileLine
struct ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ProjectileLine::minDist
	float ___minDist_5;
	// UnityEngine.LineRenderer ProjectileLine::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_6;
	// UnityEngine.GameObject ProjectileLine::_poi
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____poi_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ProjectileLine::points
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___points_8;
};

struct ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_StaticFields
{
	// ProjectileLine ProjectileLine::S
	ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* ___S_4;
};

// RigidbodySleep
struct RigidbodySleep_tE86F0466A10244D596523F735C9FBF3B39BBC302  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Slingshot
struct Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Slingshot::prefabProjectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabProjectile_5;
	// System.Single Slingshot::velocityMult
	float ___velocityMult_6;
	// UnityEngine.GameObject Slingshot::launchPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___launchPoint_7;
	// UnityEngine.Vector3 Slingshot::launchPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___launchPos_8;
	// UnityEngine.GameObject Slingshot::projectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectile_9;
	// System.Boolean Slingshot::aimingMode
	bool ___aimingMode_10;
	// UnityEngine.Rigidbody Slingshot::projectileRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___projectileRigidbody_11;
};

struct Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2_StaticFields
{
	// Slingshot Slingshot::S
	Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2* ___S_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Cloud::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud_Start_m71BBFF6B0F31E57326C26601D09A18DAE00DD2A6 (Cloud_t75A881299C48E5DFFC417596837361E3A142A236* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rigidbody::IsSleeping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_IsSleeping_m059CBAD60AA4A6CA666FE2EAD2D7A3B02269E43F (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void MissionDemolition::StartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_StartLevel_m4475C6A68408F0390ED3AD81C71BC1E27200B898 (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void MissionDemolition::SwitchView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_SwitchView_mCEAD4552FC490F0481465557F17EA04FEC3AD8E2 (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, String_t* ___eView0, const RuntimeMethod* method) ;
// System.Void MissionDemolition::UpdateGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_UpdateGUI_mBCB7E43A677D28BEFDF6596353037AD6386CD55C (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void ProjectileLine::AddPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileLine_AddPoint_m490CE719E8A3DC3CF4AEE912D36E1E8A9864F34C (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 ProjectileLine::get_lastPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ProjectileLine_get_lastPoint_mF47EF44D7F602EABC7ABD3B8AA8659BE76225C0C (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Slingshot::get_Launch_POS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Slingshot_get_Launch_POS_m1B1F20BAF72F56668D8360194DC3FE751FF007F1 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.GameObject ProjectileLine::get_poi()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ProjectileLine_get_poi_m4E61F7852C472165BE8A57BC18C397A4E20D0EF8_inline (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) ;
// System.Void ProjectileLine::set_poi(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileLine_set_poi_m82434EA03B0D3E19F24B21F37287E9AC768EB5F5 (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::Sleep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_Sleep_m9826BDFCF078DF00223011B3F0FA7F4894F8F4CA (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void MissionDemolition::ShotFired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_ShotFired_m16F6B769990F71A5BD60269A2D138D0257AB49E0 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cloud::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud_Start_m71BBFF6B0F31E57326C26601D09A18DAE00DD2A6 (Cloud_t75A881299C48E5DFFC417596837361E3A142A236* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// spheres = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___spheres_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spheres_12), (void*)L_0);
		// int num = Random.Range(numSpheresMin, numSpheresMax);
		int32_t L_1 = __this->___numSpheresMin_5;
		int32_t L_2 = __this->___numSpheresMax_6;
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(L_1, L_2, NULL);
		V_0 = L_3;
		// for(int i = 0; i<num; i++)
		V_1 = 0;
		goto IL_0156;
	}

IL_0024:
	{
		// GameObject sp = Instantiate<GameObject>(cloudSphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___cloudSphere_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_2 = L_5;
		// spheres.Add(sp);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___spheres_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_6, L_7, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// Transform spTrans = sp.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		// spTrans.SetParent(this.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_10, L_11, NULL);
		// Vector3 offset = Random.insideUnitSphere;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		V_3 = L_12;
		// offset.x *= sphereOffsetScale.x;
		float* L_13 = (&(&V_3)->___x_2);
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___sphereOffsetScale_7);
		float L_17 = L_16->___x_2;
		*((float*)L_14) = (float)((float)il2cpp_codegen_multiply(L_15, L_17));
		// offset.y *= sphereOffsetScale.y;
		float* L_18 = (&(&V_3)->___y_3);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___sphereOffsetScale_7);
		float L_22 = L_21->___y_3;
		*((float*)L_19) = (float)((float)il2cpp_codegen_multiply(L_20, L_22));
		// offset.z *= sphereOffsetScale.z;
		float* L_23 = (&(&V_3)->___z_4);
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___sphereOffsetScale_7);
		float L_27 = L_26->___z_4;
		*((float*)L_24) = (float)((float)il2cpp_codegen_multiply(L_25, L_27));
		// spTrans.localPosition = offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_28, L_29, NULL);
		// Vector3 scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		V_4 = L_30;
		// scale.x = Random.Range(sphereScaleRangeX.x, sphereScaleRangeX.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&__this->___sphereScaleRangeX_8);
		float L_32 = L_31->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___sphereScaleRangeX_8);
		float L_34 = L_33->___y_1;
		float L_35;
		L_35 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_32, L_34, NULL);
		(&V_4)->___x_2 = L_35;
		// scale.y = Random.Range(sphereScaleRangeY.x, sphereScaleRangeY.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = (&__this->___sphereScaleRangeY_9);
		float L_37 = L_36->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38 = (&__this->___sphereScaleRangeY_9);
		float L_39 = L_38->___y_1;
		float L_40;
		L_40 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_37, L_39, NULL);
		(&V_4)->___y_3 = L_40;
		// scale.z = Random.Range(sphereScaleRangeZ.x, sphereScaleRangeZ.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->___sphereScaleRangeZ_10);
		float L_42 = L_41->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___sphereScaleRangeZ_10);
		float L_44 = L_43->___y_1;
		float L_45;
		L_45 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_42, L_44, NULL);
		(&V_4)->___z_4 = L_45;
		// scale.y *= 1 - (Mathf.Abs(offset.x) / sphereOffsetScale.x);
		float* L_46 = (&(&V_4)->___y_3);
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_3;
		float L_50 = L_49.___x_2;
		float L_51;
		L_51 = fabsf(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_52 = (&__this->___sphereOffsetScale_7);
		float L_53 = L_52->___x_2;
		*((float*)L_47) = (float)((float)il2cpp_codegen_multiply(L_48, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_51/L_53))))));
		// scale.y = Mathf.Max(scale.y, scaleYMin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_4;
		float L_55 = L_54.___y_3;
		float L_56 = __this->___scaleYMin_11;
		float L_57;
		L_57 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_55, L_56, NULL);
		(&V_4)->___y_3 = L_57;
		// spTrans.localScale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_4;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_28, L_58, NULL);
		// for(int i = 0; i<num; i++)
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0156:
	{
		// for(int i = 0; i<num; i++)
		int32_t L_60 = V_1;
		int32_t L_61 = V_0;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_0024;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Cloud::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud_Update_m216253CC524BF2D0CF0EB0FACD65418AF30D64BB (Cloud_t75A881299C48E5DFFC417596837361E3A142A236* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Cloud::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud_Restart_mAF7FF5F6CC4EED054860DB08B15B8EE9DE4E23F1 (Cloud_t75A881299C48E5DFFC417596837361E3A142A236* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (GameObject sp in spheres)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___spheres_12;
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (GameObject sp in spheres)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(sp);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (GameObject sp in spheres)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// Start();
		Cloud_Start_m71BBFF6B0F31E57326C26601D09A18DAE00DD2A6(__this, NULL);
		// }
		return;
	}
}
// System.Void Cloud::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud__ctor_mA3A30BBF5346063E974B0088012C482B7B5727C1 (Cloud_t75A881299C48E5DFFC417596837361E3A142A236* __this, const RuntimeMethod* method) 
{
	{
		// public int numSpheresMin = 6;
		__this->___numSpheresMin_5 = 6;
		// public int numSpheresMax = 10;
		__this->___numSpheresMax_6 = ((int32_t)10);
		// public Vector3 sphereOffsetScale = new Vector3(5, 2, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (5.0f), (2.0f), (1.0f), /*hidden argument*/NULL);
		__this->___sphereOffsetScale_7 = L_0;
		// public Vector2 sphereScaleRangeX = new Vector2(4, 8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (4.0f), (8.0f), /*hidden argument*/NULL);
		__this->___sphereScaleRangeX_8 = L_1;
		// public Vector2 sphereScaleRangeY = new Vector2(3, 4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (3.0f), (4.0f), /*hidden argument*/NULL);
		__this->___sphereScaleRangeY_9 = L_2;
		// public Vector2 sphereScaleRangeZ = new Vector2(2, 4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (2.0f), (4.0f), /*hidden argument*/NULL);
		__this->___sphereScaleRangeZ_10 = L_3;
		// public float scaleYMin = 2f;
		__this->___scaleYMin_11 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CloudCrafter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudCrafter_Awake_mAE2CCA2A2CD5AD6744A1113A148C886BF614F96B (CloudCrafter_t16D7F484CE3C5421D883BDE12C2461231013B6E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5629D1F90D0E97D62AA5A2A9F97219902EF623FF);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// cloudInstances = new GameObject[numClouds];
		int32_t L_0 = __this->___numClouds_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___cloudInstances_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cloudInstances_11), (void*)L_1);
		// GameObject anchor = GameObject.Find("CloudAnchor");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5629D1F90D0E97D62AA5A2A9F97219902EF623FF, NULL);
		V_0 = L_2;
		// for (int i = 0; i < numClouds; i++)
		V_2 = 0;
		goto IL_010a;
	}

IL_0023:
	{
		// cloud = Instantiate<GameObject>(cloudPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___cloudPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_1 = L_4;
		// Vector3 cPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_5;
		// cPos.x = Random.Range(cloudPosMin.x, cloudPosMax.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___cloudPosMin_6);
		float L_7 = L_6->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___cloudPosMax_7);
		float L_9 = L_8->___x_2;
		float L_10;
		L_10 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_7, L_9, NULL);
		(&V_3)->___x_2 = L_10;
		// cPos.y = Random.Range(cloudPosMin.y, cloudPosMax.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___cloudPosMin_6);
		float L_12 = L_11->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___cloudPosMax_7);
		float L_14 = L_13->___y_3;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_12, L_14, NULL);
		(&V_3)->___y_3 = L_15;
		// float scaleU = Random.value;
		float L_16;
		L_16 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		V_4 = L_16;
		// float scaleVal = Mathf.Lerp(cloudScaleMin, cloudScaleMax, scaleU);
		float L_17 = __this->___cloudScaleMin_8;
		float L_18 = __this->___cloudScaleMax_9;
		float L_19 = V_4;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_17, L_18, L_19, NULL);
		V_5 = L_20;
		// cPos.y = Mathf.Lerp(cloudPosMin.y, cPos.y, scaleU);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___cloudPosMin_6);
		float L_22 = L_21->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		float L_24 = L_23.___y_3;
		float L_25 = V_4;
		float L_26;
		L_26 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_22, L_24, L_25, NULL);
		(&V_3)->___y_3 = L_26;
		// cPos.z = 100 - 90 * scaleU;
		float L_27 = V_4;
		(&V_3)->___z_4 = ((float)il2cpp_codegen_subtract((100.0f), ((float)il2cpp_codegen_multiply((90.0f), L_27))));
		// cloud.transform.position = cPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_3;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_30, NULL);
		// cloud.transform.localScale = Vector3.one * scaleVal;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_34 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_34, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_32, L_35, NULL);
		// cloud.transform.SetParent(anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_37, L_39, NULL);
		// cloudInstances[i] = cloud;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_40 = __this->___cloudInstances_11;
		int32_t L_41 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = V_1;
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_42);
		// for (int i = 0; i < numClouds; i++)
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_010a:
	{
		// for (int i = 0; i < numClouds; i++)
		int32_t L_44 = V_2;
		int32_t L_45 = __this->___numClouds_4;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CloudCrafter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudCrafter_Update_mE474C508CB49A7026610054F6DE8E9C3ABCF693D (CloudCrafter_t16D7F484CE3C5421D883BDE12C2461231013B6E2* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	{
		// foreach (GameObject cloud in cloudInstances)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___cloudInstances_11;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0078;
	}

IL_000b:
	{
		// foreach (GameObject cloud in cloudInstances)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// float scaleVal = cloud.transform.localScale.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		float L_8 = L_7.___x_2;
		V_2 = L_8;
		// Vector3 cPos = cloud.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		V_3 = L_11;
		// cPos.x -= scaleVal * Time.deltaTime * cloudSpeedMult;
		float* L_12 = (&(&V_3)->___x_2);
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		float L_15 = V_2;
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_17 = __this->___cloudSpeedMult_10;
		*((float*)L_13) = (float)((float)il2cpp_codegen_subtract(L_14, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, L_16)), L_17))));
		// if (cPos.x <= cloudPosMin.x)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		float L_19 = L_18.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___cloudPosMin_6);
		float L_21 = L_20->___x_2;
		G_B2_0 = L_9;
		if ((!(((float)L_19) <= ((float)L_21))))
		{
			G_B3_0 = L_9;
			goto IL_0069;
		}
	}
	{
		// cPos.x = cloudPosMax.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___cloudPosMax_7);
		float L_23 = L_22->___x_2;
		(&V_3)->___x_2 = L_23;
		G_B3_0 = G_B2_0;
	}

IL_0069:
	{
		// cloud.transform.position = cPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(G_B3_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_25, NULL);
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0078:
	{
		// foreach (GameObject cloud in cloudInstances)
		int32_t L_27 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CloudCrafter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudCrafter__ctor_mA1A71B7FAB2F3D334583DFE11F77A29A34333344 (CloudCrafter_t16D7F484CE3C5421D883BDE12C2461231013B6E2* __this, const RuntimeMethod* method) 
{
	{
		// public int numClouds = 40;
		__this->___numClouds_4 = ((int32_t)40);
		// public Vector3 cloudPosMin = new Vector3(-50,-5,10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (-50.0f), (-5.0f), (10.0f), /*hidden argument*/NULL);
		__this->___cloudPosMin_6 = L_0;
		// public Vector3 cloudPosMax = new Vector3( 150,100,10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (150.0f), (100.0f), (10.0f), /*hidden argument*/NULL);
		__this->___cloudPosMax_7 = L_1;
		// public float cloudScaleMin = 1;
		__this->___cloudScaleMin_8 = (1.0f);
		// public float cloudScaleMax = 3;
		__this->___cloudScaleMax_9 = (3.0f);
		// public float cloudSpeedMult = 0.5f;
		__this->___cloudSpeedMult_10 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FollowCam::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCam_Awake_m84A1B8E59597AEDF650BB3D7370F66B211A259DE (FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8* __this, const RuntimeMethod* method) 
{
	{
		// camZ = this.transform.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		__this->___camZ_7 = L_2;
		// }
		return;
	}
}
// System.Void FollowCam::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCam_FixedUpdate_m51C032A169099DF45E895FA2F8DF77C99FA7D175 (FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (POI == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// destination = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_2;
		goto IL_0053;
	}

IL_0015:
	{
		// destination = POI.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_0 = L_5;
		// if(POI.tag == "Projectile")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4;
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// if(POI.GetComponent<Rigidbody>().IsSleeping())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10;
		L_10 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_9, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		bool L_11;
		L_11 = Rigidbody_IsSleeping_m059CBAD60AA4A6CA666FE2EAD2D7A3B02269E43F(L_10, NULL);
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		// POI = null;
		((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// return;
		return;
	}

IL_0053:
	{
		// destination.x = Mathf.Max(minXY.x, destination.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___minXY_6);
		float L_13 = L_12->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___x_2;
		float L_16;
		L_16 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_13, L_15, NULL);
		(&V_0)->___x_2 = L_16;
		// destination.y = Mathf.Max(minXY.y, destination.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___minXY_6);
		float L_18 = L_17->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		float L_20 = L_19.___y_3;
		float L_21;
		L_21 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_18, L_20, NULL);
		(&V_0)->___y_3 = L_21;
		// destination = Vector3.Lerp(transform.position, destination, easing);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		float L_25 = __this->___easing_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_23, L_24, L_25, NULL);
		V_0 = L_26;
		// destination.z = camZ;
		float L_27 = __this->___camZ_7;
		(&V_0)->___z_4 = L_27;
		// transform.position = destination;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_29, NULL);
		// Camera.main.orthographicSize = destination.y + 10;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30;
		L_30 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32 = L_31.___y_3;
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_30, ((float)il2cpp_codegen_add(L_32, (10.0f))), NULL);
		// }
		return;
	}
}
// System.Void FollowCam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCam_Start_m763CF6022A9912FB9224AB1B9AD5A1FF28316747 (FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FollowCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCam_Update_m17104D1CF01D55AF46C3F5488707ADA89F32D6DB (FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FollowCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCam__ctor_m589F4E38099DEDE181D7EA78C837D3EA9176CAB2 (FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8* __this, const RuntimeMethod* method) 
{
	{
		// public float easing = 0.05f;
		__this->___easing_5 = (0.0500000007f);
		// public Vector2 minXY = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___minXY_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Goal::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal_OnTriggerEnter_m4766A6FAF069F83AE91C78D2789ED8FE5C7CF0B3 (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(other.gameObject.tag == "Projectile")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// Goal.goalMet = true;
		((Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_StaticFields*)il2cpp_codegen_static_fields_for(Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_il2cpp_TypeInfo_var))->___goalMet_4 = (bool)1;
		// Material mat = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4;
		L_4 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		// Color c = mat.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_6, NULL);
		V_0 = L_7;
		// c.a = 1;
		(&V_0)->___a_3 = (1.0f);
		// mat.color = c;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_6, L_8, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Goal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal_Start_mDF487E1EEE7A888569814C65D99C9B1668768126 (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Goal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal_Update_m2D84FDE47C739C2248B2368ECCF366A927839798 (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Goal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal__ctor_m45EA1A6CC66451C8E34FE091151CFE7D6576EDC2 (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MissionDemolition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_Awake_mC6713745B8E62AF5229CF3B1A646B144E2EC3538 (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey("MissionHighScore"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C, NULL);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// if (PlayerPrefs.GetInt("MissionHighScore") < castles.Length)
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___castles_11;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// PlayerPrefs.SetInt("MissionHighScore", castles.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___castles_11;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
	}

IL_0032:
	{
		// score = PlayerPrefs.GetInt("MissionHighScore");
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C, NULL);
		il2cpp_codegen_runtime_class_init_inline(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		((MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_StaticFields*)il2cpp_codegen_static_fields_for(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var))->___score_5 = L_4;
	}

IL_0041:
	{
		// PlayerPrefs.SetInt("MissionHighScore", score);
		il2cpp_codegen_runtime_class_init_inline(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		int32_t L_5 = ((MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_StaticFields*)il2cpp_codegen_static_fields_for(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var))->___score_5;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C, L_5, NULL);
		// print(levelMax);
		int32_t L_6 = __this->___levelMax_13;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_8, NULL);
		// }
		return;
	}
}
// System.Void MissionDemolition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_Start_m883CA4190EA076C34F5A4C6B8A809A9C678F5035 (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// S = this;
		il2cpp_codegen_runtime_class_init_inline(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		((MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_StaticFields*)il2cpp_codegen_static_fields_for(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var))->___S_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_StaticFields*)il2cpp_codegen_static_fields_for(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var))->___S_4), (void*)__this);
		// level = 0;
		__this->___level_12 = 0;
		// levelMax = castles.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___castles_11;
		__this->___levelMax_13 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// StartLevel();
		MissionDemolition_StartLevel_m4475C6A68408F0390ED3AD81C71BC1E27200B898(__this, NULL);
		// }
		return;
	}
}
// System.Void MissionDemolition::StartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_StartLevel_m4475C6A68408F0390ED3AD81C71BC1E27200B898 (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11D878848DFE084C18A75E0C1B0C398D2661A835);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(castle != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___castle_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(castle);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___castle_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// GameObject[] gos = GameObject.FindGameObjectsWithTag("Projectile");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3;
		L_3 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		// foreach (GameObject pTemp in gos)
		V_0 = L_3;
		V_1 = 0;
		goto IL_0034;
	}

IL_0028:
	{
		// foreach (GameObject pTemp in gos)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		// Destroy(pTemp);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0034:
	{
		// foreach (GameObject pTemp in gos)
		int32_t L_9 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// castle = Instantiate<GameObject>(castles[level]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___castles_11;
		int32_t L_12 = __this->___level_12;
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___castle_15 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___castle_15), (void*)L_15);
		// castle.transform.position = castlePos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___castle_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___castlePos_10;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_18, NULL);
		// shotsTaken = 0;
		__this->___shotsTaken_14 = 0;
		// SwitchView("Show Both");
		MissionDemolition_SwitchView_mCEAD4552FC490F0481465557F17EA04FEC3AD8E2(__this, _stringLiteral11D878848DFE084C18A75E0C1B0C398D2661A835, NULL);
		// Goal.goalMet = false;
		((Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_StaticFields*)il2cpp_codegen_static_fields_for(Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_il2cpp_TypeInfo_var))->___goalMet_4 = (bool)0;
		// UpdateGUI();
		MissionDemolition_UpdateGUI_mBCB7E43A677D28BEFDF6596353037AD6386CD55C(__this, NULL);
		// mode = GameMode.playing;
		__this->___mode_16 = 1;
		// }
		return;
	}
}
// System.Void MissionDemolition::UpdateGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_UpdateGUI_mBCB7E43A677D28BEFDF6596353037AD6386CD55C (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15BD8E6928F755B7A80611282AE5FD0D29FF7CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6CF9FA4DC0F97E3163A068AFC5ED1AD785F1D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// uitLevel.text = "Level: " + (level + 1) + " of " + levelMax;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___uitLevel_6;
		int32_t L_1 = __this->___level_12;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t* L_3 = (&__this->___levelMax_13);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC, L_2, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640, L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// uitShots.text = "Shots Taken: " + shotsTaken;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___uitShots_7;
		int32_t* L_7 = (&__this->___shotsTaken_14);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA15BD8E6928F755B7A80611282AE5FD0D29FF7CC, L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// uitHighScore.text = "Least Shots Taken: " + score;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___uitHighScore_8;
		il2cpp_codegen_runtime_class_init_inline(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_StaticFields*)il2cpp_codegen_static_fields_for(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var))->___score_5), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDD6CF9FA4DC0F97E3163A068AFC5ED1AD785F1D7, L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		// }
		return;
	}
}
// System.Void MissionDemolition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_Update_m6EDDFD5CE399A4910F77796DF0E28EB900464406 (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11D878848DFE084C18A75E0C1B0C398D2661A835);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral939776A9D3774DE8EFB26EC22EA7ACA701791E02);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (shotsTaken <= PlayerPrefs.GetInt("MissionHighScore") && Goal.goalMet)
		int32_t L_0 = __this->___shotsTaken_14;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C, NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		bool L_2 = ((Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_StaticFields*)il2cpp_codegen_static_fields_for(Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_il2cpp_TypeInfo_var))->___goalMet_4;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// PlayerPrefs.SetInt("MissionHighScore", shotsTaken);
		int32_t L_3 = __this->___shotsTaken_14;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral50E2BABFD419B4A52C7B0416EEFA7A134A72AB0C, L_3, NULL);
	}

IL_0029:
	{
		// UpdateGUI();
		MissionDemolition_UpdateGUI_mBCB7E43A677D28BEFDF6596353037AD6386CD55C(__this, NULL);
		// if((mode == GameMode.playing) && Goal.goalMet)
		int32_t L_4 = __this->___mode_16;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		bool L_5 = ((Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_StaticFields*)il2cpp_codegen_static_fields_for(Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3_il2cpp_TypeInfo_var))->___goalMet_4;
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		// mode = GameMode.levelEnd;
		__this->___mode_16 = 2;
		// SwitchView("Show Both");
		MissionDemolition_SwitchView_mCEAD4552FC490F0481465557F17EA04FEC3AD8E2(__this, _stringLiteral11D878848DFE084C18A75E0C1B0C398D2661A835, NULL);
		// Invoke("NextLevel", 2f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral939776A9D3774DE8EFB26EC22EA7ACA701791E02, (2.0f), NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void MissionDemolition::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_NextLevel_mD7FA6CEEE59BE336B5BA8A0D42EF67857EF03A4E (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, const RuntimeMethod* method) 
{
	{
		// level++;
		int32_t L_0 = __this->___level_12;
		__this->___level_12 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(level == levelMax)
		int32_t L_1 = __this->___level_12;
		int32_t L_2 = __this->___levelMax_13;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		// level = 0;
		__this->___level_12 = 0;
	}

IL_0023:
	{
		// StartLevel();
		MissionDemolition_StartLevel_m4475C6A68408F0390ED3AD81C71BC1E27200B898(__this, NULL);
		// }
		return;
	}
}
// System.Void MissionDemolition::SwitchView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_SwitchView_mCEAD4552FC490F0481465557F17EA04FEC3AD8E2 (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, String_t* ___eView0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11D878848DFE084C18A75E0C1B0C398D2661A835);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70FE90938C64AFBCACD422E4CFAD88703F0E951B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC27A23212CD9B200FD67DD860BB8A9E67FA2C469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52DC4695BCD7E2091B036E8E0C6B2BBBD062E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if(eView == "")
		String_t* L_0 = ___eView0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// eView = uitButton.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___uitButton_9;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		___eView0 = L_3;
	}

IL_001a:
	{
		// showing = eView;
		String_t* L_4 = ___eView0;
		__this->___showing_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___showing_17), (void*)L_4);
		// switch(showing)
		String_t* L_5 = __this->___showing_17;
		V_0 = L_5;
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralC27A23212CD9B200FD67DD860BB8A9E67FA2C469, NULL);
		if (L_7)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral70FE90938C64AFBCACD422E4CFAD88703F0E951B, NULL);
		if (L_9)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral11D878848DFE084C18A75E0C1B0C398D2661A835, NULL);
		if (L_11)
		{
			goto IL_0087;
		}
	}
	{
		return;
	}

IL_0050:
	{
		// FollowCam.POI = null;
		((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// uitButton.text = "Show Castle";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___uitButton_9;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteral70FE90938C64AFBCACD422E4CFAD88703F0E951B);
		// break;
		return;
	}

IL_0067:
	{
		// FollowCam.POI = S.castle;
		il2cpp_codegen_runtime_class_init_inline(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* L_13 = ((MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_StaticFields*)il2cpp_codegen_static_fields_for(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var))->___S_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___castle_15;
		((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4), (void*)L_14);
		// uitButton.text = "Show Both";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___uitButton_9;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteral11D878848DFE084C18A75E0C1B0C398D2661A835);
		// break;
		return;
	}

IL_0087:
	{
		// FollowCam.POI = GameObject.Find("ViewBoth");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD52DC4695BCD7E2091B036E8E0C6B2BBBD062E0E, NULL);
		((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4), (void*)L_16);
		// uitButton.text = "Show Slingshot";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___uitButton_9;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteralC27A23212CD9B200FD67DD860BB8A9E67FA2C469);
		// }
		return;
	}
}
// System.Void MissionDemolition::ShotFired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition_ShotFired_m16F6B769990F71A5BD60269A2D138D0257AB49E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// S.shotsTaken++;
		il2cpp_codegen_runtime_class_init_inline(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* L_0 = ((MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_StaticFields*)il2cpp_codegen_static_fields_for(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var))->___S_4;
		MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* L_1 = L_0;
		int32_t L_2 = L_1->___shotsTaken_14;
		L_1->___shotsTaken_14 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// }
		return;
	}
}
// System.Void MissionDemolition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition__ctor_mB0BC7B289A2C622FD8CB6761FC1B23E47AFB4C6B (MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC27A23212CD9B200FD67DD860BB8A9E67FA2C469);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string showing = "Show Slingshot";
		__this->___showing_17 = _stringLiteralC27A23212CD9B200FD67DD860BB8A9E67FA2C469;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___showing_17), (void*)_stringLiteralC27A23212CD9B200FD67DD860BB8A9E67FA2C469);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void MissionDemolition::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionDemolition__cctor_m2943F29A9DF17625D80A570ED6BFAFFACA1D3BE0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public int score = 1;
		((MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_StaticFields*)il2cpp_codegen_static_fields_for(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var))->___score_5 = 1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProjectileLine::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileLine_Awake_mD0D4120BF77DA4ACFA3D4C12CCE66042D23D053D (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// S = this;
		((ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_StaticFields*)il2cpp_codegen_static_fields_for(ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_il2cpp_TypeInfo_var))->___S_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_StaticFields*)il2cpp_codegen_static_fields_for(ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_il2cpp_TypeInfo_var))->___S_4), (void*)__this);
		// line = GetComponent < LineRenderer >();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0;
		L_0 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___line_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_6), (void*)L_0);
		// line.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___line_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)0, NULL);
		// points = new List <Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___points_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_8), (void*)L_2);
		// }
		return;
	}
}
// UnityEngine.GameObject ProjectileLine::get_poi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ProjectileLine_get_poi_m4E61F7852C472165BE8A57BC18C397A4E20D0EF8 (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) 
{
	{
		// return (_poi);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____poi_7;
		return L_0;
	}
}
// System.Void ProjectileLine::set_poi(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileLine_set_poi_m82434EA03B0D3E19F24B21F37287E9AC768EB5F5 (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _poi = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->____poi_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poi_7), (void*)L_0);
		// if(_poi != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____poi_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// line.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___line_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// points = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_4, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___points_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_8), (void*)L_4);
		// AddPoint();
		ProjectileLine_AddPoint_m490CE719E8A3DC3CF4AEE912D36E1E8A9864F34C(__this, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void ProjectileLine::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileLine_Clear_m0D0CBDF6B3CCE49241FF69D81E40116213390FF8 (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _poi = null;
		__this->____poi_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poi_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// line.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___line_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// points = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___points_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void ProjectileLine::AddPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileLine_AddPoint_m490CE719E8A3DC3CF4AEE912D36E1E8A9864F34C (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 pt = _poi.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____poi_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// if (points.Count > 0 && (pt - lastPoint).magnitude < minDist)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___points_8;
		int32_t L_4;
		L_4 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_3, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = ProjectileLine_get_lastPoint_mF47EF44D7F602EABC7ABD3B8AA8659BE76225C0C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		V_1 = L_7;
		float L_8;
		L_8 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_9 = __this->___minDist_5;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// if (points.Count == 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = __this->___points_8;
		int32_t L_11;
		L_11 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_10, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_00bc;
		}
	}
	{
		// Vector3 launchPosDiff = pt - Slingshot.Launch_POS;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Slingshot_get_Launch_POS_m1B1F20BAF72F56668D8360194DC3FE751FF007F1(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
		V_2 = L_14;
		// points.Add(pt + launchPosDiff);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15 = __this->___points_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_17, NULL);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_15, L_18, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// points.Add(pt);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = __this->___points_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_19, L_20, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// line.positionCount = 2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_21 = __this->___line_6;
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_21, 2, NULL);
		// line.SetPosition(0, points[0]);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_22 = __this->___line_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_23 = __this->___points_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_23, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_22, 0, L_24, NULL);
		// line.SetPosition(1, points[1]);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_25 = __this->___line_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_26 = __this->___points_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_26, 1, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_25, 1, L_27, NULL);
		// line.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_28 = __this->___line_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_28, (bool)1, NULL);
		return;
	}

IL_00bc:
	{
		// points.Add(pt);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_29 = __this->___points_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_29, L_30, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// line.positionCount = points.Count;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_31 = __this->___line_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = __this->___points_8;
		int32_t L_33;
		L_33 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_32, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_31, L_33, NULL);
		// line.SetPosition(points.Count - 1, lastPoint);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_34 = __this->___line_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_35 = __this->___points_8;
		int32_t L_36;
		L_36 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_35, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = ProjectileLine_get_lastPoint_mF47EF44D7F602EABC7ABD3B8AA8659BE76225C0C(__this, NULL);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_34, ((int32_t)il2cpp_codegen_subtract(L_36, 1)), L_37, NULL);
		// line.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_38 = __this->___line_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_38, (bool)1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ProjectileLine::get_lastPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ProjectileLine_get_lastPoint_mF47EF44D7F602EABC7ABD3B8AA8659BE76225C0C (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(points == null)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___points_8;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return (Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_1;
	}

IL_000e:
	{
		// return (points[points.Count - 1]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = __this->___points_8;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___points_8;
		int32_t L_4;
		L_4 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_3, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void ProjectileLine::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileLine_FixedUpdate_m1BA5F471992C642CFF4CB6798E2EA0F91A8F468F (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(poi == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = ProjectileLine_get_poi_m4E61F7852C472165BE8A57BC18C397A4E20D0EF8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// if (FollowCam.POI != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// if (FollowCam.POI.tag == "Projectile")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4;
		String_t* L_5;
		L_5 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// poi = FollowCam.POI;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4;
		ProjectileLine_set_poi_m82434EA03B0D3E19F24B21F37287E9AC768EB5F5(__this, L_7, NULL);
		goto IL_0040;
	}

IL_003e:
	{
		// return;
		return;
	}

IL_003f:
	{
		// return;
		return;
	}

IL_0040:
	{
		// AddPoint();
		ProjectileLine_AddPoint_m490CE719E8A3DC3CF4AEE912D36E1E8A9864F34C(__this, NULL);
		// if (FollowCam.POI == null )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// poi = null;
		ProjectileLine_set_poi_m82434EA03B0D3E19F24B21F37287E9AC768EB5F5(__this, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void ProjectileLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileLine__ctor_m3BA36D555F597C476448631BCF1B9D3806A291C1 (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) 
{
	{
		// public float minDist = 0.1f;
		__this->___minDist_5 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RigidbodySleep::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodySleep_Start_m507962D858A7464044BD76A8839ACBA8637E513A (RigidbodySleep_tE86F0466A10244D596523F735C9FBF3B39BBC302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	{
		// Rigidbody rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_0 = L_0;
		// if (rb != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// rb.Sleep();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_0;
		Rigidbody_Sleep_m9826BDFCF078DF00223011B3F0FA7F4894F8F4CA(L_3, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void RigidbodySleep::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodySleep_Update_m8A810FA53D0B1F18E01CC3C20699C672907803E6 (RigidbodySleep_tE86F0466A10244D596523F735C9FBF3B39BBC302* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RigidbodySleep::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodySleep__ctor_m042AD50B542B348735933A90BB66136F961B453F (RigidbodySleep_tE86F0466A10244D596523F735C9FBF3B39BBC302* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Slingshot::get_Launch_POS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Slingshot_get_Launch_POS_m1B1F20BAF72F56668D8360194DC3FE751FF007F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (S == null)
		Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2* L_0 = ((Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2_StaticFields*)il2cpp_codegen_static_fields_for(Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2_il2cpp_TypeInfo_var))->___S_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_2;
	}

IL_0013:
	{
		// return S.launchPos;
		Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2* L_3 = ((Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2_StaticFields*)il2cpp_codegen_static_fields_for(Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2_il2cpp_TypeInfo_var))->___S_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___launchPos_8;
		return L_4;
	}
}
// System.Void Slingshot::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slingshot_Awake_m606F70EDDB0EC1B78CE285352F46F7E470526B08 (Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC132618923AE7403FF90257945E1F03A7468DBBB);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// Transform launchPointTrans = transform.Find("LaunchPoint");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralC132618923AE7403FF90257945E1F03A7468DBBB, NULL);
		V_0 = L_1;
		// launchPoint = launchPointTrans.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		__this->___launchPoint_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___launchPoint_7), (void*)L_3);
		// launchPoint.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___launchPoint_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// launchPos = launchPointTrans.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___launchPos_8 = L_6;
		// }
		return;
	}
}
// System.Void Slingshot::OnMouseEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slingshot_OnMouseEnter_mD0B53714D3EC4B84E06436090D02996F1D7D67CE (Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2* __this, const RuntimeMethod* method) 
{
	{
		// launchPoint.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___launchPoint_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Slingshot::OnMouseExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slingshot_OnMouseExit_m8CCC29C8BFEC6A328A04070E2A32CE6AB2D833CB (Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2* __this, const RuntimeMethod* method) 
{
	{
		// launchPoint.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___launchPoint_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Slingshot::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slingshot_OnMouseDown_m569FA197208605210E04529A206B755BAAE03D76 (Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aimingMode = true;
		__this->___aimingMode_10 = (bool)1;
		// projectile = Instantiate(prefabProjectile) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___prefabProjectile_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___projectile_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectile_9), (void*)L_1);
		// projectile.transform.position = launchPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___projectile_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___launchPos_8;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// projectileRigidbody = projectile.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___projectile_9;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_5, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___projectileRigidbody_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileRigidbody_11), (void*)L_6);
		// projectileRigidbody.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___projectileRigidbody_11;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Slingshot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slingshot_Update_m83154426CBA7E3DAF8D387753D2EAE6543D45BBF (Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!aimingMode) return;
		bool L_0 = __this->___aimingMode_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!aimingMode) return;
		return;
	}

IL_0009:
	{
		// Vector3 mousePos2D = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		V_0 = L_1;
		// mousePos2D.z = -Camera.main.transform.position.z;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___z_4;
		(&V_0)->___z_4 = ((-L_5));
		// Vector3 mousePos3D = Camera.main.ScreenToWorldPoint( mousePos2D );
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_6, L_7, NULL);
		// Vector3 mouseDelta = mousePos3D - launchPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___launchPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_9, NULL);
		V_1 = L_10;
		// float maxMagnitude = this.GetComponent<SphereCollider>().radius;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_11;
		L_11 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(__this, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		float L_12;
		L_12 = SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697(L_11, NULL);
		V_2 = L_12;
		// if(mouseDelta.magnitude > maxMagnitude)
		float L_13;
		L_13 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_14 = V_2;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		// mouseDelta.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_1), NULL);
		// mouseDelta *= maxMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		V_1 = L_17;
	}

IL_0067:
	{
		// Vector3 projPos = launchPos + mouseDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___launchPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_19, NULL);
		V_3 = L_20;
		// projectile.transform.position = projPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___projectile_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_23, NULL);
		// if( Input.GetMouseButtonUp(0))
		bool L_24;
		L_24 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_24)
		{
			goto IL_00e3;
		}
	}
	{
		// aimingMode = false;
		__this->___aimingMode_10 = (bool)0;
		// projectileRigidbody.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = __this->___projectileRigidbody_11;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_25, (bool)0, NULL);
		// projectileRigidbody.velocity = -mouseDelta * velocityMult;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26 = __this->___projectileRigidbody_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_27, NULL);
		float L_29 = __this->___velocityMult_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_26, L_30, NULL);
		// FollowCam.POI = projectile;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___projectile_9;
		((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_StaticFields*)il2cpp_codegen_static_fields_for(FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8_il2cpp_TypeInfo_var))->___POI_4), (void*)L_31);
		// projectile = null;
		__this->___projectile_9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectile_9), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// MissionDemolition.ShotFired();
		il2cpp_codegen_runtime_class_init_inline(MissionDemolition_t4DDE402E01CEA609F5048A48F57C21D8538D6270_il2cpp_TypeInfo_var);
		MissionDemolition_ShotFired_m16F6B769990F71A5BD60269A2D138D0257AB49E0(NULL);
		// ProjectileLine.S.poi = projectile;
		ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* L_32 = ((ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_StaticFields*)il2cpp_codegen_static_fields_for(ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F_il2cpp_TypeInfo_var))->___S_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___projectile_9;
		ProjectileLine_set_poi_m82434EA03B0D3E19F24B21F37287E9AC768EB5F5(L_32, L_33, NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void Slingshot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slingshot__ctor_mE42CB7334B28C7120046049935A116E9A10C871A (Slingshot_tC1BDC7755CCC43342242137EDA328838D4BFE8D2* __this, const RuntimeMethod* method) 
{
	{
		// public float velocityMult = 8f;
		__this->___velocityMult_6 = (8.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ProjectileLine_get_poi_m4E61F7852C472165BE8A57BC18C397A4E20D0EF8_inline (ProjectileLine_t25EFE17A34D28274CB57C290628D09279C32811F* __this, const RuntimeMethod* method) 
{
	{
		// return (_poi);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____poi_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
