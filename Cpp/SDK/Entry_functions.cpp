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

// Function Entry.Entry_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AEntry_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Entry.Entry_C.ReceiveBeginPlay");

	AEntry_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Entry.Entry_C.ExecuteUbergraph_Entry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AEntry_C::ExecuteUbergraph_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Entry.Entry_C.ExecuteUbergraph_Entry");

	AEntry_C_ExecuteUbergraph_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
