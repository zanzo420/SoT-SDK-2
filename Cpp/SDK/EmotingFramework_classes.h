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

// Class EmotingFramework.EmoteCard
// 0x0140 (FullSize[0x0568] - InheritedSize[0x0428])
class AEmoteCard : public AActor
{
public:
	unsigned char                                      UnknownData_10YI[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicCardSelectionMaterialInstance;                      // 0x0430(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RandomCardParameterName;                                   // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInt32Range                                 RandomCardParameterRange;                                  // 0x0448(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9E3E[0x110];                                   // 0x0458(0x0110) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmotingFramework.EmoteCard");
		return ptr;
	}



};

// Class EmotingFramework.EmoteCoin
// 0x0118 (FullSize[0x0540] - InheritedSize[0x0428])
class AEmoteCoin : public AActor
{
public:
	unsigned char                                      UnknownData_8FPS[0x118];                                   // 0x0428(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmotingFramework.EmoteCoin");
		return ptr;
	}



};

// Class EmotingFramework.EmoteIdListingAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEmoteIdListingAsset : public UDataAsset
{
public:
	TArray<struct FName>                               EmoteIds;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmotingFramework.EmoteIdListingAsset");
		return ptr;
	}



};

// Class EmotingFramework.EmoteSettings
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UEmoteSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       EmoteIdListingAsset;                                       // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       EmoteItemCategoriesListingAsset;                           // 0x0048(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	int                                                Pages;                                                     // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TS7G[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmotingFramework.EmoteSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
