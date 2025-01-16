#include "ModFunctionLibrary.h"

UModFunctionLibrary::UModFunctionLibrary() {
    this->ModTextTable = NULL;
}

void UModFunctionLibrary::RemoveModFromActor(AActor* Target, ABreakerMod* ModToRemove) {
}

FFloatRange UModFunctionLibrary::GetSecondaryModValueRangeAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel) {
    return FFloatRange{};
}

float UModFunctionLibrary::GetSecondaryModValueAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel) {
    return 0.0f;
}

TArray<FModInfo> UModFunctionLibrary::GetRandomModsForActor(const AActor* TargetActor, FGameplayTagContainer RequiredParentTags, const TArray<EModifierSpawnPool>& RequiredSpawnPools, const TArray<EHolobyteCategory>& RequiredCategories, int32 Count, const EEquipmentType EquipmentType) {
    return TArray<FModInfo>();
}

int32 UModFunctionLibrary::GetNumberOfEquipSlotsForAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel) {
    return 0;
}

FFloatRange UModFunctionLibrary::GetModValueRangeAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel) {
    return FFloatRange{};
}

float UModFunctionLibrary::GetModValueAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel) {
    return 0.0f;
}

UDataTable* UModFunctionLibrary::GetModTextTable() {
    return NULL;
}

UDataTable* UModFunctionLibrary::GetModTable() {
    return NULL;
}

TArray<ABreakerMod*> UModFunctionLibrary::GetModsOnActor(const AActor* Target) {
    return TArray<ABreakerMod*>();
}

bool UModFunctionLibrary::GetModInfoTextForTag(FGameplayTag Tag, FModInfoText& OutInfo) {
    return false;
}

bool UModFunctionLibrary::GetModInfoForTag(FGameplayTag Tag, FModInfo& OutInfo) {
    return false;
}

FEquipmentDetails UModFunctionLibrary::GetModInfoAsFakeEquipment(const FModInfo& ModInfo) {
    return FEquipmentDetails{};
}

float UModFunctionLibrary::GetModDurationAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel) {
    return 0.0f;
}

TArray<FModInfo> UModFunctionLibrary::GetAllModsForActor(const AActor* TargetActor, FGameplayTagContainer RequiredParentTags, FGameplayTagContainer IgnoredTags, const TArray<EModifierSpawnPool>& RequiredSpawnPools, const TArray<EHolobyteCategory>& RequiredCategories, const EEquipmentType EquipmentType) {
    return TArray<FModInfo>();
}

void UModFunctionLibrary::GetAllMods(TArray<FModInfo>& OutMods, const TArray<EModifierSpawnPool> RequiredSpawnPools, FGameplayTagContainer RequiredParentTags, FGameplayTagContainer IgnoredTags, const TArray<EHolobyteCategory> RequiredCategories, const TArray<EHolobyteCategory> IgnoredCategories) {
}

FCurrencyCostMap UModFunctionLibrary::GetAbilityCost(const FGameplayTag& AbilityTag, const int32 AbilityLevel) {
    return FCurrencyCostMap{};
}

ABreakerMod* UModFunctionLibrary::FindMatchingModOnActor_Unsafe(const AActor* Target, FGameplayTag Tag, bool& bFound) {
    return NULL;
}

ABreakerMod* UModFunctionLibrary::FindMatchingModOnActor(const AActor* Target, FGameplayTag Tag, bool& bFound) {
    return NULL;
}

ABreakerMod* UModFunctionLibrary::AddModToActor(AActor* Target, FModSpecializationInfo ModSpecialization, FModInfo ModInfo) {
    return NULL;
}


