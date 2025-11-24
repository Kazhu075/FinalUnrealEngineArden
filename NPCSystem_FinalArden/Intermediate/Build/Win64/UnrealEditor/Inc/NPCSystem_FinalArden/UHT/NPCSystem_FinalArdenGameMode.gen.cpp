// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCSystem_FinalArden/NPCSystem_FinalArdenGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCSystem_FinalArdenGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NPCSYSTEM_FINALARDEN_API UClass* Z_Construct_UClass_ANPCSystem_FinalArdenGameMode();
NPCSYSTEM_FINALARDEN_API UClass* Z_Construct_UClass_ANPCSystem_FinalArdenGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NPCSystem_FinalArden();
// End Cross Module References

// Begin Class ANPCSystem_FinalArdenGameMode
void ANPCSystem_FinalArdenGameMode::StaticRegisterNativesANPCSystem_FinalArdenGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCSystem_FinalArdenGameMode);
UClass* Z_Construct_UClass_ANPCSystem_FinalArdenGameMode_NoRegister()
{
	return ANPCSystem_FinalArdenGameMode::StaticClass();
}
struct Z_Construct_UClass_ANPCSystem_FinalArdenGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NPCSystem_FinalArdenGameMode.h" },
		{ "ModuleRelativePath", "NPCSystem_FinalArdenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCSystem_FinalArdenGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANPCSystem_FinalArdenGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NPCSystem_FinalArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCSystem_FinalArdenGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCSystem_FinalArdenGameMode_Statics::ClassParams = {
	&ANPCSystem_FinalArdenGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCSystem_FinalArdenGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCSystem_FinalArdenGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCSystem_FinalArdenGameMode()
{
	if (!Z_Registration_Info_UClass_ANPCSystem_FinalArdenGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCSystem_FinalArdenGameMode.OuterSingleton, Z_Construct_UClass_ANPCSystem_FinalArdenGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCSystem_FinalArdenGameMode.OuterSingleton;
}
template<> NPCSYSTEM_FINALARDEN_API UClass* StaticClass<ANPCSystem_FinalArdenGameMode>()
{
	return ANPCSystem_FinalArdenGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCSystem_FinalArdenGameMode);
ANPCSystem_FinalArdenGameMode::~ANPCSystem_FinalArdenGameMode() {}
// End Class ANPCSystem_FinalArdenGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_EMCIRD4_Documents_Github_Proyecto_final_Arden_FinalUnrealEngineArden_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_NPCSystem_FinalArdenGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCSystem_FinalArdenGameMode, ANPCSystem_FinalArdenGameMode::StaticClass, TEXT("ANPCSystem_FinalArdenGameMode"), &Z_Registration_Info_UClass_ANPCSystem_FinalArdenGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCSystem_FinalArdenGameMode), 2131359711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_EMCIRD4_Documents_Github_Proyecto_final_Arden_FinalUnrealEngineArden_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_NPCSystem_FinalArdenGameMode_h_2469809697(TEXT("/Script/NPCSystem_FinalArden"),
	Z_CompiledInDeferFile_FID_Users_EMCIRD4_Documents_Github_Proyecto_final_Arden_FinalUnrealEngineArden_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_NPCSystem_FinalArdenGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EMCIRD4_Documents_Github_Proyecto_final_Arden_FinalUnrealEngineArden_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_NPCSystem_FinalArdenGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
