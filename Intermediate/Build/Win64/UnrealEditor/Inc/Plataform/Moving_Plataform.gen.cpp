// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plataform/Moving_Plataform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoving_Plataform() {}
// Cross Module References
	PLATAFORM_API UClass* Z_Construct_UClass_AMoving_Plataform_NoRegister();
	PLATAFORM_API UClass* Z_Construct_UClass_AMoving_Plataform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Plataform();
// End Cross Module References
	void AMoving_Plataform::StaticRegisterNativesAMoving_Plataform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoving_Plataform);
	UClass* Z_Construct_UClass_AMoving_Plataform_NoRegister()
	{
		return AMoving_Plataform::StaticClass();
	}
	struct Z_Construct_UClass_AMoving_Plataform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoving_Plataform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Plataform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoving_Plataform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Moving_Plataform.h" },
		{ "ModuleRelativePath", "Moving_Plataform.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoving_Plataform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoving_Plataform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoving_Plataform_Statics::ClassParams = {
		&AMoving_Plataform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoving_Plataform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoving_Plataform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoving_Plataform()
	{
		if (!Z_Registration_Info_UClass_AMoving_Plataform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoving_Plataform.OuterSingleton, Z_Construct_UClass_AMoving_Plataform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMoving_Plataform.OuterSingleton;
	}
	template<> PLATAFORM_API UClass* StaticClass<AMoving_Plataform>()
	{
		return AMoving_Plataform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoving_Plataform);
	struct Z_CompiledInDeferFile_FID_Plataform_Source_Plataform_Moving_Plataform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plataform_Source_Plataform_Moving_Plataform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMoving_Plataform, AMoving_Plataform::StaticClass, TEXT("AMoving_Plataform"), &Z_Registration_Info_UClass_AMoving_Plataform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoving_Plataform), 2460995466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plataform_Source_Plataform_Moving_Plataform_h_2965190243(TEXT("/Script/Plataform"),
		Z_CompiledInDeferFile_FID_Plataform_Source_Plataform_Moving_Plataform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plataform_Source_Plataform_Moving_Plataform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
