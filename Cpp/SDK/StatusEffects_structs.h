﻿#pragma once

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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StatusEffects.EventStatusScreenEffectEnded
// 0x000C
struct FEventStatusScreenEffectEnded
{
	struct FName                                       MaterialParamName;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutAcceleration;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct StatusEffects.EventStatusScreenSpaceParticleEffectEnded
// 0x0008
struct FEventStatusScreenSpaceParticleEffectEnded
{
	class UObject*                                     ParticleSystem;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct StatusEffects.EventStatusScreenSpaceParticleEffectStarted
// 0x0008
struct FEventStatusScreenSpaceParticleEffectStarted
{
	class UObject*                                     ParticleSystem;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct StatusEffects.EventStatusScreenEffectStarted
// 0x0028
struct FEventStatusScreenEffectStarted
{
	struct FName                                       MaterialParamName;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TintParamName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TintColor;                                                 // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TargetEffectStrength;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeInAcceleration;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct StatusEffects.EventExitedSurfaceMaterialStatusZone
// 0x0001
struct FEventExitedSurfaceMaterialStatusZone
{
	unsigned char                                      UnknownData_YEUE[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct StatusEffects.EventEnteredSurfaceMaterialStatusZone
// 0x0010
struct FEventEnteredSurfaceMaterialStatusZone
{
	TScriptInterface<class USurfaceMaterialStatusZoneInterface> EnteredZone;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

};

// ScriptStruct StatusEffects.StatusDescriptor
// 0x0004
struct FStatusDescriptor
{
	float                                              Intensity;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct StatusEffects.Status
// 0x0018
struct FStatus
{
	TArray<class UClass*>                              Type;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper)
	struct FStatusDescriptor                           Descriptor;                                                // 0x0010(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_VSOJ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct StatusEffects.DebugMenuStatusDefinition
// 0x0020
struct FDebugMenuStatusDefinition
{
	struct FName                                       Identifier;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatus                                     Status;                                                    // 0x0008(0x0018) (Edit)

};

// ScriptStruct StatusEffects.DelayedStatusEffect
// 0x0020
struct FDelayedStatusEffect
{
	struct FStatus                                     StatusEffect;                                              // 0x0000(0x0018) (Edit)
	float                                              InEffectTime;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9P9I[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct StatusEffects.ActiveStatusEffect
// 0x0050
struct FActiveStatusEffect
{
	TArray<class UClass*>                              SourceStatus;                                              // 0x0000(0x0010) (ZeroConstructor, UObjectWrapper)
	struct FStatusDescriptor                           Descriptor;                                                // 0x0010(0x0004)
	unsigned char                                      UnknownData_9RP7[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStatusResponse*>                     ResponseTemplates;                                         // 0x0018(0x0010) (ZeroConstructor)
	TArray<class UStatusResponse*>                     InstancedResponses;                                        // 0x0028(0x0010) (ZeroConstructor, RepSkip)
	bool                                               ResponsesAreActive;                                        // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5ZT5[0x17];                                    // 0x0039(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct StatusEffects.FeatureToggledStatusResponseList
// 0x0018
struct FFeatureToggledStatusResponseList
{
	struct FName                                       Feature;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStatusResponseAsset*>                ResponseAssets;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct StatusEffects.EventAppliedStatusToTargets
// 0x0020
struct FEventAppliedStatusToTargets
{
	TArray<class UClass*>                              StatusApplied;                                             // 0x0000(0x0010) (ZeroConstructor, UObjectWrapper)
	TArray<class AActor*>                              Targets;                                                   // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct StatusEffects.StatusEffectPersistenceKey
// 0x0018
struct FStatusEffectPersistenceKey
{
	struct FStatus                                     AppliedStatuses;                                           // 0x0000(0x0018)

};

// ScriptStruct StatusEffects.ApplyStatusEvent
// 0x0018
struct FApplyStatusEvent
{
	struct FStatus                                     StatusToApply;                                             // 0x0000(0x0018)

};

// ScriptStruct StatusEffects.StatusDeactivatedEvent
// 0x0018
struct FStatusDeactivatedEvent
{
	struct FGuid                                       Id;                                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       StatusName;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct StatusEffects.StatusActivatedEvent
// 0x0018
struct FStatusActivatedEvent
{
	struct FGuid                                       Id;                                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       StatusName;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct StatusEffects.EventStatusMaterialEffectEnded
// 0x0014
struct FEventStatusMaterialEffectEnded
{
	struct FName                                       MaterialParamName;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CanShowMaterialParam;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutAcceleration;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct StatusEffects.EventStatusMaterialEffectStarted
// 0x0030
struct FEventStatusMaterialEffectStarted
{
	struct FName                                       MaterialParamName;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CanShowMaterialParam;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TintParamName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TintColor;                                                 // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TargetEffectStrength;                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeInAcceleration;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif