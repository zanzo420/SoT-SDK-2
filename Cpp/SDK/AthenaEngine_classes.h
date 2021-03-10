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

// Class AthenaEngine.AthenaEngineInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaEngineInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.AthenaEngineInterface");
		return ptr;
	}



};

// Class AthenaEngine.BoxedRpcDispatcherInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBoxedRpcDispatcherInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.BoxedRpcDispatcherInterface");
		return ptr;
	}



};

// Class AthenaEngine.BoxedRpcDispatcherComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UBoxedRpcDispatcherComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_LWLG[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.BoxedRpcDispatcherComponent");
		return ptr;
	}



	void Server_SendRpc(const struct FSerialisedRpc& Event);
	void NetMulticastExcludeServer_SendRpc(const struct FSerialisedRpc& Event);
	void Client_SendRpc(const struct FSerialisedRpc& Event);
};

// Class AthenaEngine.DynamicColourPointLightComponent
// 0x0138 (FullSize[0x0580] - InheritedSize[0x0448])
class UDynamicColourPointLightComponent : public UPointLightComponent
{
public:
	struct FRuntimeFloatCurve                          ActivationCurve;                                           // 0x0448(0x0080) (Edit)
	struct FRuntimeFloatCurve                          DeactivationCurve;                                         // 0x04C8(0x0080) (Edit)
	unsigned char                                      UnknownData_2UZ2[0x38];                                    // 0x0548(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.DynamicColourPointLightComponent");
		return ptr;
	}



	void DeactivateLight(bool Blend);
	void ActivateLight(bool Blend);
};

// Class AthenaEngine.EmptyObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEmptyObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.EmptyObject");
		return ptr;
	}



};

// Class AthenaEngine.ForceFeedbackCondition
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UForceFeedbackCondition : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.ForceFeedbackCondition");
		return ptr;
	}



	bool CanPlayForceFeedback(class AActor* InOwner);
};

// Class AthenaEngine.GameInstanceSessionIdProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameInstanceSessionIdProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.GameInstanceSessionIdProviderInterface");
		return ptr;
	}



};

// Class AthenaEngine.NestedWorldRootDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNestedWorldRootDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData_NV45[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.NestedWorldRootDataAsset");
		return ptr;
	}



};

// Class AthenaEngine.OnlinePlayerPermissionsRetrieverInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOnlinePlayerPermissionsRetrieverInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.OnlinePlayerPermissionsRetrieverInterface");
		return ptr;
	}



};

// Class AthenaEngine.PlayModeHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPlayModeHelpers : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.PlayModeHelpers");
		return ptr;
	}



	void STATIC_SetPlayModeVariantOverride(TEnumAsByte<AthenaEngine_EPlayModeVariant> NewPlayModeVariantOverride);
	void STATIC_SetPlayModeOverride(TEnumAsByte<AthenaEngine_EPlayMode> NewPlayModeOverride);
	TEnumAsByte<AthenaEngine_EPlayModeVariant> STATIC_GetPlayModeVariant(class UObject* WorldContext);
	TEnumAsByte<AthenaEngine_EPlayMode> STATIC_GetPlayMode(class UObject* WorldContext);
	void STATIC_ClearPlayModeVariantOverride();
	void STATIC_ClearPlayModeOverride();
};

// Class AthenaEngine.PlayModeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPlayModeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.PlayModeInterface");
		return ptr;
	}



};

// Class AthenaEngine.PrimitiveCollisionExtentAdjustOverTimeComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UPrimitiveCollisionExtentAdjustOverTimeComponent : public UActorComponent
{
public:
	float                                              DelayBeforeExtentAdjustment;                               // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PH4J[0x2C];                                    // 0x00CC(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorld*                                      CachedWorld;                                               // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C7N2[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.PrimitiveCollisionExtentAdjustOverTimeComponent");
		return ptr;
	}



};

// Class AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent
// 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
class UBoxCollisionExtentAdjustOverTimeComponent : public UPrimitiveCollisionExtentAdjustOverTimeComponent
{
public:
	bool                                               ShouldAdjustBoxExtentX;                                    // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GZ18[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PostAdjustmentBoxExtentX;                                  // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldAdjustBoxExtentY;                                    // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UAHF[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PostAdjustmentBoxExtentY;                                  // 0x0114(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldAdjustBoxExtentZ;                                    // 0x0118(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XVK7[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PostAdjustmentBoxExtentZ;                                  // 0x011C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ServerSizeScale;                                           // 0x0120(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZPE4[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               BoxCollisionToAdjust;                                      // 0x0130(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent");
		return ptr;
	}



};

// Class AthenaEngine.SphereCollisionExtentAdjustOverTimeComponent
// 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
class USphereCollisionExtentAdjustOverTimeComponent : public UPrimitiveCollisionExtentAdjustOverTimeComponent
{
public:
	bool                                               ShouldAdjustSphereRadius;                                  // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FREJ[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PostAdjustmentSphereRadius;                                // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ServerSizeScale;                                           // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MNTP[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            SphereCollisionToAdjust;                                   // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.SphereCollisionExtentAdjustOverTimeComponent");
		return ptr;
	}



};

// Class AthenaEngine.ResourceProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UResourceProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.ResourceProviderInterface");
		return ptr;
	}



};

// Class AthenaEngine.RotateMeshToActorComponent
// 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
class URotateMeshToActorComponent : public UActorComponent
{
public:
	class UMeshComponent*                              MeshToRotate;                                              // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      ActorToRotateTo;                                           // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              CloseProximityRadius;                                      // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationSpeed;                                             // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxPitch;                                                  // 0x00E0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloseProximityYawRotation;                                 // 0x00E4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.RotateMeshToActorComponent");
		return ptr;
	}



	void SnapMeshToLookAtActor();
	void Initialise(class UMeshComponent* InMeshToRotate, class AActor* InActorToRotateTo);
};

// Class AthenaEngine.RotateMeshToLocalPlayerComponent
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class URotateMeshToLocalPlayerComponent : public URotateMeshToActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.RotateMeshToLocalPlayerComponent");
		return ptr;
	}



};

// Class AthenaEngine.SkeletalMeshAggregateTickComponent
// 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
class USkeletalMeshAggregateTickComponent : public UActorComponent
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ONQT[0x28];                                    // 0x00D0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.SkeletalMeshAggregateTickComponent");
		return ptr;
	}



};

// Class AthenaEngine.StringToAssetClassMap
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UStringToAssetClassMap : public UDataAsset
{
public:
	TArray<struct FStringAssetClassPair>               StringAssetClassPairs;                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_VKE0[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.StringToAssetClassMap");
		return ptr;
	}



};

// Class AthenaEngine.SyncedRandomRetrievalInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USyncedRandomRetrievalInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaEngine.SyncedRandomRetrievalInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
