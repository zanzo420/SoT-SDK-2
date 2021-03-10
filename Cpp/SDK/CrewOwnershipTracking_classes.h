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

// Class CrewOwnershipTracking.CrewOwnershipTrackingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrewOwnershipTrackingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingInterface");
		return ptr;
	}



};

// Class CrewOwnershipTracking.CustomCrewTrackingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomCrewTrackingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CrewOwnershipTracking.CustomCrewTrackingInterface");
		return ptr;
	}



};

// Class CrewOwnershipTracking.CrewOwnershipTrackingComponent
// 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
class UCrewOwnershipTrackingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_S467[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       CurrentOwnedByCrewId;                                      // 0x00D8(0x0010) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FOwnerListEntry                             PreviousOwnedByCrewIdList;                                 // 0x00E8(0x0010) (Net)
	TMap<struct FName, struct FOwnerListEntry>         CustomTrackingMap;                                         // 0x00F8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData_OP69[0x10];                                    // 0x0148(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingComponent");
		return ptr;
	}



};

// Class CrewOwnershipTracking.CrewOwnershipTrackingControlInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrewOwnershipTrackingControlInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingControlInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
