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

// Class ObjectCollection.TestCollector
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UTestCollector : public UObject
{
public:
	unsigned char                                      UnknownData_FERF[0x60];                                    // 0x0028(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectCollection.TestCollector");
		return ptr;
	}



};

// Class ObjectCollection.ObjectCollectorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UObjectCollectorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectCollection.ObjectCollectorInterface");
		return ptr;
	}



};

// Class ObjectCollection.TestObjectForCollection
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UTestObjectForCollection : public UObject
{
public:
	unsigned char                                      UnknownData_Y5IR[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectCollection.TestObjectForCollection");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
