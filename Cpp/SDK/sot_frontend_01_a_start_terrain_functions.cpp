﻿// Name: sot, Version: 4.2

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

// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.LeaveMapTableAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_start_terrain_C::LeaveMapTableAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.LeaveMapTableAnimation");

	Asot_frontend_01_a_start_terrain_C_LeaveMapTableAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.GetFrontendCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFrontendCameraComponent* CameraComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_start_terrain_C::GetFrontendCamera(class UFrontendCameraComponent** CameraComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.GetFrontendCamera");

	Asot_frontend_01_a_start_terrain_C_GetFrontendCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CameraComponent != nullptr)
		*CameraComponent = params.CameraComponent;

}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_MatineeSequenceFinished
// (BlueprintEvent)
void Asot_frontend_01_a_start_terrain_C::K2Node_MatineeController_10_MatineeSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_MatineeSequenceFinished");

	Asot_frontend_01_a_start_terrain_C_K2Node_MatineeController_10_MatineeSequenceFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_Finished
// (BlueprintEvent)
void Asot_frontend_01_a_start_terrain_C::K2Node_MatineeController_10_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_Finished");

	Asot_frontend_01_a_start_terrain_C_K2Node_MatineeController_10_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.PlayIntroMatinee
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_start_terrain_C::PlayIntroMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.PlayIntroMatinee");

	Asot_frontend_01_a_start_terrain_C_PlayIntroMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.EnteredEngageState
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_start_terrain_C::EnteredEngageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.EnteredEngageState");

	Asot_frontend_01_a_start_terrain_C_EnteredEngageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.SetMatineePlaybackRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlaybackRate                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_start_terrain_C::SetMatineePlaybackRate(float PlaybackRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.SetMatineePlaybackRate");

	Asot_frontend_01_a_start_terrain_C_SetMatineePlaybackRate_Params params;
	params.PlaybackRate = PlaybackRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Asot_frontend_01_a_start_terrain_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ReceiveBeginPlay");

	Asot_frontend_01_a_start_terrain_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExitIntroMatinee
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_start_terrain_C::ExitIntroMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExitIntroMatinee");

	Asot_frontend_01_a_start_terrain_C_ExitIntroMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExecuteUbergraph_sot_frontend_01_a_start_terrain
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_start_terrain_C::ExecuteUbergraph_sot_frontend_01_a_start_terrain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExecuteUbergraph_sot_frontend_01_a_start_terrain");

	Asot_frontend_01_a_start_terrain_C_ExecuteUbergraph_sot_frontend_01_a_start_terrain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
