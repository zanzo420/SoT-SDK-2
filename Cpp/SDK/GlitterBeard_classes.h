#pragma once

// Name: sot, Version: 4.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GlitterBeard.GlitterBeardEntitlementDesc
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UGlitterBeardEntitlementDesc : public UEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardEntitlementDesc");
		return ptr;
	}



};

// Class GlitterBeard.GlitterBeardFinaleCoordinatorComponent
// 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
class UGlitterBeardFinaleCoordinatorComponent : public UActorComponent
{
public:
	class UWwiseEvent*                                 AudioEventToSynchronise;                                   // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     TargetEnsemble;                                            // 0x00D0(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1ZV8[0x80];                                    // 0x00D8(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardFinaleCoordinatorComponent");
		return ptr;
	}



	void OnRep_TargetEnsemble();
};

// Class GlitterBeard.GlitterBeardLanternSoundEffect
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UGlitterBeardLanternSoundEffect : public UEffectBlendObjectBase
{
public:
	float                                              TriggerThreshold;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OKT6[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseObjectPoolWrapper*                     WWisePool;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WwiseEvent;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwiseEmitter                               Emitter;                                                   // 0x0050(0x0020) (Transient)
	unsigned char                                      UnknownData_JFIN[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardLanternSoundEffect");
		return ptr;
	}



};

// Class GlitterBeard.GlitterBeardTrustedTreeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGlitterBeardTrustedTreeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTrustedTreeInterface");
		return ptr;
	}



};

// Class GlitterBeard.GlitterBeardTree
// 0x01D8 (FullSize[0x0600] - InheritedSize[0x0428])
class AGlitterBeardTree : public AActor
{
public:
	unsigned char                                      UnknownData_CF0D[0x10];                                    // 0x0428(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UActionRulesComponent*                       ActionRulesComponent;                                      // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UActionRulesInteractableComponent*           InteractableComponent;                                     // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FText                                       CanInteractWithTreeToolTipText;                            // 0x0448(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_UZB5[0x20];                                    // 0x0448(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      InteractWithTreeNotificationID;                            // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	float                                              UnlockDelay;                                               // 0x0488(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2A80[0x4];                                     // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGlitterBeardFinaleCoordinatorComponent*     FinaleCoordinator;                                         // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class ULandmarkReactionTriggerComponent*           LandmarkReactionTrigger;                                   // 0x0498(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LXD3[0x148];                                   // 0x04A0(0x0148) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASlidingDoor*                                HideoutDoor;                                               // 0x05E8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UZRI[0x10];                                    // 0x05F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTree");
		return ptr;
	}



};

// Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UGlitterBeardTreeVisualFeedbackComponent : public UActorComponent
{
public:
	TArray<struct FVisualFeedbackList>                 FeedbackActions;                                           // 0x00C8(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_2HSW[0x10];                                    // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FChangeGlitterBeardVFXStateEvent            NextStateEvent;                                            // 0x00E8(0x0008) (Net, RepNotify)
	unsigned char                                      UnknownData_VVAO[0x20];                                    // 0x00F0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent");
		return ptr;
	}



	void OnRep_NextStateEvent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
