#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907;
// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t7DA077DB7465C8ABF5247984812111A77E274C8E;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<BoardData>
struct List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_tDF263F0139B767C36303BF4B9882B6DE1B8DFC3B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<AlphabetData/LetterData>
struct List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C;
// System.Collections.Generic.List`1<BoardData/SearchingWord>
struct List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE;
// System.Collections.Generic.List`1<GameLevelData/CategoryRecord>
struct List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8;
// System.Collections.Generic.List`1<UnlockLevelPopup/CategoryNames>
struct List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<AlphabetData/LetterData>
struct Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// BoardData[]
struct BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// AlphabetData/LetterData[]
struct LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250;
// BoardData/BoardRow[]
struct BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26;
// BoardData/SearchingWord[]
struct SearchingWordU5BU5D_tDDAFF1EACE2535C89C486603ACD0A6204D43981D;
// GameLevelData/CategoryRecord[]
struct CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18;
// UnlockLevelPopup/CategoryNames[]
struct CategoryNamesU5BU5D_t27551A8D68E783DB5E94EAF4BD1759F6E8DD003D;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// AdManager
struct AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15;
// GoogleMobileAds.Api.AdSize
struct AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD;
// AlphabetData
struct AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// GoogleMobileAds.Api.BannerView
struct BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BoardData
struct BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// CountDownTimer
struct CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4;
// DataSaver
struct DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameData
struct GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD;
// GameDataSelector
struct GameDataSelector_t5314C87C9A948FFDE34158583BB480C49C3DB1C9;
// GameLevelData
struct GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOverPopup
struct GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069;
// GameUtility
struct GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645;
// GooglePlayServices
struct GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// GridSquare
struct GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_tFB92337DE37D75C119505F5D967889C7A50315D8;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t7E151A7ABAA8161290E3C4824894A84088764FDD;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t5631B6DE77F7F2A24265585280C9A465C08F6ADD;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_t978B57514EA0D6526F17C194E50B4ABD9F8CFFF2;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_t0D568BA692012153EE2C7B5010800596A19493BB;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// GoogleMobileAds.Api.MaxAdContentRating
struct MaxAdContentRating_t82A88C3879B13DFFB37476B307F29430197DF474;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// SearchingWord
struct SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B;
// SearchingWordsList
struct SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692;
// SelectPuzzleButton
struct SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SettingsScene
struct SettingsScene_t23D56BF3ED393FAF0689AD64FA2BD5CD79F8A6A3;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// SoundToggleButton
struct SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnlockLevelPopup
struct UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WinPopup
struct WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D;
// WordChecker
struct WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A;
// WordsGrid
struct WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4;
// AlphabetData/LetterData
struct LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD;
// BoardData/BoardRow
struct BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A;
// BoardData/SearchingWord
struct SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// GameEvents/BoardCompleted
struct BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04;
// GameEvents/CheckSquare
struct CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E;
// GameEvents/ClearSelection
struct ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1;
// GameEvents/CorrectWord
struct CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA;
// GameEvents/DisableSquareSelection
struct DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B;
// GameEvents/EnableSquareSelection
struct EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0;
// GameEvents/GameOver
struct GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C;
// GameEvents/LoadNextLevel
struct LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F;
// GameEvents/SelectSquare
struct SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6;
// GameEvents/ToggleSoundFX
struct ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4;
// GameEvents/UnlockNextCategory
struct UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646;
// GooglePlayServices/<>c
struct U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// GoogleMobileAds.Api.RequestConfiguration/Builder
struct Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8;
// WordsGrid/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t73B690804B71062EA366B9EF731317DA6FE13907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral3429C50A065A74ECA458BAE05C3AAC016A8FA1F3;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAF071301A4ED5B45F92F4979809DC539D770FF;
IL2CPP_EXTERN_C String_t* _stringLiteral653188F5BE69DB9F5C0D0F13E66DC8C247522F21;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteralBC59829911F327DA2B3393AD531BBF3FC56E8603;
IL2CPP_EXTERN_C String_t* _stringLiteralD90904A575B1632648E931630AF991DA57442807;
IL2CPP_EXTERN_C String_t* _stringLiteralDC52104465CC9221367F782EE67364EC0BDD09C2;
IL2CPP_EXTERN_C String_t* _stringLiteralDF193656D406136A8D7A98AFCCCC31D132A06AF3;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BE21AD03087F27EAB6A7566CD10058CEA003D9;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D1EE53357ADC7CE195E78CA7E5E31DBBC84088;
IL2CPP_EXTERN_C String_t* _stringLiteralF3A909C5355C2553F74070AAFD625A8AE02B7728;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mBC28828857B91348D396A191917ECF8446058ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdManager_InterstitialAdClosed_mCAEA861A4E8B8A1D4616F5E8A71C769334B458F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdManager_U3CStartU3Eb__10_0_m91BC0412668904CC8CB7A0A915D3EA37C36B29E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CountDownTimer_StopTimer_m6FAE19768A44AE4D50E84721C343EAC6C1FBE082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m509C81FC739EDA33B536C6C6E869E738302F1705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF4E09BAE0705EE9E734A3D39C9B38CBD14169951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC6672A4B9339452F4F4BB86703FC48FE9AD02B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8777693E88D7995AC0781C83BD19133AD05055D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m720A2FCAF236DDC0C72E53E6E3278AE6AEB7FE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDBFBA1D8AFFF51E42D098125C2CF6F4FBE03FA7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameOverPopup_OnContinueWithAdsButtonClick_mD6857187090F3C461AE9E0EEC74553E5D19F7751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameOverPopup_OnExitOfCheckNetwordDialog_m194F4B49E657802F737A18CB77C786CBBFC41ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameOverPopup_ShowGameOverPopUp_m74C6F0BD9CC54C2778C0FF84CB57081EA36D6131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GooglePlayServices_ProcessAuthentication_m8307A308535B86B04796C250CFADF96AB6292D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GooglePlayServices_U3CUploadLeaderboardScoreU3Eb__5_0_mABB7A9C7DEA149944779A06E3E404748B1EF32A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_OnSelectSquare_m63B9CF021C87CFE7043342FB45A133F3EC08FC91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBF43258EEBC8E975DD1CA1E73A4924F8F3ACD7CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC36CA4B7C47F8384C8E3CCA1971FD5B58E485CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m003EF44B1BEAE54AAC81D99AF2C387D33C148740_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8B4A270BFCF223F52CFA9F106DAF3CA111A587B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE567CEFD9C8255DDE843542378C658E43823140A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SelectPuzzleButton_InterstitialAdClosed_m5B088185B6505B908D6997AD5CD636F4F550CBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SelectPuzzleButton_OnButtonClick_m4A1A28F45E16E9486185DC3D2A985C9E8771A0A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSendAchievementU3Eb__6_0_m81BB25DE7EA58ECB3544485E8E6C8634D18D088F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSendIncrementalAchievementU3Eb__7_0_mABE6288ED5304DAEA75EE4D587DF871418C9ECB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_m8C91629A27FEC2179458E7B9AF3B52A9D8D62FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_m5FCAB643569C321A9B1CE9ABD84269F85B3AF781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mD85932113A20A17881D3C49B89E75B19831DEC29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnlockLevelPopup_OnUnlockNextCategory_mD32DD70A012A520F4A43B0B74D6DB1F9478B61E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinPopup_InterstitialAdCompleted_m51D22AD7EFB11DAD19F301665C71247E77F37E90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinPopup_ShowWinPopUp_m1A9D678A15D14542874984C6DC9C4A0DF7CC31B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26;
struct CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<BoardData>
struct List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32, ____items_1)); }
	inline BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* get__items_1() const { return ____items_1; }
	inline BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32_StaticFields, ____emptyArray_5)); }
	inline BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoardDataU5BU5D_tE5FCF0BFCF1024A716F82F2838627106384329DF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<AlphabetData/LetterData>
struct List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C, ____items_1)); }
	inline LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* get__items_1() const { return ____items_1; }
	inline LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_StaticFields, ____emptyArray_5)); }
	inline LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LetterDataU5BU5D_t555FF61B448ED486ED372AE5AA00C01CF99B3250* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<BoardData/SearchingWord>
struct List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SearchingWordU5BU5D_tDDAFF1EACE2535C89C486603ACD0A6204D43981D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE, ____items_1)); }
	inline SearchingWordU5BU5D_tDDAFF1EACE2535C89C486603ACD0A6204D43981D* get__items_1() const { return ____items_1; }
	inline SearchingWordU5BU5D_tDDAFF1EACE2535C89C486603ACD0A6204D43981D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SearchingWordU5BU5D_tDDAFF1EACE2535C89C486603ACD0A6204D43981D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SearchingWordU5BU5D_tDDAFF1EACE2535C89C486603ACD0A6204D43981D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE_StaticFields, ____emptyArray_5)); }
	inline SearchingWordU5BU5D_tDDAFF1EACE2535C89C486603ACD0A6204D43981D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SearchingWordU5BU5D_tDDAFF1EACE2535C89C486603ACD0A6204D43981D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SearchingWordU5BU5D_tDDAFF1EACE2535C89C486603ACD0A6204D43981D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<GameLevelData/CategoryRecord>
struct List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8, ____items_1)); }
	inline CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* get__items_1() const { return ____items_1; }
	inline CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8_StaticFields, ____emptyArray_5)); }
	inline CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnlockLevelPopup/CategoryNames>
struct List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CategoryNamesU5BU5D_t27551A8D68E783DB5E94EAF4BD1759F6E8DD003D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6, ____items_1)); }
	inline CategoryNamesU5BU5D_t27551A8D68E783DB5E94EAF4BD1759F6E8DD003D* get__items_1() const { return ____items_1; }
	inline CategoryNamesU5BU5D_t27551A8D68E783DB5E94EAF4BD1759F6E8DD003D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CategoryNamesU5BU5D_t27551A8D68E783DB5E94EAF4BD1759F6E8DD003D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CategoryNamesU5BU5D_t27551A8D68E783DB5E94EAF4BD1759F6E8DD003D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6_StaticFields, ____emptyArray_5)); }
	inline CategoryNamesU5BU5D_t27551A8D68E783DB5E94EAF4BD1759F6E8DD003D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CategoryNamesU5BU5D_t27551A8D68E783DB5E94EAF4BD1759F6E8DD003D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CategoryNamesU5BU5D_t27551A8D68E783DB5E94EAF4BD1759F6E8DD003D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_tDF263F0139B767C36303BF4B9882B6DE1B8DFC3B * ___U3CMediationExtrasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15, ___U3CMediationExtrasU3Ek__BackingField_3)); }
	inline List_1_tDF263F0139B767C36303BF4B9882B6DE1B8DFC3B * get_U3CMediationExtrasU3Ek__BackingField_3() const { return ___U3CMediationExtrasU3Ek__BackingField_3; }
	inline List_1_tDF263F0139B767C36303BF4B9882B6DE1B8DFC3B ** get_address_of_U3CMediationExtrasU3Ek__BackingField_3() { return &___U3CMediationExtrasU3Ek__BackingField_3; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_3(List_1_tDF263F0139B767C36303BF4B9882B6DE1B8DFC3B * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_3), (void*)value);
	}
};

struct AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GoogleMobileAds.Api.BannerView
struct BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_t7DA077DB7465C8ABF5247984812111A77E274C8E * ___OnPaidEvent_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnAdLoaded_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnAdOpening_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnAdClosed_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_5() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ___OnPaidEvent_5)); }
	inline EventHandler_1_t7DA077DB7465C8ABF5247984812111A77E274C8E * get_OnPaidEvent_5() const { return ___OnPaidEvent_5; }
	inline EventHandler_1_t7DA077DB7465C8ABF5247984812111A77E274C8E ** get_address_of_OnPaidEvent_5() { return &___OnPaidEvent_5; }
	inline void set_OnPaidEvent_5(EventHandler_1_t7DA077DB7465C8ABF5247984812111A77E274C8E * value)
	{
		___OnPaidEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_5), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// GPGSIds
struct GPGSIds_tE10CFDC26A18093DA76E02C1503D3AE38EEA425C  : public RuntimeObject
{
public:

public:
};


// GameEvents
struct GameEvents_t304F2D5249A807B067595CF817CA809E1051942C  : public RuntimeObject
{
public:

public:
};

struct GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields
{
public:
	// GameEvents/EnableSquareSelection GameEvents::OnEnableSquareSelection
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___OnEnableSquareSelection_0;
	// GameEvents/DisableSquareSelection GameEvents::OnDisableSquareSelection
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___OnDisableSquareSelection_1;
	// GameEvents/SelectSquare GameEvents::OnSelectSquare
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___OnSelectSquare_2;
	// GameEvents/CheckSquare GameEvents::OnCheckSquare
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___OnCheckSquare_3;
	// GameEvents/ClearSelection GameEvents::OnClearSelection
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___OnClearSelection_4;
	// GameEvents/CorrectWord GameEvents::OnCorrectWord
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___OnCorrectWord_5;
	// GameEvents/BoardCompleted GameEvents::OnBoardCompleted
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___OnBoardCompleted_6;
	// GameEvents/UnlockNextCategory GameEvents::OnUnlockNextCategory
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___OnUnlockNextCategory_7;
	// GameEvents/LoadNextLevel GameEvents::OnLoadNextLevel
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___OnLoadNextLevel_8;
	// GameEvents/GameOver GameEvents::OnGameOver
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___OnGameOver_9;
	// GameEvents/ToggleSoundFX GameEvents::OnToggleSoundFX
	ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * ___OnToggleSoundFX_10;

public:
	inline static int32_t get_offset_of_OnEnableSquareSelection_0() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnEnableSquareSelection_0)); }
	inline EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * get_OnEnableSquareSelection_0() const { return ___OnEnableSquareSelection_0; }
	inline EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 ** get_address_of_OnEnableSquareSelection_0() { return &___OnEnableSquareSelection_0; }
	inline void set_OnEnableSquareSelection_0(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * value)
	{
		___OnEnableSquareSelection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEnableSquareSelection_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisableSquareSelection_1() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnDisableSquareSelection_1)); }
	inline DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * get_OnDisableSquareSelection_1() const { return ___OnDisableSquareSelection_1; }
	inline DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B ** get_address_of_OnDisableSquareSelection_1() { return &___OnDisableSquareSelection_1; }
	inline void set_OnDisableSquareSelection_1(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * value)
	{
		___OnDisableSquareSelection_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisableSquareSelection_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnSelectSquare_2() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnSelectSquare_2)); }
	inline SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * get_OnSelectSquare_2() const { return ___OnSelectSquare_2; }
	inline SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 ** get_address_of_OnSelectSquare_2() { return &___OnSelectSquare_2; }
	inline void set_OnSelectSquare_2(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * value)
	{
		___OnSelectSquare_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSelectSquare_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnCheckSquare_3() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnCheckSquare_3)); }
	inline CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * get_OnCheckSquare_3() const { return ___OnCheckSquare_3; }
	inline CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E ** get_address_of_OnCheckSquare_3() { return &___OnCheckSquare_3; }
	inline void set_OnCheckSquare_3(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * value)
	{
		___OnCheckSquare_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCheckSquare_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnClearSelection_4() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnClearSelection_4)); }
	inline ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * get_OnClearSelection_4() const { return ___OnClearSelection_4; }
	inline ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 ** get_address_of_OnClearSelection_4() { return &___OnClearSelection_4; }
	inline void set_OnClearSelection_4(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * value)
	{
		___OnClearSelection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClearSelection_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnCorrectWord_5() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnCorrectWord_5)); }
	inline CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * get_OnCorrectWord_5() const { return ___OnCorrectWord_5; }
	inline CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA ** get_address_of_OnCorrectWord_5() { return &___OnCorrectWord_5; }
	inline void set_OnCorrectWord_5(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * value)
	{
		___OnCorrectWord_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCorrectWord_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnBoardCompleted_6() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnBoardCompleted_6)); }
	inline BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * get_OnBoardCompleted_6() const { return ___OnBoardCompleted_6; }
	inline BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 ** get_address_of_OnBoardCompleted_6() { return &___OnBoardCompleted_6; }
	inline void set_OnBoardCompleted_6(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * value)
	{
		___OnBoardCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBoardCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnUnlockNextCategory_7() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnUnlockNextCategory_7)); }
	inline UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * get_OnUnlockNextCategory_7() const { return ___OnUnlockNextCategory_7; }
	inline UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 ** get_address_of_OnUnlockNextCategory_7() { return &___OnUnlockNextCategory_7; }
	inline void set_OnUnlockNextCategory_7(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * value)
	{
		___OnUnlockNextCategory_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUnlockNextCategory_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnLoadNextLevel_8() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnLoadNextLevel_8)); }
	inline LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * get_OnLoadNextLevel_8() const { return ___OnLoadNextLevel_8; }
	inline LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F ** get_address_of_OnLoadNextLevel_8() { return &___OnLoadNextLevel_8; }
	inline void set_OnLoadNextLevel_8(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * value)
	{
		___OnLoadNextLevel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoadNextLevel_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameOver_9() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnGameOver_9)); }
	inline GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * get_OnGameOver_9() const { return ___OnGameOver_9; }
	inline GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C ** get_address_of_OnGameOver_9() { return &___OnGameOver_9; }
	inline void set_OnGameOver_9(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * value)
	{
		___OnGameOver_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGameOver_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnToggleSoundFX_10() { return static_cast<int32_t>(offsetof(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields, ___OnToggleSoundFX_10)); }
	inline ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * get_OnToggleSoundFX_10() const { return ___OnToggleSoundFX_10; }
	inline ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 ** get_address_of_OnToggleSoundFX_10() { return &___OnToggleSoundFX_10; }
	inline void set_OnToggleSoundFX_10(ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * value)
	{
		___OnToggleSoundFX_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnToggleSoundFX_10), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_t7DA077DB7465C8ABF5247984812111A77E274C8E * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdLoaded_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdOpening_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdClosed_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t3938F9DFF56C9E253184B3F3BDAB6FE7AAC83EC7 * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnPaidEvent_9)); }
	inline EventHandler_1_t7DA077DB7465C8ABF5247984812111A77E274C8E * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_t7DA077DB7465C8ABF5247984812111A77E274C8E ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_t7DA077DB7465C8ABF5247984812111A77E274C8E * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_tDF263F0139B767C36303BF4B9882B6DE1B8DFC3B * ___U3CMediationExtrasU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4, ___U3CKeywordsU3Ek__BackingField_0)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_0() const { return ___U3CKeywordsU3Ek__BackingField_0; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_0() { return &___U3CKeywordsU3Ek__BackingField_0; }
	inline void set_U3CKeywordsU3Ek__BackingField_0(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4, ___U3CExtrasU3Ek__BackingField_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_1() const { return ___U3CExtrasU3Ek__BackingField_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_1() { return &___U3CExtrasU3Ek__BackingField_1; }
	inline void set_U3CExtrasU3Ek__BackingField_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4, ___U3CMediationExtrasU3Ek__BackingField_2)); }
	inline List_1_tDF263F0139B767C36303BF4B9882B6DE1B8DFC3B * get_U3CMediationExtrasU3Ek__BackingField_2() const { return ___U3CMediationExtrasU3Ek__BackingField_2; }
	inline List_1_tDF263F0139B767C36303BF4B9882B6DE1B8DFC3B ** get_address_of_U3CMediationExtrasU3Ek__BackingField_2() { return &___U3CMediationExtrasU3Ek__BackingField_2; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_2(List_1_tDF263F0139B767C36303BF4B9882B6DE1B8DFC3B * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_2), (void*)value);
	}
};


// AlphabetData/LetterData
struct LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD  : public RuntimeObject
{
public:
	// System.String AlphabetData/LetterData::letter
	String_t* ___letter_0;
	// UnityEngine.Sprite AlphabetData/LetterData::image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image_1;

public:
	inline static int32_t get_offset_of_letter_0() { return static_cast<int32_t>(offsetof(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD, ___letter_0)); }
	inline String_t* get_letter_0() const { return ___letter_0; }
	inline String_t** get_address_of_letter_0() { return &___letter_0; }
	inline void set_letter_0(String_t* value)
	{
		___letter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___letter_0), (void*)value);
	}

	inline static int32_t get_offset_of_image_1() { return static_cast<int32_t>(offsetof(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD, ___image_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_image_1() const { return ___image_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_image_1() { return &___image_1; }
	inline void set_image_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_1), (void*)value);
	}
};


// BoardData/BoardRow
struct BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A  : public RuntimeObject
{
public:
	// System.Int32 BoardData/BoardRow::Size
	int32_t ___Size_0;
	// System.String[] BoardData/BoardRow::Row
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Row_1;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A, ___Size_0)); }
	inline int32_t get_Size_0() const { return ___Size_0; }
	inline int32_t* get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(int32_t value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_Row_1() { return static_cast<int32_t>(offsetof(BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A, ___Row_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Row_1() const { return ___Row_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Row_1() { return &___Row_1; }
	inline void set_Row_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Row_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Row_1), (void*)value);
	}
};


// BoardData/SearchingWord
struct SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30  : public RuntimeObject
{
public:
	// System.Boolean BoardData/SearchingWord::Found
	bool ___Found_0;
	// System.String BoardData/SearchingWord::Word
	String_t* ___Word_1;

public:
	inline static int32_t get_offset_of_Found_0() { return static_cast<int32_t>(offsetof(SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30, ___Found_0)); }
	inline bool get_Found_0() const { return ___Found_0; }
	inline bool* get_address_of_Found_0() { return &___Found_0; }
	inline void set_Found_0(bool value)
	{
		___Found_0 = value;
	}

	inline static int32_t get_offset_of_Word_1() { return static_cast<int32_t>(offsetof(SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30, ___Word_1)); }
	inline String_t* get_Word_1() const { return ___Word_1; }
	inline String_t** get_address_of_Word_1() { return &___Word_1; }
	inline void set_Word_1(String_t* value)
	{
		___Word_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Word_1), (void*)value);
	}
};


// GooglePlayServices/<>c
struct U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields
{
public:
	// GooglePlayServices/<>c GooglePlayServices/<>c::<>9
	U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * ___U3CU3E9_0;
	// System.Action`1<System.Boolean> GooglePlayServices/<>c::<>9__6_0
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___U3CU3E9__6_0_1;
	// System.Action`1<System.Boolean> GooglePlayServices/<>c::<>9__7_0
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___U3CU3E9__7_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields, ___U3CU3E9__7_0_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_U3CU3E9__7_0_2() const { return ___U3CU3E9__7_0_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_U3CU3E9__7_0_2() { return &___U3CU3E9__7_0_2; }
	inline void set_U3CU3E9__7_0_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___U3CU3E9__7_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_2), (void*)value);
	}
};


// WordsGrid/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65  : public RuntimeObject
{
public:
	// System.String WordsGrid/<>c__DisplayClass9_0::squareLetter
	String_t* ___squareLetter_0;

public:
	inline static int32_t get_offset_of_squareLetter_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65, ___squareLetter_0)); }
	inline String_t* get_squareLetter_0() const { return ___squareLetter_0; }
	inline String_t** get_address_of_squareLetter_0() { return &___squareLetter_0; }
	inline void set_squareLetter_0(String_t* value)
	{
		___squareLetter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___squareLetter_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<BoardData/SearchingWord>
struct Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2, ___list_0)); }
	inline List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * get_list_0() const { return ___list_0; }
	inline List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2, ___current_3)); }
	inline SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * get_current_3() const { return ___current_3; }
	inline SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// GameLevelData/CategoryRecord
struct CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F 
{
public:
	// System.String GameLevelData/CategoryRecord::catrgoryName
	String_t* ___catrgoryName_0;
	// System.Collections.Generic.List`1<BoardData> GameLevelData/CategoryRecord::boardData
	List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * ___boardData_1;

public:
	inline static int32_t get_offset_of_catrgoryName_0() { return static_cast<int32_t>(offsetof(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F, ___catrgoryName_0)); }
	inline String_t* get_catrgoryName_0() const { return ___catrgoryName_0; }
	inline String_t** get_address_of_catrgoryName_0() { return &___catrgoryName_0; }
	inline void set_catrgoryName_0(String_t* value)
	{
		___catrgoryName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___catrgoryName_0), (void*)value);
	}

	inline static int32_t get_offset_of_boardData_1() { return static_cast<int32_t>(offsetof(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F, ___boardData_1)); }
	inline List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * get_boardData_1() const { return ___boardData_1; }
	inline List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 ** get_address_of_boardData_1() { return &___boardData_1; }
	inline void set_boardData_1(List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * value)
	{
		___boardData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardData_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GameLevelData/CategoryRecord
struct CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_pinvoke
{
	char* ___catrgoryName_0;
	List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * ___boardData_1;
};
// Native definition for COM marshalling of GameLevelData/CategoryRecord
struct CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_com
{
	Il2CppChar* ___catrgoryName_0;
	List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * ___boardData_1;
};

// UnlockLevelPopup/CategoryNames
struct CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0 
{
public:
	// System.String UnlockLevelPopup/CategoryNames::name
	String_t* ___name_0;
	// UnityEngine.Sprite UnlockLevelPopup/CategoryNames::sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_1() { return static_cast<int32_t>(offsetof(CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0, ___sprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_sprite_1() const { return ___sprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_sprite_1() { return &___sprite_1; }
	inline void set_sprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___sprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnlockLevelPopup/CategoryNames
struct CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshaled_pinvoke
{
	char* ___name_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite_1;
};
// Native definition for COM marshalling of UnlockLevelPopup/CategoryNames
struct CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshaled_com
{
	Il2CppChar* ___name_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite_1;
};

// System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>
struct Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18, ___list_0)); }
	inline List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * get_list_0() const { return ___list_0; }
	inline List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18, ___current_3)); }
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  get_current_3() const { return ___current_3; }
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___catrgoryName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___boardData_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<UnlockLevelPopup/CategoryNames>
struct Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788, ___list_0)); }
	inline List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 * get_list_0() const { return ___list_0; }
	inline List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788, ___current_3)); }
	inline CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  get_current_3() const { return ___current_3; }
	inline CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___sprite_1), (void*)NULL);
		#endif
	}
};


// GoogleMobileAds.Api.AdPosition
struct AdPosition_tF745671B8A501F228A0AB189014DCA7E08C55664 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdPosition_tF745671B8A501F228A0AB189014DCA7E08C55664, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// GoogleMobileAds.Api.Orientation
struct Orientation_t85A0B25BE4D26E2D2E68FB33C1F54FFD92F5CA7B 
{
public:
	// System.Int32 GoogleMobileAds.Api.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_t85A0B25BE4D26E2D2E68FB33C1F54FFD92F5CA7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * ___mLocalUser_3;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	RuntimeObject* ___mClient_4;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___mIdMap_6;

public:
	inline static int32_t get_offset_of_mLocalUser_3() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E, ___mLocalUser_3)); }
	inline PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * get_mLocalUser_3() const { return ___mLocalUser_3; }
	inline PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E ** get_address_of_mLocalUser_3() { return &___mLocalUser_3; }
	inline void set_mLocalUser_3(PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * value)
	{
		___mLocalUser_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUser_3), (void*)value);
	}

	inline static int32_t get_offset_of_mClient_4() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E, ___mClient_4)); }
	inline RuntimeObject* get_mClient_4() const { return ___mClient_4; }
	inline RuntimeObject** get_address_of_mClient_4() { return &___mClient_4; }
	inline void set_mClient_4(RuntimeObject* value)
	{
		___mClient_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLbUi_5() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E, ___mDefaultLbUi_5)); }
	inline String_t* get_mDefaultLbUi_5() const { return ___mDefaultLbUi_5; }
	inline String_t** get_address_of_mDefaultLbUi_5() { return &___mDefaultLbUi_5; }
	inline void set_mDefaultLbUi_5(String_t* value)
	{
		___mDefaultLbUi_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLbUi_5), (void*)value);
	}

	inline static int32_t get_offset_of_mIdMap_6() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E, ___mIdMap_6)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_mIdMap_6() const { return ___mIdMap_6; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_mIdMap_6() { return &___mIdMap_6; }
	inline void set_mIdMap_6(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___mIdMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIdMap_6), (void*)value);
	}
};

struct PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_StaticFields
{
public:
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_1;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	RuntimeObject* ___sNearbyConnectionClient_2;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_StaticFields, ___sInstance_0)); }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * get_sInstance_0() const { return ___sInstance_0; }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of_sNearbyInitializePending_1() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_StaticFields, ___sNearbyInitializePending_1)); }
	inline bool get_sNearbyInitializePending_1() const { return ___sNearbyInitializePending_1; }
	inline bool* get_address_of_sNearbyInitializePending_1() { return &___sNearbyInitializePending_1; }
	inline void set_sNearbyInitializePending_1(bool value)
	{
		___sNearbyInitializePending_1 = value;
	}

	inline static int32_t get_offset_of_sNearbyConnectionClient_2() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_StaticFields, ___sNearbyConnectionClient_2)); }
	inline RuntimeObject* get_sNearbyConnectionClient_2() const { return ___sNearbyConnectionClient_2; }
	inline RuntimeObject** get_address_of_sNearbyConnectionClient_2() { return &___sNearbyConnectionClient_2; }
	inline void set_sNearbyConnectionClient_2(RuntimeObject* value)
	{
		___sNearbyConnectionClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sNearbyConnectionClient_2), (void*)value);
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// GooglePlayGames.BasicApi.SignInStatus
struct SignInStatus_t26D2B045A190EDD9B73B93CF9118CAD0275BE2D0 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SignInStatus_t26D2B045A190EDD9B73B93CF9118CAD0275BE2D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.TagForChildDirectedTreatment
struct TagForChildDirectedTreatment_t60FE0EC7FBC53C11200D1D49C5955CED624204F9 
{
public:
	// System.Int32 GoogleMobileAds.Api.TagForChildDirectedTreatment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TagForChildDirectedTreatment_t60FE0EC7FBC53C11200D1D49C5955CED624204F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.TagForUnderAgeOfConsent
struct TagForUnderAgeOfConsent_t85A72F3F51AF6B4A0523C981C367A9B6988B26A2 
{
public:
	// System.Int32 GoogleMobileAds.Api.TagForUnderAgeOfConsent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TagForUnderAgeOfConsent_t85A72F3F51AF6B4A0523C981C367A9B6988B26A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize/Type
struct Type_tE53199C2656BEE68C11A668E28F0A4F9E24E6A5C 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tE53199C2656BEE68C11A668E28F0A4F9E24E6A5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SoundToggleButton/ButtonType
struct ButtonType_t7ACDA72A7D488A984D051AF3A61E64EACD6DF949 
{
public:
	// System.Int32 SoundToggleButton/ButtonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonType_t7ACDA72A7D488A984D051AF3A61E64EACD6DF949, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>
struct Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>
struct Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// GoogleMobileAds.Api.AdSize
struct AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};

struct AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_StaticFields
{
public:
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;

public:
	inline static int32_t get_offset_of_Banner_4() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_StaticFields, ___Banner_4)); }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * get_Banner_4() const { return ___Banner_4; }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD ** get_address_of_Banner_4() { return &___Banner_4; }
	inline void set_Banner_4(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * value)
	{
		___Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_MediumRectangle_5() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_StaticFields, ___MediumRectangle_5)); }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * get_MediumRectangle_5() const { return ___MediumRectangle_5; }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD ** get_address_of_MediumRectangle_5() { return &___MediumRectangle_5; }
	inline void set_MediumRectangle_5(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * value)
	{
		___MediumRectangle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediumRectangle_5), (void*)value);
	}

	inline static int32_t get_offset_of_IABBanner_6() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_StaticFields, ___IABBanner_6)); }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * get_IABBanner_6() const { return ___IABBanner_6; }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD ** get_address_of_IABBanner_6() { return &___IABBanner_6; }
	inline void set_IABBanner_6(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * value)
	{
		___IABBanner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IABBanner_6), (void*)value);
	}

	inline static int32_t get_offset_of_Leaderboard_7() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_StaticFields, ___Leaderboard_7)); }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * get_Leaderboard_7() const { return ___Leaderboard_7; }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD ** get_address_of_Leaderboard_7() { return &___Leaderboard_7; }
	inline void set_Leaderboard_7(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * value)
	{
		___Leaderboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leaderboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_SmartBanner_8() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_StaticFields, ___SmartBanner_8)); }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * get_SmartBanner_8() const { return ___SmartBanner_8; }
	inline AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD ** get_address_of_SmartBanner_8() { return &___SmartBanner_8; }
	inline void set_SmartBanner_8(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * value)
	{
		___SmartBanner_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmartBanner_8), (void*)value);
	}

	inline static int32_t get_offset_of_FullWidth_9() { return static_cast<int32_t>(offsetof(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_StaticFields, ___FullWidth_9)); }
	inline int32_t get_FullWidth_9() const { return ___FullWidth_9; }
	inline int32_t* get_address_of_FullWidth_9() { return &___FullWidth_9; }
	inline void set_FullWidth_9(int32_t value)
	{
		___FullWidth_9 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<AlphabetData/LetterData>
struct Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// AlphabetData
struct AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphabetPlain
	List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * ___AlphabetPlain_4;
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphabetNormal
	List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * ___AlphabetNormal_5;
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphabetHighlighted
	List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * ___AlphabetHighlighted_6;
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphabetWrong
	List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * ___AlphabetWrong_7;

public:
	inline static int32_t get_offset_of_AlphabetPlain_4() { return static_cast<int32_t>(offsetof(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9, ___AlphabetPlain_4)); }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * get_AlphabetPlain_4() const { return ___AlphabetPlain_4; }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C ** get_address_of_AlphabetPlain_4() { return &___AlphabetPlain_4; }
	inline void set_AlphabetPlain_4(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * value)
	{
		___AlphabetPlain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphabetPlain_4), (void*)value);
	}

	inline static int32_t get_offset_of_AlphabetNormal_5() { return static_cast<int32_t>(offsetof(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9, ___AlphabetNormal_5)); }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * get_AlphabetNormal_5() const { return ___AlphabetNormal_5; }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C ** get_address_of_AlphabetNormal_5() { return &___AlphabetNormal_5; }
	inline void set_AlphabetNormal_5(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * value)
	{
		___AlphabetNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphabetNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_AlphabetHighlighted_6() { return static_cast<int32_t>(offsetof(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9, ___AlphabetHighlighted_6)); }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * get_AlphabetHighlighted_6() const { return ___AlphabetHighlighted_6; }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C ** get_address_of_AlphabetHighlighted_6() { return &___AlphabetHighlighted_6; }
	inline void set_AlphabetHighlighted_6(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * value)
	{
		___AlphabetHighlighted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphabetHighlighted_6), (void*)value);
	}

	inline static int32_t get_offset_of_AlphabetWrong_7() { return static_cast<int32_t>(offsetof(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9, ___AlphabetWrong_7)); }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * get_AlphabetWrong_7() const { return ___AlphabetWrong_7; }
	inline List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C ** get_address_of_AlphabetWrong_7() { return &___AlphabetWrong_7; }
	inline void set_AlphabetWrong_7(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * value)
	{
		___AlphabetWrong_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlphabetWrong_7), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// BoardData
struct BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Single BoardData::timeInSeconds
	float ___timeInSeconds_4;
	// System.Int32 BoardData::Columns
	int32_t ___Columns_5;
	// System.Int32 BoardData::Rows
	int32_t ___Rows_6;
	// BoardData/BoardRow[] BoardData::Board
	BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* ___Board_7;
	// System.Collections.Generic.List`1<BoardData/SearchingWord> BoardData::SearchWords
	List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * ___SearchWords_8;

public:
	inline static int32_t get_offset_of_timeInSeconds_4() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___timeInSeconds_4)); }
	inline float get_timeInSeconds_4() const { return ___timeInSeconds_4; }
	inline float* get_address_of_timeInSeconds_4() { return &___timeInSeconds_4; }
	inline void set_timeInSeconds_4(float value)
	{
		___timeInSeconds_4 = value;
	}

	inline static int32_t get_offset_of_Columns_5() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___Columns_5)); }
	inline int32_t get_Columns_5() const { return ___Columns_5; }
	inline int32_t* get_address_of_Columns_5() { return &___Columns_5; }
	inline void set_Columns_5(int32_t value)
	{
		___Columns_5 = value;
	}

	inline static int32_t get_offset_of_Rows_6() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___Rows_6)); }
	inline int32_t get_Rows_6() const { return ___Rows_6; }
	inline int32_t* get_address_of_Rows_6() { return &___Rows_6; }
	inline void set_Rows_6(int32_t value)
	{
		___Rows_6 = value;
	}

	inline static int32_t get_offset_of_Board_7() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___Board_7)); }
	inline BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* get_Board_7() const { return ___Board_7; }
	inline BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26** get_address_of_Board_7() { return &___Board_7; }
	inline void set_Board_7(BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* value)
	{
		___Board_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Board_7), (void*)value);
	}

	inline static int32_t get_offset_of_SearchWords_8() { return static_cast<int32_t>(offsetof(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC, ___SearchWords_8)); }
	inline List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * get_SearchWords_8() const { return ___SearchWords_8; }
	inline List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE ** get_address_of_SearchWords_8() { return &___SearchWords_8; }
	inline void set_SearchWords_8(List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * value)
	{
		___SearchWords_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SearchWords_8), (void*)value);
	}
};


