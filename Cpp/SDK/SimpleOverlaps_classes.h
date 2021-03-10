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

// Class SimpleOverlaps.TestObjectMessagingDispatcherInterface
// 0x00A8 (FullSize[0x04D0] - InheritedSize[0x0428])
class ATestObjectMessagingDispatcherInterface : public AActor
{
public:
	unsigned char                                      UnknownData_IEA5[0xA8];                                    // 0x0428(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestObjectMessagingDispatcherInterface");
		return ptr;
	}



};

// Class SimpleOverlaps.TestOverlapBroadcasterActor
// 0x0120 (FullSize[0x0548] - InheritedSize[0x0428])
class ATestOverlapBroadcasterActor : public AActor
{
public:
	unsigned char                                      UnknownData_NIEZ[0x30];                                    // 0x0428(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NDDQ[0xE8];                                    // 0x0460(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestOverlapBroadcasterActor");
		return ptr;
	}



};

// Class SimpleOverlaps.TestOverlapShapeActor
// 0x0010 (FullSize[0x0438] - InheritedSize[0x0428])
class ATestOverlapShapeActor : public AActor
{
public:
	unsigned char                                      UnknownData_0T0V[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestOverlapShapeActor");
		return ptr;
	}



};

// Class SimpleOverlaps.TestSimpleOverlapsGameState
// 0x0060 (FullSize[0x04E0] - InheritedSize[0x0480])
class ATestSimpleOverlapsGameState : public AGameState
{
public:
	unsigned char                                      UnknownData_GXTG[0x60];                                    // 0x0480(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestSimpleOverlapsGameState");
		return ptr;
	}



};

// Class SimpleOverlaps.OverlapTestActor
// 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
class AOverlapTestActor : public AActor
{
public:
	unsigned char                                      UnknownData_QM54[0x10];                                    // 0x0428(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.OverlapTestActor");
		return ptr;
	}



};

// Class SimpleOverlaps.SimpleOverlapCollectionKey
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USimpleOverlapCollectionKey : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapCollectionKey");
		return ptr;
	}



};

// Class SimpleOverlaps.SimpleOverlapComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class USimpleOverlapComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_AA99[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
