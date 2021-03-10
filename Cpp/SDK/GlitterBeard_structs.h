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

// Enum GlitterBeard.EFinaleState
enum class GlitterBeard_EFinaleState : uint8_t
{
	EFinaleState__Inactive         = 0,
	EFinaleState__Active           = 1,
	EFinaleState__EFinaleState_MAX = 2,

};

// Enum GlitterBeard.EGlitterbeardVFXState
enum class GlitterBeard_EGlitterbeardVFXState : uint8_t
{
	EGlitterbeardVFXState__Active  = 0,
	EGlitterbeardVFXState__Inactive = 1,
	EGlitterbeardVFXState__EGlitterbeardVFXState_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GlitterBeard.VisualFeedbackEntry
// 0x0008
struct FVisualFeedbackEntry
{
	class UEffectBlendObjectBase*                      Effect;                                                    // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)

};

// ScriptStruct GlitterBeard.VisualFeedbackList
// 0x0018
struct FVisualFeedbackList
{
	TArray<struct FVisualFeedbackEntry>                Entires;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	float                                              StartDelay;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionTime;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct GlitterBeard.UnlockEventData
// 0x0004
struct FUnlockEventData
{
	int                                                Idx;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct GlitterBeard.GlitterBeardVFXTransitionCompletedEvent
// 0x0004
struct FGlitterBeardVFXTransitionCompletedEvent
{
	int                                                Index;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct GlitterBeard.ChangeGlitterBeardVFXStateEvent
// 0x0008
struct FChangeGlitterBeardVFXStateEvent
{
	int                                                Index;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GlitterBeard_EGlitterbeardVFXState>    Target;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2M1I[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
