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
// Enums
//---------------------------------------------------------------------------

// Enum ExplosionFramework.EExplosionReceiverCurveType
enum class ExplosionFramework_EExplosionReceiverCurveType : uint8_t
{
	EExplosionReceiverCurveType__None = 0,
	EExplosionReceiverCurveType__Other = 1,
	EExplosionReceiverCurveType__Player = 2,
	EExplosionReceiverCurveType__EExplosionReceiverCurveType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ExplosionFramework.EventExplosionOverlap
// 0x0008
struct FEventExplosionOverlap
{
	class UClass*                                      DamagerType;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

};

// ScriptStruct ExplosionFramework.EventOnExploded
// 0x000C
struct FEventOnExploded
{
	unsigned char                                      UnknownData_LMC6[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
