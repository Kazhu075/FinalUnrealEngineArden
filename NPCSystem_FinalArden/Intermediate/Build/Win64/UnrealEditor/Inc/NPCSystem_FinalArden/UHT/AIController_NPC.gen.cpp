// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCSystem_FinalArden/AIController_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIController_NPC() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
NPCSYSTEM_FINALARDEN_API UClass* Z_Construct_UClass_AAIController_NPC();
NPCSYSTEM_FINALARDEN_API UClass* Z_Construct_UClass_AAIController_NPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_NPCSystem_FinalArden();
// End Cross Module References

// Begin Class AAIController_NPC
void AAIController_NPC::StaticRegisterNativesAAIController_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIController_NPC);
UClass* Z_Construct_UClass_AAIController_NPC_NoRegister()
{
	return AAIController_NPC::StaticClass();
}
struct Z_Construct_UClass_AAIController_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIController_NPC.h" },
		{ "ModuleRelativePath", "AIController_NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//refencias al Blackboard y al Behavior Tree\n" },
#endif
		{ "ModuleRelativePath", "AIController_NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "refencias al Blackboard y al Behavior Tree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIController_NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardData_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIController_NPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIController_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_NPC_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController_NPC, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_NPC_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController_NPC, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComp_MetaData), NewProp_BlackboardComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_NPC_Statics::NewProp_BlackboardData = { "BlackboardData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController_NPC, BlackboardData), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardData_MetaData), NewProp_BlackboardData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIController_NPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_NPC_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_NPC_Statics::NewProp_BlackboardComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_NPC_Statics::NewProp_BlackboardData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_NPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIController_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_NPCSystem_FinalArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIController_NPC_Statics::ClassParams = {
	&AAIController_NPC::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAIController_NPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_NPC_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIController_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIController_NPC()
{
	if (!Z_Registration_Info_UClass_AAIController_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIController_NPC.OuterSingleton, Z_Construct_UClass_AAIController_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIController_NPC.OuterSingleton;
}
template<> NPCSYSTEM_FINALARDEN_API UClass* StaticClass<AAIController_NPC>()
{
	return AAIController_NPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIController_NPC);
AAIController_NPC::~AAIController_NPC() {}
// End Class AAIController_NPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_AIController_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIController_NPC, AAIController_NPC::StaticClass, TEXT("AAIController_NPC"), &Z_Registration_Info_UClass_AAIController_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIController_NPC), 2224853276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_AIController_NPC_h_388967573(TEXT("/Script/NPCSystem_FinalArden"),
	Z_CompiledInDeferFile_FID_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_AIController_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NPCSystem_FinalArden_Source_NPCSystem_FinalArden_AIController_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
