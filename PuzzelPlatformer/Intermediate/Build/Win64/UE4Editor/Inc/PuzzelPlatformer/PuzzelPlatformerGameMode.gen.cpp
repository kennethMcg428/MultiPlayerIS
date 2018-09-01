// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PuzzelPlatformerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzelPlatformerGameMode() {}
// Cross Module References
	PUZZELPLATFORMER_API UClass* Z_Construct_UClass_APuzzelPlatformerGameMode_NoRegister();
	PUZZELPLATFORMER_API UClass* Z_Construct_UClass_APuzzelPlatformerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PuzzelPlatformer();
// End Cross Module References
	void APuzzelPlatformerGameMode::StaticRegisterNativesAPuzzelPlatformerGameMode()
	{
	}
	UClass* Z_Construct_UClass_APuzzelPlatformerGameMode_NoRegister()
	{
		return APuzzelPlatformerGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APuzzelPlatformerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_PuzzelPlatformer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PuzzelPlatformerGameMode.h" },
				{ "ModuleRelativePath", "PuzzelPlatformerGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APuzzelPlatformerGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APuzzelPlatformerGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzelPlatformerGameMode, 1187695911);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzelPlatformerGameMode(Z_Construct_UClass_APuzzelPlatformerGameMode, &APuzzelPlatformerGameMode::StaticClass, TEXT("/Script/PuzzelPlatformer"), TEXT("APuzzelPlatformerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzelPlatformerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
