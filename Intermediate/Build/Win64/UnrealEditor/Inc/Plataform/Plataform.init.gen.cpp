// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataform_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Plataform;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Plataform()
	{
		if (!Z_Registration_Info_UPackage__Script_Plataform.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Plataform",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x36B3E032,
				0x72E5114E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Plataform.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Plataform.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Plataform(Z_Construct_UPackage__Script_Plataform, TEXT("/Script/Plataform"), Z_Registration_Info_UPackage__Script_Plataform, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x36B3E032, 0x72E5114E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
