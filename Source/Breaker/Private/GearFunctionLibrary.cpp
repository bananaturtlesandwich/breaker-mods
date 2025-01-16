#include "GearFunctionLibrary.h"

UGearFunctionLibrary::UGearFunctionLibrary() {
}

void UGearFunctionLibrary::SpawnGearDrop_Type(const UObject* WorldContextObject, const EEquipmentType EquipmentType, const FGenericGearDropSpawnParameters& Parameters, AGearItemDrop*& OutGearDrop) {
}

void UGearFunctionLibrary::SpawnGearDrop_Auto(const UObject* WorldContextObject, FGenericGearInfo& OverrideGearInfo, const FTransform SpawnTransform, AGearItemDrop*& OutGearDrop) {
}

FGenericGearInfo UGearFunctionLibrary::MakeFakeGearInfoFromTag(FGameplayTag Tag) {
    return FGenericGearInfo{};
}

bool UGearFunctionLibrary::IsGenericGearInfoValid(const FGenericGearInfo& GearInfo) {
    return false;
}

UDataTable* UGearFunctionLibrary::GetSyComTable() {
    return NULL;
}

FEquipmentDetails UGearFunctionLibrary::GetSyComDetailsAsFakeEquipment(const FSyComDetails& Details) {
    return FEquipmentDetails{};
}

FSyComDetails UGearFunctionLibrary::GetSyComDetails(FGameplayTag Tag) {
    return FSyComDetails{};
}

UDataTable* UGearFunctionLibrary::GetStatAffixTable() {
    return NULL;
}

FGameplayTag UGearFunctionLibrary::GetRelatedGearStatusEffectTag(const UObject* WorldContextObject, const FGenericGearInfo& GearInfo) {
    return FGameplayTag{};
}

void UGearFunctionLibrary::GetGearXPNeededForProgressionLevel(const FEquipmentDetails EquipmentDetails, int32 ProgressionLevel, int32& OutRelativeXP) {
}

UDataTable* UGearFunctionLibrary::GetGearTierTable() {
    return NULL;
}

FGearTierDetails UGearFunctionLibrary::GetGearTierDetails(const int32 Tier) {
    return FGearTierDetails{};
}

void UGearFunctionLibrary::GetGearTagsFromSet(const FGearTagSet& TagSet, TArray<FGameplayTag>& OutTags, TArray<ECharacterEquipmentSlot>& OutSlots) {
}

FGearStatAffixDetails UGearFunctionLibrary::GetGearStatAffixInfo(FGameplayTag Tag) {
    return FGearStatAffixDetails{};
}

UDataTable* UGearFunctionLibrary::GetGearRarityTable() {
    return NULL;
}

FGearRarityDetails UGearFunctionLibrary::GetGearRarityDetails(const int32 RarityLevel) {
    return FGearRarityDetails{};
}

UDataTable* UGearFunctionLibrary::GetGearLevelTable() {
    return NULL;
}

FGearLevelDetails UGearFunctionLibrary::GetGearLevelDetails(const int32 Level) {
    return FGearLevelDetails{};
}

UDataTable* UGearFunctionLibrary::GetGearHolobyteWhitelistTable() {
    return NULL;
}

UDataTable* UGearFunctionLibrary::GetGearHolobyteWhitelistOverridesTable() {
    return NULL;
}

UDataTable* UGearFunctionLibrary::GetGearHolobyteUpgradesTable() {
    return NULL;
}

bool UGearFunctionLibrary::GetGearDurability(const UObject* WorldContextObject, const FGenericGearInfo& GearInfo, int32& CurrentDurability, int32& MaxDurability) {
    return false;
}

UDataTable* UGearFunctionLibrary::GetEquipmentTable() {
    return NULL;
}

FEquipmentDetails UGearFunctionLibrary::GetEquipmentDetails(FGameplayTag Tag) {
    return FEquipmentDetails{};
}

FGenericGearInfo UGearFunctionLibrary::GetDefaultGearInfoForTag(const FGameplayTag& Tag, const ABreakerPawn* LocalPlayer) {
    return FGenericGearInfo{};
}

FGameplayTag UGearFunctionLibrary::GetClassDefaultSyComTag(const FGameplayTag& CharacterClassTag) {
    return FGameplayTag{};
}

UDataTable* UGearFunctionLibrary::GetArmorTable() {
    return NULL;
}

FArmorInfo UGearFunctionLibrary::GetArmorInfo(FGameplayTag Tag) {
    return FArmorInfo{};
}

TArray<FSyComDetails> UGearFunctionLibrary::GetAllSpawnableSyComs(const FGameplayTag& OptionalCharacterClassTag) {
    return TArray<FSyComDetails>();
}

EEquipmentSpawnability UGearFunctionLibrary::GetAllowedGearSpawnability() {
    return EEquipmentSpawnability::None;
}

FGenericGearInfo UGearFunctionLibrary::GenerateGearInfo_Type(const UObject* WorldContextObject, const EEquipmentType EquipmentType, const FGenericGearDropSpawnParameters& Parameters) {
    return FGenericGearInfo{};
}

TArray<EEquipmentType> UGearFunctionLibrary::DEBUG_GetPossibleEquipmentTypesForAffixTag(const UObject* WorldContextObject, const FGameplayTag& AffixTag) {
    return TArray<EEquipmentType>();
}


