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
// Classes
//---------------------------------------------------------------------------

// Class HarbourFramework.HarbourInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHarbourInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HarbourFramework.HarbourInterface");
		return ptr;
	}



};

// Class HarbourFramework.HarbourService
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UHarbourService : public UObject
{
public:
	unsigned char                                      UnknownData_2OYP[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HarbourFramework.HarbourService");
		return ptr;
	}



};

// Class HarbourFramework.HarbourComponent
// 0x0028 (FullSize[0x02B0] - InheritedSize[0x0288])
class UHarbourComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_YKXQ[0x8];                                     // 0x0288(0x0008) Fix Super Size
	float                                              HarbourRadiusInCentimetres;                                // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7I57[0x1C];                                    // 0x0294(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HarbourFramework.HarbourComponent");
		return ptr;
	}



};

// Class HarbourFramework.HarbourServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHarbourServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HarbourFramework.HarbourServiceInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
