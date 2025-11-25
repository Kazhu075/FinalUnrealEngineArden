// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCSystem_FinalArden/AI_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_NPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
NPCSYSTEM_FINALARDEN_API UClass* Z_Construct_UClass_AAI_NPC();
NPCSYSTEM_FINALARDEN_API UClass* Z_Construct_UClass_AAI_NPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_NPCSystem_FinalArden();
// End Cross Module References

// Begin Class AAI_NPC
void AAI_NPC::StaticRegisterNativesAAI_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_NPC);
UClass* Z_Construct_UClass_AAI_NPC_NoRegister()
{
	return AAI_NPC::StaticClass();
}
struct Z_Construct_UClass_AAI_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_NPC.h" },
		{ "ModuleRelativePath", "AI_NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "AI_Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables para patrullar\n" },
#endif
		{ "ModuleRelativePath", "AI_NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables para patrullar" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRadius_MetaData[] = {
		{ "Category", "AI_Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Distancia de detecci\xef\xbf\xbdn del jugador\n" },
#endif
		{ "ModuleRelativePath", "AI_NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distancia de detecci\xef\xbf\xbdn del jugador" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_NPC_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAI_NPC_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_NPC, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPoints_MetaData), NewProp_PatrolPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_NPC_Statics::NewProp_DetectionRadius = { "DetectionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_NPC, DetectionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRadius_MetaData), NewProp_DetectionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_NPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_NPC_Statics::NewProp_PatrolPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_NPC_Statics::NewProp_PatrolPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_NPC_Statics::NewProp_DetectionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_NPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAI_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NPCSystem_FinalArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_NPC_Statics::ClassParams = {
	&AAI_NPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAI_NPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAI_NPC_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AAI_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAI_NPC()
{
	if (!Z_Registration_Info_UClass_AAI_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_NPC.OuterSingleton, Z_Construct_UClass_AAI_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAI_NPC.OuterSingleton;
}
template<> NPCSYSTEM_FINALARDEN_API UClass* StaticClass<AAI_NPC>()
{
	return AAI_NPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_NPC);
AAI_NPC::~AAI_NPC() {}
// End Class AAI_NPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_EMCIRD4_Documents_Github_Proyecto_final_Arden_FinalUnrealEngineArden_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_AI_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAI_NPC, AAI_NPC::StaticClass, TEXT("AAI_NPC"), &Z_Registration_Info_UClass_AAI_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_NPC), 3489940854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_EMCIRD4_Documents_Github_Proyecto_final_Arden_FinalUnrealEngineArden_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_AI_NPC_h_459865102(TEXT("/Script/NPCSystem_FinalArden"),
	Z_CompiledInDeferFile_FID_Users_EMCIRD4_Documents_Github_Proyecto_final_Arden_FinalUnrealEngineArden_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_AI_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EMCIRD4_Documents_Github_Proyecto_final_Arden_FinalUnrealEngineArden_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_AI_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
