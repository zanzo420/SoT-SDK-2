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

// Class NetworkRegions.NetworkRegionServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNetworkRegionServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetworkRegions.NetworkRegionServiceInterface");
		return ptr;
	}



};

// Class NetworkRegions.NetworkRegionService
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UNetworkRegionService : public UObject
{
public:
	unsigned char                                      UnknownData_GK1P[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorld*                                      World;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_50LY[0x58];                                    // 0x0040(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APlayerController*>                   PlayersThatNeedToBeTicked;                                 // 0x0098(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetworkRegions.NetworkRegionService");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
