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

// Class TimeTests.MockTimeService
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UMockTimeService : public UObject
{
public:
	unsigned char                                      UnknownData_VMUP[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Actor;                                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeTests.MockTimeService");
		return ptr;
	}



};

// Class TimeTests.TimeServiceMock
// 0x0000 (FullSize[0x0538] - InheritedSize[0x0538])
class ATimeServiceMock : public ATimeService
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeTests.TimeServiceMock");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
