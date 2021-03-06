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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C
// 0x0030 (FullSize[0x0460] - InheritedSize[0x0430])
class Asot_frontend_01_a_start_terrain_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsPlaying;                                                 // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DJQA[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMatineeActor*                               BakedOpenSeqCam_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty; // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_Audio_Play_Wwise_Event_Function_C*       BP_Audio_Play_Wwise_Event_Function_C_2_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty; // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACameraActor*                                IntroCam_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty; // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_Audio_Play_Wwise_Event_Function_C*       BP_Audio_Play_Wwise_Event_Function_C_2_UniqueObjectNameForCooking_993562282_RefProperty; // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C");
		return ptr;
	}



	void LeaveMapTableAnimation();
	void GetFrontendCamera(class UFrontendCameraComponent** CameraComponent);
	void K2Node_MatineeController_10_MatineeSequenceFinished();
	void K2Node_MatineeController_10_Finished();
	void PlayIntroMatinee();
	void EnteredEngageState();
	void SetMatineePlaybackRate(float PlaybackRate);
	void ReceiveBeginPlay();
	void ExitIntroMatinee();
	void ExecuteUbergraph_sot_frontend_01_a_start_terrain(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
