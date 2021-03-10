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

// Class SirensAnimation.SirenAnimationData
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class USirenAnimationData : public UAnimationData
{
public:
	struct FSirenAnimationDataStructure                SirenAnimationData;                                        // 0x0028(0x0040) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationData");
		return ptr;
	}



};

// Class SirensAnimation.SirenAnimationInstance
// 0x0220 (FullSize[0x0660] - InheritedSize[0x0440])
class USirenAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_1Z0R[0x8];                                     // 0x0440(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSirenAnimationDataStructure                SirenAnimationData;                                        // 0x0448(0x0040) (BlueprintVisible, BlueprintReadOnly)
	struct FAthenaAnimationWeapon                      AttackAnimations;                                          // 0x0488(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	float                                              ForwardSpeed;                                              // 0x0540(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltDirectionAngleDegrees;                                 // 0x0544(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltAngleAlpha;                                            // 0x0548(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpinAngleDegrees;                                          // 0x054C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTiltAngleRepresentedByAdditiveBendAnimations;           // 0x0550(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpperBodyOverlayActive;                                    // 0x0554(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SwimmingLongways;                                          // 0x0555(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FUC4[0x6];                                     // 0x0556(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               AnimationsLoaded;                                          // 0x055C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FAUD[0x3];                                     // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageStateMachine         FullBodyStateMachine;                                      // 0x0560(0x00D8)
	unsigned char                                      UnknownData_R1OF[0x28];                                    // 0x0638(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationInstance");
		return ptr;
	}



	void ClearActiveAttack();
	void BeginNewAttack();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