// GameData
struct GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String GameData::selectedCategoryName
	String_t* ___selectedCategoryName_4;
	// BoardData GameData::selectedBoardData
	BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * ___selectedBoardData_5;

public:
	inline static int32_t get_offset_of_selectedCategoryName_4() { return static_cast<int32_t>(offsetof(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD, ___selectedCategoryName_4)); }
	inline String_t* get_selectedCategoryName_4() const { return ___selectedCategoryName_4; }
	inline String_t** get_address_of_selectedCategoryName_4() { return &___selectedCategoryName_4; }
	inline void set_selectedCategoryName_4(String_t* value)
	{
		___selectedCategoryName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedCategoryName_4), (void*)value);
	}

	inline static int32_t get_offset_of_selectedBoardData_5() { return static_cast<int32_t>(offsetof(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD, ___selectedBoardData_5)); }
	inline BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * get_selectedBoardData_5() const { return ___selectedBoardData_5; }
	inline BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC ** get_address_of_selectedBoardData_5() { return &___selectedBoardData_5; }
	inline void set_selectedBoardData_5(BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * value)
	{
		___selectedBoardData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedBoardData_5), (void*)value);
	}
};


// GameLevelData
struct GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<GameLevelData/CategoryRecord> GameLevelData::data
	List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B, ___data_4)); }
	inline List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * get_data_4() const { return ___data_4; }
	inline List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_t82A88C3879B13DFFB37476B307F29430197DF474 * ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F  ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration::<TestDeviceIds>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDeviceIdsU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration::<SameAppKeyEnabled>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CSameAppKeyEnabledU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75, ___U3CMaxAdContentRatingU3Ek__BackingField_0)); }
	inline MaxAdContentRating_t82A88C3879B13DFFB37476B307F29430197DF474 * get_U3CMaxAdContentRatingU3Ek__BackingField_0() const { return ___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline MaxAdContentRating_t82A88C3879B13DFFB37476B307F29430197DF474 ** get_address_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return &___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline void set_U3CMaxAdContentRatingU3Ek__BackingField_0(MaxAdContentRating_t82A88C3879B13DFFB37476B307F29430197DF474 * value)
	{
		___U3CMaxAdContentRatingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaxAdContentRatingU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1)); }
	inline Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1(Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75, ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2)); }
	inline Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F  get_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() const { return ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F * get_address_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return &___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline void set_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2(Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F  value)
	{
		___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75, ___U3CTestDeviceIdsU3Ek__BackingField_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDeviceIdsU3Ek__BackingField_3() const { return ___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return &___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline void set_U3CTestDeviceIdsU3Ek__BackingField_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDeviceIdsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDeviceIdsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSameAppKeyEnabledU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75, ___U3CSameAppKeyEnabledU3Ek__BackingField_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CSameAppKeyEnabledU3Ek__BackingField_4() const { return ___U3CSameAppKeyEnabledU3Ek__BackingField_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CSameAppKeyEnabledU3Ek__BackingField_4() { return &___U3CSameAppKeyEnabledU3Ek__BackingField_4; }
	inline void set_U3CSameAppKeyEnabledU3Ek__BackingField_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CSameAppKeyEnabledU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/BoardCompleted
struct BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/CheckSquare
struct CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/ClearSelection
struct ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/CorrectWord
struct CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/DisableSquareSelection
struct DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/EnableSquareSelection
struct EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/GameOver
struct GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/LoadNextLevel
struct LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/SelectSquare
struct SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/ToggleSoundFX
struct ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4  : public MulticastDelegate_t
{
public:

public:
};


// GameEvents/UnlockNextCategory
struct UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.Api.RequestConfiguration/Builder
struct Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration/Builder::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_t82A88C3879B13DFFB37476B307F29430197DF474 * ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration/Builder::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration/Builder::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F  ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration/Builder::<TestDeviceIds>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDeviceIdsU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration/Builder::<SameAppKeyEnabled>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CSameAppKeyEnabledU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8, ___U3CMaxAdContentRatingU3Ek__BackingField_0)); }
	inline MaxAdContentRating_t82A88C3879B13DFFB37476B307F29430197DF474 * get_U3CMaxAdContentRatingU3Ek__BackingField_0() const { return ___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline MaxAdContentRating_t82A88C3879B13DFFB37476B307F29430197DF474 ** get_address_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return &___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline void set_U3CMaxAdContentRatingU3Ek__BackingField_0(MaxAdContentRating_t82A88C3879B13DFFB37476B307F29430197DF474 * value)
	{
		___U3CMaxAdContentRatingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaxAdContentRatingU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1)); }
	inline Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1(Nullable_1_t6212EE10C8BC05388A171D53108E5395A473C2E2  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8, ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2)); }
	inline Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F  get_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() const { return ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F * get_address_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return &___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline void set_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2(Nullable_1_t7F28EBFC01C7E9FD496579393FF4DE56C92E3B2F  value)
	{
		___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8, ___U3CTestDeviceIdsU3Ek__BackingField_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDeviceIdsU3Ek__BackingField_3() const { return ___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return &___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline void set_U3CTestDeviceIdsU3Ek__BackingField_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDeviceIdsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDeviceIdsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSameAppKeyEnabledU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8, ___U3CSameAppKeyEnabledU3Ek__BackingField_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CSameAppKeyEnabledU3Ek__BackingField_4() const { return ___U3CSameAppKeyEnabledU3Ek__BackingField_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CSameAppKeyEnabledU3Ek__BackingField_4() { return &___U3CSameAppKeyEnabledU3Ek__BackingField_4; }
	inline void set_U3CSameAppKeyEnabledU3Ek__BackingField_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CSameAppKeyEnabledU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// AdManager
struct AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String AdManager::AppId
	String_t* ___AppId_4;
	// System.String AdManager::adBannerId
	String_t* ___adBannerId_5;
	// System.String AdManager::adInterstitialId
	String_t* ___adInterstitialId_6;
	// GoogleMobileAds.Api.AdPosition AdManager::bannerPosition
	int32_t ___bannerPosition_7;
	// System.Boolean AdManager::testDevice
	bool ___testDevice_8;
	// GoogleMobileAds.Api.BannerView AdManager::_bannerView
	BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * ____bannerView_9;
	// GoogleMobileAds.Api.InterstitialAd AdManager::_interstitial
	InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * ____interstitial_10;

public:
	inline static int32_t get_offset_of_AppId_4() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___AppId_4)); }
	inline String_t* get_AppId_4() const { return ___AppId_4; }
	inline String_t** get_address_of_AppId_4() { return &___AppId_4; }
	inline void set_AppId_4(String_t* value)
	{
		___AppId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_4), (void*)value);
	}

	inline static int32_t get_offset_of_adBannerId_5() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___adBannerId_5)); }
	inline String_t* get_adBannerId_5() const { return ___adBannerId_5; }
	inline String_t** get_address_of_adBannerId_5() { return &___adBannerId_5; }
	inline void set_adBannerId_5(String_t* value)
	{
		___adBannerId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adBannerId_5), (void*)value);
	}

	inline static int32_t get_offset_of_adInterstitialId_6() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___adInterstitialId_6)); }
	inline String_t* get_adInterstitialId_6() const { return ___adInterstitialId_6; }
	inline String_t** get_address_of_adInterstitialId_6() { return &___adInterstitialId_6; }
	inline void set_adInterstitialId_6(String_t* value)
	{
		___adInterstitialId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adInterstitialId_6), (void*)value);
	}

	inline static int32_t get_offset_of_bannerPosition_7() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___bannerPosition_7)); }
	inline int32_t get_bannerPosition_7() const { return ___bannerPosition_7; }
	inline int32_t* get_address_of_bannerPosition_7() { return &___bannerPosition_7; }
	inline void set_bannerPosition_7(int32_t value)
	{
		___bannerPosition_7 = value;
	}

	inline static int32_t get_offset_of_testDevice_8() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___testDevice_8)); }
	inline bool get_testDevice_8() const { return ___testDevice_8; }
	inline bool* get_address_of_testDevice_8() { return &___testDevice_8; }
	inline void set_testDevice_8(bool value)
	{
		___testDevice_8 = value;
	}

	inline static int32_t get_offset_of__bannerView_9() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ____bannerView_9)); }
	inline BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * get__bannerView_9() const { return ____bannerView_9; }
	inline BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 ** get_address_of__bannerView_9() { return &____bannerView_9; }
	inline void set__bannerView_9(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * value)
	{
		____bannerView_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bannerView_9), (void*)value);
	}

	inline static int32_t get_offset_of__interstitial_10() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ____interstitial_10)); }
	inline InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * get__interstitial_10() const { return ____interstitial_10; }
	inline InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 ** get_address_of__interstitial_10() { return &____interstitial_10; }
	inline void set__interstitial_10(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * value)
	{
		____interstitial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interstitial_10), (void*)value);
	}
};

struct AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields
{
public:
	// AdManager AdManager::instance
	AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * ___instance_11;
	// System.Action AdManager::OnInterstitialAdsClosed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnInterstitialAdsClosed_12;

public:
	inline static int32_t get_offset_of_instance_11() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields, ___instance_11)); }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * get_instance_11() const { return ___instance_11; }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 ** get_address_of_instance_11() { return &___instance_11; }
	inline void set_instance_11(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * value)
	{
		___instance_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnInterstitialAdsClosed_12() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields, ___OnInterstitialAdsClosed_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnInterstitialAdsClosed_12() const { return ___OnInterstitialAdsClosed_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnInterstitialAdsClosed_12() { return &___OnInterstitialAdsClosed_12; }
	inline void set_OnInterstitialAdsClosed_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnInterstitialAdsClosed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInterstitialAdsClosed_12), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// CountDownTimer
struct CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData CountDownTimer::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// UnityEngine.UI.Text CountDownTimer::timerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerText_5;
	// System.Single CountDownTimer::_timeLeft
	float ____timeLeft_6;
	// System.Single CountDownTimer::_minutes
	float ____minutes_7;
	// System.Single CountDownTimer::_seconds
	float ____seconds_8;
	// System.Single CountDownTimer::_oneSecondDown
	float ____oneSecondDown_9;
	// System.Boolean CountDownTimer::_timeOut
	bool ____timeOut_10;
	// System.Boolean CountDownTimer::_stopTimer
	bool ____stopTimer_11;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_timerText_5() { return static_cast<int32_t>(offsetof(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4, ___timerText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerText_5() const { return ___timerText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerText_5() { return &___timerText_5; }
	inline void set_timerText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerText_5), (void*)value);
	}

	inline static int32_t get_offset_of__timeLeft_6() { return static_cast<int32_t>(offsetof(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4, ____timeLeft_6)); }
	inline float get__timeLeft_6() const { return ____timeLeft_6; }
	inline float* get_address_of__timeLeft_6() { return &____timeLeft_6; }
	inline void set__timeLeft_6(float value)
	{
		____timeLeft_6 = value;
	}

	inline static int32_t get_offset_of__minutes_7() { return static_cast<int32_t>(offsetof(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4, ____minutes_7)); }
	inline float get__minutes_7() const { return ____minutes_7; }
	inline float* get_address_of__minutes_7() { return &____minutes_7; }
	inline void set__minutes_7(float value)
	{
		____minutes_7 = value;
	}

	inline static int32_t get_offset_of__seconds_8() { return static_cast<int32_t>(offsetof(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4, ____seconds_8)); }
	inline float get__seconds_8() const { return ____seconds_8; }
	inline float* get_address_of__seconds_8() { return &____seconds_8; }
	inline void set__seconds_8(float value)
	{
		____seconds_8 = value;
	}

	inline static int32_t get_offset_of__oneSecondDown_9() { return static_cast<int32_t>(offsetof(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4, ____oneSecondDown_9)); }
	inline float get__oneSecondDown_9() const { return ____oneSecondDown_9; }
	inline float* get_address_of__oneSecondDown_9() { return &____oneSecondDown_9; }
	inline void set__oneSecondDown_9(float value)
	{
		____oneSecondDown_9 = value;
	}

	inline static int32_t get_offset_of__timeOut_10() { return static_cast<int32_t>(offsetof(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4, ____timeOut_10)); }
	inline bool get__timeOut_10() const { return ____timeOut_10; }
	inline bool* get_address_of__timeOut_10() { return &____timeOut_10; }
	inline void set__timeOut_10(bool value)
	{
		____timeOut_10 = value;
	}

	inline static int32_t get_offset_of__stopTimer_11() { return static_cast<int32_t>(offsetof(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4, ____stopTimer_11)); }
	inline bool get__stopTimer_11() const { return ____stopTimer_11; }
	inline bool* get_address_of__stopTimer_11() { return &____stopTimer_11; }
	inline void set__stopTimer_11(bool value)
	{
		____stopTimer_11 = value;
	}
};

struct CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_StaticFields
{
public:
	// CountDownTimer CountDownTimer::instance
	CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * ___instance_12;

public:
	inline static int32_t get_offset_of_instance_12() { return static_cast<int32_t>(offsetof(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_StaticFields, ___instance_12)); }
	inline CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * get_instance_12() const { return ___instance_12; }
	inline CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 ** get_address_of_instance_12() { return &___instance_12; }
	inline void set_instance_12(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * value)
	{
		___instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_12), (void*)value);
	}
};


// DataSaver
struct DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_StaticFields
{
public:
	// System.String DataSaver::_highScoreKey
	String_t* ____highScoreKey_4;

public:
	inline static int32_t get_offset_of__highScoreKey_4() { return static_cast<int32_t>(offsetof(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_StaticFields, ____highScoreKey_4)); }
	inline String_t* get__highScoreKey_4() const { return ____highScoreKey_4; }
	inline String_t** get_address_of__highScoreKey_4() { return &____highScoreKey_4; }
	inline void set__highScoreKey_4(String_t* value)
	{
		____highScoreKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____highScoreKey_4), (void*)value);
	}
};


// GameDataSelector
struct GameDataSelector_t5314C87C9A948FFDE34158583BB480C49C3DB1C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData GameDataSelector::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// GameLevelData GameDataSelector::levelData
	GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___levelData_5;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(GameDataSelector_t5314C87C9A948FFDE34158583BB480C49C3DB1C9, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_levelData_5() { return static_cast<int32_t>(offsetof(GameDataSelector_t5314C87C9A948FFDE34158583BB480C49C3DB1C9, ___levelData_5)); }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * get_levelData_5() const { return ___levelData_5; }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B ** get_address_of_levelData_5() { return &___levelData_5; }
	inline void set_levelData_5(GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * value)
	{
		___levelData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelData_5), (void*)value);
	}
};


// GameOverPopup
struct GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameOverPopup::gameOverPopUp
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverPopUp_4;
	// UnityEngine.GameObject GameOverPopup::continueGameAfterAdsButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___continueGameAfterAdsButton_5;
	// UnityEngine.GameObject GameOverPopup::checkNetwork
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___checkNetwork_6;
	// UnityEngine.GameObject GameOverPopup::checkNetwordExit
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___checkNetwordExit_7;

public:
	inline static int32_t get_offset_of_gameOverPopUp_4() { return static_cast<int32_t>(offsetof(GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069, ___gameOverPopUp_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverPopUp_4() const { return ___gameOverPopUp_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverPopUp_4() { return &___gameOverPopUp_4; }
	inline void set_gameOverPopUp_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverPopUp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverPopUp_4), (void*)value);
	}

	inline static int32_t get_offset_of_continueGameAfterAdsButton_5() { return static_cast<int32_t>(offsetof(GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069, ___continueGameAfterAdsButton_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_continueGameAfterAdsButton_5() const { return ___continueGameAfterAdsButton_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_continueGameAfterAdsButton_5() { return &___continueGameAfterAdsButton_5; }
	inline void set_continueGameAfterAdsButton_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___continueGameAfterAdsButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continueGameAfterAdsButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_checkNetwork_6() { return static_cast<int32_t>(offsetof(GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069, ___checkNetwork_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_checkNetwork_6() const { return ___checkNetwork_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_checkNetwork_6() { return &___checkNetwork_6; }
	inline void set_checkNetwork_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___checkNetwork_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkNetwork_6), (void*)value);
	}

	inline static int32_t get_offset_of_checkNetwordExit_7() { return static_cast<int32_t>(offsetof(GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069, ___checkNetwordExit_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_checkNetwordExit_7() const { return ___checkNetwordExit_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_checkNetwordExit_7() { return &___checkNetwordExit_7; }
	inline void set_checkNetwordExit_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___checkNetwordExit_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkNetwordExit_7), (void*)value);
	}
};


// GameUtility
struct GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GooglePlayServices
struct GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GooglePlayServices::playConsoleLoginButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playConsoleLoginButton_4;
	// UnityEngine.GameObject GooglePlayServices::playConsoleLeaderboardButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playConsoleLeaderboardButton_5;

public:
	inline static int32_t get_offset_of_playConsoleLoginButton_4() { return static_cast<int32_t>(offsetof(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C, ___playConsoleLoginButton_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playConsoleLoginButton_4() const { return ___playConsoleLoginButton_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playConsoleLoginButton_4() { return &___playConsoleLoginButton_4; }
	inline void set_playConsoleLoginButton_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playConsoleLoginButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playConsoleLoginButton_4), (void*)value);
	}

	inline static int32_t get_offset_of_playConsoleLeaderboardButton_5() { return static_cast<int32_t>(offsetof(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C, ___playConsoleLeaderboardButton_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playConsoleLeaderboardButton_5() const { return ___playConsoleLeaderboardButton_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playConsoleLeaderboardButton_5() { return &___playConsoleLeaderboardButton_5; }
	inline void set_playConsoleLeaderboardButton_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playConsoleLeaderboardButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playConsoleLeaderboardButton_5), (void*)value);
	}
};

struct GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_StaticFields
{
public:
	// GooglePlayServices GooglePlayServices::instance
	GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_StaticFields, ___instance_6)); }
	inline GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * get_instance_6() const { return ___instance_6; }
	inline GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// GridSquare
struct GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GridSquare::<SquareIndex>k__BackingField
	int32_t ___U3CSquareIndexU3Ek__BackingField_4;
	// AlphabetData/LetterData GridSquare::_normalLetterData
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ____normalLetterData_5;
	// AlphabetData/LetterData GridSquare::_selectedLetterData
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ____selectedLetterData_6;
	// AlphabetData/LetterData GridSquare::_correctLetterData
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ____correctLetterData_7;
	// UnityEngine.SpriteRenderer GridSquare::_displayedImage
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ____displayedImage_8;
	// System.Boolean GridSquare::_selected
	bool ____selected_9;
	// System.Boolean GridSquare::_clicked
	bool ____clicked_10;
	// System.Int32 GridSquare::_index
	int32_t ____index_11;
	// System.Boolean GridSquare::_correct
	bool ____correct_12;
	// UnityEngine.AudioSource GridSquare::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_13;

public:
	inline static int32_t get_offset_of_U3CSquareIndexU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ___U3CSquareIndexU3Ek__BackingField_4)); }
	inline int32_t get_U3CSquareIndexU3Ek__BackingField_4() const { return ___U3CSquareIndexU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSquareIndexU3Ek__BackingField_4() { return &___U3CSquareIndexU3Ek__BackingField_4; }
	inline void set_U3CSquareIndexU3Ek__BackingField_4(int32_t value)
	{
		___U3CSquareIndexU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__normalLetterData_5() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____normalLetterData_5)); }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * get__normalLetterData_5() const { return ____normalLetterData_5; }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD ** get_address_of__normalLetterData_5() { return &____normalLetterData_5; }
	inline void set__normalLetterData_5(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * value)
	{
		____normalLetterData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____normalLetterData_5), (void*)value);
	}

	inline static int32_t get_offset_of__selectedLetterData_6() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____selectedLetterData_6)); }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * get__selectedLetterData_6() const { return ____selectedLetterData_6; }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD ** get_address_of__selectedLetterData_6() { return &____selectedLetterData_6; }
	inline void set__selectedLetterData_6(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * value)
	{
		____selectedLetterData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectedLetterData_6), (void*)value);
	}

	inline static int32_t get_offset_of__correctLetterData_7() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____correctLetterData_7)); }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * get__correctLetterData_7() const { return ____correctLetterData_7; }
	inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD ** get_address_of__correctLetterData_7() { return &____correctLetterData_7; }
	inline void set__correctLetterData_7(LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * value)
	{
		____correctLetterData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____correctLetterData_7), (void*)value);
	}

	inline static int32_t get_offset_of__displayedImage_8() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____displayedImage_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get__displayedImage_8() const { return ____displayedImage_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of__displayedImage_8() { return &____displayedImage_8; }
	inline void set__displayedImage_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		____displayedImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayedImage_8), (void*)value);
	}

	inline static int32_t get_offset_of__selected_9() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____selected_9)); }
	inline bool get__selected_9() const { return ____selected_9; }
	inline bool* get_address_of__selected_9() { return &____selected_9; }
	inline void set__selected_9(bool value)
	{
		____selected_9 = value;
	}

	inline static int32_t get_offset_of__clicked_10() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____clicked_10)); }
	inline bool get__clicked_10() const { return ____clicked_10; }
	inline bool* get_address_of__clicked_10() { return &____clicked_10; }
	inline void set__clicked_10(bool value)
	{
		____clicked_10 = value;
	}

	inline static int32_t get_offset_of__index_11() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____index_11)); }
	inline int32_t get__index_11() const { return ____index_11; }
	inline int32_t* get_address_of__index_11() { return &____index_11; }
	inline void set__index_11(int32_t value)
	{
		____index_11 = value;
	}

	inline static int32_t get_offset_of__correct_12() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____correct_12)); }
	inline bool get__correct_12() const { return ____correct_12; }
	inline bool* get_address_of__correct_12() { return &____correct_12; }
	inline void set__correct_12(bool value)
	{
		____correct_12 = value;
	}

	inline static int32_t get_offset_of__audioSource_13() { return static_cast<int32_t>(offsetof(GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B, ____audioSource_13)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_13() const { return ____audioSource_13; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_13() { return &____audioSource_13; }
	inline void set__audioSource_13(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_13), (void*)value);
	}
};


// SearchingWord
struct SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text SearchingWord::displayedText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___displayedText_4;
	// UnityEngine.UI.Image SearchingWord::crossLine
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___crossLine_5;
	// System.String SearchingWord::_word
	String_t* ____word_6;

public:
	inline static int32_t get_offset_of_displayedText_4() { return static_cast<int32_t>(offsetof(SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B, ___displayedText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_displayedText_4() const { return ___displayedText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_displayedText_4() { return &___displayedText_4; }
	inline void set_displayedText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___displayedText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayedText_4), (void*)value);
	}

	inline static int32_t get_offset_of_crossLine_5() { return static_cast<int32_t>(offsetof(SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B, ___crossLine_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_crossLine_5() const { return ___crossLine_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_crossLine_5() { return &___crossLine_5; }
	inline void set_crossLine_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___crossLine_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crossLine_5), (void*)value);
	}

	inline static int32_t get_offset_of__word_6() { return static_cast<int32_t>(offsetof(SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B, ____word_6)); }
	inline String_t* get__word_6() const { return ____word_6; }
	inline String_t** get_address_of__word_6() { return &____word_6; }
	inline void set__word_6(String_t* value)
	{
		____word_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____word_6), (void*)value);
	}
};


// SearchingWordsList
struct SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData SearchingWordsList::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// UnityEngine.GameObject SearchingWordsList::searchingWordPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___searchingWordPrefab_5;
	// System.Single SearchingWordsList::offset
	float ___offset_6;
	// System.Int32 SearchingWordsList::maxColumns
	int32_t ___maxColumns_7;
	// System.Int32 SearchingWordsList::maxRows
	int32_t ___maxRows_8;
	// System.Int32 SearchingWordsList::_columns
	int32_t ____columns_9;
	// System.Int32 SearchingWordsList::_rows
	int32_t ____rows_10;
	// System.Int32 SearchingWordsList::_wordsNumber
	int32_t ____wordsNumber_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SearchingWordsList::_words
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____words_12;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_searchingWordPrefab_5() { return static_cast<int32_t>(offsetof(SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692, ___searchingWordPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_searchingWordPrefab_5() const { return ___searchingWordPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_searchingWordPrefab_5() { return &___searchingWordPrefab_5; }
	inline void set_searchingWordPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___searchingWordPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___searchingWordPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692, ___offset_6)); }
	inline float get_offset_6() const { return ___offset_6; }
	inline float* get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(float value)
	{
		___offset_6 = value;
	}

	inline static int32_t get_offset_of_maxColumns_7() { return static_cast<int32_t>(offsetof(SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692, ___maxColumns_7)); }
	inline int32_t get_maxColumns_7() const { return ___maxColumns_7; }
	inline int32_t* get_address_of_maxColumns_7() { return &___maxColumns_7; }
	inline void set_maxColumns_7(int32_t value)
	{
		___maxColumns_7 = value;
	}

	inline static int32_t get_offset_of_maxRows_8() { return static_cast<int32_t>(offsetof(SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692, ___maxRows_8)); }
	inline int32_t get_maxRows_8() const { return ___maxRows_8; }
	inline int32_t* get_address_of_maxRows_8() { return &___maxRows_8; }
	inline void set_maxRows_8(int32_t value)
	{
		___maxRows_8 = value;
	}

	inline static int32_t get_offset_of__columns_9() { return static_cast<int32_t>(offsetof(SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692, ____columns_9)); }
	inline int32_t get__columns_9() const { return ____columns_9; }
	inline int32_t* get_address_of__columns_9() { return &____columns_9; }
	inline void set__columns_9(int32_t value)
	{
		____columns_9 = value;
	}

	inline static int32_t get_offset_of__rows_10() { return static_cast<int32_t>(offsetof(SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692, ____rows_10)); }
	inline int32_t get__rows_10() const { return ____rows_10; }
	inline int32_t* get_address_of__rows_10() { return &____rows_10; }
	inline void set__rows_10(int32_t value)
	{
		____rows_10 = value;
	}

	inline static int32_t get_offset_of__wordsNumber_11() { return static_cast<int32_t>(offsetof(SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692, ____wordsNumber_11)); }
	inline int32_t get__wordsNumber_11() const { return ____wordsNumber_11; }
	inline int32_t* get_address_of__wordsNumber_11() { return &____wordsNumber_11; }
	inline void set__wordsNumber_11(int32_t value)
	{
		____wordsNumber_11 = value;
	}

	inline static int32_t get_offset_of__words_12() { return static_cast<int32_t>(offsetof(SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692, ____words_12)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__words_12() const { return ____words_12; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__words_12() { return &____words_12; }
	inline void set__words_12(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____words_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____words_12), (void*)value);
	}
};


// SelectPuzzleButton
struct SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData SelectPuzzleButton::gameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___gameData_4;
	// GameLevelData SelectPuzzleButton::levelData
	GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___levelData_5;
	// UnityEngine.UI.Text SelectPuzzleButton::categoryText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___categoryText_6;
	// UnityEngine.UI.Image SelectPuzzleButton::progressBarFilling
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___progressBarFilling_7;
	// UnityEngine.UI.Image SelectPuzzleButton::lockImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___lockImage_8;
	// System.String SelectPuzzleButton::gameSceneName
	String_t* ___gameSceneName_9;
	// System.Boolean SelectPuzzleButton::_levelLocked
	bool ____levelLocked_10;

public:
	inline static int32_t get_offset_of_gameData_4() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___gameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_gameData_4() const { return ___gameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_gameData_4() { return &___gameData_4; }
	inline void set_gameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___gameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_levelData_5() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___levelData_5)); }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * get_levelData_5() const { return ___levelData_5; }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B ** get_address_of_levelData_5() { return &___levelData_5; }
	inline void set_levelData_5(GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * value)
	{
		___levelData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelData_5), (void*)value);
	}

	inline static int32_t get_offset_of_categoryText_6() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___categoryText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_categoryText_6() const { return ___categoryText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_categoryText_6() { return &___categoryText_6; }
	inline void set_categoryText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___categoryText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryText_6), (void*)value);
	}

	inline static int32_t get_offset_of_progressBarFilling_7() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___progressBarFilling_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_progressBarFilling_7() const { return ___progressBarFilling_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_progressBarFilling_7() { return &___progressBarFilling_7; }
	inline void set_progressBarFilling_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___progressBarFilling_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressBarFilling_7), (void*)value);
	}

	inline static int32_t get_offset_of_lockImage_8() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___lockImage_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_lockImage_8() const { return ___lockImage_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_lockImage_8() { return &___lockImage_8; }
	inline void set_lockImage_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___lockImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockImage_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameSceneName_9() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ___gameSceneName_9)); }
	inline String_t* get_gameSceneName_9() const { return ___gameSceneName_9; }
	inline String_t** get_address_of_gameSceneName_9() { return &___gameSceneName_9; }
	inline void set_gameSceneName_9(String_t* value)
	{
		___gameSceneName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameSceneName_9), (void*)value);
	}

	inline static int32_t get_offset_of__levelLocked_10() { return static_cast<int32_t>(offsetof(SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918, ____levelLocked_10)); }
	inline bool get__levelLocked_10() const { return ____levelLocked_10; }
	inline bool* get_address_of__levelLocked_10() { return &____levelLocked_10; }
	inline void set__levelLocked_10(bool value)
	{
		____levelLocked_10 = value;
	}
};


// SettingsScene
struct SettingsScene_t23D56BF3ED393FAF0689AD64FA2BD5CD79F8A6A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameLevelData SettingsScene::levelData
	GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___levelData_4;

public:
	inline static int32_t get_offset_of_levelData_4() { return static_cast<int32_t>(offsetof(SettingsScene_t23D56BF3ED393FAF0689AD64FA2BD5CD79F8A6A3, ___levelData_4)); }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * get_levelData_4() const { return ___levelData_4; }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B ** get_address_of_levelData_4() { return &___levelData_4; }
	inline void set_levelData_4(GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * value)
	{
		___levelData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelData_4), (void*)value);
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean SoundManager::_muteBackgroundMusic
	bool ____muteBackgroundMusic_4;
	// System.Boolean SoundManager::_muteSoundFx
	bool ____muteSoundFx_5;
	// UnityEngine.AudioSource SoundManager::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_7;

public:
	inline static int32_t get_offset_of__muteBackgroundMusic_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ____muteBackgroundMusic_4)); }
	inline bool get__muteBackgroundMusic_4() const { return ____muteBackgroundMusic_4; }
	inline bool* get_address_of__muteBackgroundMusic_4() { return &____muteBackgroundMusic_4; }
	inline void set__muteBackgroundMusic_4(bool value)
	{
		____muteBackgroundMusic_4 = value;
	}

	inline static int32_t get_offset_of__muteSoundFx_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ____muteSoundFx_5)); }
	inline bool get__muteSoundFx_5() const { return ____muteSoundFx_5; }
	inline bool* get_address_of__muteSoundFx_5() { return &____muteSoundFx_5; }
	inline void set__muteSoundFx_5(bool value)
	{
		____muteSoundFx_5 = value;
	}

	inline static int32_t get_offset_of__audioSource_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ____audioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_7() const { return ____audioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_7() { return &____audioSource_7; }
	inline void set__audioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_7), (void*)value);
	}
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::Instance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___Instance_6;

public:
	inline static int32_t get_offset_of_Instance_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___Instance_6)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_Instance_6() const { return ___Instance_6; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_Instance_6() { return &___Instance_6; }
	inline void set_Instance_6(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___Instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_6), (void*)value);
	}
};


// SoundToggleButton
struct SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SoundToggleButton/ButtonType SoundToggleButton::type
	int32_t ___type_4;
	// UnityEngine.Sprite SoundToggleButton::onSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___onSprite_5;
	// UnityEngine.Sprite SoundToggleButton::offSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___offSprite_6;
	// UnityEngine.GameObject SoundToggleButton::button
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___button_7;
	// UnityEngine.Vector3 SoundToggleButton::offButtonPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offButtonPosition_8;
	// UnityEngine.Vector3 SoundToggleButton::_onButtonPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____onButtonPosition_9;
	// UnityEngine.UI.Image SoundToggleButton::_image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____image_10;

