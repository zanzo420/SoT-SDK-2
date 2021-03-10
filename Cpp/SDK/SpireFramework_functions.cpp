// Name: sot, Version: 4.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection
// (Final, RequiredAPI, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SpireFramework_EDirectionOfMovement> InMovement                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHeightTriggerableEffectsComponent::SetMovementDirection(TEnumAsByte<SpireFramework_EDirectionOfMovement> InMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection");

	UHeightTriggerableEffectsComponent_SetMovementDirection_Params params;
	params.InMovement = InMovement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpireFramework.SpireService.OnRep_SpireLevels
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FSpireInfo>      PreviousSpireLevels            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ASpireService::OnRep_SpireLevels(TArray<struct FSpireInfo> PreviousSpireLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpireFramework.SpireService.OnRep_SpireLevels");

	ASpireService_OnRep_SpireLevels_Params params;
	params.PreviousSpireLevels = PreviousSpireLevels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
