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

// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Asot_frontend_01_a_IPGLineUp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ReceiveBeginPlay");

	Asot_frontend_01_a_IPGLineUp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.showPlayerMarker
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_IPGLineUp_C::showPlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.showPlayerMarker");

	Asot_frontend_01_a_IPGLineUp_C_showPlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.hidePlayerMarker
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_IPGLineUp_C::hidePlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.hidePlayerMarker");

	Asot_frontend_01_a_IPGLineUp_C_hidePlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ExecuteUbergraph_sot_frontend_01_a_IPGLineUp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_IPGLineUp_C::ExecuteUbergraph_sot_frontend_01_a_IPGLineUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ExecuteUbergraph_sot_frontend_01_a_IPGLineUp");

	Asot_frontend_01_a_IPGLineUp_C_ExecuteUbergraph_sot_frontend_01_a_IPGLineUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