public:
	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_onSprite_5() { return static_cast<int32_t>(offsetof(SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA, ___onSprite_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_onSprite_5() const { return ___onSprite_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_onSprite_5() { return &___onSprite_5; }
	inline void set_onSprite_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___onSprite_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSprite_5), (void*)value);
	}

	inline static int32_t get_offset_of_offSprite_6() { return static_cast<int32_t>(offsetof(SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA, ___offSprite_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_offSprite_6() const { return ___offSprite_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_offSprite_6() { return &___offSprite_6; }
	inline void set_offSprite_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___offSprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offSprite_6), (void*)value);
	}

	inline static int32_t get_offset_of_button_7() { return static_cast<int32_t>(offsetof(SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA, ___button_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_button_7() const { return ___button_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_button_7() { return &___button_7; }
	inline void set_button_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___button_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_7), (void*)value);
	}

	inline static int32_t get_offset_of_offButtonPosition_8() { return static_cast<int32_t>(offsetof(SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA, ___offButtonPosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offButtonPosition_8() const { return ___offButtonPosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offButtonPosition_8() { return &___offButtonPosition_8; }
	inline void set_offButtonPosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offButtonPosition_8 = value;
	}

	inline static int32_t get_offset_of__onButtonPosition_9() { return static_cast<int32_t>(offsetof(SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA, ____onButtonPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__onButtonPosition_9() const { return ____onButtonPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__onButtonPosition_9() { return &____onButtonPosition_9; }
	inline void set__onButtonPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____onButtonPosition_9 = value;
	}

	inline static int32_t get_offset_of__image_10() { return static_cast<int32_t>(offsetof(SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA, ____image_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__image_10() const { return ____image_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__image_10() { return &____image_10; }
	inline void set__image_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____image_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____image_10), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnlockLevelPopup
struct UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData UnlockLevelPopup::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// System.Collections.Generic.List`1<UnlockLevelPopup/CategoryNames> UnlockLevelPopup::categoryNames
	List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 * ___categoryNames_5;
	// UnityEngine.GameObject UnlockLevelPopup::winPopUp
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___winPopUp_6;
	// UnityEngine.UI.Image UnlockLevelPopup::categoryNameImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___categoryNameImage_7;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_categoryNames_5() { return static_cast<int32_t>(offsetof(UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299, ___categoryNames_5)); }
	inline List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 * get_categoryNames_5() const { return ___categoryNames_5; }
	inline List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 ** get_address_of_categoryNames_5() { return &___categoryNames_5; }
	inline void set_categoryNames_5(List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 * value)
	{
		___categoryNames_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryNames_5), (void*)value);
	}

	inline static int32_t get_offset_of_winPopUp_6() { return static_cast<int32_t>(offsetof(UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299, ___winPopUp_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_winPopUp_6() const { return ___winPopUp_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_winPopUp_6() { return &___winPopUp_6; }
	inline void set_winPopUp_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___winPopUp_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winPopUp_6), (void*)value);
	}

	inline static int32_t get_offset_of_categoryNameImage_7() { return static_cast<int32_t>(offsetof(UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299, ___categoryNameImage_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_categoryNameImage_7() const { return ___categoryNameImage_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_categoryNameImage_7() { return &___categoryNameImage_7; }
	inline void set_categoryNameImage_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___categoryNameImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryNameImage_7), (void*)value);
	}
};


// WinPopup
struct WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WinPopup::winPopup
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___winPopup_4;

public:
	inline static int32_t get_offset_of_winPopup_4() { return static_cast<int32_t>(offsetof(WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D, ___winPopup_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_winPopup_4() const { return ___winPopup_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_winPopup_4() { return &___winPopup_4; }
	inline void set_winPopup_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___winPopup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winPopup_4), (void*)value);
	}
};


// WordChecker
struct WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData WordChecker::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// GameLevelData WordChecker::gameLevelData
	GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___gameLevelData_5;
	// System.String WordChecker::_word
	String_t* ____word_6;
	// System.Int32 WordChecker::_assignedPoints
	int32_t ____assignedPoints_7;
	// System.Int32 WordChecker::_completedWords
	int32_t ____completedWords_8;
	// UnityEngine.Ray WordChecker::_rayUp
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayUp_9;
	// UnityEngine.Ray WordChecker::_rayDown
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDown_10;
	// UnityEngine.Ray WordChecker::_rayLeft
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayLeft_11;
	// UnityEngine.Ray WordChecker::_rayRight
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayRight_12;
	// UnityEngine.Ray WordChecker::_rayDiagonalLeftUp
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDiagonalLeftUp_13;
	// UnityEngine.Ray WordChecker::_rayDiagonalLeftDown
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDiagonalLeftDown_14;
	// UnityEngine.Ray WordChecker::_rayDiagonalRightUp
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDiagonalRightUp_15;
	// UnityEngine.Ray WordChecker::_rayDiagonalRightDown
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____rayDiagonalRightDown_16;
	// UnityEngine.Ray WordChecker::_currentRay
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ____currentRay_17;
	// UnityEngine.Vector3 WordChecker::_rayStartPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____rayStartPosition_18;
	// System.Collections.Generic.List`1<System.Int32> WordChecker::_correctSquareList
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ____correctSquareList_19;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameLevelData_5() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ___gameLevelData_5)); }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * get_gameLevelData_5() const { return ___gameLevelData_5; }
	inline GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B ** get_address_of_gameLevelData_5() { return &___gameLevelData_5; }
	inline void set_gameLevelData_5(GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * value)
	{
		___gameLevelData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameLevelData_5), (void*)value);
	}

	inline static int32_t get_offset_of__word_6() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____word_6)); }
	inline String_t* get__word_6() const { return ____word_6; }
	inline String_t** get_address_of__word_6() { return &____word_6; }
	inline void set__word_6(String_t* value)
	{
		____word_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____word_6), (void*)value);
	}

	inline static int32_t get_offset_of__assignedPoints_7() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____assignedPoints_7)); }
	inline int32_t get__assignedPoints_7() const { return ____assignedPoints_7; }
	inline int32_t* get_address_of__assignedPoints_7() { return &____assignedPoints_7; }
	inline void set__assignedPoints_7(int32_t value)
	{
		____assignedPoints_7 = value;
	}

	inline static int32_t get_offset_of__completedWords_8() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____completedWords_8)); }
	inline int32_t get__completedWords_8() const { return ____completedWords_8; }
	inline int32_t* get_address_of__completedWords_8() { return &____completedWords_8; }
	inline void set__completedWords_8(int32_t value)
	{
		____completedWords_8 = value;
	}

	inline static int32_t get_offset_of__rayUp_9() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayUp_9)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayUp_9() const { return ____rayUp_9; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayUp_9() { return &____rayUp_9; }
	inline void set__rayUp_9(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayUp_9 = value;
	}

	inline static int32_t get_offset_of__rayDown_10() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDown_10)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDown_10() const { return ____rayDown_10; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDown_10() { return &____rayDown_10; }
	inline void set__rayDown_10(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDown_10 = value;
	}

	inline static int32_t get_offset_of__rayLeft_11() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayLeft_11)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayLeft_11() const { return ____rayLeft_11; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayLeft_11() { return &____rayLeft_11; }
	inline void set__rayLeft_11(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayLeft_11 = value;
	}

	inline static int32_t get_offset_of__rayRight_12() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayRight_12)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayRight_12() const { return ____rayRight_12; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayRight_12() { return &____rayRight_12; }
	inline void set__rayRight_12(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayRight_12 = value;
	}

	inline static int32_t get_offset_of__rayDiagonalLeftUp_13() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDiagonalLeftUp_13)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDiagonalLeftUp_13() const { return ____rayDiagonalLeftUp_13; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDiagonalLeftUp_13() { return &____rayDiagonalLeftUp_13; }
	inline void set__rayDiagonalLeftUp_13(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDiagonalLeftUp_13 = value;
	}

	inline static int32_t get_offset_of__rayDiagonalLeftDown_14() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDiagonalLeftDown_14)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDiagonalLeftDown_14() const { return ____rayDiagonalLeftDown_14; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDiagonalLeftDown_14() { return &____rayDiagonalLeftDown_14; }
	inline void set__rayDiagonalLeftDown_14(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDiagonalLeftDown_14 = value;
	}

	inline static int32_t get_offset_of__rayDiagonalRightUp_15() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDiagonalRightUp_15)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDiagonalRightUp_15() const { return ____rayDiagonalRightUp_15; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDiagonalRightUp_15() { return &____rayDiagonalRightUp_15; }
	inline void set__rayDiagonalRightUp_15(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDiagonalRightUp_15 = value;
	}

	inline static int32_t get_offset_of__rayDiagonalRightDown_16() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayDiagonalRightDown_16)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__rayDiagonalRightDown_16() const { return ____rayDiagonalRightDown_16; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__rayDiagonalRightDown_16() { return &____rayDiagonalRightDown_16; }
	inline void set__rayDiagonalRightDown_16(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____rayDiagonalRightDown_16 = value;
	}

	inline static int32_t get_offset_of__currentRay_17() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____currentRay_17)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get__currentRay_17() const { return ____currentRay_17; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of__currentRay_17() { return &____currentRay_17; }
	inline void set__currentRay_17(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		____currentRay_17 = value;
	}

	inline static int32_t get_offset_of__rayStartPosition_18() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____rayStartPosition_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__rayStartPosition_18() const { return ____rayStartPosition_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__rayStartPosition_18() { return &____rayStartPosition_18; }
	inline void set__rayStartPosition_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____rayStartPosition_18 = value;
	}

	inline static int32_t get_offset_of__correctSquareList_19() { return static_cast<int32_t>(offsetof(WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A, ____correctSquareList_19)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get__correctSquareList_19() const { return ____correctSquareList_19; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of__correctSquareList_19() { return &____correctSquareList_19; }
	inline void set__correctSquareList_19(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		____correctSquareList_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____correctSquareList_19), (void*)value);
	}
};


// WordsGrid
struct WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameData WordsGrid::currentGameData
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * ___currentGameData_4;
	// UnityEngine.GameObject WordsGrid::gridSquarePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gridSquarePrefab_5;
	// AlphabetData WordsGrid::alphabetData
	AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * ___alphabetData_6;
	// System.Single WordsGrid::squareOffset
	float ___squareOffset_7;
	// System.Single WordsGrid::topPosition
	float ___topPosition_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WordsGrid::_squareList
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____squareList_9;

public:
	inline static int32_t get_offset_of_currentGameData_4() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___currentGameData_4)); }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * get_currentGameData_4() const { return ___currentGameData_4; }
	inline GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD ** get_address_of_currentGameData_4() { return &___currentGameData_4; }
	inline void set_currentGameData_4(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * value)
	{
		___currentGameData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameData_4), (void*)value);
	}

	inline static int32_t get_offset_of_gridSquarePrefab_5() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___gridSquarePrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gridSquarePrefab_5() const { return ___gridSquarePrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gridSquarePrefab_5() { return &___gridSquarePrefab_5; }
	inline void set_gridSquarePrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gridSquarePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridSquarePrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_alphabetData_6() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___alphabetData_6)); }
	inline AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * get_alphabetData_6() const { return ___alphabetData_6; }
	inline AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 ** get_address_of_alphabetData_6() { return &___alphabetData_6; }
	inline void set_alphabetData_6(AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * value)
	{
		___alphabetData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alphabetData_6), (void*)value);
	}

	inline static int32_t get_offset_of_squareOffset_7() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___squareOffset_7)); }
	inline float get_squareOffset_7() const { return ___squareOffset_7; }
	inline float* get_address_of_squareOffset_7() { return &___squareOffset_7; }
	inline void set_squareOffset_7(float value)
	{
		___squareOffset_7 = value;
	}

	inline static int32_t get_offset_of_topPosition_8() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ___topPosition_8)); }
	inline float get_topPosition_8() const { return ___topPosition_8; }
	inline float* get_address_of_topPosition_8() { return &___topPosition_8; }
	inline void set_topPosition_8(float value)
	{
		___topPosition_8 = value;
	}

	inline static int32_t get_offset_of__squareList_9() { return static_cast<int32_t>(offsetof(WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B, ____squareList_9)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__squareList_9() const { return ____squareList_9; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__squareList_9() { return &____squareList_9; }
	inline void set__squareList_9(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____squareList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____squareList_9), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// BoardData/BoardRow[]
struct BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * m_Items[1];

public:
	inline BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  m_Items[1];

public:
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GameLevelData/CategoryRecord[]
struct CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  m_Items[1];

public:
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___catrgoryName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___boardData_1), (void*)NULL);
		#endif
	}
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___catrgoryName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___boardData_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_gshared (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_gshared_inline (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_gshared (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_gshared (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_gshared_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnlockLevelPopup/CategoryNames>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788  List_1_GetEnumerator_mBF43258EEBC8E975DD1CA1E73A4924F8F3ACD7CC_gshared (List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnlockLevelPopup/CategoryNames>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  Enumerator_get_Current_mDBFBA1D8AFFF51E42D098125C2CF6F4FBE03FA7A_gshared_inline (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnlockLevelPopup/CategoryNames>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC6672A4B9339452F4F4BB86703FC48FE9AD02B19_gshared (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnlockLevelPopup/CategoryNames>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m509C81FC739EDA33B536C6C6E869E738302F1705_gshared (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_gshared_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mD8053ED40CDD88F0B0A868CDAC3AD758C3301AA8 (Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetSameAppKeyEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8 * Builder_SetSameAppKeyEnabled_m24CFD2EFB2B3A9EA4B2BB8CACB9EDD93E564F91B (Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8 * __this, bool ___enabled0, const RuntimeMethod* method);
// GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Api.RequestConfiguration/Builder::build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75 * Builder_build_m5F5B49456192DEA5C64C5E4759ADF430B3569778 (Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds::SetRequestConfiguration(GoogleMobileAds.Api.RequestConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetRequestConfiguration_m3E6507881BA434FD84EC7322BFD73E354456D787 (RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75 * ___requestConfiguration0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55 (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m162D01EF10764A82B218C4D6496F71CF4F50529B (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * ___initCompleteAction0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m8D6A71AED40167FC8AA4BE420AF5D469ABCBFB1D (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_mC29110DBA2B6FF77E263CD0BCA246C9C402CF129 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m1737DCAE8B76039318B4AAEB15B5905C351605E2 (Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * Builder_Build_m316049A0B1A17AC92FEEB93F9A867D3FD4C222D4 (Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m051B7CB234EBA2B60D6997B54805BB5FF154F4C8 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, String_t* ___adUnitId0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m182207732A27746253F35721C11998D83EC0D6AB (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * ___request0, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038_inline (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest AdManager::CreateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * AdManager_CreateRequest_m3D8F06249D9E1C330F643A0541B5037FEE8AAF05 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m6111A6CEA42D17DDF9C6E3A2D8E6FC9E7C46EA28 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_mA8E8BD79DA183B46AD94A6BCE84FE70F8D9B6AB1 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, String_t* ___adUnitId0, AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * ___adSize1, int32_t ___position2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m7F8CBB8C8B8D2CA333AB985E71F2F77610B16965 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * ___request0, const RuntimeMethod* method);
// System.Void AdManager::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_HideBanner_m2738463D0EE6942A694CD0CEAB39F4EA507B8E8C (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Hide_m8B118E0BDE80EC549D1566662C4E772ACCDB8288 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Show_m011AAB6C396C58E31CB6B63C2DE3D7465AED6E7F (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void AdManager::CreateBannerAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_CreateBannerAd_m23F6E8695A343C4AE95625149D157FA2952F5140 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * ___request0, const RuntimeMethod* method);
// System.Void AdManager::CreateInterstitialAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_CreateInterstitialAd_mF8427433BD3DBAF9B868781F7AB862D25AC1C82D (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * ___request0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<AlphabetData/LetterData>::.ctor()
inline void List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<BoardData/SearchingWord>::GetEnumerator()
inline Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2  List_1_GetEnumerator_mC36CA4B7C47F8384C8E3CCA1971FD5B58E485CE3 (List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2  (*) (List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<BoardData/SearchingWord>::get_Current()
inline SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * Enumerator_get_Current_m720A2FCAF236DDC0C72E53E6E3278AE6AEB7FE79_inline (Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 * __this, const RuntimeMethod* method)
{
	return ((  SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * (*) (Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<BoardData/SearchingWord>::MoveNext()
inline bool Enumerator_MoveNext_mE8777693E88D7995AC0781C83BD19133AD05055D (Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<BoardData/SearchingWord>::Dispose()
inline void Enumerator_Dispose_mF4E09BAE0705EE9E734A3D39C9B38CBD14169951 (Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void BoardData/BoardRow::ClearRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_ClearRow_m429BF67E86F9C2C7FF7A7BBE0622FA9639102C33 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, const RuntimeMethod* method);
// System.Void BoardData/BoardRow::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow__ctor_m629FFA2072A5F984D2D91BBC62A5EB0A56813B46 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BoardData/SearchingWord>::.ctor()
inline void List_1__ctor_m003EF44B1BEAE54AAC81D99AF2C387D33C148740 (List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GameEvents/BoardCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnBoardCompleted(GameEvents/BoardCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnBoardCompleted_mBB304835FCAEE9D8600027F963C65595ED292F3D (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/UnlockNextCategory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnUnlockNextCategory(GameEvents/UnlockNextCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnUnlockNextCategory_mEC56C6BADDBC5AFC07C39B680AAB9DD3335EB12E (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnBoardCompleted(GameEvents/BoardCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnBoardCompleted_m72571657CC1E5E5D5FE3A335DD3B3C4E2FE2D74D (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnUnlockNextCategory(GameEvents/UnlockNextCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnUnlockNextCategory_mD0C65AD6C8DC2F571925EA3F1B8192E87645B145 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void CountDownTimer::ActivateGameOverGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_ActivateGameOverGUI_mB04609891AD16C468A97BF854D7A264F1CC93416 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method);
// System.Void GameEvents::GameOverMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_GameOverMethod_mFBBE5773F5BB39F217D9A5804B101CE70281DAAC (const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::GetEnumerator()
inline Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  (*) (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 *, const RuntimeMethod*))List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::get_Current()
inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_inline (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method)
{
	return ((  CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  (*) (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *, const RuntimeMethod*))Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::MoveNext()
inline bool Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2 (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *, const RuntimeMethod*))Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GameLevelData/CategoryRecord>::Dispose()
inline void Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *, const RuntimeMethod*))Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::get_Item(System.Int32)
inline CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  (*) (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_gshared_inline)(__this, ___index0, method);
}
// System.Void GameDataSelector::SelectSequentialBoardData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataSelector_SelectSequentialBoardData_m2EE9B1F00DDCA3B80E80C63EC3D2DEFEFB058430 (GameDataSelector_t5314C87C9A948FFDE34158583BB480C49C3DB1C9 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 DataSaver::ReadCategoryCurrentIndexValues(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataSaver_ReadCategoryCurrentIndexValues_mCFCC7043C966B844D136A3249634B0F9019A75C2 (String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<BoardData>::get_Count()
inline int32_t List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline (List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<BoardData>::get_Item(System.Int32)
inline BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_inline (List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * (*) (List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void GameEvents/EnableSquareSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection_Invoke_m00ADB5385E45682BDB3C6B271A872362DE0B5DC4 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, const RuntimeMethod* method);
// System.Void GameEvents/DisableSquareSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection_Invoke_m5DB838C7440CAC22E333A00470B436DF45B21D70 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, const RuntimeMethod* method);
// System.Void GameEvents/SelectSquare::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare_Invoke_mFB2E3DEBE3C1FF69AB0116819FEB00C60BB87C3E (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void GameEvents/CheckSquare::Invoke(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare_Invoke_mBADE932727CB44226DB2EF53CBC9159E32C3215E (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method);
// System.Void GameEvents/ClearSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection_Invoke_m133962391B3622931FD495ED42329E9B81915367 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, const RuntimeMethod* method);
// System.Void GameEvents/CorrectWord::Invoke(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord_Invoke_mAF3BE4947C7ED32DB09FCB41CA753939B2BC688F (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method);
// System.Void GameEvents/BoardCompleted::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted_Invoke_m9E746DF3A04C6EDB09B5B2B4CCCF06A3301E5A93 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, const RuntimeMethod* method);
// System.Void GameEvents/UnlockNextCategory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory_Invoke_mC5C57E4F3D2E08AFE834359E47BBD9EC58F3C975 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, const RuntimeMethod* method);
// System.Void GameEvents/LoadNextLevel::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel_Invoke_mC2217880C5BFC7CE0065DED55395B06C9C57A6FA (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, const RuntimeMethod* method);
// System.Void GameEvents/GameOver::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Invoke_m731CC7B41BA4C2E99ACDD95BCD39211974524EE6 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, const RuntimeMethod* method);
// System.Void GameEvents/ToggleSoundFX::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSoundFX_Invoke_m486C42870CA154B4C52EBC2FD4B2706831541208 (ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameOverPopup::SetCheckNetworkDialogState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverPopup_SetCheckNetworkDialogState_m86FFF591533324B20A142777AAC2C47DA492E620 (GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069 * __this, bool ___state0, const RuntimeMethod* method);
// System.Void GameEvents/GameOver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m9020C2CE13E6DC24067E93BC8272301637E5093A (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnGameOver(GameEvents/GameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnGameOver_mCC492E73D08F87CA7B031F8C7B035EE0724A39F8 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___value0, const RuntimeMethod* method);
// System.Boolean AdManager::IsInterstitialAdLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdManager_IsInterstitialAdLoaded_mB76DDA6A568F3AB1077C67DA8EFB63AE9491FAC6 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method);
// System.Void AdManager::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_ShowInterstitialAd_m35910EAB17673DAFCFA396B79C121746C0B8E4A1 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method);
// System.Void CountDownTimer::UpdateCountDownTimeAfterAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_UpdateCountDownTimeAfterAds_m26E4F7D86999F33B9014A5FDB649AC1716A95207 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method);
// System.Void AdManager::CreateInterstitialRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_CreateInterstitialRequest_m55C482BC18398BC207114D99017FB84820A4D1F1 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnGameOver(GameEvents/GameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnGameOver_mEF82B76755C9902AEAA418C17242795E4D92825C (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void SoundManager::ToggleBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleBackgroundMusic_m30EA06C60B3114732EEFBC54E5C73527044F0966 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void SoundManager::ToggleSoundFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleSoundFX_mF7B3DA673E126E4F01A00E4F47BA71DB43CC1153 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::set_DebugLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_set_DebugLogEnabled_m2BFDD9004A757127E43D0C753E1CDF2271BDDADD (bool ___value0, const RuntimeMethod* method);
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * PlayGamesPlatform_Activate_m71AE35B28F18AC0D479F0E81263AAF91959A1A70 (const RuntimeMethod* method);
// System.Void UnityEngine.Social::ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ShowLeaderboardUI_mDD136D499783509D4BB9D9DE756FC68295160EAA (const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ReportScore_m9D47693DE21BDF21D8933E2B039A96D7E579EE13 (int64_t ___score0, String_t* ___board1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method);
// System.Void UnityEngine.Social::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ReportProgress_m67AE3F5F86D136BC2CF125204F66F0952F3CE743 (String_t* ___achievementID0, double ___progress1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method);
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * PlayGamesPlatform_get_Instance_mFD9A86E70DB559A9788DE546B2C9B4FE630BAB5E (const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_IncrementAchievement_m86B9727EF598772D00DB3967AE6FA2E08C6248D3 (PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * __this, String_t* ___achievementID0, int32_t ___steps1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.SignInStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mBC28828857B91348D396A191917ECF8446058ABD (Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_Authenticate_m817BE9F953FE24AD96EB31796CB016D3817FFF17 (PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * __this, Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D * ___callback0, const RuntimeMethod* method);
// System.Void GooglePlayServices::PlayGamesButtonToggle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_PlayGamesButtonToggle_m7642D9FC432A7BD0A580F67B0F85B54BBF9B4544 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, bool ___status0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::ManuallyAuthenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ManuallyAuthenticate_m0AB56174D9AC324F190A48A0FDDB0FB3188DDE4B (PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * __this, Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D * ___callback0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void GameEvents/EnableSquareSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection__ctor_mC18B5802A1A87E228DAC086DE064856911226ABD (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnEnableSquareSelection(GameEvents/EnableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnEnableSquareSelection_m0E6C578729FF0B3C488BA51BE98BA737651EA864 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/DisableSquareSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection__ctor_mFDD2839DE04959D8F9D9EA171228104EF920A399 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnDisableSquareSelection(GameEvents/DisableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnDisableSquareSelection_m14703B8952735238988E06B5C67B243AB4819628 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/SelectSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare__ctor_m82FDAE68434676ED2BBEE14CAA7152F19E925864 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnSelectSquare_mDDF923AC986685418F32AADD2425113376A74843 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/CorrectWord::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCorrectWord_mC3BC1B6119FAD79FE60555FCA43986ACDABD4559 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnEnableSquareSelection(GameEvents/EnableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnEnableSquareSelection_m39D9D1E64C14D7D98E0E0E9290DFD2E79A51581C (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnDisableSquareSelection(GameEvents/DisableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnDisableSquareSelection_m19C33F7966BE69CDA5B4D7DEC8BA15E9C0863D81 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnSelectSquare_mBD09E7C9EDA7C94C21A816DCFB9B55C0A5EB7262 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCorrectWord_m6FEDD292A833D4C09E442E1B128A337591E05DB1 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void GridSquare::OnEnableSquareSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method);
// System.Void GameEvents::EnableSquareSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_EnableSquareSelectionMethod_mD0DBA922E5C919E7E6049CCEFD9556040CCECA19 (const RuntimeMethod* method);
// System.Void GridSquare::CheckSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_CheckSquare_m00575FEF4EBCA31610D8BBAEA1A9B4C50615952E (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method);
// System.Void GameEvents::ClearSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_ClearSelectionMethod_mD9FCC0A1AEAFC2740D67CDEB2DA6764232B2B783 (const RuntimeMethod* method);
// System.Void GameEvents::DisableSquareSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_DisableSquareSelectionMethod_m95A35BDAC07AAD8A1733DFC61C2F8B138529E54B (const RuntimeMethod* method);
// System.Boolean SoundManager::IsSoundFXMuted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SoundManager_IsSoundFXMuted_mE2170C03EDDFC1E0E42E9AE4D5925AB69849E0DC_inline (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void GameEvents::CheckSquareMethod(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CheckSquareMethod_m18018E538BCED705BBD5E938BD830FE984D439D2 (String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<BoardData/SearchingWord>::get_Count()
inline int32_t List_1_get_Count_m8B4A270BFCF223F52CFA9F106DAF3CA111A587B1_inline (List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void SearchingWordsList::CalculateColumnsAndRowsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_CalculateColumnsAndRowsNumber_m63882F869B783B559456D5D172F45B9FCEF86E6E (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method);
// System.Void SearchingWordsList::CreateWordObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_CreateWordObject_mE22D356CBBF872B616F7006F6B20EB321E343693 (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method);
// System.Void SearchingWordsList::SetWordsPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_SetWordsPosition_mF76BFC8C9115FCC9F5AFD2310797E0CF07CAD47B (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 SearchingWordsList::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SearchingWordsList_GetSquareScale_m7171AD5E8F8F3304791D133C1280D204F52C5069 (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultScale0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SearchingWord>()
inline SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<BoardData/SearchingWord>::get_Item(System.Int32)
inline SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * List_1_get_Item_mE567CEFD9C8255DDE843542378C658E43823140A_inline (List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * (*) (List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void SearchingWord::SetWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_SetWord_m2492677D4725481B63D28CD1FEB836C160E9B8EC (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, String_t* ___word0, const RuntimeMethod* method);
// System.Boolean SearchingWordsList::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchingWordsList_ShouldScaleDown_m3109C0B8E0BB95B288F45520F18675BD0AADC929 (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetScale0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Boolean SearchingWordsList::TryIncreaseColumnNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchingWordsList_TryIncreaseColumnNumber_m27D3A4F4BF3BDFF138D4B7886A03E8A76193E03D (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 SearchingWordsList::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SearchingWordsList_GetFirstSquarePosition_m2972AE424F4CF33E9CA2B1816B8CFBD628E60602 (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void SelectPuzzleButton::UpdateButtonInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_UpdateButtonInformation_mA51403EB08BCAC28B35B43FEA345362CBC364DED (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void DataSaver::SaveCategoryData(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver_SaveCategoryData_m00EAA18ECD83406F881A3FF376F9BB569428334F (String_t* ___categoryName0, int32_t ___currentIndex1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Void DataSaver::ClearGameData(GameLevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver_ClearGameData_m683F3B272944D2963EC6EA9FF845FA9C22113D9B (GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___levelData0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void GameEvents::ToggleSoundFXMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_ToggleSoundFXMethod_m478AFAFD5BF56306CBA4FD723A203DCAB8C80B2D (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void SoundToggleButton::ToggleButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundToggleButton_ToggleButton_m103F0DE3F39AE2CA5F307F4EF4AB280BAB20A3CC (SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA * __this, const RuntimeMethod* method);
// System.Boolean SoundManager::IsBackgroundMuted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SoundManager_IsBackgroundMuted_m9BFCA18233622FACA030394F1B8741D2F84F95F0_inline (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnlockLevelPopup/CategoryNames>::GetEnumerator()
inline Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788  List_1_GetEnumerator_mBF43258EEBC8E975DD1CA1E73A4924F8F3ACD7CC (List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788  (*) (List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 *, const RuntimeMethod*))List_1_GetEnumerator_mBF43258EEBC8E975DD1CA1E73A4924F8F3ACD7CC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnlockLevelPopup/CategoryNames>::get_Current()
inline CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  Enumerator_get_Current_mDBFBA1D8AFFF51E42D098125C2CF6F4FBE03FA7A_inline (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 * __this, const RuntimeMethod* method)
{
	return ((  CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  (*) (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 *, const RuntimeMethod*))Enumerator_get_Current_mDBFBA1D8AFFF51E42D098125C2CF6F4FBE03FA7A_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnlockLevelPopup/CategoryNames>::MoveNext()
inline bool Enumerator_MoveNext_mC6672A4B9339452F4F4BB86703FC48FE9AD02B19 (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 *, const RuntimeMethod*))Enumerator_MoveNext_mC6672A4B9339452F4F4BB86703FC48FE9AD02B19_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnlockLevelPopup/CategoryNames>::Dispose()
inline void Enumerator_Dispose_m509C81FC739EDA33B536C6C6E869E738302F1705 (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 *, const RuntimeMethod*))Enumerator_Dispose_m509C81FC739EDA33B536C6C6E869E738302F1705_gshared)(__this, method);
}
// System.Void GooglePlayServices::SendAchievement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_SendAchievement_m69519933473A6A02D91A5D134E33C9F2ADB96564 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, String_t* ___Id0, const RuntimeMethod* method);
// System.Void GooglePlayServices::SendIncrementalAchievement(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_SendIncrementalAchievement_mFE1DBDD59E5F387E931558DDBD62E5E5FE9F8BD4 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, String_t* ___Id0, int32_t ___steps1, const RuntimeMethod* method);
// System.Boolean CountDownTimer::IsGameCompletedWithin20Sec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CountDownTimer_IsGameCompletedWithin20Sec_m7295689FB305A1DEAB6ED5298693F0EACD258A87 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method);
// System.Void DataSaver::SaveHighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver_SaveHighScore_m0C4E3B74AABD7F41DC33E48D78FCB866A2030445 (int32_t ___score0, const RuntimeMethod* method);
// System.Void GameEvents::LoadNextLevelMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_LoadNextLevelMethod_m9B46C06691FC3B8C509A27737F2A8763B6618E50 (const RuntimeMethod* method);
// System.Void GameEvents/CheckSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare__ctor_m0AD9F2DD2BDF7A6F00B74CA53253B31E38EFEFD6 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCheckSquare_mFE42CF8BA749903CDCADD0144FC865558CC5E4F2 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/ClearSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection__ctor_m0C3BCC9F283A6E5D2A9AF6A16E1FC6347243C642 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnClearSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnClearSelection_m2C132521B73B7842FBE13106362E0E7B2540DAAC (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents/LoadNextLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel__ctor_mB90AB8B524F7E62320707E203AB10DF3491AB942 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameEvents::add_OnLoadNextLevel(GameEvents/LoadNextLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnLoadNextLevel_m67866D0418E3A4A61186151CC2734709499A5BA3 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCheckSquare_mC01ACBA49A91C21C689BBBEFB247D1CF08C768FE (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnClearSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnClearSelection_mD969AA534E80455CB5CC9B4BEAF7AAABD5659D55 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___value0, const RuntimeMethod* method);
// System.Void GameEvents::remove_OnLoadNextLevel(GameEvents/LoadNextLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnLoadNextLevel_mDE99F77608B8E4AEB93C78FE6F72E7793A66C0E8 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___value0, const RuntimeMethod* method);
// System.Void BoardData::ClearData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData_ClearData_m17E0F46BDAA4B9F27266A98CC5765590AA99E3CB (BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * __this, const RuntimeMethod* method);
// System.Void AdManager::ShowBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_ShowBanner_m30FB49F725B895175C1A9C6EE3DDF1605205E953 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// UnityEngine.Ray WordChecker::SelectRay(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  WordChecker_SelectRay_m814922C85E4B96974FD11A7EBD3BEF25D03A4192 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPosition1, const RuntimeMethod* method);
// System.Void GameEvents::SelectSquareMethod(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SelectSquareMethod_m6194E84AA64EA8CCED304B13530507309DE9E791 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void WordChecker::CheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckWord_m86AAEA32635906AFE8324F2C97D07157CC3D1331 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method);
// System.Boolean WordChecker::IsPointOnTheRay(UnityEngine.Ray,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordChecker_IsPointOnTheRay_m294B03A62B399F58C36338BCCE509A24DBBD3B6F (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___currentRay0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Void GameEvents::CorrectWordMethod(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CorrectWordMethod_m149AD60307E9DB05A920B972EB4448F4A0D7A288 (String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Void WordChecker::CheckBoardCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckBoardCompleted_m4FB887B7436ED72B6BD29690A4BF3CC297AB7FD1 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* Physics_RaycastAll_m72947571EFB0EFB34E48340AA2EC0C8030D27C50 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float ___maxDistance1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GameLevelData/CategoryRecord>::get_Count()
inline int32_t List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 *, const RuntimeMethod*))List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_gshared_inline)(__this, method);
}
// System.Void GameEvents::BoardCompletedMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_BoardCompletedMethod_m8984786CBE2F154DF41B289FB2AAF81BB3FB7A23 (const RuntimeMethod* method);
// System.Void GameEvents::UnlockNextCategoryMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_UnlockNextCategoryMethod_mC94B42F6EB289FF0C47D4070C1D5A3C861558A44 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void WordsGrid::SpawnGridSquares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SpawnGridSquares_m14CB406391C047A5E66D3851CADB329DAFD09A16 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method);
// System.Void WordsGrid::SetSquaresPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SetSquaresPosition_mA9718DC9A064FDC13BA61F0277E940CBC9E1048E (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70 (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 WordsGrid::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  WordsGrid_GetFirstSquarePosition_m628811758312A966C2B9D68B774720040F8963FB (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 WordsGrid::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WordsGrid_GetSquareScale_m4BD86C2EC5305C75D7163800C4B3B92BA85264B7 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultScale0, const RuntimeMethod* method);
// System.Void WordsGrid/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA27D63B683ECE6771584FA96920BFE34A70FA4A6 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<AlphabetData/LetterData>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79 (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<AlphabetData/LetterData>::Find(System.Predicate`1<!0>)
inline LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411 (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * __this, Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * ___match0, const RuntimeMethod* method)
{
	return ((  LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * (*) (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *, Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *, const RuntimeMethod*))List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<GridSquare>()
inline GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GridSquare::SetSprite(AlphabetData/LetterData,AlphabetData/LetterData,AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SetSprite_mE3C9CA312F6C8FD1747C84004C512EC1A68BE374 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___normalLetterData0, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___selectedLetterData1, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___correctLetterData2, const RuntimeMethod* method);
// System.Void GridSquare::SetIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridSquare_SetIndex_mFD940CF0FEB41682E32794C5ACE9BCD3982D4F37_inline (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean WordsGrid::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordsGrid_ShouldScaleDown_m465ABBECD18A2D6E687A0B5970A4B02A2160A670 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetScale0, const RuntimeMethod* method);
// System.Single WordsGrid::GetHalfScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WordsGrid_GetHalfScreenWidth_m81AA00CAC5DA54BD118B5AF222330A743683BDD1 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void BoardData/BoardRow::CreateRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_CreateRow_m173C778FC23BCB489B84DEEBE478DDEC1A76A767 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void GooglePlayServices/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m44413408771FD5A9937D93B15761DC99807CB40A (U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AdManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_Awake_m70481558F6DCF89733E1FD9528F2DC9A4A594C88 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance == null)
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// instance = this;
		((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->set_instance_11(__this);
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// Destroy(instance);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_2 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_Start_m07F7C8DA24A1908D9E6AC811C2574154A31F68C4 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t73B690804B71062EA366B9EF731317DA6FE13907_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_InterstitialAdClosed_mCAEA861A4E8B8A1D4616F5E8A71C769334B458F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_U3CStartU3Eb__10_0_m91BC0412668904CC8CB7A0A915D3EA37C36B29E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestConfiguration requestConfiguration =
		//     new RequestConfiguration.Builder()
		//     .SetSameAppKeyEnabled(true).build();
		Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8 * L_0 = (Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8 *)il2cpp_codegen_object_new(Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8_il2cpp_TypeInfo_var);
		Builder__ctor_mD8053ED40CDD88F0B0A868CDAC3AD758C3301AA8(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		Builder_t69BE1152AF7612627079080EA64BFD80A40E59C8 * L_1;
		L_1 = Builder_SetSameAppKeyEnabled_m24CFD2EFB2B3A9EA4B2BB8CACB9EDD93E564F91B(L_0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_1);
		RequestConfiguration_tA10E2E1CDAAE4FBE192EF03AB16AA98B0F941F75 * L_2;
		L_2 = Builder_build_m5F5B49456192DEA5C64C5E4759ADF430B3569778(L_1, /*hidden argument*/NULL);
		// MobileAds.SetRequestConfiguration(requestConfiguration);
		MobileAds_SetRequestConfiguration_m3E6507881BA434FD84EC7322BFD73E354456D787(L_2, /*hidden argument*/NULL);
		// MobileAds.Initialize(initStatus => {
		//     this.CreateBannerAd(CreateRequest());
		//     this.CreateInterstitialAd(CreateRequest());
		// });
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_3 = (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 *)il2cpp_codegen_object_new(Action_1_t73B690804B71062EA366B9EF731317DA6FE13907_il2cpp_TypeInfo_var);
		Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55(L_3, __this, (intptr_t)((intptr_t)AdManager_U3CStartU3Eb__10_0_m91BC0412668904CC8CB7A0A915D3EA37C36B29E9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55_RuntimeMethod_var);
		MobileAds_Initialize_m162D01EF10764A82B218C4D6496F71CF4F50529B(L_3, /*hidden argument*/NULL);
		// this._interstitial.OnAdClosed += InterstitialAdClosed;
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_4 = __this->get__interstitial_10();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)AdManager_InterstitialAdClosed_mCAEA861A4E8B8A1D4616F5E8A71C769334B458F4_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterstitialAd_add_OnAdClosed_m8D6A71AED40167FC8AA4BE420AF5D469ABCBFB1D(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnDisable_m80A2723471FBDB9291C7FF40619F8718ECD645FA (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_InterstitialAdClosed_mCAEA861A4E8B8A1D4616F5E8A71C769334B458F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_interstitial != null)
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_0 = __this->get__interstitial_10();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// this._interstitial.OnAdClosed -= InterstitialAdClosed;
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_1 = __this->get__interstitial_10();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_2 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_2, __this, (intptr_t)((intptr_t)AdManager_InterstitialAdClosed_mCAEA861A4E8B8A1D4616F5E8A71C769334B458F4_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_1);
		InterstitialAd_remove_OnAdClosed_mC29110DBA2B6FF77E263CD0BCA246C9C402CF129(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void AdManager::InterstitialAdClosed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InterstitialAdClosed_mCAEA861A4E8B8A1D4616F5E8A71C769334B458F4 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnInterstitialAdsClosed != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_OnInterstitialAdsClosed_12();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnInterstitialAdsClosed();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_OnInterstitialAdsClosed_12();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// GoogleMobileAds.Api.AdRequest AdManager::CreateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * AdManager_CreateRequest_m3D8F06249D9E1C330F643A0541B5037FEE8AAF05 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// request = new AdRequest.Builder().Build();
		Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4 * L_0 = (Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4 *)il2cpp_codegen_object_new(Builder_t127215BE9C4DAAE30F9535E425A34BDDFFADF7F4_il2cpp_TypeInfo_var);
		Builder__ctor_m1737DCAE8B76039318B4AAEB15B5905C351605E2(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * L_1;
		L_1 = Builder_Build_m316049A0B1A17AC92FEEB93F9A867D3FD4C222D4(L_0, /*hidden argument*/NULL);
		// return request;
		return L_1;
	}
}
// System.Void AdManager::CreateInterstitialAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_CreateInterstitialAd_mF8427433BD3DBAF9B868781F7AB862D25AC1C82D (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._interstitial = new InterstitialAd(adInterstitialId);
		String_t* L_0 = __this->get_adInterstitialId_6();
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_1 = (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 *)il2cpp_codegen_object_new(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var);
		InterstitialAd__ctor_m051B7CB234EBA2B60D6997B54805BB5FF154F4C8(L_1, L_0, /*hidden argument*/NULL);
		__this->set__interstitial_10(L_1);
		// this._interstitial.LoadAd(request);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_2 = __this->get__interstitial_10();
		AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * L_3 = ___request0;
		NullCheck(L_2);
		InterstitialAd_LoadAd_m182207732A27746253F35721C11998D83EC0D6AB(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean AdManager::IsInterstitialAdLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdManager_IsInterstitialAdLoaded_mB76DDA6A568F3AB1077C67DA8EFB63AE9491FAC6 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	{
		// return this._interstitial.IsLoaded();
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_0 = __this->get__interstitial_10();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void AdManager::CreateInterstitialRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_CreateInterstitialRequest_m55C482BC18398BC207114D99017FB84820A4D1F1 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	{
		// this._interstitial.LoadAd(CreateRequest());
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_0 = __this->get__interstitial_10();
		AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * L_1;
		L_1 = AdManager_CreateRequest_m3D8F06249D9E1C330F643A0541B5037FEE8AAF05(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterstitialAd_LoadAd_m182207732A27746253F35721C11998D83EC0D6AB(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdManager::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_ShowInterstitialAd_m35910EAB17673DAFCFA396B79C121746C0B8E4A1 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	{
		// if(this._interstitial.IsLoaded())
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_0 = __this->get__interstitial_10();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// this._interstitial.Show();
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_2 = __this->get__interstitial_10();
		NullCheck(L_2);
		InterstitialAd_Show_m6111A6CEA42D17DDF9C6E3A2D8E6FC9E7C46EA28(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// this._interstitial.LoadAd(CreateRequest());
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_3 = __this->get__interstitial_10();
		AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * L_4;
		L_4 = AdManager_CreateRequest_m3D8F06249D9E1C330F643A0541B5037FEE8AAF05(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterstitialAd_LoadAd_m182207732A27746253F35721C11998D83EC0D6AB(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdManager::CreateBannerAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_CreateBannerAd_m23F6E8695A343C4AE95625149D157FA2952F5140 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._bannerView = new BannerView(adBannerId, AdSize.SmartBanner, bannerPosition);
		String_t* L_0 = __this->get_adBannerId_5();
		IL2CPP_RUNTIME_CLASS_INIT(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_il2cpp_TypeInfo_var);
		AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD * L_1 = ((AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t2E7AF38FC0CE4A00247B26A9DC3E71C2830376FD_il2cpp_TypeInfo_var))->get_SmartBanner_8();
		int32_t L_2 = __this->get_bannerPosition_7();
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_3 = (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 *)il2cpp_codegen_object_new(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737_il2cpp_TypeInfo_var);
		BannerView__ctor_mA8E8BD79DA183B46AD94A6BCE84FE70F8D9B6AB1(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set__bannerView_9(L_3);
		// this._bannerView.LoadAd(request);
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_4 = __this->get__bannerView_9();
		AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * L_5 = ___request0;
		NullCheck(L_4);
		BannerView_LoadAd_m7F8CBB8C8B8D2CA333AB985E71F2F77610B16965(L_4, L_5, /*hidden argument*/NULL);
		// HideBanner();
		AdManager_HideBanner_m2738463D0EE6942A694CD0CEAB39F4EA507B8E8C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdManager::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_HideBanner_m2738463D0EE6942A694CD0CEAB39F4EA507B8E8C (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	{
		// _bannerView.Hide();
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_0 = __this->get__bannerView_9();
		NullCheck(L_0);
		BannerView_Hide_m8B118E0BDE80EC549D1566662C4E772ACCDB8288(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdManager::ShowBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_ShowBanner_m30FB49F725B895175C1A9C6EE3DDF1605205E953 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	{
		// _bannerView.Show();
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_0 = __this->get__bannerView_9();
		NullCheck(L_0);
		BannerView_Show_m011AAB6C396C58E31CB6B63C2DE3D7465AED6E7F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager__ctor_mDEF91F5263438BACE36D66E7434579BEDEC9A3FC (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdManager::<Start>b__10_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_U3CStartU3Eb__10_0_m91BC0412668904CC8CB7A0A915D3EA37C36B29E9 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * ___initStatus0, const RuntimeMethod* method)
{
	{
		// this.CreateBannerAd(CreateRequest());
		AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * L_0;
		L_0 = AdManager_CreateRequest_m3D8F06249D9E1C330F643A0541B5037FEE8AAF05(__this, /*hidden argument*/NULL);
		AdManager_CreateBannerAd_m23F6E8695A343C4AE95625149D157FA2952F5140(__this, L_0, /*hidden argument*/NULL);
		// this.CreateInterstitialAd(CreateRequest());
		AdRequest_t4A9386A38081C933F4F90FA92FA9694A69A4BD15 * L_1;
		L_1 = AdManager_CreateRequest_m3D8F06249D9E1C330F643A0541B5037FEE8AAF05(__this, /*hidden argument*/NULL);
		AdManager_CreateInterstitialAd_mF8427433BD3DBAF9B868781F7AB862D25AC1C82D(__this, L_1, /*hidden argument*/NULL);
		// });
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
// System.Void AlphabetData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlphabetData__ctor_mE0E91E96E0D74FF386E4EE2B98318121DF80F879 (AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<LetterData> AlphabetPlain = new List<LetterData>();
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_0 = (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *)il2cpp_codegen_object_new(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A(L_0, /*hidden argument*/List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		__this->set_AlphabetPlain_4(L_0);
		// public List<LetterData> AlphabetNormal = new List<LetterData>();
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_1 = (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *)il2cpp_codegen_object_new(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A(L_1, /*hidden argument*/List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		__this->set_AlphabetNormal_5(L_1);
		// public List<LetterData> AlphabetHighlighted = new List<LetterData>();
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_2 = (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *)il2cpp_codegen_object_new(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A(L_2, /*hidden argument*/List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		__this->set_AlphabetHighlighted_6(L_2);
		// public List<LetterData> AlphabetWrong = new List<LetterData>();
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_3 = (List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C *)il2cpp_codegen_object_new(List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C_il2cpp_TypeInfo_var);
		List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A(L_3, /*hidden argument*/List_1__ctor_m075FD6621E4E4A8D60E22856D323C67E7DD2644A_RuntimeMethod_var);
		__this->set_AlphabetWrong_7(L_3);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void BoardData::ClearData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData_ClearData_m17E0F46BDAA4B9F27266A98CC5765590AA99E3CB (BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF4E09BAE0705EE9E734A3D39C9B38CBD14169951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8777693E88D7995AC0781C83BD19133AD05055D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m720A2FCAF236DDC0C72E53E6E3278AE6AEB7FE79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC36CA4B7C47F8384C8E3CCA1971FD5B58E485CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(var word in SearchWords)
		List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * L_0 = __this->get_SearchWords_8();
		NullCheck(L_0);
		Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2  L_1;
		L_1 = List_1_GetEnumerator_mC36CA4B7C47F8384C8E3CCA1971FD5B58E485CE3(L_0, /*hidden argument*/List_1_GetEnumerator_mC36CA4B7C47F8384C8E3CCA1971FD5B58E485CE3_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001b;
		}

IL_000e:
		{
			// foreach(var word in SearchWords)
			SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * L_2;
			L_2 = Enumerator_get_Current_m720A2FCAF236DDC0C72E53E6E3278AE6AEB7FE79_inline((Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m720A2FCAF236DDC0C72E53E6E3278AE6AEB7FE79_RuntimeMethod_var);
			// word.Found = false;
			NullCheck(L_2);
			L_2->set_Found_0((bool)0);
		}

IL_001b:
		{
			// foreach(var word in SearchWords)
			bool L_3;
			L_3 = Enumerator_MoveNext_mE8777693E88D7995AC0781C83BD19133AD05055D((Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mE8777693E88D7995AC0781C83BD19133AD05055D_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF4E09BAE0705EE9E734A3D39C9B38CBD14169951((Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mF4E09BAE0705EE9E734A3D39C9B38CBD14169951_RuntimeMethod_var);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void BoardData::ClearWithEmptyString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData_ClearWithEmptyString_m3FF1510C8BC3F05C20533F8946A521C883B0FBF0 (BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for(int i=0; i < Columns; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// Board[i].ClearRow();
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_0 = __this->get_Board_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		BoardRow_ClearRow_m429BF67E86F9C2C7FF7A7BBE0622FA9639102C33(L_3, /*hidden argument*/NULL);
		// for(int i=0; i < Columns; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0015:
	{
		// for(int i=0; i < Columns; i++)
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_Columns_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardData::CreateNewBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData_CreateNewBoard_m8490B75A6879A9933D0EEE642F5B1F6D72E21ECE (BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Board = new BoardRow[Columns];
		int32_t L_0 = __this->get_Columns_5();
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_1 = (BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26*)(BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26*)SZArrayNew(BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_Board_7(L_1);
		// for(int i=0; i < Columns; i++)
		V_0 = 0;
		goto IL_002c;
	}

IL_0015:
	{
		// Board[i] = new BoardRow(Rows);
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_2 = __this->get_Board_7();
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_Rows_6();
		BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * L_5 = (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A *)il2cpp_codegen_object_new(BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A_il2cpp_TypeInfo_var);
		BoardRow__ctor_m629FFA2072A5F984D2D91BBC62A5EB0A56813B46(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A *)L_5);
		// for(int i=0; i < Columns; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002c:
	{
		// for(int i=0; i < Columns; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_Columns_5();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData__ctor_mCD73F4EBC62B7CC9948F7F0ADB5E1BC0B1955B00 (BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m003EF44B1BEAE54AAC81D99AF2C387D33C148740_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<SearchingWord> SearchWords = new List<SearchingWord>();
		List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * L_0 = (List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE *)il2cpp_codegen_object_new(List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE_il2cpp_TypeInfo_var);
		List_1__ctor_m003EF44B1BEAE54AAC81D99AF2C387D33C148740(L_0, /*hidden argument*/List_1__ctor_m003EF44B1BEAE54AAC81D99AF2C387D33C148740_RuntimeMethod_var);
		__this->set_SearchWords_8(L_0);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void CountDownTimer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_Awake_m67A1241F870DF44C05F30B05E67BE5C1C46E0BE5 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * L_0 = ((CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_StaticFields*)il2cpp_codegen_static_fields_for(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_il2cpp_TypeInfo_var))->get_instance_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// instance = this;
		((CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_StaticFields*)il2cpp_codegen_static_fields_for(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_il2cpp_TypeInfo_var))->set_instance_12(__this);
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// Destroy(instance);
		CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * L_2 = ((CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_StaticFields*)il2cpp_codegen_static_fields_for(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_il2cpp_TypeInfo_var))->get_instance_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean CountDownTimer::IsGameCompletedWithin20Sec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CountDownTimer_IsGameCompletedWithin20Sec_m7295689FB305A1DEAB6ED5298693F0EACD258A87 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsGameCompletedWithin20Sec() { return _timeLeft>=(currentGameData.selectedBoardData.timeInSeconds-20); }
		float L_0 = __this->get__timeLeft_6();
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_1 = __this->get_currentGameData_4();
		NullCheck(L_1);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_2 = L_1->get_selectedBoardData_5();
		NullCheck(L_2);
		float L_3 = L_2->get_timeInSeconds_4();
		return (bool)((((int32_t)((!(((float)L_0) >= ((float)((float)il2cpp_codegen_subtract((float)L_3, (float)(20.0f))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void CountDownTimer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_Start_m5DDF9D2C55FB65FB87B15212698D2A09D95D52A6 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountDownTimer_StopTimer_m6FAE19768A44AE4D50E84721C343EAC6C1FBE082_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _stopTimer = false;
		__this->set__stopTimer_11((bool)0);
		// _timeOut = false;
		__this->set__timeOut_10((bool)0);
		// _timeLeft = currentGameData.selectedBoardData.timeInSeconds;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		NullCheck(L_0);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_1 = L_0->get_selectedBoardData_5();
		NullCheck(L_1);
		float L_2 = L_1->get_timeInSeconds_4();
		__this->set__timeLeft_6(L_2);
		// _oneSecondDown = _timeLeft - 1f;
		float L_3 = __this->get__timeLeft_6();
		__this->set__oneSecondDown_9(((float)il2cpp_codegen_subtract((float)L_3, (float)(1.0f))));
		// GameEvents.OnBoardCompleted += StopTimer;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_4 = (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)il2cpp_codegen_object_new(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214(L_4, __this, (intptr_t)((intptr_t)CountDownTimer_StopTimer_m6FAE19768A44AE4D50E84721C343EAC6C1FBE082_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnBoardCompleted_mBB304835FCAEE9D8600027F963C65595ED292F3D(L_4, /*hidden argument*/NULL);
		// GameEvents.OnUnlockNextCategory += StopTimer;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_5 = (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)il2cpp_codegen_object_new(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3(L_5, __this, (intptr_t)((intptr_t)CountDownTimer_StopTimer_m6FAE19768A44AE4D50E84721C343EAC6C1FBE082_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnUnlockNextCategory_mEC56C6BADDBC5AFC07C39B680AAB9DD3335EB12E(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CountDownTimer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_OnDisable_mECD6A28F83D553D1AA8BAEC1ECBF20A0DA739AB5 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountDownTimer_StopTimer_m6FAE19768A44AE4D50E84721C343EAC6C1FBE082_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnBoardCompleted -= StopTimer;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)il2cpp_codegen_object_new(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214(L_0, __this, (intptr_t)((intptr_t)CountDownTimer_StopTimer_m6FAE19768A44AE4D50E84721C343EAC6C1FBE082_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnBoardCompleted_m72571657CC1E5E5D5FE3A335DD3B3C4E2FE2D74D(L_0, /*hidden argument*/NULL);
		// GameEvents.OnUnlockNextCategory -= StopTimer;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)il2cpp_codegen_object_new(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3(L_1, __this, (intptr_t)((intptr_t)CountDownTimer_StopTimer_m6FAE19768A44AE4D50E84721C343EAC6C1FBE082_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnUnlockNextCategory_mD0C65AD6C8DC2F571925EA3F1B8192E87645B145(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CountDownTimer::StopTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_StopTimer_m6FAE19768A44AE4D50E84721C343EAC6C1FBE082 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	{
		// _stopTimer=true;
		__this->set__stopTimer_11((bool)1);
		// }
		return;
	}
}
// System.Void CountDownTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_Update_m551BC64F85089E796E4BE00CEB20654C9BB11890 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	{
		// if (_stopTimer == false)
		bool L_0 = __this->get__stopTimer_11();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// _timeLeft -= Time.deltaTime;
		float L_1 = __this->get__timeLeft_6();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__timeLeft_6(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
	}

IL_001a:
	{
		// if (_timeLeft <= _oneSecondDown)
		float L_3 = __this->get__timeLeft_6();
		float L_4 = __this->get__oneSecondDown_9();
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_003a;
		}
	}
	{
		// _oneSecondDown = _timeLeft - 1f;
		float L_5 = __this->get__timeLeft_6();
		__this->set__oneSecondDown_9(((float)il2cpp_codegen_subtract((float)L_5, (float)(1.0f))));
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void CountDownTimer::UpdateCountDownTimeAfterAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_UpdateCountDownTimeAfterAds_m26E4F7D86999F33B9014A5FDB649AC1716A95207 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	{
		// _timeLeft = 60f;
		__this->set__timeLeft_6((60.0f));
		// _stopTimer = false;
		__this->set__stopTimer_11((bool)0);
		// _timeOut = false;
		__this->set__timeOut_10((bool)0);
		// }
		return;
	}
}
// System.Boolean CountDownTimer::getGameOverStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CountDownTimer_getGameOverStatus_m6116EB2C7862A3C9446D5A78BCD378CF4C18D22A (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	{
		// return _timeOut;
		bool L_0 = __this->get__timeOut_10();
		return L_0;
	}
}
// System.Void CountDownTimer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_OnGUI_mEDDEC3E2E656FD0C155A40F2753A5763D9618034 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_timeOut == false)
		bool L_0 = __this->get__timeOut_10();
		if (L_0)
		{
			goto IL_0087;
		}
	}
	{
		// if(_timeLeft > 0)
		float L_1 = __this->get__timeLeft_6();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// _minutes = Mathf.Floor(_timeLeft / 60);
		float L_2 = __this->get__timeLeft_6();
		float L_3;
		L_3 = floorf(((float)((float)L_2/(float)(60.0f))));
		__this->set__minutes_7(L_3);
		// _seconds = Mathf.RoundToInt(_timeLeft % 60);
		float L_4 = __this->get__timeLeft_6();
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD((fmodf(L_4, (60.0f))), /*hidden argument*/NULL);
		__this->set__seconds_8(((float)((float)L_5)));
		// timerText.text = _minutes.ToString("00") + ":" + _seconds.ToString("00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_timerText_5();
		float* L_7 = __this->get_address_of__minutes_7();
		String_t* L_8;
		L_8 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_7, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		float* L_9 = __this->get_address_of__seconds_8();
		String_t* L_10;
		L_10 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_9, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_8, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		// }
		return;
	}

IL_007a:
	{
		// _stopTimer = true;
		__this->set__stopTimer_11((bool)1);
		// ActivateGameOverGUI();
		CountDownTimer_ActivateGameOverGUI_mB04609891AD16C468A97BF854D7A264F1CC93416(__this, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void CountDownTimer::ActivateGameOverGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer_ActivateGameOverGUI_mB04609891AD16C468A97BF854D7A264F1CC93416 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	{
		// GameEvents.GameOverMethod();
		GameEvents_GameOverMethod_mFBBE5773F5BB39F217D9A5804B101CE70281DAAC(/*hidden argument*/NULL);
		// _timeOut=true;
		__this->set__timeOut_10((bool)1);
		// }
		return;
	}
}
// System.Void CountDownTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownTimer__ctor_m53721312A1CFC0122A2019631CFD67AB575D0B71 (CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 DataSaver::ReadCategoryCurrentIndexValues(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataSaver_ReadCategoryCurrentIndexValues_mCFCC7043C966B844D136A3249634B0F9019A75C2 (String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var value = -1;
		V_0 = (-1);
		// if (PlayerPrefs.HasKey(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// value = PlayerPrefs.GetInt(name);
		String_t* L_2 = ___name0;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0011:
	{
		// return value;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void DataSaver::SaveHighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver_SaveHighScore_m0C4E3B74AABD7F41DC33E48D78FCB866A2030445 (int32_t ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey(_highScoreKey))
		IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_StaticFields*)il2cpp_codegen_static_fields_for(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var))->get__highScoreKey_4();
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// PlayerPrefs.SetInt(_highScoreKey, PlayerPrefs.GetInt(_highScoreKey) + score);
		IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		String_t* L_2 = ((DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_StaticFields*)il2cpp_codegen_static_fields_for(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var))->get__highScoreKey_4();
		String_t* L_3 = ((DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_StaticFields*)il2cpp_codegen_static_fields_for(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var))->get__highScoreKey_4();
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___score0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0023:
	{
		// PlayerPrefs.SetInt(_highScoreKey, score);
		IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		String_t* L_6 = ((DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_StaticFields*)il2cpp_codegen_static_fields_for(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var))->get__highScoreKey_4();
		int32_t L_7 = ___score0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DataSaver::SaveCategoryData(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver_SaveCategoryData_m00EAA18ECD83406F881A3FF376F9BB569428334F (String_t* ___categoryName0, int32_t ___currentIndex1, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.SetInt(categoryName,currentIndex);
		String_t* L_0 = ___categoryName0;
		int32_t L_1 = ___currentIndex1;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_0, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DataSaver::ClearGameData(GameLevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver_ClearGameData_m683F3B272944D2963EC6EA9FF845FA9C22113D9B (GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * ___levelData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(var data in levelData.data)
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_0 = ___levelData0;
		NullCheck(L_0);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_1 = L_0->get_data_4();
		NullCheck(L_1);
		Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  L_2;
		L_2 = List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E(L_1, /*hidden argument*/List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_000e:
		{
			// foreach(var data in levelData.data)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_3;
			L_3 = Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_inline((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
			// PlayerPrefs.SetInt(data.catrgoryName, -1);
			String_t* L_4 = L_3.get_catrgoryName_0();
			PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_4, (-1), /*hidden argument*/NULL);
		}

IL_0020:
		{
			// foreach(var data in levelData.data)
			bool L_5;
			L_5 = Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// PlayerPrefs.SetInt(levelData.data[0].catrgoryName, 0);
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_6 = ___levelData0;
		NullCheck(L_6);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_7 = L_6->get_data_4();
		NullCheck(L_7);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_8;
		L_8 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_7, 0, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		String_t* L_9 = L_8.get_catrgoryName_0();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_9, 0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DataSaver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver__ctor_m0632B372E1363834459F883D434F1DA0D45450FC (DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DataSaver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver__cctor_mDE991542766C2EEC128A4375CCA1A270E39E5577 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string _highScoreKey = "HighScore";
		((DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_StaticFields*)il2cpp_codegen_static_fields_for(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var))->set__highScoreKey_4(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mF787127A0B2A0A3EBFA33BAB7050087D66E80F14 (GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void GameDataSelector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataSelector_Awake_m6C53D8D75970EE851D49B03B4B9E251FD7D52E02 (GameDataSelector_t5314C87C9A948FFDE34158583BB480C49C3DB1C9 * __this, const RuntimeMethod* method)
{
	{
		// SelectSequentialBoardData();
		GameDataSelector_SelectSequentialBoardData_m2EE9B1F00DDCA3B80E80C63EC3D2DEFEFB058430(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameDataSelector::SelectSequentialBoardData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataSelector_SelectSequentialBoardData_m2EE9B1F00DDCA3B80E80C63EC3D2DEFEFB058430 (GameDataSelector_t5314C87C9A948FFDE34158583BB480C49C3DB1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  V_0;
	memset((&V_0), 0, sizeof(V_0));
	CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(var data in levelData.data)
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_0 = __this->get_levelData_5();
		NullCheck(L_0);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_1 = L_0->get_data_4();
		NullCheck(L_1);
		Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  L_2;
		L_2 = List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E(L_1, /*hidden argument*/List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0097;
		}

IL_0016:
		{
			// foreach(var data in levelData.data)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_3;
			L_3 = Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_inline((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
			V_1 = L_3;
			// if(data.catrgoryName == currentGameData.selectedCategoryName)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_4 = V_1;
			String_t* L_5 = L_4.get_catrgoryName_0();
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_6 = __this->get_currentGameData_4();
			NullCheck(L_6);
			String_t* L_7 = L_6->get_selectedCategoryName_4();
			bool L_8;
			L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0097;
			}
		}

IL_0036:
		{
			// var boardIndex = DataSaver.ReadCategoryCurrentIndexValues(currentGameData.selectedCategoryName);
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_9 = __this->get_currentGameData_4();
			NullCheck(L_9);
			String_t* L_10 = L_9->get_selectedCategoryName_4();
			IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
			int32_t L_11;
			L_11 = DataSaver_ReadCategoryCurrentIndexValues_mCFCC7043C966B844D136A3249634B0F9019A75C2(L_10, /*hidden argument*/NULL);
			V_2 = L_11;
			// if(boardIndex > data.boardData.Count)
			int32_t L_12 = V_2;
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_13 = V_1;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_14 = L_13.get_boardData_1();
			NullCheck(L_14);
			int32_t L_15;
			L_15 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_14, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
			if ((((int32_t)L_12) <= ((int32_t)L_15)))
			{
				goto IL_006e;
			}
		}

IL_0055:
		{
			// currentGameData.selectedBoardData = data.boardData[boardIndex];
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_16 = __this->get_currentGameData_4();
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_17 = V_1;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_18 = L_17.get_boardData_1();
			int32_t L_19 = V_2;
			NullCheck(L_18);
			BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_20;
			L_20 = List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_RuntimeMethod_var);
			NullCheck(L_16);
			L_16->set_selectedBoardData_5(L_20);
			// }
			goto IL_0097;
		}

IL_006e:
		{
			// var randomIndex = Random.Range(0, data.boardData.Count);
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_21 = V_1;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_22 = L_21.get_boardData_1();
			NullCheck(L_22);
			int32_t L_23;
			L_23 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_22, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
			int32_t L_24;
			L_24 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_23, /*hidden argument*/NULL);
			V_3 = L_24;
			// currentGameData.selectedBoardData = data.boardData[randomIndex];
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_25 = __this->get_currentGameData_4();
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_26 = V_1;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_27 = L_26.get_boardData_1();
			int32_t L_28 = V_3;
			NullCheck(L_27);
			BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_29;
			L_29 = List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_inline(L_27, L_28, /*hidden argument*/List_1_get_Item_m328714273A37C395496642F48ECFDB02F1E7C5A5_RuntimeMethod_var);
			NullCheck(L_25);
			L_25->set_selectedBoardData_5(L_29);
		}

IL_0097:
		{
			// foreach(var data in levelData.data)
			bool L_30;
			L_30 = Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
			if (L_30)
			{
				goto IL_0016;
			}
		}

IL_00a3:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_00a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a5;
	}

FINALLY_00a5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(165)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(165)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void GameDataSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataSelector__ctor_m3CF8BFD691BB1AF8DC6874AABC85C5EC654B1109 (GameDataSelector_t5314C87C9A948FFDE34158583BB480C49C3DB1C9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameEvents::add_OnEnableSquareSelection(GameEvents/EnableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnEnableSquareSelection_m0E6C578729FF0B3C488BA51BE98BA737651EA864 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_0 = NULL;
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_1 = NULL;
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_2 = NULL;
	{
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnEnableSquareSelection_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_1 = V_0;
		V_1 = L_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_2 = V_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)CastclassSealed((RuntimeObject*)L_4, EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var));
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_5 = V_2;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_6 = V_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *>((EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnEnableSquareSelection_0()), L_5, L_6);
		V_0 = L_7;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_8 = V_0;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)L_8) == ((RuntimeObject*)(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnEnableSquareSelection(GameEvents/EnableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnEnableSquareSelection_m39D9D1E64C14D7D98E0E0E9290DFD2E79A51581C (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_0 = NULL;
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_1 = NULL;
	EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * V_2 = NULL;
	{
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnEnableSquareSelection_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_1 = V_0;
		V_1 = L_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_2 = V_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)CastclassSealed((RuntimeObject*)L_4, EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var));
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_5 = V_2;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_6 = V_1;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *>((EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnEnableSquareSelection_0()), L_5, L_6);
		V_0 = L_7;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_8 = V_0;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)L_8) == ((RuntimeObject*)(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::EnableSquareSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_EnableSquareSelectionMethod_mD0DBA922E5C919E7E6049CCEFD9556040CCECA19 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(OnEnableSquareSelection != null)
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnEnableSquareSelection_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnEnableSquareSelection();
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnEnableSquareSelection_0();
		NullCheck(L_1);
		EnableSquareSelection_Invoke_m00ADB5385E45682BDB3C6B271A872362DE0B5DC4(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnDisableSquareSelection(GameEvents/DisableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnDisableSquareSelection_m14703B8952735238988E06B5C67B243AB4819628 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_0 = NULL;
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_1 = NULL;
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_2 = NULL;
	{
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnDisableSquareSelection_1();
		V_0 = L_0;
	}

IL_0006:
	{
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = V_0;
		V_1 = L_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_2 = V_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)CastclassSealed((RuntimeObject*)L_4, DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var));
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_5 = V_2;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_6 = V_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_7;
		L_7 = InterlockedCompareExchangeImpl<DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *>((DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnDisableSquareSelection_1()), L_5, L_6);
		V_0 = L_7;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_8 = V_0;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_9 = V_1;
		if ((!(((RuntimeObject*)(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)L_8) == ((RuntimeObject*)(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnDisableSquareSelection(GameEvents/DisableSquareSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnDisableSquareSelection_m19C33F7966BE69CDA5B4D7DEC8BA15E9C0863D81 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_0 = NULL;
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_1 = NULL;
	DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * V_2 = NULL;
	{
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnDisableSquareSelection_1();
		V_0 = L_0;
	}

IL_0006:
	{
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = V_0;
		V_1 = L_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_2 = V_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)CastclassSealed((RuntimeObject*)L_4, DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var));
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_5 = V_2;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_6 = V_1;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_7;
		L_7 = InterlockedCompareExchangeImpl<DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *>((DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnDisableSquareSelection_1()), L_5, L_6);
		V_0 = L_7;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_8 = V_0;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_9 = V_1;
		if ((!(((RuntimeObject*)(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)L_8) == ((RuntimeObject*)(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::DisableSquareSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_DisableSquareSelectionMethod_m95A35BDAC07AAD8A1733DFC61C2F8B138529E54B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnDisableSquareSelection != null)
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnDisableSquareSelection_1();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnDisableSquareSelection();
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnDisableSquareSelection_1();
		NullCheck(L_1);
		DisableSquareSelection_Invoke_m5DB838C7440CAC22E333A00470B436DF45B21D70(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnSelectSquare_mDDF923AC986685418F32AADD2425113376A74843 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_0 = NULL;
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_1 = NULL;
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_2 = NULL;
	{
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnSelectSquare_2();
		V_0 = L_0;
	}

IL_0006:
	{
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_1 = V_0;
		V_1 = L_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_2 = V_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)CastclassSealed((RuntimeObject*)L_4, SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var));
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_5 = V_2;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_6 = V_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *>((SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnSelectSquare_2()), L_5, L_6);
		V_0 = L_7;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_8 = V_0;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)L_8) == ((RuntimeObject*)(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnSelectSquare_mBD09E7C9EDA7C94C21A816DCFB9B55C0A5EB7262 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_0 = NULL;
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_1 = NULL;
	SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * V_2 = NULL;
	{
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnSelectSquare_2();
		V_0 = L_0;
	}

IL_0006:
	{
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_1 = V_0;
		V_1 = L_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_2 = V_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)CastclassSealed((RuntimeObject*)L_4, SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var));
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_5 = V_2;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_6 = V_1;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *>((SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnSelectSquare_2()), L_5, L_6);
		V_0 = L_7;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_8 = V_0;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)L_8) == ((RuntimeObject*)(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::SelectSquareMethod(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SelectSquareMethod_m6194E84AA64EA8CCED304B13530507309DE9E791 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnSelectSquare != null)
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnSelectSquare_2();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// OnSelectSquare(position);
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnSelectSquare_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		NullCheck(L_1);
		SelectSquare_Invoke_mFB2E3DEBE3C1FF69AB0116819FEB00C60BB87C3E(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCheckSquare_mFE42CF8BA749903CDCADD0144FC865558CC5E4F2 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_0 = NULL;
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_1 = NULL;
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_2 = NULL;
	{
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCheckSquare_3();
		V_0 = L_0;
	}

IL_0006:
	{
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_1 = V_0;
		V_1 = L_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_2 = V_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)CastclassSealed((RuntimeObject*)L_4, CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var));
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_5 = V_2;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_6 = V_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_7;
		L_7 = InterlockedCompareExchangeImpl<CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *>((CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCheckSquare_3()), L_5, L_6);
		V_0 = L_7;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_8 = V_0;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_9 = V_1;
		if ((!(((RuntimeObject*)(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)L_8) == ((RuntimeObject*)(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCheckSquare_mC01ACBA49A91C21C689BBBEFB247D1CF08C768FE (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_0 = NULL;
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_1 = NULL;
	CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * V_2 = NULL;
	{
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCheckSquare_3();
		V_0 = L_0;
	}

IL_0006:
	{
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_1 = V_0;
		V_1 = L_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_2 = V_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)CastclassSealed((RuntimeObject*)L_4, CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var));
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_5 = V_2;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_6 = V_1;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_7;
		L_7 = InterlockedCompareExchangeImpl<CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *>((CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCheckSquare_3()), L_5, L_6);
		V_0 = L_7;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_8 = V_0;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_9 = V_1;
		if ((!(((RuntimeObject*)(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)L_8) == ((RuntimeObject*)(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::CheckSquareMethod(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CheckSquareMethod_m18018E538BCED705BBD5E938BD830FE984D439D2 (String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnCheckSquare != null)
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCheckSquare_3();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnCheckSquare(letter, squarePosition,squareIndex);
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCheckSquare_3();
		String_t* L_2 = ___letter0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___squarePosition1;
		int32_t L_4 = ___squareIndex2;
		NullCheck(L_1);
		CheckSquare_Invoke_mBADE932727CB44226DB2EF53CBC9159E32C3215E(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnClearSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnClearSelection_m2C132521B73B7842FBE13106362E0E7B2540DAAC (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_0 = NULL;
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_1 = NULL;
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_2 = NULL;
	{
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnClearSelection_4();
		V_0 = L_0;
	}

IL_0006:
	{
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = V_0;
		V_1 = L_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_2 = V_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)CastclassSealed((RuntimeObject*)L_4, ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var));
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_5 = V_2;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_6 = V_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *>((ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnClearSelection_4()), L_5, L_6);
		V_0 = L_7;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_8 = V_0;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)L_8) == ((RuntimeObject*)(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnClearSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnClearSelection_mD969AA534E80455CB5CC9B4BEAF7AAABD5659D55 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_0 = NULL;
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_1 = NULL;
	ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * V_2 = NULL;
	{
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnClearSelection_4();
		V_0 = L_0;
	}

IL_0006:
	{
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = V_0;
		V_1 = L_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_2 = V_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)CastclassSealed((RuntimeObject*)L_4, ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var));
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_5 = V_2;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_6 = V_1;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *>((ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnClearSelection_4()), L_5, L_6);
		V_0 = L_7;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_8 = V_0;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)L_8) == ((RuntimeObject*)(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::ClearSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_ClearSelectionMethod_mD9FCC0A1AEAFC2740D67CDEB2DA6764232B2B783 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnClearSelection != null)
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnClearSelection_4();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnClearSelection();
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnClearSelection_4();
		NullCheck(L_1);
		ClearSelection_Invoke_m133962391B3622931FD495ED42329E9B81915367(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCorrectWord_mC3BC1B6119FAD79FE60555FCA43986ACDABD4559 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_0 = NULL;
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_1 = NULL;
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_2 = NULL;
	{
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCorrectWord_5();
		V_0 = L_0;
	}

IL_0006:
	{
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_1 = V_0;
		V_1 = L_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_2 = V_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)CastclassSealed((RuntimeObject*)L_4, CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var));
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_5 = V_2;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_6 = V_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_7;
		L_7 = InterlockedCompareExchangeImpl<CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *>((CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCorrectWord_5()), L_5, L_6);
		V_0 = L_7;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_8 = V_0;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_9 = V_1;
		if ((!(((RuntimeObject*)(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)L_8) == ((RuntimeObject*)(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCorrectWord_m6FEDD292A833D4C09E442E1B128A337591E05DB1 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_0 = NULL;
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_1 = NULL;
	CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * V_2 = NULL;
	{
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCorrectWord_5();
		V_0 = L_0;
	}

IL_0006:
	{
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_1 = V_0;
		V_1 = L_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_2 = V_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)CastclassSealed((RuntimeObject*)L_4, CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var));
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_5 = V_2;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_6 = V_1;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_7;
		L_7 = InterlockedCompareExchangeImpl<CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *>((CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnCorrectWord_5()), L_5, L_6);
		V_0 = L_7;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_8 = V_0;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_9 = V_1;
		if ((!(((RuntimeObject*)(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)L_8) == ((RuntimeObject*)(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::CorrectWordMethod(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CorrectWordMethod_m149AD60307E9DB05A920B972EB4448F4A0D7A288 (String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnCorrectWord != null)
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCorrectWord_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// OnCorrectWord(word, squareIndexes);
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnCorrectWord_5();
		String_t* L_2 = ___word0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = ___squareIndexes1;
		NullCheck(L_1);
		CorrectWord_Invoke_mAF3BE4947C7ED32DB09FCB41CA753939B2BC688F(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnBoardCompleted(GameEvents/BoardCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnBoardCompleted_mBB304835FCAEE9D8600027F963C65595ED292F3D (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_0 = NULL;
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_1 = NULL;
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_2 = NULL;
	{
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnBoardCompleted_6();
		V_0 = L_0;
	}

IL_0006:
	{
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_1 = V_0;
		V_1 = L_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_2 = V_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)CastclassSealed((RuntimeObject*)L_4, BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var));
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_5 = V_2;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_6 = V_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_7;
		L_7 = InterlockedCompareExchangeImpl<BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *>((BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnBoardCompleted_6()), L_5, L_6);
		V_0 = L_7;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_8 = V_0;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_9 = V_1;
		if ((!(((RuntimeObject*)(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)L_8) == ((RuntimeObject*)(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnBoardCompleted(GameEvents/BoardCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnBoardCompleted_m72571657CC1E5E5D5FE3A335DD3B3C4E2FE2D74D (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_0 = NULL;
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_1 = NULL;
	BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * V_2 = NULL;
	{
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnBoardCompleted_6();
		V_0 = L_0;
	}

IL_0006:
	{
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_1 = V_0;
		V_1 = L_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_2 = V_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)CastclassSealed((RuntimeObject*)L_4, BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var));
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_5 = V_2;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_6 = V_1;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_7;
		L_7 = InterlockedCompareExchangeImpl<BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *>((BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnBoardCompleted_6()), L_5, L_6);
		V_0 = L_7;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_8 = V_0;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_9 = V_1;
		if ((!(((RuntimeObject*)(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)L_8) == ((RuntimeObject*)(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::BoardCompletedMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_BoardCompletedMethod_m8984786CBE2F154DF41B289FB2AAF81BB3FB7A23 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnBoardCompleted != null)
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnBoardCompleted_6();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnBoardCompleted();
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnBoardCompleted_6();
		NullCheck(L_1);
		BoardCompleted_Invoke_m9E746DF3A04C6EDB09B5B2B4CCCF06A3301E5A93(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnUnlockNextCategory(GameEvents/UnlockNextCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnUnlockNextCategory_mEC56C6BADDBC5AFC07C39B680AAB9DD3335EB12E (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_0 = NULL;
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_1 = NULL;
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_2 = NULL;
	{
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnUnlockNextCategory_7();
		V_0 = L_0;
	}

IL_0006:
	{
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = V_0;
		V_1 = L_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_2 = V_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)CastclassSealed((RuntimeObject*)L_4, UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var));
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_5 = V_2;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_6 = V_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_7;
		L_7 = InterlockedCompareExchangeImpl<UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *>((UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnUnlockNextCategory_7()), L_5, L_6);
		V_0 = L_7;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_8 = V_0;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)L_8) == ((RuntimeObject*)(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnUnlockNextCategory(GameEvents/UnlockNextCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnUnlockNextCategory_mD0C65AD6C8DC2F571925EA3F1B8192E87645B145 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_0 = NULL;
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_1 = NULL;
	UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * V_2 = NULL;
	{
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnUnlockNextCategory_7();
		V_0 = L_0;
	}

IL_0006:
	{
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = V_0;
		V_1 = L_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_2 = V_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)CastclassSealed((RuntimeObject*)L_4, UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var));
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_5 = V_2;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_6 = V_1;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_7;
		L_7 = InterlockedCompareExchangeImpl<UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *>((UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnUnlockNextCategory_7()), L_5, L_6);
		V_0 = L_7;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_8 = V_0;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)L_8) == ((RuntimeObject*)(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::UnlockNextCategoryMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_UnlockNextCategoryMethod_mC94B42F6EB289FF0C47D4070C1D5A3C861558A44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnUnlockNextCategory != null)
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnUnlockNextCategory_7();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnUnlockNextCategory();
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnUnlockNextCategory_7();
		NullCheck(L_1);
		UnlockNextCategory_Invoke_mC5C57E4F3D2E08AFE834359E47BBD9EC58F3C975(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnLoadNextLevel(GameEvents/LoadNextLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnLoadNextLevel_m67866D0418E3A4A61186151CC2734709499A5BA3 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_0 = NULL;
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_1 = NULL;
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_2 = NULL;
	{
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnLoadNextLevel_8();
		V_0 = L_0;
	}

IL_0006:
	{
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_1 = V_0;
		V_1 = L_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_2 = V_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)CastclassSealed((RuntimeObject*)L_4, LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var));
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_5 = V_2;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_6 = V_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_7;
		L_7 = InterlockedCompareExchangeImpl<LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *>((LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnLoadNextLevel_8()), L_5, L_6);
		V_0 = L_7;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_8 = V_0;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_9 = V_1;
		if ((!(((RuntimeObject*)(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)L_8) == ((RuntimeObject*)(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnLoadNextLevel(GameEvents/LoadNextLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnLoadNextLevel_mDE99F77608B8E4AEB93C78FE6F72E7793A66C0E8 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_0 = NULL;
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_1 = NULL;
	LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * V_2 = NULL;
	{
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnLoadNextLevel_8();
		V_0 = L_0;
	}

IL_0006:
	{
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_1 = V_0;
		V_1 = L_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_2 = V_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)CastclassSealed((RuntimeObject*)L_4, LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var));
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_5 = V_2;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_6 = V_1;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_7;
		L_7 = InterlockedCompareExchangeImpl<LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *>((LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnLoadNextLevel_8()), L_5, L_6);
		V_0 = L_7;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_8 = V_0;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_9 = V_1;
		if ((!(((RuntimeObject*)(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)L_8) == ((RuntimeObject*)(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::LoadNextLevelMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_LoadNextLevelMethod_m9B46C06691FC3B8C509A27737F2A8763B6618E50 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnLoadNextLevel != null)
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnLoadNextLevel_8();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnLoadNextLevel();
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnLoadNextLevel_8();
		NullCheck(L_1);
		LoadNextLevel_Invoke_mC2217880C5BFC7CE0065DED55395B06C9C57A6FA(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnGameOver(GameEvents/GameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnGameOver_mCC492E73D08F87CA7B031F8C7B035EE0724A39F8 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_0 = NULL;
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_1 = NULL;
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_2 = NULL;
	{
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnGameOver_9();
		V_0 = L_0;
	}

IL_0006:
	{
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_1 = V_0;
		V_1 = L_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_2 = V_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)CastclassSealed((RuntimeObject*)L_4, GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var));
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_5 = V_2;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_6 = V_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_7;
		L_7 = InterlockedCompareExchangeImpl<GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *>((GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnGameOver_9()), L_5, L_6);
		V_0 = L_7;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_8 = V_0;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_9 = V_1;
		if ((!(((RuntimeObject*)(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)L_8) == ((RuntimeObject*)(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnGameOver(GameEvents/GameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnGameOver_mEF82B76755C9902AEAA418C17242795E4D92825C (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_0 = NULL;
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_1 = NULL;
	GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * V_2 = NULL;
	{
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnGameOver_9();
		V_0 = L_0;
	}

IL_0006:
	{
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_1 = V_0;
		V_1 = L_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_2 = V_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)CastclassSealed((RuntimeObject*)L_4, GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var));
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_5 = V_2;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_6 = V_1;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_7;
		L_7 = InterlockedCompareExchangeImpl<GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *>((GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnGameOver_9()), L_5, L_6);
		V_0 = L_7;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_8 = V_0;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_9 = V_1;
		if ((!(((RuntimeObject*)(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)L_8) == ((RuntimeObject*)(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::GameOverMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_GameOverMethod_mFBBE5773F5BB39F217D9A5804B101CE70281DAAC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnGameOver != null)
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnGameOver_9();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnGameOver();
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnGameOver_9();
		NullCheck(L_1);
		GameOver_Invoke_m731CC7B41BA4C2E99ACDD95BCD39211974524EE6(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnToggleSoundFX(GameEvents/ToggleSoundFX)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnToggleSoundFX_m339794D89E6230F08E88C34860594E6BFBF370EE (ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * V_0 = NULL;
	ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * V_1 = NULL;
	ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * V_2 = NULL;
	{
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnToggleSoundFX_10();
		V_0 = L_0;
	}

IL_0006:
	{
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_1 = V_0;
		V_1 = L_1;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_2 = V_1;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 *)CastclassSealed((RuntimeObject*)L_4, ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4_il2cpp_TypeInfo_var));
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_5 = V_2;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_6 = V_1;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 *>((ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnToggleSoundFX_10()), L_5, L_6);
		V_0 = L_7;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_8 = V_0;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 *)L_8) == ((RuntimeObject*)(ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnToggleSoundFX(GameEvents/ToggleSoundFX)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnToggleSoundFX_m809DC5F24B35A5012B59617F0643163234B8F372 (ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * V_0 = NULL;
	ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * V_1 = NULL;
	ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * V_2 = NULL;
	{
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnToggleSoundFX_10();
		V_0 = L_0;
	}

IL_0006:
	{
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_1 = V_0;
		V_1 = L_1;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_2 = V_1;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 *)CastclassSealed((RuntimeObject*)L_4, ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4_il2cpp_TypeInfo_var));
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_5 = V_2;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_6 = V_1;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_7;
		L_7 = InterlockedCompareExchangeImpl<ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 *>((ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 **)(((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_address_of_OnToggleSoundFX_10()), L_5, L_6);
		V_0 = L_7;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_8 = V_0;
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 *)L_8) == ((RuntimeObject*)(ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::ToggleSoundFXMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_ToggleSoundFXMethod_m478AFAFD5BF56306CBA4FD723A203DCAB8C80B2D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnToggleSoundFX != null)
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_0 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnToggleSoundFX_10();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnToggleSoundFX();
		ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * L_1 = ((GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t304F2D5249A807B067595CF817CA809E1051942C_il2cpp_TypeInfo_var))->get_OnToggleSoundFX_10();
		NullCheck(L_1);
		ToggleSoundFX_Invoke_m486C42870CA154B4C52EBC2FD4B2706831541208(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
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
// System.Void GameLevelData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLevelData__ctor_m33420F54BFD1C356542154FA830A7738E0BB47FF (GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void GameOverPopup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverPopup_Start_m8F13216354BF546B8E17B47435625C1038306310 (GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverPopup_OnContinueWithAdsButtonClick_mD6857187090F3C461AE9E0EEC74553E5D19F7751_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverPopup_OnExitOfCheckNetwordDialog_m194F4B49E657802F737A18CB77C786CBBFC41ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverPopup_ShowGameOverPopUp_m74C6F0BD9CC54C2778C0FF84CB57081EA36D6131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// continueGameAfterAdsButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_continueGameAfterAdsButton_5();
		NullCheck(L_0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1;
		L_1 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_0, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_1);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_1, (bool)0, /*hidden argument*/NULL);
		// continueGameAfterAdsButton.GetComponent<Button>().onClick.AddListener(OnContinueWithAdsButtonClick);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_continueGameAfterAdsButton_5();
		NullCheck(L_2);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3;
		L_3 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_2, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)GameOverPopup_OnContinueWithAdsButtonClick_mD6857187090F3C461AE9E0EEC74553E5D19F7751_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// checkNetwordExit.GetComponent<Button>().onClick.AddListener(OnExitOfCheckNetwordDialog);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_checkNetwordExit_7();
		NullCheck(L_6);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7;
		L_7 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_6, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_7);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_8;
		L_8 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_7, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_9, __this, (intptr_t)((intptr_t)GameOverPopup_OnExitOfCheckNetwordDialog_m194F4B49E657802F737A18CB77C786CBBFC41ECC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_8, L_9, /*hidden argument*/NULL);
		// gameOverPopUp.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_gameOverPopUp_4();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// SetCheckNetworkDialogState(false);
		GameOverPopup_SetCheckNetworkDialogState_m86FFF591533324B20A142777AAC2C47DA492E620(__this, (bool)0, /*hidden argument*/NULL);
		// GameEvents.OnGameOver += ShowGameOverPopUp;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_11 = (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)il2cpp_codegen_object_new(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		GameOver__ctor_m9020C2CE13E6DC24067E93BC8272301637E5093A(L_11, __this, (intptr_t)((intptr_t)GameOverPopup_ShowGameOverPopUp_m74C6F0BD9CC54C2778C0FF84CB57081EA36D6131_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnGameOver_mCC492E73D08F87CA7B031F8C7B035EE0724A39F8(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverPopup::OnContinueWithAdsButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverPopup_OnContinueWithAdsButtonClick_mD6857187090F3C461AE9E0EEC74553E5D19F7751 (GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AdManager.instance.IsInterstitialAdLoaded())
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_0);
		bool L_1;
		L_1 = AdManager_IsInterstitialAdLoaded_mB76DDA6A568F3AB1077C67DA8EFB63AE9491FAC6(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// AdManager.instance.ShowInterstitialAd();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_2 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_2);
		AdManager_ShowInterstitialAd_m35910EAB17673DAFCFA396B79C121746C0B8E4A1(L_2, /*hidden argument*/NULL);
		// CountDownTimer.instance.UpdateCountDownTimeAfterAds();
		CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * L_3 = ((CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_StaticFields*)il2cpp_codegen_static_fields_for(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_3);
		CountDownTimer_UpdateCountDownTimeAfterAds_m26E4F7D86999F33B9014A5FDB649AC1716A95207(L_3, /*hidden argument*/NULL);
		// SetCheckNetworkDialogState(false);
		GameOverPopup_SetCheckNetworkDialogState_m86FFF591533324B20A142777AAC2C47DA492E620(__this, (bool)0, /*hidden argument*/NULL);
		// gameOverPopUp.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_gameOverPopUp_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// AdManager.instance.CreateInterstitialRequest();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_5 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_5);
		AdManager_CreateInterstitialRequest_m55C482BC18398BC207114D99017FB84820A4D1F1(L_5, /*hidden argument*/NULL);
		// SetCheckNetworkDialogState(true);
		GameOverPopup_SetCheckNetworkDialogState_m86FFF591533324B20A142777AAC2C47DA492E620(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverPopup::OnExitOfCheckNetwordDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverPopup_OnExitOfCheckNetwordDialog_m194F4B49E657802F737A18CB77C786CBBFC41ECC (GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069 * __this, const RuntimeMethod* method)
{
	{
		// SetCheckNetworkDialogState(false);
		GameOverPopup_SetCheckNetworkDialogState_m86FFF591533324B20A142777AAC2C47DA492E620(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverPopup::SetCheckNetworkDialogState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverPopup_SetCheckNetworkDialogState_m86FFF591533324B20A142777AAC2C47DA492E620 (GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069 * __this, bool ___state0, const RuntimeMethod* method)
{
	{
		// checkNetwork.SetActive(state);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_checkNetwork_6();
		bool L_1 = ___state0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverPopup::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverPopup_OnDisable_mD4911DCBEE748ED50C74CF6381A6AF560F40488E (GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverPopup_ShowGameOverPopUp_m74C6F0BD9CC54C2778C0FF84CB57081EA36D6131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnGameOver -= ShowGameOverPopUp;
		GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * L_0 = (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C *)il2cpp_codegen_object_new(GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C_il2cpp_TypeInfo_var);
		GameOver__ctor_m9020C2CE13E6DC24067E93BC8272301637E5093A(L_0, __this, (intptr_t)((intptr_t)GameOverPopup_ShowGameOverPopUp_m74C6F0BD9CC54C2778C0FF84CB57081EA36D6131_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnGameOver_mEF82B76755C9902AEAA418C17242795E4D92825C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverPopup::ShowGameOverPopUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverPopup_ShowGameOverPopUp_m74C6F0BD9CC54C2778C0FF84CB57081EA36D6131 (GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdManager.instance.HideBanner();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_0);
		AdManager_HideBanner_m2738463D0EE6942A694CD0CEAB39F4EA507B8E8C(L_0, /*hidden argument*/NULL);
		// gameOverPopUp.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_gameOverPopUp_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// continueGameAfterAdsButton.GetComponent <Button>().interactable = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_continueGameAfterAdsButton_5();
		NullCheck(L_2);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3;
		L_3 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_2, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_3);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverPopup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverPopup__ctor_m9EBFF25026E6C9AF7F8F7726F5317D1CFD893B70 (GameOverPopup_t544F825F27F0CB495FDE3FC950BCF78A60716069 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameUtility::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_LoadScene_m8FED8B166F5DCB07B301244433CA47835AA034E2 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, String_t* ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene);
		String_t* L_0 = ___scene0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::ExitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_ExitApplication_m98A2D77BB0B88D4A181A3E16DE1ED67163B05037 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::HideBannerAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_HideBannerAds_m5CA59E48DCD12D3B7A959B6CEE9F6268EBF850D3 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdManager.instance.HideBanner();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_0);
		AdManager_HideBanner_m2738463D0EE6942A694CD0CEAB39F4EA507B8E8C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::MuteToggleBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_MuteToggleBackgroundMusic_m710F798C833DB1FCD4865BAAE1894425BD333D24 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.Instance.ToggleBackgroundMusic();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_6();
		NullCheck(L_0);
		SoundManager_ToggleBackgroundMusic_m30EA06C60B3114732EEFBC54E5C73527044F0966(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::MuteToggleSoundFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_MuteToggleSoundFX_m697D7C5A4EEB25E23CAD91558E0B807D92976966 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.Instance.ToggleSoundFX();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_6();
		NullCheck(L_0);
		SoundManager_ToggleSoundFX_mF7B3DA673E126E4F01A00E4F47BA71DB43CC1153(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::PrivacyPolicyClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_PrivacyPolicyClick_m0DCB3844D12104F6F433916C699458DF46DF66DB (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		// Application.OpenURL(url);
		String_t* L_0 = ___url0;
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility__ctor_mDF2F962B53BE7238ED6559B86238939367BB5CC3 (GameUtility_t71192D01261E7A69E8AD00FE2D314158C1E9F645 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GooglePlayServices::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_Awake_mB7C8F8C0306CED205E3747AA05A90A81C822084D (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesPlatform.DebugLogEnabled = true;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		PlayGamesPlatform_set_DebugLogEnabled_m2BFDD9004A757127E43D0C753E1CDF2271BDDADD((bool)1, /*hidden argument*/NULL);
		// PlayGamesPlatform.Activate();
		PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * L_0;
		L_0 = PlayGamesPlatform_Activate_m71AE35B28F18AC0D479F0E81263AAF91959A1A70(/*hidden argument*/NULL);
		// if (instance == null)
		GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * L_1 = ((GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_StaticFields*)il2cpp_codegen_static_fields_for(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// instance = this;
		((GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_StaticFields*)il2cpp_codegen_static_fields_for(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var))->set_instance_6(__this);
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// Destroy(instance);
		GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * L_3 = ((GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_StaticFields*)il2cpp_codegen_static_fields_for(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayServices::ShowLeaderboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_ShowLeaderboard_mC3458CA1586236580CE8C06EC9412832D3AB1F1A (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, const RuntimeMethod* method)
{
	{
		// Social.ShowLeaderboardUI();
		Social_ShowLeaderboardUI_mDD136D499783509D4BB9D9DE756FC68295160EAA(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayServices::UploadLeaderboardScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_UploadLeaderboardScore_m3FED71BDE152BB976579C7C2945F6801F878CC95 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, int32_t ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GooglePlayServices_U3CUploadLeaderboardScoreU3Eb__5_0_mABB7A9C7DEA149944779A06E3E404748B1EF32A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FAF071301A4ED5B45F92F4979809DC539D770FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Social.ReportScore(score, GPGSIds.leaderboard_high_score, (bool success) => {
		//     // handle success or failure
		//     playConsoleLeaderboardButton.SetActive(success);
		// });
		int32_t L_0 = ___score0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_1, __this, (intptr_t)((intptr_t)GooglePlayServices_U3CUploadLeaderboardScoreU3Eb__5_0_mABB7A9C7DEA149944779A06E3E404748B1EF32A9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		Social_ReportScore_m9D47693DE21BDF21D8933E2B039A96D7E579EE13(((int64_t)((int64_t)L_0)), _stringLiteral4FAF071301A4ED5B45F92F4979809DC539D770FF, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayServices::SendAchievement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_SendAchievement_m69519933473A6A02D91A5D134E33C9F2ADB96564 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, String_t* ___Id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSendAchievementU3Eb__6_0_m81BB25DE7EA58ECB3544485E8E6C8634D18D088F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	double G_B2_1 = 0.0;
	String_t* G_B2_2 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	double G_B1_1 = 0.0;
	String_t* G_B1_2 = NULL;
	{
		// Social.ReportProgress(Id,100.0f, (bool success) => {
		// 
		// });
		String_t* L_0 = ___Id0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = ((U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = (100.0);
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = (100.0);
			G_B2_2 = L_0;
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var);
		U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * L_3 = ((U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CSendAchievementU3Eb__6_0_m81BB25DE7EA58ECB3544485E8E6C8634D18D088F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_5 = L_4;
		((U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0029:
	{
		Social_ReportProgress_m67AE3F5F86D136BC2CF125204F66F0952F3CE743(G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayServices::SendIncrementalAchievement(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_SendIncrementalAchievement_mFE1DBDD59E5F387E931558DDBD62E5E5FE9F8BD4 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, String_t* ___Id0, int32_t ___steps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSendIncrementalAchievementU3Eb__7_0_mABE6288ED5304DAEA75EE4D587DF871418C9ECB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	String_t* G_B2_2 = NULL;
	PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * G_B2_3 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	String_t* G_B1_2 = NULL;
	PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * G_B1_3 = NULL;
	{
		// PlayGamesPlatform.Instance.IncrementAchievement(
		//     Id, steps, (bool success) => {
		//     // handle success or failure
		// });
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * L_0;
		L_0 = PlayGamesPlatform_get_Instance_mFD9A86E70DB559A9788DE546B2C9B4FE630BAB5E(/*hidden argument*/NULL);
		String_t* L_1 = ___Id0;
		int32_t L_2 = ___steps1;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ((U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var))->get_U3CU3E9__7_0_2();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var);
		U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * L_5 = ((U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CSendIncrementalAchievementU3Eb__7_0_mABE6288ED5304DAEA75EE4D587DF871418C9ECB9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = L_6;
		((U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var))->set_U3CU3E9__7_0_2(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0026:
	{
		NullCheck(G_B2_3);
		PlayGamesPlatform_IncrementAchievement_m86B9727EF598772D00DB3967AE6FA2E08C6248D3(G_B2_3, G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayServices::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_Start_m8A12A91B06696371C8542121B19FD6168062F3EC (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mBC28828857B91348D396A191917ECF8446058ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GooglePlayServices_ProcessAuthentication_m8307A308535B86B04796C250CFADF96AB6292D05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playConsoleLoginButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_playConsoleLoginButton_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// playConsoleLeaderboardButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_playConsoleLeaderboardButton_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// PlayGamesPlatform.Instance.Authenticate(ProcessAuthentication);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * L_2;
		L_2 = PlayGamesPlatform_get_Instance_mFD9A86E70DB559A9788DE546B2C9B4FE630BAB5E(/*hidden argument*/NULL);
		Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D * L_3 = (Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D *)il2cpp_codegen_object_new(Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D_il2cpp_TypeInfo_var);
		Action_1__ctor_mBC28828857B91348D396A191917ECF8446058ABD(L_3, __this, (intptr_t)((intptr_t)GooglePlayServices_ProcessAuthentication_m8307A308535B86B04796C250CFADF96AB6292D05_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mBC28828857B91348D396A191917ECF8446058ABD_RuntimeMethod_var);
		NullCheck(L_2);
		PlayGamesPlatform_Authenticate_m817BE9F953FE24AD96EB31796CB016D3817FFF17(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayServices::PlayGamesButtonToggle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_PlayGamesButtonToggle_m7642D9FC432A7BD0A580F67B0F85B54BBF9B4544 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, bool ___status0, const RuntimeMethod* method)
{
	{
		// playConsoleLoginButton.SetActive(status);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_playConsoleLoginButton_4();
		bool L_1 = ___status0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// playConsoleLeaderboardButton.SetActive(!status);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_playConsoleLeaderboardButton_5();
		bool L_3 = ___status0;
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayServices::ProcessAuthentication(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_ProcessAuthentication_m8307A308535B86B04796C250CFADF96AB6292D05 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5BE21AD03087F27EAB6A7566CD10058CEA003D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3A909C5355C2553F74070AAFD625A8AE02B7728);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (status == SignInStatus.Success)
		int32_t L_0 = ___status0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// PlayGamesButtonToggle(false);
		GooglePlayServices_PlayGamesButtonToggle_m7642D9FC432A7BD0A580F67B0F85B54BBF9B4544(__this, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("Passed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF3A909C5355C2553F74070AAFD625A8AE02B7728, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// PlayGamesButtonToggle(true);
		GooglePlayServices_PlayGamesButtonToggle_m7642D9FC432A7BD0A580F67B0F85B54BBF9B4544(__this, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("Failed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE5BE21AD03087F27EAB6A7566CD10058CEA003D9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayServices::ManualAuthButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_ManualAuthButtonClick_m78103E76D0DE049E63C6F15134AF4898FDEB4752 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mBC28828857B91348D396A191917ECF8446058ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GooglePlayServices_ProcessAuthentication_m8307A308535B86B04796C250CFADF96AB6292D05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC59829911F327DA2B3393AD531BBF3FC56E8603);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Button Clicked");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBC59829911F327DA2B3393AD531BBF3FC56E8603, /*hidden argument*/NULL);
		// PlayGamesPlatform.Instance.ManuallyAuthenticate(ProcessAuthentication);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * L_0;
		L_0 = PlayGamesPlatform_get_Instance_mFD9A86E70DB559A9788DE546B2C9B4FE630BAB5E(/*hidden argument*/NULL);
		Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D * L_1 = (Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D *)il2cpp_codegen_object_new(Action_1_t888B8738AD478EB3DB3617E6B8D92EE4D0ACE29D_il2cpp_TypeInfo_var);
		Action_1__ctor_mBC28828857B91348D396A191917ECF8446058ABD(L_1, __this, (intptr_t)((intptr_t)GooglePlayServices_ProcessAuthentication_m8307A308535B86B04796C250CFADF96AB6292D05_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mBC28828857B91348D396A191917ECF8446058ABD_RuntimeMethod_var);
		NullCheck(L_0);
		PlayGamesPlatform_ManuallyAuthenticate_m0AB56174D9AC324F190A48A0FDDB0FB3188DDE4B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayServices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices__ctor_mC6B319B08557D560638D37141B302A3DE41A40DB (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayServices::<UploadLeaderboardScore>b__5_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayServices_U3CUploadLeaderboardScoreU3Eb__5_0_mABB7A9C7DEA149944779A06E3E404748B1EF32A9 (GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * __this, bool ___success0, const RuntimeMethod* method)
{
	{
		// playConsoleLeaderboardButton.SetActive(success);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_playConsoleLeaderboardButton_5();
		bool L_1 = ___success0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// });
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
// System.Int32 GridSquare::get_SquareIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridSquare_get_SquareIndex_m2428AE36524626F71A239B640308DA769C82EC3B (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// public int SquareIndex { get; set; }
		int32_t L_0 = __this->get_U3CSquareIndexU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void GridSquare::set_SquareIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_set_SquareIndex_m88495923BF8116BF8D162DD74A782B57174BE352 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int SquareIndex { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSquareIndexU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void GridSquare::SetIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SetIndex_mFD940CF0FEB41682E32794C5ACE9BCD3982D4F37 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// public void SetIndex(int index) { _index = index; }
		int32_t L_0 = ___index0;
		__this->set__index_11(L_0);
		// public void SetIndex(int index) { _index = index; }
		return;
	}
}
// System.Int32 GridSquare::GetIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridSquare_GetIndex_m2F76A7FC9D0A3F3F3A25BDE9E3B59FC9B094725E (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// public int GetIndex() { return _index; }
		int32_t L_0 = __this->get__index_11();
		return L_0;
	}
}
// System.Void GridSquare::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_Start_m0B84CD678F279BDB356334B692F125D2517D44F1 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _selected = false;
		__this->set__selected_9((bool)0);
		// _clicked = false;
		__this->set__clicked_10((bool)0);
		// _correct = false;
		__this->set__correct_12((bool)0);
		// _displayedImage = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set__displayedImage_8(L_0);
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set__audioSource_13(L_1);
		// }
		return;
	}
}
// System.Void GridSquare::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnEnable_m81BA16D575F91335603CFC5EB9DEA65BCF19B1F3 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnSelectSquare_m63B9CF021C87CFE7043342FB45A133F3EC08FC91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnEnableSquareSelection += OnEnableSquareSelection;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)il2cpp_codegen_object_new(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		EnableSquareSelection__ctor_mC18B5802A1A87E228DAC086DE064856911226ABD(L_0, __this, (intptr_t)((intptr_t)GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnEnableSquareSelection_m0E6C578729FF0B3C488BA51BE98BA737651EA864(L_0, /*hidden argument*/NULL);
		// GameEvents.OnDisableSquareSelection += OnDisableSquareSelection;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)il2cpp_codegen_object_new(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		DisableSquareSelection__ctor_mFDD2839DE04959D8F9D9EA171228104EF920A399(L_1, __this, (intptr_t)((intptr_t)GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnDisableSquareSelection_m14703B8952735238988E06B5C67B243AB4819628(L_1, /*hidden argument*/NULL);
		// GameEvents.OnSelectSquare += OnSelectSquare;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_2 = (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)il2cpp_codegen_object_new(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		SelectSquare__ctor_m82FDAE68434676ED2BBEE14CAA7152F19E925864(L_2, __this, (intptr_t)((intptr_t)GridSquare_OnSelectSquare_m63B9CF021C87CFE7043342FB45A133F3EC08FC91_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnSelectSquare_mDDF923AC986685418F32AADD2425113376A74843(L_2, /*hidden argument*/NULL);
		// GameEvents.OnCorrectWord += CorrectWord;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_3 = (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)il2cpp_codegen_object_new(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9(L_3, __this, (intptr_t)((intptr_t)GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnCorrectWord_mC3BC1B6119FAD79FE60555FCA43986ACDABD4559(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnDisable_m7DC4A697B2DF06F2BA7B3BC8B2A3BEE568E03AFC (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnSelectSquare_m63B9CF021C87CFE7043342FB45A133F3EC08FC91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnEnableSquareSelection -= OnEnableSquareSelection;
		EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * L_0 = (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 *)il2cpp_codegen_object_new(EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0_il2cpp_TypeInfo_var);
		EnableSquareSelection__ctor_mC18B5802A1A87E228DAC086DE064856911226ABD(L_0, __this, (intptr_t)((intptr_t)GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnEnableSquareSelection_m39D9D1E64C14D7D98E0E0E9290DFD2E79A51581C(L_0, /*hidden argument*/NULL);
		// GameEvents.OnDisableSquareSelection -= OnDisableSquareSelection;
		DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * L_1 = (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B *)il2cpp_codegen_object_new(DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B_il2cpp_TypeInfo_var);
		DisableSquareSelection__ctor_mFDD2839DE04959D8F9D9EA171228104EF920A399(L_1, __this, (intptr_t)((intptr_t)GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnDisableSquareSelection_m19C33F7966BE69CDA5B4D7DEC8BA15E9C0863D81(L_1, /*hidden argument*/NULL);
		// GameEvents.OnSelectSquare -= OnSelectSquare;
		SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * L_2 = (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 *)il2cpp_codegen_object_new(SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6_il2cpp_TypeInfo_var);
		SelectSquare__ctor_m82FDAE68434676ED2BBEE14CAA7152F19E925864(L_2, __this, (intptr_t)((intptr_t)GridSquare_OnSelectSquare_m63B9CF021C87CFE7043342FB45A133F3EC08FC91_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnSelectSquare_mBD09E7C9EDA7C94C21A816DCFB9B55C0A5EB7262(L_2, /*hidden argument*/NULL);
		// GameEvents.OnCorrectWord -= CorrectWord;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_3 = (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)il2cpp_codegen_object_new(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9(L_3, __this, (intptr_t)((intptr_t)GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnCorrectWord_m6FEDD292A833D4C09E442E1B128A337591E05DB1(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::CorrectWord(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_CorrectWord_mEDFC4665F663E36386792152FDB38641A626C2CD (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_selected && squareIndexes.Contains(_index))
		bool L_0 = __this->get__selected_9();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = ___squareIndexes1;
		int32_t L_2 = __this->get__index_11();
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_1, L_2, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// _correct = true;
		__this->set__correct_12((bool)1);
		// _displayedImage.sprite = _correctLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_5 = __this->get__correctLetterData_7();
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5->get_image_1();
		NullCheck(L_4);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// _selected = false;
		__this->set__selected_9((bool)0);
		// _clicked = false;
		__this->set__clicked_10((bool)0);
		// }
		return;
	}
}
// System.Void GridSquare::OnEnableSquareSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// _clicked = true;
		__this->set__clicked_10((bool)1);
		// _selected = false;
		__this->set__selected_9((bool)0);
		// }
		return;
	}
}
// System.Void GridSquare::OnDisableSquareSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnDisableSquareSelection_m0C101965167711ED53DAA04FD65EAB632A30CDAE (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// _selected = false;
		__this->set__selected_9((bool)0);
		// _clicked = false;
		__this->set__clicked_10((bool)0);
		// if (_correct == true)
		bool L_0 = __this->get__correct_12();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// _displayedImage.sprite = _correctLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_2 = __this->get__correctLetterData_7();
		NullCheck(L_2);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2->get_image_1();
		NullCheck(L_1);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_1, L_3, /*hidden argument*/NULL);
		return;
	}

IL_002d:
	{
		// _displayedImage.sprite = _normalLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_5 = __this->get__normalLetterData_5();
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5->get_image_1();
		NullCheck(L_4);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnSelectSquare(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnSelectSquare_m63B9CF021C87CFE7043342FB45A133F3EC08FC91 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	{
		// if(this.gameObject.transform.position == position)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___position0;
		bool L_4;
		L_4 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// _displayedImage.sprite = _selectedLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_6 = __this->get__selectedLetterData_6();
		NullCheck(L_6);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = L_6->get_image_1();
		NullCheck(L_5);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_5, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void GridSquare::SetSprite(AlphabetData/LetterData,AlphabetData/LetterData,AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SetSprite_mE3C9CA312F6C8FD1747C84004C512EC1A68BE374 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___normalLetterData0, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___selectedLetterData1, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___correctLetterData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _normalLetterData = normalLetterData;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_0 = ___normalLetterData0;
		__this->set__normalLetterData_5(L_0);
		// _selectedLetterData = selectedLetterData;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_1 = ___selectedLetterData1;
		__this->set__selectedLetterData_6(L_1);
		// _correctLetterData = correctLetterData;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_2 = ___correctLetterData2;
		__this->set__correctLetterData_7(L_2);
		// GetComponent<SpriteRenderer>().sprite = _normalLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_4 = __this->get__normalLetterData_5();
		NullCheck(L_4);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = L_4->get_image_1();
		NullCheck(L_3);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnMouseDown_m2C26127DCE1414F3600EDFD0216EFEF2F99FB745 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// OnEnableSquareSelection();
		GridSquare_OnEnableSquareSelection_mC0DC16A5736B7026EFD28C536E7DAC110CB16596(__this, /*hidden argument*/NULL);
		// GameEvents.EnableSquareSelectionMethod();
		GameEvents_EnableSquareSelectionMethod_mD0DBA922E5C919E7E6049CCEFD9556040CCECA19(/*hidden argument*/NULL);
		// CheckSquare();
		GridSquare_CheckSquare_m00575FEF4EBCA31610D8BBAEA1A9B4C50615952E(__this, /*hidden argument*/NULL);
		// _displayedImage.sprite = _selectedLetterData.image;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get__displayedImage_8();
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_1 = __this->get__selectedLetterData_6();
		NullCheck(L_1);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = L_1->get_image_1();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnMouseEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnMouseEnter_m83CDC0C22AEA59606D728B10BC8A5A04A1FA6770 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// CheckSquare();
		GridSquare_CheckSquare_m00575FEF4EBCA31610D8BBAEA1A9B4C50615952E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnMouseUp_m2D5F21FFF6009A3FE46F82BF3B058FF3AD81FCD1 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// GameEvents.ClearSelectionMethod();
		GameEvents_ClearSelectionMethod_mD9FCC0A1AEAFC2740D67CDEB2DA6764232B2B783(/*hidden argument*/NULL);
		// GameEvents.DisableSquareSelectionMethod();
		GameEvents_DisableSquareSelectionMethod_m95A35BDAC07AAD8A1733DFC61C2F8B138529E54B(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridSquare::CheckSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_CheckSquare_m00575FEF4EBCA31610D8BBAEA1A9B4C50615952E (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_selected == false && _clicked == true)
		bool L_0 = __this->get__selected_9();
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		bool L_1 = __this->get__clicked_10();
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// if(SoundManager.Instance.IsSoundFXMuted() == false)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_2 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_6();
		NullCheck(L_2);
		bool L_3;
		L_3 = SoundManager_IsSoundFXMuted_mE2170C03EDDFC1E0E42E9AE4D5925AB69849E0DC_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// _audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get__audioSource_13();
		NullCheck(L_4);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// _selected = true;
		__this->set__selected_9((bool)1);
		// GameEvents.CheckSquareMethod(_normalLetterData.letter, gameObject.transform.position, _index);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_5 = __this->get__normalLetterData_5();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_letter_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		int32_t L_10 = __this->get__index_11();
		GameEvents_CheckSquareMethod_m18018E538BCED705BBD5E938BD830FE984D439D2(L_6, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void GridSquare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare__ctor_mFF3DD134AD63D7534FE89FF26C1D6623D7426798 (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, const RuntimeMethod* method)
{
	{
		// private int _index = -1;
		__this->set__index_11((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SearchingWord::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_Start_mC96263F691630D45F97BDA2042A75FEDE924776A (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SearchingWord::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_OnEnable_mA0584F339FFA06ECAB05441C2CC76F6E275E1A24 (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCorrectWord += CorrectWord;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)il2cpp_codegen_object_new(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9(L_0, __this, (intptr_t)((intptr_t)SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnCorrectWord_mC3BC1B6119FAD79FE60555FCA43986ACDABD4559(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SearchingWord::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_OnDisable_mBF96794A92CC340C10E45A1D97A80CC62C4060EA (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCorrectWord -= CorrectWord;
		CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * L_0 = (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA *)il2cpp_codegen_object_new(CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA_il2cpp_TypeInfo_var);
		CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9(L_0, __this, (intptr_t)((intptr_t)SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnCorrectWord_m6FEDD292A833D4C09E442E1B128A337591E05DB1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SearchingWord::SetWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_SetWord_m2492677D4725481B63D28CD1FEB836C160E9B8EC (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, String_t* ___word0, const RuntimeMethod* method)
{
	{
		// _word = word;
		String_t* L_0 = ___word0;
		__this->set__word_6(L_0);
		// displayedText.text = word;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_displayedText_4();
		String_t* L_2 = ___word0;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void SearchingWord::CorrectWord(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_CorrectWord_m72BDEE1919EDA16908B1F4885BEBF6A43BB4232C (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method)
{
	{
		// if(word == _word)
		String_t* L_0 = ___word0;
		String_t* L_1 = __this->get__word_6();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// crossLine.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_crossLine_5();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SearchingWord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord__ctor_m27168B0CD0410701BFF768E430228233D0653FEF (SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SearchingWordsList::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_Start_m97709581B9DFB42966881DAC6D2D6E7AC57424C3 (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8B4A270BFCF223F52CFA9F106DAF3CA111A587B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _wordsNumber = currentGameData.selectedBoardData.SearchWords.Count;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		NullCheck(L_0);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_1 = L_0->get_selectedBoardData_5();
		NullCheck(L_1);
		List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * L_2 = L_1->get_SearchWords_8();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m8B4A270BFCF223F52CFA9F106DAF3CA111A587B1_inline(L_2, /*hidden argument*/List_1_get_Count_m8B4A270BFCF223F52CFA9F106DAF3CA111A587B1_RuntimeMethod_var);
		__this->set__wordsNumber_11(L_3);
		// if (_wordsNumber < _columns)
		int32_t L_4 = __this->get__wordsNumber_11();
		int32_t L_5 = __this->get__columns_9();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0032;
		}
	}
	{
		// _rows = 1;
		__this->set__rows_10(1);
		goto IL_0038;
	}

IL_0032:
	{
		// CalculateColumnsAndRowsNumber();
		SearchingWordsList_CalculateColumnsAndRowsNumber_m63882F869B783B559456D5D172F45B9FCEF86E6E(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// CreateWordObject();
		SearchingWordsList_CreateWordObject_mE22D356CBBF872B616F7006F6B20EB321E343693(__this, /*hidden argument*/NULL);
		// SetWordsPosition();
		SearchingWordsList_SetWordsPosition_mF76BFC8C9115FCC9F5AFD2310797E0CF07CAD47B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SearchingWordsList::CalculateColumnsAndRowsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_CalculateColumnsAndRowsNumber_m63882F869B783B559456D5D172F45B9FCEF86E6E (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method)
{

IL_0000:
	{
		// _columns++;
		int32_t L_0 = __this->get__columns_9();
		__this->set__columns_9(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// _rows = _wordsNumber / _columns;
		int32_t L_1 = __this->get__wordsNumber_11();
		int32_t L_2 = __this->get__columns_9();
		__this->set__rows_10(((int32_t)((int32_t)L_1/(int32_t)L_2)));
		// } while (_rows >= maxRows);
		int32_t L_3 = __this->get__rows_10();
		int32_t L_4 = __this->get_maxRows_8();
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0000;
		}
	}
	{
		// if(_columns > maxColumns)
		int32_t L_5 = __this->get__columns_9();
		int32_t L_6 = __this->get_maxColumns_7();
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_005c;
		}
	}
	{
		// _columns = maxColumns;
		int32_t L_7 = __this->get_maxColumns_7();
		__this->set__columns_9(L_7);
		// _rows = _wordsNumber / _columns;
		int32_t L_8 = __this->get__wordsNumber_11();
		int32_t L_9 = __this->get__columns_9();
		__this->set__rows_10(((int32_t)((int32_t)L_8/(int32_t)L_9)));
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Boolean SearchingWordsList::TryIncreaseColumnNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchingWordsList_TryIncreaseColumnNumber_m27D3A4F4BF3BDFF138D4B7886A03E8A76193E03D (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method)
{
	{
		// _columns++;
		int32_t L_0 = __this->get__columns_9();
		__this->set__columns_9(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// _rows = _wordsNumber / _columns;
		int32_t L_1 = __this->get__wordsNumber_11();
		int32_t L_2 = __this->get__columns_9();
		__this->set__rows_10(((int32_t)((int32_t)L_1/(int32_t)L_2)));
		// if(_columns > maxColumns)
		int32_t L_3 = __this->get__columns_9();
		int32_t L_4 = __this->get_maxColumns_7();
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0050;
		}
	}
	{
		// _columns = maxColumns;
		int32_t L_5 = __this->get_maxColumns_7();
		__this->set__columns_9(L_5);
		// _rows = _wordsNumber / _columns;
		int32_t L_6 = __this->get__wordsNumber_11();
		int32_t L_7 = __this->get__columns_9();
		__this->set__rows_10(((int32_t)((int32_t)L_6/(int32_t)L_7)));
		// return false;
		return (bool)0;
	}

IL_0050:
	{
		// if (_wordsNumber % _columns > 0)
		int32_t L_8 = __this->get__wordsNumber_11();
		int32_t L_9 = __this->get__columns_9();
		if ((((int32_t)((int32_t)((int32_t)L_8%(int32_t)L_9))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		// _rows++;
		int32_t L_10 = __this->get__rows_10();
		__this->set__rows_10(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_006e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void SearchingWordsList::CreateWordObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_CreateWordObject_mE22D356CBBF872B616F7006F6B20EB321E343693 (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE567CEFD9C8255DDE843542378C658E43823140A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var squareScale = GetSquareScale(new Vector3(1f, 1f, 0.1f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (1.0f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = SearchingWordsList_GetSquareScale_m7171AD5E8F8F3304791D133C1280D204F52C5069(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// for(var index = 0; index < _wordsNumber; index++)
		V_1 = 0;
		goto IL_00ca;
	}

IL_0022:
	{
		// _words.Add(Instantiate(searchingWordPrefab) as GameObject);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get__words_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_searchingWordPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_2, L_4, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// _words[index].transform.SetParent(this.transform);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get__words_12();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_8, L_9, /*hidden argument*/NULL);
		// _words[index].GetComponent<RectTransform>().localScale = squareScale;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get__words_12();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_12);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13;
		L_13 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_12, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		NullCheck(L_13);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_13, L_14, /*hidden argument*/NULL);
		// _words[index].GetComponent<RectTransform>().localPosition = new Vector3(0f, 0f, 0f);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = __this->get__words_12();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_17);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_18;
		L_18 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_18, L_19, /*hidden argument*/NULL);
		// _words[index].GetComponent<SearchingWord>().SetWord(currentGameData.selectedBoardData.SearchWords[index].Word);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = __this->get__words_12();
		int32_t L_21 = V_1;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_22);
		SearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B * L_23;
		L_23 = GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9(L_22, /*hidden argument*/GameObject_GetComponent_TisSearchingWord_tE271A9D594402B1519A9AE5FB2DF26899E452A2B_m6F9B3FED700BA77BBBB01275723FEB8FED5B64C9_RuntimeMethod_var);
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_24 = __this->get_currentGameData_4();
		NullCheck(L_24);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_25 = L_24->get_selectedBoardData_5();
		NullCheck(L_25);
		List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * L_26 = L_25->get_SearchWords_8();
		int32_t L_27 = V_1;
		NullCheck(L_26);
		SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * L_28;
		L_28 = List_1_get_Item_mE567CEFD9C8255DDE843542378C658E43823140A_inline(L_26, L_27, /*hidden argument*/List_1_get_Item_mE567CEFD9C8255DDE843542378C658E43823140A_RuntimeMethod_var);
		NullCheck(L_28);
		String_t* L_29 = L_28->get_Word_1();
		NullCheck(L_23);
		SearchingWord_SetWord_m2492677D4725481B63D28CD1FEB836C160E9B8EC(L_23, L_29, /*hidden argument*/NULL);
		// for(var index = 0; index < _wordsNumber; index++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00ca:
	{
		// for(var index = 0; index < _wordsNumber; index++)
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get__wordsNumber_11();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0022;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 SearchingWordsList::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SearchingWordsList_GetSquareScale_m7171AD5E8F8F3304791D133C1280D204F52C5069 (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultScale0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var finalScale = defaultScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___defaultScale0;
		V_0 = L_0;
		// var adjustment = 0.01f;
		V_1 = (0.00999999978f);
		goto IL_004e;
	}

IL_000a:
	{
		// finalScale.x -= adjustment;
		float* L_1 = (&V_0)->get_address_of_x_2();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = V_1;
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		// finalScale.y -= adjustment;
		float* L_5 = (&V_0)->get_address_of_y_3();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = V_1;
		*((float*)L_6) = (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
		// if(finalScale.x <= 0 || finalScale.y <= 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_x_2();
		if ((((float)L_10) <= ((float)(0.0f))))
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}

IL_003c:
	{
		// finalScale.x = adjustment;
		float L_13 = V_1;
		(&V_0)->set_x_2(L_13);
		// finalScale.y = adjustment;
		float L_14 = V_1;
		(&V_0)->set_y_3(L_14);
		// return finalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		return L_15;
	}

IL_004e:
	{
		// while (ShouldScaleDown(finalScale))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		bool L_17;
		L_17 = SearchingWordsList_ShouldScaleDown_m3109C0B8E0BB95B288F45520F18675BD0AADC929(__this, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_000a;
		}
	}
	{
		// return finalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		return L_18;
	}
}
// System.Boolean SearchingWordsList::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchingWordsList_ShouldScaleDown_m3109C0B8E0BB95B288F45520F18675BD0AADC929 (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetScale0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var squareRect = searchingWordPrefab.GetComponent<RectTransform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_searchingWordPrefab_5();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		V_0 = L_1;
		// var parentRect = this.GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		V_1 = L_2;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		// squareSize.x = squareRect.rect.width * targetScale.x + offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = V_0;
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		float L_5;
		L_5 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___targetScale0;
		float L_7 = L_6.get_x_2();
		float L_8 = __this->get_offset_6();
		(&V_2)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), (float)L_8)));
		// squareSize.y = squareRect.rect.height * targetScale.y + offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = V_0;
		NullCheck(L_9);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		L_10 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11;
		L_11 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___targetScale0;
		float L_13 = L_12.get_y_3();
		float L_14 = __this->get_offset_6();
		(&V_2)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)), (float)L_14)));
		// var totalSquaresHeight = squareSize.y * _rows;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_2;
		float L_16 = L_15.get_y_1();
		int32_t L_17 = __this->get__rows_10();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_16, (float)((float)((float)L_17))));
		// if(totalSquaresHeight > parentRect.rect.height)
		float L_18 = V_3;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_19 = V_1;
		NullCheck(L_19);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
		L_20 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21;
		L_21 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_18) > ((float)L_21))))
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_00aa;
	}

IL_008f:
	{
		// if (TryIncreaseColumnNumber())
		bool L_22;
		L_22 = SearchingWordsList_TryIncreaseColumnNumber_m27D3A4F4BF3BDFF138D4B7886A03E8A76193E03D(__this, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a8;
		}
	}
	{
		// totalSquaresHeight = squareSize.y * _rows;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_2;
		float L_24 = L_23.get_y_1();
		int32_t L_25 = __this->get__rows_10();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_24, (float)((float)((float)L_25))));
		// }
		goto IL_00aa;
	}

IL_00a8:
	{
		// return true;
		return (bool)1;
	}

IL_00aa:
	{
		// while(totalSquaresHeight > parentRect.rect.height)
		float L_26 = V_3;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_27 = V_1;
		NullCheck(L_27);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_28;
		L_28 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((((float)L_26) > ((float)L_29)))
		{
			goto IL_008f;
		}
	}

IL_00bc:
	{
		// var totalSquareWidth = squareSize.x * _columns;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_2;
		float L_31 = L_30.get_x_0();
		int32_t L_32 = __this->get__columns_9();
		// if (totalSquareWidth > parentRect.rect.width)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33 = V_1;
		NullCheck(L_33);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_34;
		L_34 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		float L_35;
		L_35 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_multiply((float)L_31, (float)((float)((float)L_32))))) > ((float)L_35))))
		{
			goto IL_00dd;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00dd:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void SearchingWordsList::SetWordsPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_SetWordsPosition_mF76BFC8C9115FCC9F5AFD2310797E0CF07CAD47B (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	{
		// var squareRect = _words[0].GetComponent<RectTransform>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get__words_12();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_1);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_1, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		V_0 = L_2;
		// var wordOffset = new Vector2
		// {
		//     x = squareRect.rect.width * squareRect.transform.localScale.x + offset,
		//     y = squareRect.rect.height * squareRect.transform.localScale.y + offset
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = V_0;
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_6 = L_4;
		float L_5;
		L_5 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_6), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = V_0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = __this->get_offset_6();
		(&V_5)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_9)), (float)L_10)));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = V_0;
		NullCheck(L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		L_12 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_11, /*hidden argument*/NULL);
		V_6 = L_12;
		float L_13;
		L_13 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_6), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_14 = V_0;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		float L_18 = __this->get_offset_6();
		(&V_5)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_17)), (float)L_18)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_5;
		V_1 = L_19;
		// int columnNumber = 0;
		V_2 = 0;
		// int rowNumber = 0;
		V_3 = 0;
		// var startPosition = GetFirstSquarePosition();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = SearchingWordsList_GetFirstSquarePosition_m2972AE424F4CF33E9CA2B1816B8CFBD628E60602(__this, /*hidden argument*/NULL);
		V_4 = L_20;
		// foreach(var word in _words)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_21 = __this->get__words_12();
		NullCheck(L_21);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_22;
		L_22 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_21, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_7 = L_22;
	}

IL_0092:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ee;
		}

IL_0094:
		{
			// foreach(var word in _words)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
			L_23 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// if(columnNumber + 1 > _columns)
			int32_t L_24 = V_2;
			int32_t L_25 = __this->get__columns_9();
			G_B3_0 = L_23;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))) <= ((int32_t)L_25)))
			{
				G_B4_0 = L_23;
				goto IL_00ac;
			}
		}

IL_00a6:
		{
			// columnNumber = 0;
			V_2 = 0;
			// rowNumber++;
			int32_t L_26 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
			G_B4_0 = G_B3_0;
		}

IL_00ac:
		{
			// var positionX = startPosition.x + wordOffset.x * columnNumber;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_4;
			float L_28 = L_27.get_x_0();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_1;
			float L_30 = L_29.get_x_0();
			int32_t L_31 = V_2;
			V_8 = ((float)il2cpp_codegen_add((float)L_28, (float)((float)il2cpp_codegen_multiply((float)L_30, (float)((float)((float)L_31))))));
			// var positionY = startPosition.y - wordOffset.y * rowNumber;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_4;
			float L_33 = L_32.get_y_1();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = V_1;
			float L_35 = L_34.get_y_1();
			int32_t L_36 = V_3;
			V_9 = ((float)il2cpp_codegen_subtract((float)L_33, (float)((float)il2cpp_codegen_multiply((float)L_35, (float)((float)((float)L_36))))));
			// word.GetComponent<RectTransform>().localPosition = new Vector2(positionX, positionY);
			NullCheck(G_B4_0);
			RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_37;
			L_37 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(G_B4_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
			float L_38 = V_8;
			float L_39 = V_9;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
			memset((&L_40), 0, sizeof(L_40));
			Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_40), L_38, L_39, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_37, L_41, /*hidden argument*/NULL);
			// columnNumber++;
			int32_t L_42 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00ee:
		{
			// foreach(var word in _words)
			bool L_43;
			L_43 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_43)
			{
				goto IL_0094;
			}
		}

IL_00f7:
		{
			IL2CPP_LEAVE(0x107, FINALLY_00f9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f9;
	}

FINALLY_00f9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(249)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(249)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x107, IL_0107)
	}

IL_0107:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 SearchingWordsList::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SearchingWordsList_GetFirstSquarePosition_m2972AE424F4CF33E9CA2B1816B8CFBD628E60602 (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_1 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_2 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var startPosition = new Vector2(0f, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (0.0f), L_2, /*hidden argument*/NULL);
		// var squareRect = _words[0].GetComponent<RectTransform>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get__words_12();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_3, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_4);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_4, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		V_1 = L_5;
		// var parentRect = this.GetComponent <RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6;
		L_6 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		V_2 = L_6;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		// squareSize.x = squareRect.rect.width * squareRect.transform.localScale.x + offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = V_1;
		NullCheck(L_7);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		L_8 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_7, /*hidden argument*/NULL);
		V_5 = L_8;
		float L_9;
		L_9 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		float L_14 = __this->get_offset_6();
		(&V_3)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_13)), (float)L_14)));
		// squareSize.y = squareRect.rect.height * squareRect.transform.localScale.y + offset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = V_1;
		NullCheck(L_15);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		L_16 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17;
		L_17 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_18 = V_1;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_y_3();
		float L_22 = __this->get_offset_6();
		(&V_3)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_21)), (float)L_22)));
		// var shiftBy = (parentRect.rect.width - (squareSize.x * _columns)) / 2;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_23 = V_2;
		NullCheck(L_23);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
		L_24 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		float L_25;
		L_25 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = V_3;
		float L_27 = L_26.get_x_0();
		int32_t L_28 = __this->get__columns_9();
		V_4 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_25, (float)((float)il2cpp_codegen_multiply((float)L_27, (float)((float)((float)L_28))))))/(float)(2.0f)));
		// startPosition.x = ((parentRect.rect.width - squareSize.x) / 2) * (-1);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_29 = V_2;
		NullCheck(L_29);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_30;
		L_30 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		float L_31;
		L_31 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_3;
		float L_33 = L_32.get_x_0();
		(&V_0)->set_x_0(((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_31, (float)L_33))/(float)(2.0f))), (float)(-1.0f))));
		// startPosition.x += shiftBy;
		float* L_34 = (&V_0)->get_address_of_x_0();
		float* L_35 = L_34;
		float L_36 = *((float*)L_35);
		float L_37 = V_4;
		*((float*)L_35) = (float)((float)il2cpp_codegen_add((float)L_36, (float)L_37));
		// startPosition.y = (parentRect.rect.height - squareSize.y) / 2;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_38 = V_2;
		NullCheck(L_38);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_39;
		L_39 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_38, /*hidden argument*/NULL);
		V_5 = L_39;
		float L_40;
		L_40 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_3;
		float L_42 = L_41.get_y_1();
		(&V_0)->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_40, (float)L_42))/(float)(2.0f))));
		// return startPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = V_0;
		return L_43;
	}
}
// System.Void SearchingWordsList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList__ctor_m02B4B615524CC6D5093835B5AF4C04DB662D9CFA (SearchingWordsList_t1AA38C98B8D4ADA67D2043C34C865E7EE9A9B692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int maxColumns = 5;
		__this->set_maxColumns_7(5);
		// public int maxRows = 4;
		__this->set_maxRows_8(4);
		// private int _columns = 2;
		__this->set__columns_9(2);
		// private List<GameObject> _words = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set__words_12(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SelectPuzzleButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_Start_m41E025EA8632AF3A909151F884D0A02138B78CFA (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectPuzzleButton_OnButtonClick_m4A1A28F45E16E9486185DC3D2A985C9E8771A0A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_0 = NULL;
	{
		// _levelLocked = false;
		__this->set__levelLocked_10((bool)0);
		// var button = GetComponent<Button>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0;
		L_0 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		V_0 = L_0;
		// button.onClick.AddListener(OnButtonClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = V_0;
		NullCheck(L_1);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_2;
		L_2 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_1, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)SelectPuzzleButton_OnButtonClick_m4A1A28F45E16E9486185DC3D2A985C9E8771A0A6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_2, L_3, /*hidden argument*/NULL);
		// UpdateButtonInformation();
		SelectPuzzleButton_UpdateButtonInformation_mA51403EB08BCAC28B35B43FEA345362CBC364DED(__this, /*hidden argument*/NULL);
		// if (_levelLocked)
		bool L_4 = __this->get__levelLocked_10();
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// lockImage.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_lockImage_8();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)1, /*hidden argument*/NULL);
		// button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = V_0;
		NullCheck(L_6);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0047:
	{
		// lockImage.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_lockImage_8();
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
		// button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = V_0;
		NullCheck(L_8);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_OnEnable_m87561A68C6085C7F8ED6EF9E92A4BD56C72BD08B (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectPuzzleButton_InterstitialAdClosed_m5B088185B6505B908D6997AD5CD636F4F550CBDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdManager.OnInterstitialAdsClosed += InterstitialAdClosed;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_OnInterstitialAdsClosed_12();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)SelectPuzzleButton_InterstitialAdClosed_m5B088185B6505B908D6997AD5CD636F4F550CBDC_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->set_OnInterstitialAdsClosed_12(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_OnDisable_m58814406C68C41293912F9A78F6A61BED2D728B4 (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectPuzzleButton_InterstitialAdClosed_m5B088185B6505B908D6997AD5CD636F4F550CBDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdManager.OnInterstitialAdsClosed -= InterstitialAdClosed;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_OnInterstitialAdsClosed_12();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)SelectPuzzleButton_InterstitialAdClosed_m5B088185B6505B908D6997AD5CD636F4F550CBDC_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->set_OnInterstitialAdsClosed_12(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::InterstitialAdClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_InterstitialAdClosed_m5B088185B6505B908D6997AD5CD636F4F550CBDC (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::UpdateButtonInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_UpdateButtonInformation_mA51403EB08BCAC28B35B43FEA345362CBC364DED (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  V_2;
	memset((&V_2), 0, sizeof(V_2));
	CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B13_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B14_1 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B16_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B15_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B17_0 = NULL;
	float G_B18_0 = 0.0f;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B18_1 = NULL;
	{
		// var currentIndex = -1;
		V_0 = (-1);
		// var totalBoards = 0;
		V_1 = 0;
		// foreach(var data in levelData.data)
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_0 = __this->get_levelData_5();
		NullCheck(L_0);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_1 = L_0->get_data_4();
		NullCheck(L_1);
		Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18  L_2;
		L_2 = List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E(L_1, /*hidden argument*/List_1_GetEnumerator_m3208DD260F9D6EF28AEDA8246E3CF448E5306F5E_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bf;
		}

IL_001a:
		{
			// foreach(var data in levelData.data)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_3;
			L_3 = Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_inline((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_RuntimeMethod_var);
			V_3 = L_3;
			// if(data.catrgoryName == gameObject.name)
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_4 = V_3;
			String_t* L_5 = L_4.get_catrgoryName_0();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
			L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			String_t* L_7;
			L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
			bool L_8;
			L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_00bf;
			}
		}

IL_003d:
		{
			// currentIndex = DataSaver.ReadCategoryCurrentIndexValues(gameObject.name);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
			L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_9);
			String_t* L_10;
			L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
			int32_t L_11;
			L_11 = DataSaver_ReadCategoryCurrentIndexValues_mCFCC7043C966B844D136A3249634B0F9019A75C2(L_10, /*hidden argument*/NULL);
			V_0 = L_11;
			// totalBoards = data.boardData.Count;
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_12 = V_3;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_13 = L_12.get_boardData_1();
			NullCheck(L_13);
			int32_t L_14;
			L_14 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_13, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
			V_1 = L_14;
			// if(levelData.data[0].catrgoryName == gameObject.name && currentIndex < 0)
			GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_15 = __this->get_levelData_5();
			NullCheck(L_15);
			List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_16 = L_15->get_data_4();
			NullCheck(L_16);
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_17;
			L_17 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_16, 0, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
			String_t* L_18 = L_17.get_catrgoryName_0();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
			L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_20;
			L_20 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_19, /*hidden argument*/NULL);
			bool L_21;
			L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00bf;
			}
		}

IL_0082:
		{
			int32_t L_22 = V_0;
			if ((((int32_t)L_22) >= ((int32_t)0)))
			{
				goto IL_00bf;
			}
		}

IL_0086:
		{
			// DataSaver.SaveCategoryData(levelData.data[0].catrgoryName, 0);
			GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_23 = __this->get_levelData_5();
			NullCheck(L_23);
			List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_24 = L_23->get_data_4();
			NullCheck(L_24);
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_25;
			L_25 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_24, 0, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
			String_t* L_26 = L_25.get_catrgoryName_0();
			IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
			DataSaver_SaveCategoryData_m00EAA18ECD83406F881A3FF376F9BB569428334F(L_26, 0, /*hidden argument*/NULL);
			// currentIndex = DataSaver.ReadCategoryCurrentIndexValues(gameObject.name);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
			L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_27);
			String_t* L_28;
			L_28 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_27, /*hidden argument*/NULL);
			int32_t L_29;
			L_29 = DataSaver_ReadCategoryCurrentIndexValues_mCFCC7043C966B844D136A3249634B0F9019A75C2(L_28, /*hidden argument*/NULL);
			V_0 = L_29;
			// totalBoards = data.boardData.Count;
			CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_30 = V_3;
			List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_31 = L_30.get_boardData_1();
			NullCheck(L_31);
			int32_t L_32;
			L_32 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_31, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
			V_1 = L_32;
		}

IL_00bf:
		{
			// foreach(var data in levelData.data)
			bool L_33;
			L_33 = Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mA115FC6529B8B8CB144BDA7F3F606A842E1818C2_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_001a;
			}
		}

IL_00cb:
		{
			IL2CPP_LEAVE(0xDB, FINALLY_00cd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cd;
	}

FINALLY_00cd:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A((Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m7ACA8D2F21D8349DE8FCFFA50D895ECDAA49861A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(205)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(205)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDB, IL_00db)
	}

IL_00db:
	{
		// if(currentIndex == -1)
		int32_t L_34 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e6;
		}
	}
	{
		// _levelLocked = true;
		__this->set__levelLocked_10((bool)1);
	}

IL_00e6:
	{
		// categoryText.text = _levelLocked ? string.Empty : (currentIndex.ToString() + "/" + totalBoards.ToString());
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_35 = __this->get_categoryText_6();
		bool L_36 = __this->get__levelLocked_10();
		G_B12_0 = L_35;
		if (L_36)
		{
			G_B13_0 = L_35;
			goto IL_010e;
		}
	}
	{
		String_t* L_37;
		L_37 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_39;
		L_39 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_37, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_38, /*hidden argument*/NULL);
		G_B14_0 = L_39;
		G_B14_1 = G_B12_0;
		goto IL_0113;
	}

IL_010e:
	{
		String_t* L_40 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B14_0 = L_40;
		G_B14_1 = G_B13_0;
	}

IL_0113:
	{
		NullCheck(G_B14_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B14_1, G_B14_0);
		// progressBarFilling.fillAmount = (currentIndex > 0 && totalBoards > 0) ? ((float) currentIndex / (float ) totalBoards) : 0f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = __this->get_progressBarFilling_7();
		int32_t L_42 = V_0;
		G_B15_0 = L_41;
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			G_B16_0 = L_41;
			goto IL_0126;
		}
	}
	{
		int32_t L_43 = V_1;
		G_B16_0 = G_B15_0;
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			G_B17_0 = G_B15_0;
			goto IL_012d;
		}
	}

IL_0126:
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_0132;
	}

IL_012d:
	{
		int32_t L_44 = V_0;
		int32_t L_45 = V_1;
		G_B18_0 = ((float)((float)((float)((float)L_44))/(float)((float)((float)L_45))));
		G_B18_1 = G_B17_0;
	}

IL_0132:
	{
		NullCheck(G_B18_1);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(G_B18_1, G_B18_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton_OnButtonClick_m4A1A28F45E16E9486185DC3D2A985C9E8771A0A6 (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdManager.instance.ShowInterstitialAd();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_0);
		AdManager_ShowInterstitialAd_m35910EAB17673DAFCFA396B79C121746C0B8E4A1(L_0, /*hidden argument*/NULL);
		// gameData.selectedCategoryName = gameObject.name;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_1 = __this->get_gameData_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_selectedCategoryName_4(L_3);
		// SceneManager.LoadScene(gameSceneName);
		String_t* L_4 = __this->get_gameSceneName_9();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SelectPuzzleButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectPuzzleButton__ctor_mD345BF6E24AB90F00AD1338C25438742C761D216 (SelectPuzzleButton_t5CE5A0A523D3FD304C4DE46B4BCD8DFE7414B918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string gameSceneName = "GameScene";
		__this->set_gameSceneName_9(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SettingsScene::ClearGameData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsScene_ClearGameData_mFC959AEE3FA401DE29E30ECC91DB37AF8593E012 (SettingsScene_t23D56BF3ED393FAF0689AD64FA2BD5CD79F8A6A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataSaver.ClearGameData(levelData);
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_0 = __this->get_levelData_4();
		IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		DataSaver_ClearGameData_m683F3B272944D2963EC6EA9FF845FA9C22113D9B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsScene__ctor_mAF866C40B7DD77AAAEA33FCA99CDC6B242A5A1D2 (SettingsScene_t23D56BF3ED393FAF0689AD64FA2BD5CD79F8A6A3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Instance == null)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Instance = this;
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_Instance_6(__this);
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_mE4854722D4248D4CCD33E4202389B3F187C51303 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set__audioSource_7(L_0);
		// _audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get__audioSource_7();
		NullCheck(L_1);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::ToggleBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleBackgroundMusic_m30EA06C60B3114732EEFBC54E5C73527044F0966 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// _muteBackgroundMusic = !_muteBackgroundMusic;
		bool L_0 = __this->get__muteBackgroundMusic_4();
		__this->set__muteBackgroundMusic_4((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if (_muteBackgroundMusic)
		bool L_1 = __this->get__muteBackgroundMusic_4();
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// _audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get__audioSource_7();
		NullCheck(L_2);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0023:
	{
		// _audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get__audioSource_7();
		NullCheck(L_3);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::ToggleSoundFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ToggleSoundFX_mF7B3DA673E126E4F01A00E4F47BA71DB43CC1153 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// _muteSoundFx = !_muteSoundFx;
		bool L_0 = __this->get__muteSoundFx_5();
		__this->set__muteSoundFx_5((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// GameEvents.ToggleSoundFXMethod();
		GameEvents_ToggleSoundFXMethod_m478AFAFD5BF56306CBA4FD723A203DCAB8C80B2D(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SoundManager::IsBackgroundMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_IsBackgroundMuted_m9BFCA18233622FACA030394F1B8741D2F84F95F0 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// return _muteBackgroundMusic;
		bool L_0 = __this->get__muteBackgroundMusic_4();
		return L_0;
	}
}
// System.Boolean SoundManager::IsSoundFXMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_IsSoundFXMuted_mE2170C03EDDFC1E0E42E9AE4D5925AB69849E0DC (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// return _muteSoundFx;
		bool L_0 = __this->get__muteSoundFx_5();
		return L_0;
	}
}
// System.Void SoundManager::SilenceBackgroundMusic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SilenceBackgroundMusic_m9924FB18A0765E9F08396932D23D76BBFE1372C9 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, bool ___silence0, const RuntimeMethod* method)
{
	{
		// if(_muteBackgroundMusic == false)
		bool L_0 = __this->get__muteBackgroundMusic_4();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// if(silence)
		bool L_1 = ___silence0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// _audioSource.volume = 0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get__audioSource_7();
		NullCheck(L_2);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_2, (0.0f), /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		// _audioSource.volume = 1f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get__audioSource_7();
		NullCheck(L_3);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_3, (1.0f), /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundToggleButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundToggleButton_Start_mE50343E7C6858D4118236CBC6CBB864A48F113DD (SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _image = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set__image_10(L_0);
		// _image.sprite = onSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get__image_10();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_onSprite_5();
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_2, /*hidden argument*/NULL);
		// _onButtonPosition = button.GetComponent<RectTransform>().anchoredPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_button_7();
		NullCheck(L_3);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4;
		L_4 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_3, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		__this->set__onButtonPosition_9(L_6);
		// ToggleButton();
		SoundToggleButton_ToggleButton_m103F0DE3F39AE2CA5F307F4EF4AB280BAB20A3CC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundToggleButton::ToggleButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundToggleButton_ToggleButton_m103F0DE3F39AE2CA5F307F4EF4AB280BAB20A3CC (SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var muted = false;
		V_0 = (bool)0;
		// if (type == ButtonType.BackgroundMusic)
		int32_t L_0 = __this->get_type_4();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// muted = SoundManager.Instance.IsBackgroundMuted();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_1 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_6();
		NullCheck(L_1);
		bool L_2;
		L_2 = SoundManager_IsBackgroundMuted_m9BFCA18233622FACA030394F1B8741D2F84F95F0_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0022;
	}

IL_0017:
	{
		// muted = SoundManager.Instance.IsSoundFXMuted();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_3 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_Instance_6();
		NullCheck(L_3);
		bool L_4;
		L_4 = SoundManager_IsSoundFXMuted_mE2170C03EDDFC1E0E42E9AE4D5925AB69849E0DC_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0022:
	{
		// if (muted)
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// _image.sprite = offSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get__image_10();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_offSprite_6();
		NullCheck(L_6);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_6, L_7, /*hidden argument*/NULL);
		// button.GetComponent<RectTransform>().anchoredPosition = offButtonPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_button_7();
		NullCheck(L_8);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_8, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_offButtonPosition_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0052:
	{
		// _image.sprite = onSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get__image_10();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_13 = __this->get_onSprite_5();
		NullCheck(L_12);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_12, L_13, /*hidden argument*/NULL);
		// button.GetComponent<RectTransform>().anchoredPosition = _onButtonPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_button_7();
		NullCheck(L_14);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15;
		L_15 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_14, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get__onButtonPosition_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_15, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundToggleButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundToggleButton__ctor_m1DADBAD624E1A37829AE3F9B30BC70A8C315B34F (SoundToggleButton_t8AB65A1CA5ECD97847C17C6D884F584A0D50B5FA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnlockLevelPopup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockLevelPopup_Start_m985881A8E50A22DC517759B056BFB12A010AEDE4 (UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockLevelPopup_OnUnlockNextCategory_mD32DD70A012A520F4A43B0B74D6DB1F9478B61E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// winPopUp.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_winPopUp_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GameEvents.OnUnlockNextCategory += OnUnlockNextCategory;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_1 = (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)il2cpp_codegen_object_new(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3(L_1, __this, (intptr_t)((intptr_t)UnlockLevelPopup_OnUnlockNextCategory_mD32DD70A012A520F4A43B0B74D6DB1F9478B61E1_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnUnlockNextCategory_mEC56C6BADDBC5AFC07C39B680AAB9DD3335EB12E(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnlockLevelPopup::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockLevelPopup_OnDisable_m39FE6BBF9996C477D7F6CB196319B1351298E1B1 (UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockLevelPopup_OnUnlockNextCategory_mD32DD70A012A520F4A43B0B74D6DB1F9478B61E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnUnlockNextCategory -= OnUnlockNextCategory;
		UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * L_0 = (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 *)il2cpp_codegen_object_new(UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646_il2cpp_TypeInfo_var);
		UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3(L_0, __this, (intptr_t)((intptr_t)UnlockLevelPopup_OnUnlockNextCategory_mD32DD70A012A520F4A43B0B74D6DB1F9478B61E1_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnUnlockNextCategory_mD0C65AD6C8DC2F571925EA3F1B8192E87645B145(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnlockLevelPopup::OnUnlockNextCategory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockLevelPopup_OnUnlockNextCategory_mD32DD70A012A520F4A43B0B74D6DB1F9478B61E1 (UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m509C81FC739EDA33B536C6C6E869E738302F1705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC6672A4B9339452F4F4BB86703FC48FE9AD02B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDBFBA1D8AFFF51E42D098125C2CF6F4FBE03FA7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBF43258EEBC8E975DD1CA1E73A4924F8F3ACD7CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD90904A575B1632648E931630AF991DA57442807);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788  V_1;
	memset((&V_1), 0, sizeof(V_1));
	CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// bool captureNext = false;
		V_0 = (bool)0;
		// foreach (var writing in categoryNames)
		List_1_tA3E179468BD804A9763C116A9B173B0E78796DC6 * L_0 = __this->get_categoryNames_5();
		NullCheck(L_0);
		Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788  L_1;
		L_1 = List_1_GetEnumerator_mBF43258EEBC8E975DD1CA1E73A4924F8F3ACD7CC(L_0, /*hidden argument*/List_1_GetEnumerator_mBF43258EEBC8E975DD1CA1E73A4924F8F3ACD7CC_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0010:
		{
			// foreach (var writing in categoryNames)
			CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  L_2;
			L_2 = Enumerator_get_Current_mDBFBA1D8AFFF51E42D098125C2CF6F4FBE03FA7A_inline((Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mDBFBA1D8AFFF51E42D098125C2CF6F4FBE03FA7A_RuntimeMethod_var);
			V_2 = L_2;
			// if (captureNext)
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_0030;
			}
		}

IL_001b:
		{
			// categoryNameImage.sprite = writing.sprite;
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_categoryNameImage_7();
			CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  L_5 = V_2;
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5.get_sprite_1();
			NullCheck(L_4);
			Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_6, /*hidden argument*/NULL);
			// captureNext = false;
			V_0 = (bool)0;
			// break;
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}

IL_0030:
		{
			// if (writing.name == currentGameData.selectedCategoryName)
			CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  L_7 = V_2;
			String_t* L_8 = L_7.get_name_0();
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_9 = __this->get_currentGameData_4();
			NullCheck(L_9);
			String_t* L_10 = L_9->get_selectedCategoryName_4();
			bool L_11;
			L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_0048:
		{
			// captureNext = true;
			V_0 = (bool)1;
		}

IL_004a:
		{
			// foreach (var writing in categoryNames)
			bool L_12;
			L_12 = Enumerator_MoveNext_mC6672A4B9339452F4F4BB86703FC48FE9AD02B19((Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mC6672A4B9339452F4F4BB86703FC48FE9AD02B19_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0010;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m509C81FC739EDA33B536C6C6E869E738302F1705((Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m509C81FC739EDA33B536C6C6E869E738302F1705_RuntimeMethod_var);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		// GooglePlayServices.instance.SendAchievement(GPGSIds.achievement_category_completed);
		GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * L_13 = ((GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_StaticFields*)il2cpp_codegen_static_fields_for(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_13);
		GooglePlayServices_SendAchievement_m69519933473A6A02D91A5D134E33C9F2ADB96564(L_13, _stringLiteralD90904A575B1632648E931630AF991DA57442807, /*hidden argument*/NULL);
		// winPopUp.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_winPopUp_6();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnlockLevelPopup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockLevelPopup__ctor_mDC6DD622B9DF89E1D61FCB52A36674055369E837 (UnlockLevelPopup_t9B08BD3FCA23069E68044D9558833A063204D299 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WinPopup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinPopup_Start_mAEDC30B969E253C9DE3B922D086FD67135E7CFBB (WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D * __this, const RuntimeMethod* method)
{
	{
		// winPopup.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_winPopup_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WinPopup::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinPopup_OnEnable_m0801022318359F7362F5611F142FB8E7F6F3439A (WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinPopup_InterstitialAdCompleted_m51D22AD7EFB11DAD19F301665C71247E77F37E90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinPopup_ShowWinPopUp_m1A9D678A15D14542874984C6DC9C4A0DF7CC31B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnBoardCompleted += ShowWinPopUp;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)il2cpp_codegen_object_new(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214(L_0, __this, (intptr_t)((intptr_t)WinPopup_ShowWinPopUp_m1A9D678A15D14542874984C6DC9C4A0DF7CC31B6_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnBoardCompleted_mBB304835FCAEE9D8600027F963C65595ED292F3D(L_0, /*hidden argument*/NULL);
		// AdManager.OnInterstitialAdsClosed += InterstitialAdCompleted;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_OnInterstitialAdsClosed_12();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)WinPopup_InterstitialAdCompleted_m51D22AD7EFB11DAD19F301665C71247E77F37E90_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_3;
		L_3 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_1, L_2, /*hidden argument*/NULL);
		((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->set_OnInterstitialAdsClosed_12(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_3, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void WinPopup::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinPopup_OnDisable_m12B322C796D2E48BA8AC3BE50FE7F1FEF73A3A69 (WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinPopup_InterstitialAdCompleted_m51D22AD7EFB11DAD19F301665C71247E77F37E90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinPopup_ShowWinPopUp_m1A9D678A15D14542874984C6DC9C4A0DF7CC31B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnBoardCompleted -= ShowWinPopUp;
		BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * L_0 = (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 *)il2cpp_codegen_object_new(BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04_il2cpp_TypeInfo_var);
		BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214(L_0, __this, (intptr_t)((intptr_t)WinPopup_ShowWinPopUp_m1A9D678A15D14542874984C6DC9C4A0DF7CC31B6_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnBoardCompleted_m72571657CC1E5E5D5FE3A335DD3B3C4E2FE2D74D(L_0, /*hidden argument*/NULL);
		// AdManager.OnInterstitialAdsClosed -= InterstitialAdCompleted;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_OnInterstitialAdsClosed_12();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)WinPopup_InterstitialAdCompleted_m51D22AD7EFB11DAD19F301665C71247E77F37E90_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_3;
		L_3 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_1, L_2, /*hidden argument*/NULL);
		((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->set_OnInterstitialAdsClosed_12(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_3, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void WinPopup::InterstitialAdCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinPopup_InterstitialAdCompleted_m51D22AD7EFB11DAD19F301665C71247E77F37E90 (WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WinPopup::ShowWinPopUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinPopup_ShowWinPopUp_m1A9D678A15D14542874984C6DC9C4A0DF7CC31B6 (WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3429C50A065A74ECA458BAE05C3AAC016A8FA1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC52104465CC9221367F782EE67364EC0BDD09C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D1EE53357ADC7CE195E78CA7E5E31DBBC84088);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdManager.instance.HideBanner();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_0);
		AdManager_HideBanner_m2738463D0EE6942A694CD0CEAB39F4EA507B8E8C(L_0, /*hidden argument*/NULL);
		// GooglePlayServices.instance.SendIncrementalAchievement(GPGSIds.achievement_complete_total_10_levels,1);
		GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * L_1 = ((GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_StaticFields*)il2cpp_codegen_static_fields_for(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_1);
		GooglePlayServices_SendIncrementalAchievement_mFE1DBDD59E5F387E931558DDBD62E5E5FE9F8BD4(L_1, _stringLiteralDC52104465CC9221367F782EE67364EC0BDD09C2, 1, /*hidden argument*/NULL);
		// GooglePlayServices.instance.SendIncrementalAchievement(GPGSIds.achievement_complete_20_levels, 1);
		GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * L_2 = ((GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_StaticFields*)il2cpp_codegen_static_fields_for(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_2);
		GooglePlayServices_SendIncrementalAchievement_mFE1DBDD59E5F387E931558DDBD62E5E5FE9F8BD4(L_2, _stringLiteral3429C50A065A74ECA458BAE05C3AAC016A8FA1F3, 1, /*hidden argument*/NULL);
		// if (CountDownTimer.instance.IsGameCompletedWithin20Sec())
		CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4 * L_3 = ((CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_StaticFields*)il2cpp_codegen_static_fields_for(CountDownTimer_t46636C885BABCEF732E1F8140793B3EF2586C6A4_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_3);
		bool L_4;
		L_4 = CountDownTimer_IsGameCompletedWithin20Sec_m7295689FB305A1DEAB6ED5298693F0EACD258A87(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// GooglePlayServices.instance.SendAchievement(GPGSIds.achievement_finish_a_level_within_20_seconds);
		GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C * L_5 = ((GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_StaticFields*)il2cpp_codegen_static_fields_for(GooglePlayServices_t360ECC2FD9CF41E540CCC21743966A81B6BBBB4C_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_5);
		GooglePlayServices_SendAchievement_m69519933473A6A02D91A5D134E33C9F2ADB96564(L_5, _stringLiteralE7D1EE53357ADC7CE195E78CA7E5E31DBBC84088, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// DataSaver.SaveHighScore(10);
		IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		DataSaver_SaveHighScore_m0C4E3B74AABD7F41DC33E48D78FCB866A2030445(((int32_t)10), /*hidden argument*/NULL);
		// winPopup.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_winPopup_4();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WinPopup::LoadNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinPopup_LoadNextLevel_mA11E1D1FF7ECBF6AC1199DEE2A22B71A3DAEE95B (WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdManager.instance.ShowInterstitialAd();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_0);
		AdManager_ShowInterstitialAd_m35910EAB17673DAFCFA396B79C121746C0B8E4A1(L_0, /*hidden argument*/NULL);
		// GameEvents.LoadNextLevelMethod();
		GameEvents_LoadNextLevelMethod_m9B46C06691FC3B8C509A27737F2A8763B6618E50(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WinPopup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinPopup__ctor_mBF2E417683655F9EDCE9639CF56E5C317B127572 (WinPopup_tB02F0EC948EAD19FB3BD82807BF4D836F072EC5D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WordChecker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_OnEnable_m5737A19417A5C9B7910446A7D772AD791F20DABE (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCheckSquare += SquareSelected;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)il2cpp_codegen_object_new(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		CheckSquare__ctor_m0AD9F2DD2BDF7A6F00B74CA53253B31E38EFEFD6(L_0, __this, (intptr_t)((intptr_t)WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnCheckSquare_mFE42CF8BA749903CDCADD0144FC865558CC5E4F2(L_0, /*hidden argument*/NULL);
		// GameEvents.OnClearSelection += ClearSelection;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)il2cpp_codegen_object_new(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		ClearSelection__ctor_m0C3BCC9F283A6E5D2A9AF6A16E1FC6347243C642(L_1, __this, (intptr_t)((intptr_t)WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnClearSelection_m2C132521B73B7842FBE13106362E0E7B2540DAAC(L_1, /*hidden argument*/NULL);
		// GameEvents.OnLoadNextLevel += LoadNextGameLevel;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_2 = (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)il2cpp_codegen_object_new(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		LoadNextLevel__ctor_mB90AB8B524F7E62320707E203AB10DF3491AB942(L_2, __this, (intptr_t)((intptr_t)WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_add_OnLoadNextLevel_m67866D0418E3A4A61186151CC2734709499A5BA3(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WordChecker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_OnDisable_m4B07689658DADDD459C2C75CF59E0B24A06DD6DA (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCheckSquare -= SquareSelected;
		CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * L_0 = (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E *)il2cpp_codegen_object_new(CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E_il2cpp_TypeInfo_var);
		CheckSquare__ctor_m0AD9F2DD2BDF7A6F00B74CA53253B31E38EFEFD6(L_0, __this, (intptr_t)((intptr_t)WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnCheckSquare_mC01ACBA49A91C21C689BBBEFB247D1CF08C768FE(L_0, /*hidden argument*/NULL);
		// GameEvents.OnClearSelection -= ClearSelection;
		ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * L_1 = (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 *)il2cpp_codegen_object_new(ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1_il2cpp_TypeInfo_var);
		ClearSelection__ctor_m0C3BCC9F283A6E5D2A9AF6A16E1FC6347243C642(L_1, __this, (intptr_t)((intptr_t)WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnClearSelection_mD969AA534E80455CB5CC9B4BEAF7AAABD5659D55(L_1, /*hidden argument*/NULL);
		// GameEvents.OnLoadNextLevel -= LoadNextGameLevel;
		LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * L_2 = (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F *)il2cpp_codegen_object_new(LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F_il2cpp_TypeInfo_var);
		LoadNextLevel__ctor_mB90AB8B524F7E62320707E203AB10DF3491AB942(L_2, __this, (intptr_t)((intptr_t)WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF_RuntimeMethod_var), /*hidden argument*/NULL);
		GameEvents_remove_OnLoadNextLevel_mDE99F77608B8E4AEB93C78FE6F72E7793A66C0E8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WordChecker::LoadNextGameLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_LoadNextGameLevel_m66A305F0E39D783BDADA80F18F2A904CA564A9DF (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WordChecker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_Start_m46916234D92D81CD242F90C877D346BE144AF68B (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentGameData.selectedBoardData.ClearData();
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		NullCheck(L_0);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_1 = L_0->get_selectedBoardData_5();
		NullCheck(L_1);
		BoardData_ClearData_m17E0F46BDAA4B9F27266A98CC5765590AA99E3CB(L_1, /*hidden argument*/NULL);
		// _assignedPoints = 0;
		__this->set__assignedPoints_7(0);
		// _completedWords = 0;
		__this->set__completedWords_8(0);
		// AdManager.instance.ShowBanner();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_2 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_2);
		AdManager_ShowBanner_m30FB49F725B895175C1A9C6EE3DDF1605205E953(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WordChecker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_Update_m62F24878877CB9F2EE8E3EA014933F2230D59986 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_assignedPoints > 0 && Application.isEditor)
		int32_t L_0 = __this->get__assignedPoints_7();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.DrawRay(_rayUp.origin, _rayUp.direction * 4);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_2 = __this->get_address_of__rayUp_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_2, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_4 = __this->get_address_of__rayUp_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, (4.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_3, L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void WordChecker::SquareSelected(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_SquareSelected_mE99DB99C59CD76C9A62CF5F63ABBA087BB9F7BBB (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_assignedPoints == 0)
		int32_t L_0 = __this->get__assignedPoints_7();
		if (L_0)
		{
			goto IL_01dd;
		}
	}
	{
		// _rayStartPosition = squarePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___squarePosition1;
		__this->set__rayStartPosition_18(L_1);
		// _correctSquareList.Add(squareIndex);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = __this->get__correctSquareList_19();
		int32_t L_3 = ___squareIndex2;
		NullCheck(L_2);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_2, L_3, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// _word += letter;
		String_t* L_4 = __this->get__word_6();
		String_t* L_5 = ___letter0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, L_5, /*hidden argument*/NULL);
		__this->set__word_6(L_6);
		// _rayUp = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(0f, 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___squarePosition1;
		float L_8 = L_7.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___squarePosition1;
		float L_10 = L_9.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), L_8, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_15), L_12, L_14, /*hidden argument*/NULL);
		__this->set__rayUp_9(L_15);
		// _rayDown = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(0f, -1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___squarePosition1;
		float L_17 = L_16.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___squarePosition1;
		float L_19 = L_18.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_20), L_17, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_22), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_22, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_24), L_21, L_23, /*hidden argument*/NULL);
		__this->set__rayDown_10(L_24);
		// _rayLeft = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(-1, 0f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = ___squarePosition1;
		float L_26 = L_25.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___squarePosition1;
		float L_28 = L_27.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_29), L_26, L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_29, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_31), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_31, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_33), L_30, L_32, /*hidden argument*/NULL);
		__this->set__rayLeft_11(L_33);
		// _rayRight = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(1, 0f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = ___squarePosition1;
		float L_35 = L_34.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = ___squarePosition1;
		float L_37 = L_36.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), L_35, L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_38, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_40, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_42), L_39, L_41, /*hidden argument*/NULL);
		__this->set__rayRight_12(L_42);
		// _rayDiagonalLeftUp = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(-1, 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = ___squarePosition1;
		float L_44 = L_43.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = ___squarePosition1;
		float L_46 = L_45.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_47), L_44, L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_47, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_49), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_49, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_51), L_48, L_50, /*hidden argument*/NULL);
		__this->set__rayDiagonalLeftUp_13(L_51);
		// _rayDiagonalLeftDown = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(-1, -1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = ___squarePosition1;
		float L_53 = L_52.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = ___squarePosition1;
		float L_55 = L_54.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_56), L_53, L_55, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_56, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_58), (-1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_58, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_60), L_57, L_59, /*hidden argument*/NULL);
		__this->set__rayDiagonalLeftDown_14(L_60);
		// _rayDiagonalRightUp = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(1, 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = ___squarePosition1;
		float L_62 = L_61.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = ___squarePosition1;
		float L_64 = L_63.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_65), L_62, L_64, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_65, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_67), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_67, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_69), L_66, L_68, /*hidden argument*/NULL);
		__this->set__rayDiagonalRightUp_15(L_69);
		// _rayDiagonalRightDown = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(1, -1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = ___squarePosition1;
		float L_71 = L_70.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = ___squarePosition1;
		float L_73 = L_72.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_74), L_71, L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_74, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_76), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_76, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_78;
		memset((&L_78), 0, sizeof(L_78));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_78), L_75, L_77, /*hidden argument*/NULL);
		__this->set__rayDiagonalRightDown_16(L_78);
		// }
		goto IL_0268;
	}

IL_01dd:
	{
		// else if (_assignedPoints == 1)
		int32_t L_79 = __this->get__assignedPoints_7();
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_022f;
		}
	}
	{
		// _correctSquareList.Add(squareIndex);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_80 = __this->get__correctSquareList_19();
		int32_t L_81 = ___squareIndex2;
		NullCheck(L_80);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_80, L_81, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// _currentRay = SelectRay(_rayStartPosition,squarePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = __this->get__rayStartPosition_18();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83;
		L_83 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_82, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = ___squarePosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85;
		L_85 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_84, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_86;
		L_86 = WordChecker_SelectRay_m814922C85E4B96974FD11A7EBD3BEF25D03A4192(__this, L_83, L_85, /*hidden argument*/NULL);
		__this->set__currentRay_17(L_86);
		// GameEvents.SelectSquareMethod(squarePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = ___squarePosition1;
		GameEvents_SelectSquareMethod_m6194E84AA64EA8CCED304B13530507309DE9E791(L_87, /*hidden argument*/NULL);
		// _word += letter;
		String_t* L_88 = __this->get__word_6();
		String_t* L_89 = ___letter0;
		String_t* L_90;
		L_90 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_88, L_89, /*hidden argument*/NULL);
		__this->set__word_6(L_90);
		// CheckWord();
		WordChecker_CheckWord_m86AAEA32635906AFE8324F2C97D07157CC3D1331(__this, /*hidden argument*/NULL);
		// }
		goto IL_0268;
	}

IL_022f:
	{
		// if (IsPointOnTheRay(_currentRay, squarePosition))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_91 = __this->get__currentRay_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92 = ___squarePosition1;
		bool L_93;
		L_93 = WordChecker_IsPointOnTheRay_m294B03A62B399F58C36338BCCE509A24DBBD3B6F(__this, L_91, L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_0268;
		}
	}
	{
		// _correctSquareList.Add(squareIndex);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_94 = __this->get__correctSquareList_19();
		int32_t L_95 = ___squareIndex2;
		NullCheck(L_94);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_94, L_95, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// GameEvents.SelectSquareMethod(squarePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96 = ___squarePosition1;
		GameEvents_SelectSquareMethod_m6194E84AA64EA8CCED304B13530507309DE9E791(L_96, /*hidden argument*/NULL);
		// _word += letter;
		String_t* L_97 = __this->get__word_6();
		String_t* L_98 = ___letter0;
		String_t* L_99;
		L_99 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_97, L_98, /*hidden argument*/NULL);
		__this->set__word_6(L_99);
		// CheckWord();
		WordChecker_CheckWord_m86AAEA32635906AFE8324F2C97D07157CC3D1331(__this, /*hidden argument*/NULL);
	}

IL_0268:
	{
		// _assignedPoints++;
		int32_t L_100 = __this->get__assignedPoints_7();
		__this->set__assignedPoints_7(((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1)));
		// }
		return;
	}
}
// System.Void WordChecker::CheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckWord_m86AAEA32635906AFE8324F2C97D07157CC3D1331 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF4E09BAE0705EE9E734A3D39C9B38CBD14169951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8777693E88D7995AC0781C83BD19133AD05055D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m720A2FCAF236DDC0C72E53E6E3278AE6AEB7FE79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC36CA4B7C47F8384C8E3CCA1971FD5B58E485CE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach(var searchingWord in currentGameData.selectedBoardData.SearchWords)
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		NullCheck(L_0);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_1 = L_0->get_selectedBoardData_5();
		NullCheck(L_1);
		List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * L_2 = L_1->get_SearchWords_8();
		NullCheck(L_2);
		Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2  L_3;
		L_3 = List_1_GetEnumerator_mC36CA4B7C47F8384C8E3CCA1971FD5B58E485CE3(L_2, /*hidden argument*/List_1_GetEnumerator_mC36CA4B7C47F8384C8E3CCA1971FD5B58E485CE3_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_0018:
		{
			// foreach(var searchingWord in currentGameData.selectedBoardData.SearchWords)
			SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * L_4;
			L_4 = Enumerator_get_Current_m720A2FCAF236DDC0C72E53E6E3278AE6AEB7FE79_inline((Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m720A2FCAF236DDC0C72E53E6E3278AE6AEB7FE79_RuntimeMethod_var);
			V_1 = L_4;
			// if(_word == searchingWord.Word && searchingWord.Found == false)
			String_t* L_5 = __this->get__word_6();
			SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7 = L_6->get_Word_1();
			bool L_8;
			L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_007f;
			}
		}

IL_0033:
		{
			SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = L_9->get_Found_0();
			if (L_10)
			{
				goto IL_007f;
			}
		}

IL_003b:
		{
			// searchingWord.Found = true;
			SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * L_11 = V_1;
			NullCheck(L_11);
			L_11->set_Found_0((bool)1);
			// GameEvents.CorrectWordMethod(_word,_correctSquareList);
			String_t* L_12 = __this->get__word_6();
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = __this->get__correctSquareList_19();
			GameEvents_CorrectWordMethod_m149AD60307E9DB05A920B972EB4448F4A0D7A288(L_12, L_13, /*hidden argument*/NULL);
			// _completedWords++;
			int32_t L_14 = __this->get__completedWords_8();
			__this->set__completedWords_8(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
			// _word = string.Empty;
			String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			__this->set__word_6(L_15);
			// _correctSquareList.Clear();
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_16 = __this->get__correctSquareList_19();
			NullCheck(L_16);
			List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_16, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
			// CheckBoardCompleted();
			WordChecker_CheckBoardCompleted_m4FB887B7436ED72B6BD29690A4BF3CC297AB7FD1(__this, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}

IL_007f:
		{
			// foreach(var searchingWord in currentGameData.selectedBoardData.SearchWords)
			bool L_17;
			L_17 = Enumerator_MoveNext_mE8777693E88D7995AC0781C83BD19133AD05055D((Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mE8777693E88D7995AC0781C83BD19133AD05055D_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0018;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF4E09BAE0705EE9E734A3D39C9B38CBD14169951((Enumerator_t707BC7BEEAE7AD2A4127B7C04BD9C6AE57779EF2 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mF4E09BAE0705EE9E734A3D39C9B38CBD14169951_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Boolean WordChecker::IsPointOnTheRay(UnityEngine.Ray,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordChecker_IsPointOnTheRay_m294B03A62B399F58C36338BCCE509A24DBBD3B6F (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___currentRay0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var hits = Physics.RaycastAll(currentRay, 100.0f);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = ___currentRay0;
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_1;
		L_1 = Physics_RaycastAll_m72947571EFB0EFB34E48340AA2EC0C8030D27C50(L_0, (100.0f), /*hidden argument*/NULL);
		V_0 = L_1;
		// for(int i = 0; i < hits.Length; i++)
		V_1 = 0;
		goto IL_002f;
	}

IL_0010:
	{
		// if(hits[i].transform.position == point)
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___point1;
		bool L_7;
		L_7 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// for(int i = 0; i < hits.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002f:
	{
		// for(int i = 0; i < hits.Length; i++)
		int32_t L_9 = V_1;
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Ray WordChecker::SelectRay(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  WordChecker_SelectRay_m814922C85E4B96974FD11A7EBD3BEF25D03A4192 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var direction = (secondPosition - firstPosition).normalized;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___secondPosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___firstPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_3;
		// float tolerance = 0.01f;
		V_1 = (0.00999999978f);
		// if(Math.Abs(direction.x) < tolerance && System.Math.Abs(direction.y - 1f) < tolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = L_4.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = fabsf(L_5);
		float L_7 = V_1;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_003f;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		float L_9 = L_8.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_9, (float)(1.0f))));
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_003f;
		}
	}
	{
		// return _rayUp;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_12 = __this->get__rayUp_9();
		return L_12;
	}

IL_003f:
	{
		// if(Math.Abs(direction.x) < tolerance && Math.Abs(direction.y - (-1f)) < tolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		float L_14 = L_13.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = fabsf(L_14);
		float L_16 = V_1;
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_0068;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		float L_18 = L_17.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract((float)L_18, (float)(-1.0f))));
		float L_20 = V_1;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_0068;
		}
	}
	{
		// return _rayDown;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_21 = __this->get__rayDown_10();
		return L_21;
	}

IL_0068:
	{
		// if (System.Math.Abs(direction.x- (-1f)) < tolerance && Math.Abs(direction.y) < tolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_0;
		float L_23 = L_22.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_24;
		L_24 = fabsf(((float)il2cpp_codegen_subtract((float)L_23, (float)(-1.0f))));
		float L_25 = V_1;
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_0091;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = V_0;
		float L_27 = L_26.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_28;
		L_28 = fabsf(L_27);
		float L_29 = V_1;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0091;
		}
	}
	{
		// return _rayLeft;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_30 = __this->get__rayLeft_11();
		return L_30;
	}

IL_0091:
	{
		// if (Math.Abs(direction.x - 1f) < tolerance && Math.Abs(direction.y) < tolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_0;
		float L_32 = L_31.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_33;
		L_33 = fabsf(((float)il2cpp_codegen_subtract((float)L_32, (float)(1.0f))));
		float L_34 = V_1;
		if ((!(((float)L_33) < ((float)L_34))))
		{
			goto IL_00ba;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_0;
		float L_36 = L_35.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_37;
		L_37 = fabsf(L_36);
		float L_38 = V_1;
		if ((!(((float)L_37) < ((float)L_38))))
		{
			goto IL_00ba;
		}
	}
	{
		// return _rayRight;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_39 = __this->get__rayRight_12();
		return L_39;
	}

IL_00ba:
	{
		// if (direction.x < 0f && direction.y > 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40 = V_0;
		float L_41 = L_40.get_x_0();
		if ((!(((float)L_41) < ((float)(0.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = V_0;
		float L_43 = L_42.get_y_1();
		if ((!(((float)L_43) > ((float)(0.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		// return _rayDiagonalLeftUp;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_44 = __this->get__rayDiagonalLeftUp_13();
		return L_44;
	}

IL_00db:
	{
		// if (direction.x < 0f && direction.y < 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = V_0;
		float L_46 = L_45.get_x_0();
		if ((!(((float)L_46) < ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = V_0;
		float L_48 = L_47.get_y_1();
		if ((!(((float)L_48) < ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		// return _rayDiagonalLeftDown;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_49 = __this->get__rayDiagonalLeftDown_14();
		return L_49;
	}

IL_00fc:
	{
		// if (direction.x > 0f && direction.y > 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50 = V_0;
		float L_51 = L_50.get_x_0();
		if ((!(((float)L_51) > ((float)(0.0f)))))
		{
			goto IL_011d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_0;
		float L_53 = L_52.get_y_1();
		if ((!(((float)L_53) > ((float)(0.0f)))))
		{
			goto IL_011d;
		}
	}
	{
		// return _rayDiagonalRightUp;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_54 = __this->get__rayDiagonalRightUp_15();
		return L_54;
	}

IL_011d:
	{
		// if (direction.x > 0f && direction.y < 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55 = V_0;
		float L_56 = L_55.get_x_0();
		if ((!(((float)L_56) > ((float)(0.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = V_0;
		float L_58 = L_57.get_y_1();
		if ((!(((float)L_58) < ((float)(0.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		// return _rayDiagonalRightDown;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_59 = __this->get__rayDiagonalRightDown_16();
		return L_59;
	}

IL_013e:
	{
		// return _rayDown;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_60 = __this->get__rayDown_10();
		return L_60;
	}
}
// System.Void WordChecker::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_ClearSelection_m88429E2B59815F9CA658E7E594AB17C5478493FE (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _assignedPoints = 0;
		__this->set__assignedPoints_7(0);
		// _correctSquareList.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get__correctSquareList_19();
		NullCheck(L_0);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_0, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		// _word = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__word_6(L_1);
		// }
		return;
	}
}
// System.Void WordChecker::CheckBoardCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckBoardCompleted_m4FB887B7436ED72B6BD29690A4BF3CC297AB7FD1 (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8B4A270BFCF223F52CFA9F106DAF3CA111A587B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF193656D406136A8D7A98AFCCCC31D132A06AF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// bool loadNextCategory = false;
		V_0 = (bool)0;
		// if(currentGameData.selectedBoardData.SearchWords.Count == _completedWords)
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		NullCheck(L_0);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_1 = L_0->get_selectedBoardData_5();
		NullCheck(L_1);
		List_1_t93D0D5659087C214F076D14DD1D59B8B66155BDE * L_2 = L_1->get_SearchWords_8();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m8B4A270BFCF223F52CFA9F106DAF3CA111A587B1_inline(L_2, /*hidden argument*/List_1_get_Count_m8B4A270BFCF223F52CFA9F106DAF3CA111A587B1_RuntimeMethod_var);
		int32_t L_4 = __this->get__completedWords_8();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0135;
		}
	}
	{
		// var categoryName = currentGameData.selectedCategoryName;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_5 = __this->get_currentGameData_4();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_selectedCategoryName_4();
		V_1 = L_6;
		// var currentBoardIndex = DataSaver.ReadCategoryCurrentIndexValues(categoryName);
		String_t* L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = DataSaver_ReadCategoryCurrentIndexValues_mCFCC7043C966B844D136A3249634B0F9019A75C2(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// var nextBoardIndex = -1;
		V_3 = (-1);
		// var currentCategoryIndex = 0;
		V_4 = 0;
		// bool readNextLevelName = false;
		V_5 = (bool)0;
		// for(int index = 0; index < gameLevelData.data.Count; index++)
		V_7 = 0;
		goto IL_0092;
	}

IL_0042:
	{
		// if (readNextLevelName)
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		// nextBoardIndex = DataSaver.ReadCategoryCurrentIndexValues(gameLevelData.data[index].catrgoryName);
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_10 = __this->get_gameLevelData_5();
		NullCheck(L_10);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_11 = L_10->get_data_4();
		int32_t L_12 = V_7;
		NullCheck(L_11);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_13;
		L_13 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		String_t* L_14 = L_13.get_catrgoryName_0();
		IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = DataSaver_ReadCategoryCurrentIndexValues_mCFCC7043C966B844D136A3249634B0F9019A75C2(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// readNextLevelName = false;
		V_5 = (bool)0;
	}

IL_0066:
	{
		// if(gameLevelData.data[index].catrgoryName == categoryName)
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_16 = __this->get_gameLevelData_5();
		NullCheck(L_16);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_17 = L_16->get_data_4();
		int32_t L_18 = V_7;
		NullCheck(L_17);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_19;
		L_19 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		String_t* L_20 = L_19.get_catrgoryName_0();
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_008c;
		}
	}
	{
		// readNextLevelName = true;
		V_5 = (bool)1;
		// currentCategoryIndex = index;
		int32_t L_23 = V_7;
		V_4 = L_23;
	}

IL_008c:
	{
		// for(int index = 0; index < gameLevelData.data.Count; index++)
		int32_t L_24 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0092:
	{
		// for(int index = 0; index < gameLevelData.data.Count; index++)
		int32_t L_25 = V_7;
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_26 = __this->get_gameLevelData_5();
		NullCheck(L_26);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_27 = L_26->get_data_4();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_inline(L_27, /*hidden argument*/List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_0042;
		}
	}
	{
		// var currentLevelSize = gameLevelData.data[currentCategoryIndex].boardData.Count;
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_29 = __this->get_gameLevelData_5();
		NullCheck(L_29);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_30 = L_29->get_data_4();
		int32_t L_31 = V_4;
		NullCheck(L_30);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_32;
		L_32 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		List_1_t8F84B89B7DAF5CB826BE0C0648AA9E54934FCE32 * L_33 = L_32.get_boardData_1();
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_inline(L_33, /*hidden argument*/List_1_get_Count_m5B3A9C1A496D1B539E5D672DB17AA9050E33523F_RuntimeMethod_var);
		V_6 = L_34;
		// if (currentBoardIndex < currentLevelSize)
		int32_t L_35 = V_2;
		int32_t L_36 = V_6;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_00cd;
		}
	}
	{
		// currentBoardIndex++;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00cd:
	{
		// DataSaver.SaveCategoryData(categoryName, currentBoardIndex);
		String_t* L_38 = V_1;
		int32_t L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		DataSaver_SaveCategoryData_m00EAA18ECD83406F881A3FF376F9BB569428334F(L_38, L_39, /*hidden argument*/NULL);
		// if(currentBoardIndex >= currentLevelSize)
		int32_t L_40 = V_2;
		int32_t L_41 = V_6;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0128;
		}
	}
	{
		// currentCategoryIndex++;
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		// if(currentCategoryIndex < gameLevelData.data.Count) //If this is not the last Category
		int32_t L_43 = V_4;
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_44 = __this->get_gameLevelData_5();
		NullCheck(L_44);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_45 = L_44->get_data_4();
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_inline(L_45, /*hidden argument*/List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_RuntimeMethod_var);
		if ((((int32_t)L_43) >= ((int32_t)L_46)))
		{
			goto IL_011c;
		}
	}
	{
		// categoryName = gameLevelData.data[currentCategoryIndex].catrgoryName;
		GameLevelData_t0A37C16398B07C71A1C1111A79636F3D1833919B * L_47 = __this->get_gameLevelData_5();
		NullCheck(L_47);
		List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * L_48 = L_47->get_data_4();
		int32_t L_49 = V_4;
		NullCheck(L_48);
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_50;
		L_50 = List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_inline(L_48, L_49, /*hidden argument*/List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_RuntimeMethod_var);
		String_t* L_51 = L_50.get_catrgoryName_0();
		V_1 = L_51;
		// currentBoardIndex = 0;
		V_2 = 0;
		// loadNextCategory = true;
		V_0 = (bool)1;
		// if(nextBoardIndex <= 0)
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_012d;
		}
	}
	{
		// DataSaver.SaveCategoryData(categoryName, currentBoardIndex);
		String_t* L_53 = V_1;
		int32_t L_54 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DataSaver_tC95921E6E87E19F277FCE5F3759BFC5A2E9A0C0B_il2cpp_TypeInfo_var);
		DataSaver_SaveCategoryData_m00EAA18ECD83406F881A3FF376F9BB569428334F(L_53, L_54, /*hidden argument*/NULL);
		// }
		goto IL_012d;
	}

IL_011c:
	{
		// SceneManager.LoadScene("SelectCategory");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDF193656D406136A8D7A98AFCCCC31D132A06AF3, /*hidden argument*/NULL);
		// }
		goto IL_012d;
	}

IL_0128:
	{
		// GameEvents.BoardCompletedMethod();
		GameEvents_BoardCompletedMethod_m8984786CBE2F154DF41B289FB2AAF81BB3FB7A23(/*hidden argument*/NULL);
	}

IL_012d:
	{
		// if (loadNextCategory)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_0135;
		}
	}
	{
		// GameEvents.UnlockNextCategoryMethod();
		GameEvents_UnlockNextCategoryMethod_mC94B42F6EB289FF0C47D4070C1D5A3C861558A44(/*hidden argument*/NULL);
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void WordChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker__ctor_m43FC5FB866F4EFDFAD199C06E494DDF7235D2AAB (WordChecker_t80FF7316EF598BA79ACA68902DE3305C32EC867A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<int> _correctSquareList = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set__correctSquareList_19(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WordsGrid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_Start_m4B05CAED96B51A234DBB2EC2759941006604135B (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	{
		// SpawnGridSquares();
		WordsGrid_SpawnGridSquares_m14CB406391C047A5E66D3851CADB329DAFD09A16(__this, /*hidden argument*/NULL);
		// SetSquaresPosition();
		WordsGrid_SetSquaresPosition_mA9718DC9A064FDC13BA61F0277E940CBC9E1048E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WordsGrid::SetSquaresPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SetSquaresPosition_mA9718DC9A064FDC13BA61F0277E940CBC9E1048E (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	{
		// var squareRect = _squareList[0].GetComponent<SpriteRenderer>().sprite.rect;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get__squareList_9();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_1, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_2);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3;
		L_3 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var squareTransform = _squareList[0].GetComponent<Transform>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get__squareList_9();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_6, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		V_1 = L_7;
		// var offset = new Vector2
		// {
		//     x = (squareRect.width * squareTransform.localScale.x + squareOffset) * 0.01f,
		//     y = (squareRect.height * squareTransform.localScale.y + squareOffset) * 0.01f
		// };
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		float L_8;
		L_8 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_1;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		float L_12 = __this->get_squareOffset_7();
		(&V_6)->set_x_0(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_11)), (float)L_12)), (float)(0.00999999978f))));
		float L_13;
		L_13 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_1;
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		float L_17 = __this->get_squareOffset_7();
		(&V_6)->set_y_1(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_16)), (float)L_17)), (float)(0.00999999978f))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_6;
		V_2 = L_18;
		// var startPosition = GetFirstSquarePosition();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = WordsGrid_GetFirstSquarePosition_m628811758312A966C2B9D68B774720040F8963FB(__this, /*hidden argument*/NULL);
		V_3 = L_19;
		// int columnNumber = 0;
		V_4 = 0;
		// int rowNumber = 0;
		V_5 = 0;
		// foreach (var square in _squareList)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = __this->get__squareList_9();
		NullCheck(L_20);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_21;
		L_21 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_20, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_7 = L_21;
	}

IL_00a1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_010d;
		}

IL_00a3:
		{
			// foreach (var square in _squareList)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
			L_22 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// if (rowNumber + 1 > currentGameData.selectedBoardData.Rows)
			int32_t L_23 = V_5;
			GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_24 = __this->get_currentGameData_4();
			NullCheck(L_24);
			BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_25 = L_24->get_selectedBoardData_5();
			NullCheck(L_25);
			int32_t L_26 = L_25->get_Rows_6();
			G_B3_0 = L_22;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))) <= ((int32_t)L_26)))
			{
				G_B4_0 = L_22;
				goto IL_00c9;
			}
		}

IL_00c0:
		{
			// columnNumber++;
			int32_t L_27 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
			// rowNumber = 0;
			V_5 = 0;
			G_B4_0 = G_B3_0;
		}

IL_00c9:
		{
			// var positionX = startPosition.x + offset.x * columnNumber;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_3;
			float L_29 = L_28.get_x_0();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_2;
			float L_31 = L_30.get_x_0();
			int32_t L_32 = V_4;
			V_8 = ((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)((float)((float)L_32))))));
			// var positionY = startPosition.y - offset.y * rowNumber;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = V_3;
			float L_34 = L_33.get_y_1();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_2;
			float L_36 = L_35.get_y_1();
			int32_t L_37 = V_5;
			V_9 = ((float)il2cpp_codegen_subtract((float)L_34, (float)((float)il2cpp_codegen_multiply((float)L_36, (float)((float)((float)L_37))))));
			// square.GetComponent<Transform>().position = new Vector2(positionX, positionY);
			NullCheck(G_B4_0);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
			L_38 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(G_B4_0, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
			float L_39 = V_8;
			float L_40 = V_9;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
			memset((&L_41), 0, sizeof(L_41));
			Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_41), L_39, L_40, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
			L_42 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_41, /*hidden argument*/NULL);
			NullCheck(L_38);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_38, L_42, /*hidden argument*/NULL);
			// rowNumber++;
			int32_t L_43 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		}

IL_010d:
		{
			// foreach (var square in _squareList)
			bool L_44;
			L_44 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_44)
			{
				goto IL_00a3;
			}
		}

IL_0116:
		{
			IL2CPP_LEAVE(0x126, FINALLY_0118);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0118;
	}

FINALLY_0118:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(280)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(280)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x126, IL_0126)
	}

IL_0126:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 WordsGrid::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  WordsGrid_GetFirstSquarePosition_m628811758312A966C2B9D68B774720040F8963FB (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B2_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B3_1 = NULL;
	{
		// var startPosition = new Vector2(0f, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (0.0f), L_2, /*hidden argument*/NULL);
		// var squareRect = _squareList[0].GetComponent<SpriteRenderer>().sprite.rect;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get__squareList_9();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_3, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_4);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_4, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6;
		L_6 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		L_7 = Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// var squareTransform = _squareList[0].GetComponent<Transform>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get__squareList_9();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_8, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_9, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		V_2 = L_10;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		// squareSize.x = squareRect.width * squareTransform.localScale.x;
		float L_11;
		L_11 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_2;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		(&V_3)->set_x_0(((float)il2cpp_codegen_multiply((float)L_11, (float)L_14)));
		// squareSize.y = squareRect.height * squareTransform.localScale.y;
		float L_15;
		L_15 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_2;
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_3();
		(&V_3)->set_y_1(((float)il2cpp_codegen_multiply((float)L_15, (float)L_18)));
		// var minWidthPosition = (((currentGameData.selectedBoardData.Columns - 1) * squareSize.x) / 2) * 0.01f;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_19 = __this->get_currentGameData_4();
		NullCheck(L_19);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_20 = L_19->get_selectedBoardData_5();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_Columns_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_3;
		float L_23 = L_22.get_x_0();
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)))), (float)L_23))/(float)(2.0f))), (float)(0.00999999978f)));
		// var minWidthHeight = (((currentGameData.selectedBoardData.Rows - 1) * squareSize.y) / 2) * 0.01f;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_24 = __this->get_currentGameData_4();
		NullCheck(L_24);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_25 = L_24->get_selectedBoardData_5();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_Rows_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_3;
		float L_28 = L_27.get_y_1();
		V_5 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))), (float)L_28))/(float)(2.0f))), (float)(0.00999999978f)));
		// startPosition.x = (minWidthPosition != 0) ? minWidthPosition * -1 : minWidthPosition;
		float L_29 = V_4;
		G_B1_0 = (&V_0);
		if ((!(((float)L_29) == ((float)(0.0f)))))
		{
			G_B2_0 = (&V_0);
			goto IL_00ee;
		}
	}
	{
		float L_30 = V_4;
		G_B3_0 = L_30;
		G_B3_1 = G_B1_0;
		goto IL_00f6;
	}

IL_00ee:
	{
		float L_31 = V_4;
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_31, (float)(-1.0f)));
		G_B3_1 = G_B2_0;
	}

IL_00f6:
	{
		G_B3_1->set_x_0(G_B3_0);
		// startPosition.y += minWidthHeight;
		float* L_32 = (&V_0)->get_address_of_y_1();
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		float L_35 = V_5;
		*((float*)L_33) = (float)((float)il2cpp_codegen_add((float)L_34, (float)L_35));
		// return startPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_0;
		return L_36;
	}
}
// System.Void WordsGrid::SpawnGridSquares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SpawnGridSquares_m14CB406391C047A5E66D3851CADB329DAFD09A16 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_m8C91629A27FEC2179458E7B9AF3B52A9D8D62FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_m5FCAB643569C321A9B1CE9ABD84269F85B3AF781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mD85932113A20A17881D3C49B89E75B19831DEC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral653188F5BE69DB9F5C0D0F13E66DC8C247522F21);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * V_5 = NULL;
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * V_6 = NULL;
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * V_7 = NULL;
	LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * V_8 = NULL;
	{
		// if(currentGameData != null)
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0 = __this->get_currentGameData_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_01fc;
		}
	}
	{
		// var squareScale = GetSquareScale(new Vector3(1.5f,1.5f,0.1f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (1.5f), (1.5f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = WordsGrid_GetSquareScale_m4BD86C2EC5305C75D7163800C4B3B92BA85264B7(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// foreach(var squares in currentGameData.selectedBoardData.Board)
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_4 = __this->get_currentGameData_4();
		NullCheck(L_4);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_5 = L_4->get_selectedBoardData_5();
		NullCheck(L_5);
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_6 = L_5->get_Board_7();
		V_1 = L_6;
		V_2 = 0;
		goto IL_01f3;
	}

IL_0044:
	{
		// foreach(var squares in currentGameData.selectedBoardData.Board)
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// foreach(var squareLetter in squares.Row)
		NullCheck(L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10->get_Row_1();
		V_3 = L_11;
		V_4 = 0;
		goto IL_01e5;
	}

IL_0055:
	{
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_12 = (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_mA27D63B683ECE6771584FA96920BFE34A70FA4A6(L_12, /*hidden argument*/NULL);
		V_5 = L_12;
		// foreach(var squareLetter in squares.Row)
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_13 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_3;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		L_13->set_squareLetter_0(L_17);
		// var normalLetterData = alphabetData.AlphabetNormal.Find(data => data.letter == squareLetter);
		AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * L_18 = __this->get_alphabetData_6();
		NullCheck(L_18);
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_19 = L_18->get_AlphabetNormal_5();
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_20 = V_5;
		Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * L_21 = (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *)il2cpp_codegen_object_new(Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79(L_21, L_20, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_m8C91629A27FEC2179458E7B9AF3B52A9D8D62FC9_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var);
		NullCheck(L_19);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_22;
		L_22 = List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411(L_19, L_21, /*hidden argument*/List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var);
		V_6 = L_22;
		// var selectedLetterData = alphabetData.AlphabetHighlighted.Find(data => data.letter == squareLetter);
		AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * L_23 = __this->get_alphabetData_6();
		NullCheck(L_23);
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_24 = L_23->get_AlphabetHighlighted_6();
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_25 = V_5;
		Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * L_26 = (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *)il2cpp_codegen_object_new(Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79(L_26, L_25, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_m5FCAB643569C321A9B1CE9ABD84269F85B3AF781_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var);
		NullCheck(L_24);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_27;
		L_27 = List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411(L_24, L_26, /*hidden argument*/List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var);
		V_7 = L_27;
		// var correctLetterData = alphabetData.AlphabetWrong.Find(data => data.letter == squareLetter);
		AlphabetData_tEC6D25D9AD6937CB1FB87746CF69F50C3FAA12C9 * L_28 = __this->get_alphabetData_6();
		NullCheck(L_28);
		List_1_tCC15CC554B09A4301DD4DDA1D6BE1F52BA6D940C * L_29 = L_28->get_AlphabetWrong_7();
		U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * L_30 = V_5;
		Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F * L_31 = (Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F *)il2cpp_codegen_object_new(Predicate_1_t0EB63C1A442CD05E01060442ED935F19BDF71A9F_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79(L_31, L_30, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mD85932113A20A17881D3C49B89E75B19831DEC29_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m8AFF2C1815C8308175AC535CE6D80BBA7BAF4B79_RuntimeMethod_var);
		NullCheck(L_29);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_32;
		L_32 = List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411(L_29, L_31, /*hidden argument*/List_1_Find_m40858FB13CFFA510F74B3E43436AE0AE0B67A411_RuntimeMethod_var);
		V_8 = L_32;
		// if(normalLetterData.image == null || selectedLetterData.image == null)
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_33 = V_6;
		NullCheck(L_33);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_34 = L_33->get_image_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_34, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_00e2;
		}
	}
	{
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_36 = V_7;
		NullCheck(L_36);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_37 = L_36->get_image_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00f1;
		}
	}

IL_00e2:
	{
		// Debug.LogError("All Fields in the array should have some letters");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral653188F5BE69DB9F5C0D0F13E66DC8C247522F21, /*hidden argument*/NULL);
		// }
		goto IL_01df;
	}

IL_00f1:
	{
		// _squareList.Add(Instantiate(gridSquarePrefab));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_39 = __this->get__squareList_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_gridSquarePrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_40, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_39);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_39, L_41, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// _squareList[_squareList.Count - 1].GetComponent<GridSquare>().SetSprite(normalLetterData,correctLetterData,selectedLetterData);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_42 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_43 = __this->get__squareList_9();
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_43, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_42);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_42, ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_45);
		GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * L_46;
		L_46 = GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7(L_45, /*hidden argument*/GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7_RuntimeMethod_var);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_47 = V_6;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_48 = V_8;
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_49 = V_7;
		NullCheck(L_46);
		GridSquare_SetSprite_mE3C9CA312F6C8FD1747C84004C512EC1A68BE374(L_46, L_47, L_48, L_49, /*hidden argument*/NULL);
		// _squareList[_squareList.Count - 1].transform.SetParent(this.transform);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_50 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_51 = __this->get__squareList_9();
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_51, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_50);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_50, ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_54, L_55, /*hidden argument*/NULL);
		// _squareList[_squareList.Count - 1].GetComponent<Transform>().position = new Vector3(0f,0f,0f);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_56 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_57 = __this->get__squareList_9();
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_57, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_56);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_56, ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_59, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_61), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_60, L_61, /*hidden argument*/NULL);
		// _squareList[_squareList.Count - 1].transform.localScale = squareScale;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_62 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_63 = __this->get__squareList_9();
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_63, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_62);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_62, ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_65, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_0;
		NullCheck(L_66);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_66, L_67, /*hidden argument*/NULL);
		// _squareList[_squareList.Count - 1].GetComponent<GridSquare>().SetIndex(_squareList.Count - 1);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_68 = __this->get__squareList_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_69 = __this->get__squareList_9();
		NullCheck(L_69);
		int32_t L_70;
		L_70 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_69, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_68);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71;
		L_71 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_68, ((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_71);
		GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * L_72;
		L_72 = GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7(L_71, /*hidden argument*/GameObject_GetComponent_TisGridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B_mB90F14F1F270078C51960039FCF0C0C2F670B8A7_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_73 = __this->get__squareList_9();
		NullCheck(L_73);
		int32_t L_74;
		L_74 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_73, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_72);
		GridSquare_SetIndex_mFD940CF0FEB41682E32794C5ACE9BCD3982D4F37_inline(L_72, ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_01df:
	{
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01e5:
	{
		// foreach(var squareLetter in squares.Row)
		int32_t L_76 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = V_3;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_78 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_01f3:
	{
		// foreach(var squares in currentGameData.selectedBoardData.Board)
		int32_t L_79 = V_2;
		BoardRowU5BU5D_tEBB19146A7C2C191B256E90D218667DB5BD34F26* L_80 = V_1;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length))))))
		{
			goto IL_0044;
		}
	}

IL_01fc:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 WordsGrid::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WordsGrid_GetSquareScale_m4BD86C2EC5305C75D7163800C4B3B92BA85264B7 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultScale0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var finalScale = defaultScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___defaultScale0;
		V_0 = L_0;
		// var adjustment = 0.01f;
		V_1 = (0.00999999978f);
		goto IL_004e;
	}

IL_000a:
	{
		// finalScale.x -= adjustment;
		float* L_1 = (&V_0)->get_address_of_x_2();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = V_1;
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		// finalScale.y -= adjustment;
		float* L_5 = (&V_0)->get_address_of_y_3();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = V_1;
		*((float*)L_6) = (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
		// if(finalScale.x <= 0 || finalScale.y <= 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_x_2();
		if ((((float)L_10) <= ((float)(0.0f))))
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}

IL_003c:
	{
		// finalScale.x = adjustment;
		float L_13 = V_1;
		(&V_0)->set_x_2(L_13);
		// finalScale.y = adjustment;
		float L_14 = V_1;
		(&V_0)->set_y_3(L_14);
		// return finalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		return L_15;
	}

IL_004e:
	{
		// while (ShouldScaleDown(finalScale))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		bool L_17;
		L_17 = WordsGrid_ShouldScaleDown_m465ABBECD18A2D6E687A0B5970A4B02A2160A670(__this, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_000a;
		}
	}
	{
		// return finalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		return L_18;
	}
}
// System.Boolean WordsGrid::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordsGrid_ShouldScaleDown_m465ABBECD18A2D6E687A0B5970A4B02A2160A670 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetScale0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B2_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B3_1 = NULL;
	{
		// var squareRect = gridSquarePrefab.GetComponent<SpriteRenderer>().sprite.rect;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gridSquarePrefab_5();
		NullCheck(L_0);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_1);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2;
		L_2 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		L_3 = Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		// var startPosition = new Vector2(0f, 0f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		// squareSize.x = (squareRect.width * targetScale.x) + squareOffset;
		float L_4;
		L_4 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___targetScale0;
		float L_6 = L_5.get_x_2();
		float L_7 = __this->get_squareOffset_7();
		(&V_1)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_6)), (float)L_7)));
		// squareSize.y = (squareRect.height * targetScale.y) + squareOffset;
		float L_8;
		L_8 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___targetScale0;
		float L_10 = L_9.get_y_3();
		float L_11 = __this->get_squareOffset_7();
		(&V_1)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_10)), (float)L_11)));
		// var midWidthPosition = ((currentGameData.selectedBoardData.Columns * squareSize.x) / 2) * 0.01f;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_12 = __this->get_currentGameData_4();
		NullCheck(L_12);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_13 = L_12->get_selectedBoardData_5();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_Columns_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_1;
		float L_16 = L_15.get_x_0();
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_14)), (float)L_16))/(float)(2.0f))), (float)(0.00999999978f)));
		// var midHeightPosition = ((currentGameData.selectedBoardData.Rows * squareSize.y) / 2) * 0.01f;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_17 = __this->get_currentGameData_4();
		NullCheck(L_17);
		BoardData_t9C17F3B569738ADEE98047346831940A06B80AAC * L_18 = L_17->get_selectedBoardData_5();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_Rows_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_1;
		float L_21 = L_20.get_y_1();
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_19)), (float)L_21))/(float)(2.0f))), (float)(0.00999999978f)));
		// startPosition.x = (midWidthPosition != 0) ? midWidthPosition * -1 : midWidthPosition;
		float L_22 = V_3;
		G_B1_0 = (&V_2);
		if ((!(((float)L_22) == ((float)(0.0f)))))
		{
			G_B2_0 = (&V_2);
			goto IL_00c8;
		}
	}
	{
		float L_23 = V_3;
		G_B3_0 = L_23;
		G_B3_1 = G_B1_0;
		goto IL_00cf;
	}

IL_00c8:
	{
		float L_24 = V_3;
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_24, (float)(-1.0f)));
		G_B3_1 = G_B2_0;
	}

IL_00cf:
	{
		G_B3_1->set_x_0(G_B3_0);
		// startPosition.y = midHeightPosition;
		float L_25 = V_4;
		(&V_2)->set_y_1(L_25);
		// return startPosition.x < GetHalfScreenWidth() * -1 || startPosition.y > topPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = V_2;
		float L_27 = L_26.get_x_0();
		float L_28;
		L_28 = WordsGrid_GetHalfScreenWidth_m81AA00CAC5DA54BD118B5AF222330A743683BDD1(__this, /*hidden argument*/NULL);
		if ((((float)L_27) < ((float)((float)il2cpp_codegen_multiply((float)L_28, (float)(-1.0f))))))
		{
			goto IL_0100;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_2;
		float L_30 = L_29.get_y_1();
		float L_31 = __this->get_topPosition_8();
		return (bool)((((float)L_30) > ((float)L_31))? 1 : 0);
	}

IL_0100:
	{
		return (bool)1;
	}
}
// System.Single WordsGrid::GetHalfScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WordsGrid_GetHalfScreenWidth_m81AA00CAC5DA54BD118B5AF222330A743683BDD1 (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float height = Camera.main.orthographicSize * 2;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_0, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f)));
		// float width = (1.7f * height) * Screen.width / Screen.height;
		float L_2 = V_0;
		int32_t L_3;
		L_3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		// return width / 2;
		return ((float)((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(1.70000005f), (float)L_2)), (float)((float)((float)L_3))))/(float)((float)((float)L_4))))/(float)(2.0f)));
	}
}
// System.Void WordsGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid__ctor_m4EAFCE122954E87908D2CEB7119F96DFFDE8017B (WordsGrid_t178FE426F6D3B2706108AFF558821B48D2F3212B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> _squareList = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set__squareList_9(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AlphabetData/LetterData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterData__ctor_mDAAB3E949209FD6380AE1E8F2C61DDDEC826DAEC (LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void BoardData/BoardRow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow__ctor_m3A5692E705DE90995605D0A03D9BF5D8CEB8CF41 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, const RuntimeMethod* method)
{
	{
		// public BoardRow() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public BoardRow() { }
		return;
	}
}
// System.Void BoardData/BoardRow::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow__ctor_m629FFA2072A5F984D2D91BBC62A5EB0A56813B46 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		// public BoardRow(int size)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// CreateRow(size);
		int32_t L_0 = ___size0;
		BoardRow_CreateRow_m173C778FC23BCB489B84DEEBE478DDEC1A76A767(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoardData/BoardRow::CreateRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_CreateRow_m173C778FC23BCB489B84DEEBE478DDEC1A76A767 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Size = size;
		int32_t L_0 = ___size0;
		__this->set_Size_0(L_0);
		// Row = new string[Size];
		int32_t L_1 = __this->get_Size_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_Row_1(L_2);
		// ClearRow();
		BoardRow_ClearRow_m429BF67E86F9C2C7FF7A7BBE0622FA9639102C33(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoardData/BoardRow::ClearRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_ClearRow_m429BF67E86F9C2C7FF7A7BBE0622FA9639102C33 (BoardRow_t7732A4BE42ABDF138D33BC7C684B19613A71192A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i=0; i < Size; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// Row[i] = " ";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_Row_1();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		// for(int i=0; i < Size; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0015:
	{
		// for(int i=0; i < Size; i++)
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_Size_0();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
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
// System.Void BoardData/SearchingWord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord__ctor_mB39DC40D707A836213A667815049753F61C96DC2 (SearchingWord_t34FF453DFA0B1613C274CB6B637347C0B5EDDD30 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/BoardCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted__ctor_m5956A3BF50F2AF2E3B0C7971ACADE36D217A4214 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/BoardCompleted::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted_Invoke_m9E746DF3A04C6EDB09B5B2B4CCCF06A3301E5A93 (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/BoardCompleted::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoardCompleted_BeginInvoke_mD0A695590AAE7C2BFBB1E076AF81705B216F273A (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/BoardCompleted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardCompleted_EndInvoke_mBCE10A81144DB389C8C085304C2F4E00CA3B757C (BoardCompleted_tC7FC31FE4B218E5F29BFA286E4309AB7813E2E04 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___letter0' to native representation
	char* ____letter0_marshaled = NULL;
	____letter0_marshaled = il2cpp_codegen_marshal_string(___letter0);

	// Native function invocation
	il2cppPInvokeFunc(____letter0_marshaled, ___squarePosition1, ___squareIndex2);

	// Marshaling cleanup of parameter '___letter0' native representation
	il2cpp_codegen_marshal_free(____letter0_marshaled);
	____letter0_marshaled = NULL;

}
// System.Void GameEvents/CheckSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare__ctor_m0AD9F2DD2BDF7A6F00B74CA53253B31E38EFEFD6 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/CheckSquare::Invoke(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare_Invoke_mBADE932727CB44226DB2EF53CBC9159E32C3215E (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(targetMethod, ___letter0, ___squarePosition1, ___squareIndex2);
					else
						GenericVirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(targetMethod, ___letter0, ___squarePosition1, ___squareIndex2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___letter0, ___squarePosition1, ___squareIndex2);
					else
						VirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___letter0, ___squarePosition1, ___squareIndex2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(targetMethod, targetThis, ___letter0, ___squarePosition1, ___squareIndex2);
					else
						GenericVirtActionInvoker3< String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(targetMethod, targetThis, ___letter0, ___squarePosition1, ___squareIndex2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___letter0, ___squarePosition1, ___squareIndex2);
					else
						VirtActionInvoker3< String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___letter0, ___squarePosition1, ___squareIndex2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___letter0, ___squarePosition1, ___squareIndex2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GameEvents/CheckSquare::BeginInvoke(System.String,UnityEngine.Vector3,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CheckSquare_BeginInvoke_mAB7A30AD53370A4215D313F7E1DFA9AC332A9165 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, String_t* ___letter0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___squarePosition1, int32_t ___squareIndex2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___letter0;
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___squarePosition1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___squareIndex2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void GameEvents/CheckSquare::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare_EndInvoke_m12860D545CDED617BBF1376601937FDCC30E59B9 (CheckSquare_t5D05ABEF24FC030015CECF0531882310484DDC2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/ClearSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection__ctor_m0C3BCC9F283A6E5D2A9AF6A16E1FC6347243C642 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/ClearSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection_Invoke_m133962391B3622931FD495ED42329E9B81915367 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/ClearSelection::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClearSelection_BeginInvoke_m0DA56E40B9EB7AB1FD54FF7FCAFDAF68B732C150 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/ClearSelection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection_EndInvoke_mF409D6D0EB1633FE9D6F989012BBC2F9E6469EE2 (ClearSelection_t308DEC08887A34F757310C2338F5D2FE1A0DA7A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameEvents/CorrectWord::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord__ctor_m18C1CF5127CC40CCE433B3921B5450EB287E2CB9 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/CorrectWord::Invoke(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord_Invoke_mAF3BE4947C7ED32DB09FCB41CA753939B2BC688F (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___word0, ___squareIndexes1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___word0, ___squareIndexes1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(targetMethod, ___word0, ___squareIndexes1);
					else
						GenericVirtActionInvoker1< List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(targetMethod, ___word0, ___squareIndexes1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___word0, ___squareIndexes1);
					else
						VirtActionInvoker1< List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___word0, ___squareIndexes1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___word0, ___squareIndexes1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(targetMethod, targetThis, ___word0, ___squareIndexes1);
					else
						GenericVirtActionInvoker2< String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(targetMethod, targetThis, ___word0, ___squareIndexes1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___word0, ___squareIndexes1);
					else
						VirtActionInvoker2< String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___word0, ___squareIndexes1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___word0, ___squareIndexes1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___word0, ___squareIndexes1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GameEvents/CorrectWord::BeginInvoke(System.String,System.Collections.Generic.List`1<System.Int32>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CorrectWord_BeginInvoke_m08DEBACAA1C9A4A6C2F2ACF882033C7A55536AD2 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, String_t* ___word0, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___squareIndexes1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___word0;
	__d_args[1] = ___squareIndexes1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GameEvents/CorrectWord::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord_EndInvoke_m92F398065E87D77FB9602486983CAD6468C641B9 (CorrectWord_t4F885648ADEBB33EB5906C0276B8ED1D9709B1EA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/DisableSquareSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection__ctor_mFDD2839DE04959D8F9D9EA171228104EF920A399 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/DisableSquareSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection_Invoke_m5DB838C7440CAC22E333A00470B436DF45B21D70 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/DisableSquareSelection::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisableSquareSelection_BeginInvoke_m441469DD5B694E533C6FF4EAD009F95A0A4C294C (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/DisableSquareSelection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquareSelection_EndInvoke_mF51E9EB7FF687DEA87A359AB3B6FDE96F8CDF867 (DisableSquareSelection_t95E5737D4036582B493E2A9F412FFD234DBF795B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/EnableSquareSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection__ctor_mC18B5802A1A87E228DAC086DE064856911226ABD (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/EnableSquareSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection_Invoke_m00ADB5385E45682BDB3C6B271A872362DE0B5DC4 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/EnableSquareSelection::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnableSquareSelection_BeginInvoke_mD6A68DD75C568269975DB9FB0E61CA2DD590F2EB (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/EnableSquareSelection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquareSelection_EndInvoke_mF661F4431C9949DF3F76ADE1A62384D57A310269 (EnableSquareSelection_tB9A632FA6744F7991205108D988527CCCFC113D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/GameOver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m9020C2CE13E6DC24067E93BC8272301637E5093A (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/GameOver::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Invoke_m731CC7B41BA4C2E99ACDD95BCD39211974524EE6 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/GameOver::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOver_BeginInvoke_mCA5CE6EE48C606BF0DE15193C0F63FB8E40193C3 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/GameOver::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_EndInvoke_m3D65902582B59D94FC49E2AA552887F84CEBE1C5 (GameOver_tE65A9E9D466B7C99621C249E5B3B630DC1EC994C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/LoadNextLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel__ctor_mB90AB8B524F7E62320707E203AB10DF3491AB942 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/LoadNextLevel::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel_Invoke_mC2217880C5BFC7CE0065DED55395B06C9C57A6FA (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/LoadNextLevel::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadNextLevel_BeginInvoke_mF6B7E9602D4E1C4BBFF1FB7BD31104EA463ED4C8 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/LoadNextLevel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadNextLevel_EndInvoke_mA1EAD2872B55DECF2C8869EF7ED0AFDD6C52AF95 (LoadNextLevel_t9BEC531B54D149CF7B0C83112A7358776AE3937F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void GameEvents/SelectSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare__ctor_m82FDAE68434676ED2BBEE14CAA7152F19E925864 (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/SelectSquare::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare_Invoke_mFB2E3DEBE3C1FF69AB0116819FEB00C60BB87C3E (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___position0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___position0);
					else
						GenericVirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___position0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
					else
						VirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___position0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GameEvents/SelectSquare::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectSquare_BeginInvoke_m086704DDE835DE0498037907C58D0AF0299BE65F (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GameEvents/SelectSquare::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare_EndInvoke_m480A61CB93CBC60CD9A16BF1F8231D4550E59E3C (SelectSquare_tA0360736C256A9013808E777BA5C78FF4F8515D6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 (ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/ToggleSoundFX::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSoundFX__ctor_mFA8372AB5E474D4F0503231AFBDA5B85A9815877 (ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/ToggleSoundFX::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSoundFX_Invoke_m486C42870CA154B4C52EBC2FD4B2706831541208 (ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/ToggleSoundFX::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToggleSoundFX_BeginInvoke_mD4E7FB105FE8E630497B2FDB2CE9E42B19A1A61B (ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/ToggleSoundFX::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSoundFX_EndInvoke_mFF6F8865CC445A9E3AC0AEC95311E6BF18E8EB68 (ToggleSoundFX_tECA03577CDBB57021AE066F7AC9022C490502BA4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/UnlockNextCategory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory__ctor_m7167003D7CFA5B646F5FED073E1B3EE500F6FEC3 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameEvents/UnlockNextCategory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory_Invoke_mC5C57E4F3D2E08AFE834359E47BBD9EC58F3C975 (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GameEvents/UnlockNextCategory::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnlockNextCategory_BeginInvoke_mBE5923C5DDEF4A3540C41889A64FCB8401E421FE (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameEvents/UnlockNextCategory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockNextCategory_EndInvoke_m1AC3D96C5C33449FC5C7E82A23EE39B4D5AE68FF (UnlockNextCategory_t1A3C2324EE8656A558854A195D1712560192B646 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GameLevelData/CategoryRecord
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_pinvoke(const CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F& unmarshaled, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___boardData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'boardData' of type 'CategoryRecord'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___boardData_1Exception, NULL);
}
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_pinvoke_back(const CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_pinvoke& marshaled, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F& unmarshaled)
{
	Exception_t* ___boardData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'boardData' of type 'CategoryRecord'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___boardData_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: GameLevelData/CategoryRecord
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_pinvoke_cleanup(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GameLevelData/CategoryRecord
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_com(const CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F& unmarshaled, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_com& marshaled)
{
	Exception_t* ___boardData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'boardData' of type 'CategoryRecord'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___boardData_1Exception, NULL);
}
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_com_back(const CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_com& marshaled, CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F& unmarshaled)
{
	Exception_t* ___boardData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'boardData' of type 'CategoryRecord'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___boardData_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: GameLevelData/CategoryRecord
IL2CPP_EXTERN_C void CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshal_com_cleanup(CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayServices/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m74B1E22833364E572A6A8FDD46FFD247F8222E1F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * L_0 = (U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F *)il2cpp_codegen_object_new(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m44413408771FD5A9937D93B15761DC99807CB40A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayServices/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m44413408771FD5A9937D93B15761DC99807CB40A (U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayServices/<>c::<SendAchievement>b__6_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSendAchievementU3Eb__6_0_m81BB25DE7EA58ECB3544485E8E6C8634D18D088F (U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * __this, bool ___success0, const RuntimeMethod* method)
{
	{
		// });
		return;
	}
}
// System.Void GooglePlayServices/<>c::<SendIncrementalAchievement>b__7_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSendIncrementalAchievementU3Eb__7_0_mABE6288ED5304DAEA75EE4D587DF871418C9ECB9 (U3CU3Ec_tB4DD94B81CC4C9AFAFA9398AD20D80D54BFB777F * __this, bool ___success0, const RuntimeMethod* method)
{
	{
		// });
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnlockLevelPopup/CategoryNames
IL2CPP_EXTERN_C void CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshal_pinvoke(const CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0& unmarshaled, CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'CategoryNames': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception, NULL);
}
IL2CPP_EXTERN_C void CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshal_pinvoke_back(const CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshaled_pinvoke& marshaled, CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0& unmarshaled)
{
	Exception_t* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'CategoryNames': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnlockLevelPopup/CategoryNames
IL2CPP_EXTERN_C void CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshal_pinvoke_cleanup(CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnlockLevelPopup/CategoryNames
IL2CPP_EXTERN_C void CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshal_com(const CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0& unmarshaled, CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshaled_com& marshaled)
{
	Exception_t* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'CategoryNames': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception, NULL);
}
IL2CPP_EXTERN_C void CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshal_com_back(const CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshaled_com& marshaled, CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0& unmarshaled)
{
	Exception_t* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'CategoryNames': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnlockLevelPopup/CategoryNames
IL2CPP_EXTERN_C void CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshal_com_cleanup(CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WordsGrid/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA27D63B683ECE6771584FA96920BFE34A70FA4A6 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WordsGrid/<>c__DisplayClass9_0::<SpawnGridSquares>b__0(AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_m8C91629A27FEC2179458E7B9AF3B52A9D8D62FC9 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___data0, const RuntimeMethod* method)
{
	{
		// var normalLetterData = alphabetData.AlphabetNormal.Find(data => data.letter == squareLetter);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_letter_0();
		String_t* L_2 = __this->get_squareLetter_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean WordsGrid/<>c__DisplayClass9_0::<SpawnGridSquares>b__1(AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_m5FCAB643569C321A9B1CE9ABD84269F85B3AF781 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___data0, const RuntimeMethod* method)
{
	{
		// var selectedLetterData = alphabetData.AlphabetHighlighted.Find(data => data.letter == squareLetter);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_letter_0();
		String_t* L_2 = __this->get_squareLetter_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean WordsGrid/<>c__DisplayClass9_0::<SpawnGridSquares>b__2(AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mD85932113A20A17881D3C49B89E75B19831DEC29 (U3CU3Ec__DisplayClass9_0_t1D6D635476AB1ABB0DBF74E9674DA21B9DAE6E65 * __this, LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * ___data0, const RuntimeMethod* method)
{
	{
		// var correctLetterData = alphabetData.AlphabetWrong.Find(data => data.letter == squareLetter);
		LetterData_t06AF0965B967359521A82D5AA2DA244AE3BD17AD * L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_letter_0();
		String_t* L_2 = __this->get_squareLetter_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038_inline (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SoundManager_IsSoundFXMuted_mE2170C03EDDFC1E0E42E9AE4D5925AB69849E0DC_inline (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// return _muteSoundFx;
		bool L_0 = __this->get__muteSoundFx_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SoundManager_IsBackgroundMuted_m9BFCA18233622FACA030394F1B8741D2F84F95F0_inline (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// return _muteBackgroundMusic;
		bool L_0 = __this->get__muteBackgroundMusic_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridSquare_SetIndex_mFD940CF0FEB41682E32794C5ACE9BCD3982D4F37_inline (GridSquare_tB29DD4962FB0AF21F6A57E96E0AFE536B9E0261B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// public void SetIndex(int index) { _index = index; }
		int32_t L_0 = ___index0;
		__this->set__index_11(L_0);
		// public void SetIndex(int index) { _index = index; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  Enumerator_get_Current_m30A264F0B6A717CD00FE7D7C3BAF90B891906C94_gshared_inline (Enumerator_t959538989D821B7268A5113AF06D7DCD774ADE18 * __this, const RuntimeMethod* method)
{
	{
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_0 = (CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F )__this->get_current_3();
		return (CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  List_1_get_Item_mD2D4967299231BDB97D3A30EFBC5C16AA283D530_gshared_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18* L_2 = (CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18*)__this->get__items_1();
		int32_t L_3 = ___index0;
		CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((CategoryRecordU5BU5D_t06175993CE2C690845F13CEF448325A7082C5F18*)L_2, (int32_t)L_3);
		return (CategoryRecord_t6641AD037A579EF6CA390C921BED1B4CC043163F )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  Enumerator_get_Current_mDBFBA1D8AFFF51E42D098125C2CF6F4FBE03FA7A_gshared_inline (Enumerator_tC16B13DD13354850BCC3CB0193B9250F3613B788 * __this, const RuntimeMethod* method)
{
	{
		CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0  L_0 = (CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0 )__this->get_current_3();
		return (CategoryNames_t14ECA9CBDF7FFD5879F47596B30D2E437E3037F0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB69A913C02199D0C444D88A1738614933EE3DAB2_gshared_inline (List_1_tC2A168BF0A7B23822EB047EE892C4C34AFBC48E8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
