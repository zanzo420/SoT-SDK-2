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

// Class ContestMatchmaking.ContestMatchmakingProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UContestMatchmakingProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ContestMatchmaking.ContestMatchmakingProviderInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
