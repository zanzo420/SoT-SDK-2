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

// Enum SpireFramework.EDirectionOfMovement
enum class SpireFramework_EDirectionOfMovement : uint8_t
{
	EDirectionOfMovement__None     = 0,
	EDirectionOfMovement__Rising   = 1,
	EDirectionOfMovement__Lowering = 2,
	EDirectionOfMovement__EDirectionOfMovement_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SpireFramework.QuestVariableSpireHandle
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableSpireHandle : public FQuestVariable
{

};

// ScriptStruct SpireFramework.SpireStreamedLevelData
// 0x0020
struct FSpireStreamedLevelData
{
	class UAthenaStreamedLevelDataAsset*               DataAsset;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             Locations;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureToggle;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct SpireFramework.SpireInfo
// 0x0020
struct FSpireInfo
{
	int                                                LevelId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLoaded;                                                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S39H[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SpireActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DD3J[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
