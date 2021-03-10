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

// Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_TargetEnsemble
// (Final, RequiredAPI, Native, Private)
void UGlitterBeardFinaleCoordinatorComponent::OnRep_TargetEnsemble()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_TargetEnsemble");

	UGlitterBeardFinaleCoordinatorComponent_OnRep_TargetEnsemble_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent
// (Final, RequiredAPI, Native, Private)
void UGlitterBeardTreeVisualFeedbackComponent::OnRep_NextStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent");

	UGlitterBeardTreeVisualFeedbackComponent_OnRep_NextStateEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
