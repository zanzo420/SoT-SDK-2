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

// Function BP_audio_prem_shop.BP_audio_prem_shop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_audio_prem_shop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop.BP_audio_prem_shop_C.UserConstructionScript");

	ABP_audio_prem_shop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_audio_prem_shop.BP_audio_prem_shop_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_audio_prem_shop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop.BP_audio_prem_shop_C.ReceiveBeginPlay");

	ABP_audio_prem_shop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_audio_prem_shop.BP_audio_prem_shop_C.ExecuteUbergraph_BP_audio_prem_shop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_audio_prem_shop_C::ExecuteUbergraph_BP_audio_prem_shop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop.BP_audio_prem_shop_C.ExecuteUbergraph_BP_audio_prem_shop");

	ABP_audio_prem_shop_C_ExecuteUbergraph_BP_audio_prem_shop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
