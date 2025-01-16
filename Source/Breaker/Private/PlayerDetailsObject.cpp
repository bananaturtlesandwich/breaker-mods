#include "PlayerDetailsObject.h"

UPlayerDetailsObject::UPlayerDetailsObject() {
}

void UPlayerDetailsObject::UpgradeEquippedGear_DEBUG(const ECharacterEquipmentSlot EquipSlot) {
}

void UPlayerDetailsObject::UnlockVendorUpgrades(const FGameplayTag& VendorTag, bool bReset) {
}

bool UPlayerDetailsObject::UnlockCharacterClass(const FGameplayTag& CharacterClassTag) {
    return false;
}

bool UPlayerDetailsObject::TryUpgradeSyComStat(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) {
    return false;
}

bool UPlayerDetailsObject::TryUpgradeGear_Vendor(const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo, FGenericGearInfo& OutUpgradedGearInfo) {
    return false;
}

bool UPlayerDetailsObject::TryUpgradeGear(FGameplayTag GearTag, bool bDeductCostFromInventory, FGearUpgradeCost& OutUpgradeCost) {
    return false;
}

bool UPlayerDetailsObject::TryUnlockVendor(const FGameplayTag& VendorTag, const FCurrencyCostMap PaidCurrency) {
    return false;
}

bool UPlayerDetailsObject::TryUnlockAbilitySection(const int32 SectionNumber) {
    return false;
}

bool UPlayerDetailsObject::TryUnEquipAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel) {
    return false;
}

bool UPlayerDetailsObject::TrySetLoadoutGearForSlot(const FGenericGearInfo& NewGearInfo, const ECharacterEquipmentSlot EquipSlot, FGenericGearInfo& OldGearInfo) {
    return false;
}

bool UPlayerDetailsObject::TrySetGearUpgradeState(FGameplayTag GearTag, FCharacterEquipmentDetails Details) {
    return false;
}

bool UPlayerDetailsObject::TryPurchaseSyCom(FGameplayTag SyComTag, FCurrencyCostMap& OutUpgradeCost, bool bDeductCostFromInventory) {
    return false;
}

bool UPlayerDetailsObject::TryPurchaseAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel, bool bDeductCostFromInventory) {
    return false;
}

bool UPlayerDetailsObject::TryPurchase(FCurrencyCostMap Cost) {
    return false;
}

bool UPlayerDetailsObject::TryLevelUpVendorAffinityLevel(const FGameplayTag& VendorTag) {
    return false;
}

bool UPlayerDetailsObject::TryEquipAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel) {
    return false;
}

bool UPlayerDetailsObject::TryEarn(FCurrencyCostMap Cost) {
    return false;
}

int32 UPlayerDetailsObject::SubtractCurrency(ECurrencyType CurrencyType, int32 Amount, bool bAutoSave) {
    return 0;
}

bool UPlayerDetailsObject::SetGearUpgradeLevel(FGameplayTag GearTag, int32 NewLevel) {
    return false;
}

bool UPlayerDetailsObject::SetGearDiscoveryLevel(FGameplayTag GearTag, EEquipmentSchematicState NewState) {
    return false;
}

int32 UPlayerDetailsObject::SetCurrency(ECurrencyType CurrencyType, int32 Amount, bool bAutoSave) {
    return 0;
}

void UPlayerDetailsObject::ResetSaveFromTitle() {
}

void UPlayerDetailsObject::ResetRunData() {
}

void UPlayerDetailsObject::ResetRunCurrency(bool bAutoSave) {
}

void UPlayerDetailsObject::ResetDeathDrop() {
}

bool UPlayerDetailsObject::RerollVendor(const FGameplayTag& VendorTag) {
    return false;
}

void UPlayerDetailsObject::ReportVendorGearBought(const FGameplayTag& VendorTag, const FGenericGearInfo& BoughtGearInfo) {
}

void UPlayerDetailsObject::ReportInRunVendorItemBought(const FGameplayTag& VendorTag, const FInRunVendorInventoryItem& BoughtItem, const int32 AmountBought) {
}

bool UPlayerDetailsObject::ReportGearSold_Vendor(const FGenericGearInfo& SoldGearInfo) {
    return false;
}

bool UPlayerDetailsObject::RemoveGearFromVault_Index(const int32 SlotIndex) {
    return false;
}

bool UPlayerDetailsObject::RemoveGearFromVault_GearInfo(const FGenericGearInfo& RemoveGearInfo) {
    return false;
}

bool UPlayerDetailsObject::RemoveGearFromExtractedInventory(const FGenericGearInfo& RemoveGearInfo) {
    return false;
}

bool UPlayerDetailsObject::RemoveCachedGearAtSlot(const int32 SlotIndex) {
    return false;
}

bool UPlayerDetailsObject::PurchaseAbilityEquipmentSlot() {
    return false;
}

void UPlayerDetailsObject::ModifyNumberHealthKits(const int32 Modifier) {
}

bool UPlayerDetailsObject::IsVendorUnlocked(const FGameplayTag& VendorTag) const {
    return false;
}

bool UPlayerDetailsObject::IsVaultInventoryFull() const {
    return false;
}

bool UPlayerDetailsObject::IsSyComOwned(FGameplayTag SyComTag) const {
    return false;
}

bool UPlayerDetailsObject::IsModInList(FGameplayTag ModTag) {
    return false;
}

bool UPlayerDetailsObject::IsGearFullyUpgraded_Vendor(const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo) const {
    return false;
}

bool UPlayerDetailsObject::IsCachedInventoryFull() const {
    return false;
}

bool UPlayerDetailsObject::IsAbilitySectionUnlocked(const int32 SectionNumber) const {
    return false;
}

bool UPlayerDetailsObject::IsAbilityPurchased(const FGameplayTag& AbilityTag, const int32 AbilityLevel) const {
    return false;
}

bool UPlayerDetailsObject::IsAbilityEquipped(const FGameplayTag& AbilityTag, const int32 AbilityLevel) const {
    return false;
}

void UPlayerDetailsObject::IncreaseVendorGearSlots(const FGameplayTag& VendorTag, const int32 IncreaseBy, bool bReset) {
}

void UPlayerDetailsObject::IncreaseVendorGearMaxUpgrades(const FGameplayTag& VendorTag, const int32 IncreaseBy, bool bReset) {
}

void UPlayerDetailsObject::HasDiscoveredStoryPanel(FName StoryPanelName, bool& bDiscovered) {
}

void UPlayerDetailsObject::HasDecodedStoryPanelSet(FName StoryPanelSetName, bool& bDecoded) {
}

bool UPlayerDetailsObject::HasDeathDrop() const {
    return false;
}

int32 UPlayerDetailsObject::GetWorldXP() const {
    return 0;
}

int32 UPlayerDetailsObject::GetWorldRank() const {
    return 0;
}

void UPlayerDetailsObject::GetVendorUnlockAmounts(const FGameplayTag& VendorTag, FCurrencyCostMap& UnlockAmountSpent, FCurrencyCostMap& TotalVendorUnlockCost) const {
}

FCurrencyCostMap UPlayerDetailsObject::GetVendorRerollCost(const FGameplayTag& VendorTag) const {
    return FCurrencyCostMap{};
}

int32 UPlayerDetailsObject::GetVendorOnSaleItemIndex(const FGameplayTag& VendorTag) const {
    return 0;
}

float UPlayerDetailsObject::GetVendorOnSaleItemDiscount(const FGameplayTag& VendorTag) const {
    return 0.0f;
}

TArray<FGenericGearInfo> UPlayerDetailsObject::GetVendorGear(const FGameplayTag& VendorTag) const {
    return TArray<FGenericGearInfo>();
}

float UPlayerDetailsObject::GetVendorDiscount(const FGameplayTag& VendorTag) const {
    return 0.0f;
}

int32 UPlayerDetailsObject::GetVendorAffinityLevel(const FGameplayTag& VendorTag) const {
    return 0;
}

int32 UPlayerDetailsObject::GetVaultInventorySize() const {
    return 0;
}

TArray<FGenericGearInfo> UPlayerDetailsObject::GetVaultInventory() const {
    return TArray<FGenericGearInfo>();
}

bool UPlayerDetailsObject::GetVaultGearAtSlot(const int32 SlotIndex, FGenericGearInfo& GearAtSlot) const {
    return false;
}

TArray<FGenericGearInfo> UPlayerDetailsObject::GetUpgradableGearForVendor(const FGameplayTag& VendorTag) const {
    return TArray<FGenericGearInfo>();
}

FCurrencyCostMap UPlayerDetailsObject::GetSyComStatUpgradeCost(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const {
    return FCurrencyCostMap{};
}

float UPlayerDetailsObject::GetSyComStatUpgradeAmount(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const {
    return 0.0f;
}

float UPlayerDetailsObject::GetStatValueForSyCom(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const {
    return 0.0f;
}

FRunData UPlayerDetailsObject::GetRunData() const {
    return FRunData{};
}

FSyComStatUpgrades UPlayerDetailsObject::GetPurchasedStatUpgradesForSycom(const FGameplayTag& SyComTag) const {
    return FSyComStatUpgrades{};
}

EPreviousRunState UPlayerDetailsObject::GetPreviousRunState() const {
    return EPreviousRunState::None;
}

int32 UPlayerDetailsObject::GetNumberOfTempCacheInventorySlots() const {
    return 0;
}

int32 UPlayerDetailsObject::GetNumberOfRunsUntilHUBVendorRefresh() const {
    return 0;
}

int32 UPlayerDetailsObject::GetNumberOfRuns() const {
    return 0;
}

int32 UPlayerDetailsObject::GetNumberOfCycles() const {
    return 0;
}

int32 UPlayerDetailsObject::GetNumberHealthKits() const {
    return 0;
}

bool UPlayerDetailsObject::GetNextVendorAffinityLevelCost(const FGameplayTag& VendorTag, FCurrencyCostMap& OutLevelCost) const {
    return false;
}

FCurrencyCostMap UPlayerDetailsObject::GetNextUnlockCharacterCost() const {
    return FCurrencyCostMap{};
}

FCurrencyCostMap UPlayerDetailsObject::GetNextAbilityEquipmentSlotPrice() const {
    return FCurrencyCostMap{};
}

int32 UPlayerDetailsObject::GetMaxUnlockedAbilitySection() const {
    return 0;
}

int32 UPlayerDetailsObject::GetMaxSyComStatUpgrades(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const {
    return 0;
}

int32 UPlayerDetailsObject::GetMaxNumberHealthKits() const {
    return 0;
}

bool UPlayerDetailsObject::GetLastLoadoutSelections(FLoadoutSelections& OutLastLoadoutSelections) const {
    return false;
}

TArray<FInRunVendorInventoryItem> UPlayerDetailsObject::GetInRunVendorInventory(const FGameplayTag& VendorTag) const {
    return TArray<FInRunVendorInventoryItem>();
}

bool UPlayerDetailsObject::GetGearUpgradeState(FGameplayTag GearTag, FCharacterEquipmentDetails& OutDetails) const {
    return false;
}

int32 UPlayerDetailsObject::GetGearUpgradeLevel(FGameplayTag GearTag) const {
    return 0;
}

FCurrencyCostMap UPlayerDetailsObject::GetGearUpgradeCost_Vendor(const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo) const {
    return FCurrencyCostMap{};
}

TArray<FGenericGearInfo> UPlayerDetailsObject::GetExtractedInventory() const {
    return TArray<FGenericGearInfo>();
}

TMap<FGameplayTag, int32> UPlayerDetailsObject::GetEquippedAbilityInfo() const {
    return TMap<FGameplayTag, int32>();
}

FCurrencyCostMap UPlayerDetailsObject::GetEndOfCycleTax() const {
    return FCurrencyCostMap{};
}

FDeathDropData UPlayerDetailsObject::GetDeathDropInfo() const {
    return FDeathDropData{};
}

TMap<ECharacterEquipmentSlot, FGenericGearInfo> UPlayerDetailsObject::GetCurrentLoadout() const {
    return TMap<ECharacterEquipmentSlot, FGenericGearInfo>();
}

int32 UPlayerDetailsObject::GetCurrency(ECurrencyType CurrencyType) const {
    return 0;
}

FGameplayTag UPlayerDetailsObject::GetCharacterEquippingSavedGear(const FGenericGearInfo& GearInfo) const {
    return FGameplayTag{};
}

int32 UPlayerDetailsObject::GetCachedInventorySize() const {
    return 0;
}

FCacheInventoryDetails UPlayerDetailsObject::GetCachedInventory() const {
    return FCacheInventoryDetails{};
}

bool UPlayerDetailsObject::GetCachedGearAtSlot(const int32 SlotIndex, FGenericGearInfo& GearAtSlot) const {
    return false;
}

int32 UPlayerDetailsObject::GetAmountOfMaterialsEarnedThisCycle() const {
    return 0;
}

TArray<FGameplayTag> UPlayerDetailsObject::GetAllUnlockedCharacterClassTags() const {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UPlayerDetailsObject::GetAllUnfoundSchematics() {
    return TArray<FGameplayTag>();
}

TArray<FGenericGearInfo> UPlayerDetailsObject::GetAllSavedGear(const bool bIncludeSyComDefaults) const {
    return TArray<FGenericGearInfo>();
}

TArray<FEquipmentDetails> UPlayerDetailsObject::GetAllPurchasedGear(FGameplayTag Filter, const bool bFilterByEquipable) const {
    return TArray<FEquipmentDetails>();
}

TArray<FEquipmentDetails> UPlayerDetailsObject::GetAllPurchasableGear(FGameplayTag Filter) {
    return TArray<FEquipmentDetails>();
}

void UPlayerDetailsObject::GetAllOwnedSyComs(TArray<FGameplayTag>& OutSyComs, FGameplayTag OptionalCharacterClassTag) const {
}

TArray<FGameplayTag> UPlayerDetailsObject::GetAllCharacterClassTags() const {
    return TArray<FGameplayTag>();
}

void UPlayerDetailsObject::GetAllAvailableSyComs(TArray<FGameplayTag>& OutSyComs, FGameplayTag OptionalCharacterClassTag) const {
}

void UPlayerDetailsObject::GetAllAbilityInfo(TMap<FGameplayTag, int32>& OutPurchasedLevels, TMap<FGameplayTag, int32>& OutMaxLevels, TArray<FModInfo>& OutAvailableAbilities) const {
}

void UPlayerDetailsObject::GetAbilitySectionSlotInfo(const int32 SectionNumber, int32& OutPurchasedSlots, int32& OutTotalSlots) const {
}

void UPlayerDetailsObject::GetAbilityInfo(const FGameplayTag& AbilityModTag, int32& OutPurchasedLevel, int32& OutMaxLevel, FModInfo& AbilityInfo) const {
}

void UPlayerDetailsObject::GetAbilityEquipmentSlotInfo(int32& OutOccupiedSlots, int32& OutOwnedSlots, int32& OutMaxSlots) const {
}

void UPlayerDetailsObject::ExtractCachedInventory() {
}

void UPlayerDetailsObject::EquipCurrentLoadout() const {
}

void UPlayerDetailsObject::DiscoverStoryPanel(FName StoryPanelName) {
}

void UPlayerDetailsObject::DecodeStoryPanelSet(FName StoryPanelSetName) {
}

FGenericGearInfo UPlayerDetailsObject::DecodeGear(FGenericGearInfo& EncodedGear) const {
    return FGenericGearInfo{};
}

void UPlayerDetailsObject::Debug_UnlockVendor(const FGameplayTag& VendorTag) {
}

void UPlayerDetailsObject::Debug_UnlockAllCharacterClasses() {
}

bool UPlayerDetailsObject::Debug_SetWorldRank(const int32 NewWorldRank) {
    return false;
}

void UPlayerDetailsObject::DEBUG_SetRunData(const FRunData& NewRunData) {
}

void UPlayerDetailsObject::DEBUG_ResetPlayerAbilities() {
}

void UPlayerDetailsObject::Debug_ResetInRunVendorInventories() {
}

void UPlayerDetailsObject::Debug_ResetAllVendorData() {
}

void UPlayerDetailsObject::Debug_ResetAllVendorAffinityLevels() {
}

void UPlayerDetailsObject::Debug_RefreshVendorGear() {
}

void UPlayerDetailsObject::DEBUG_PretendRunStartEnd(const bool bRunStart) {
}

void UPlayerDetailsObject::Debug_IncreaseVendorAffinityLevel(const FGameplayTag& VendorTag) {
}

void UPlayerDetailsObject::ClearExtractedInventory() {
}

void UPlayerDetailsObject::ChangeVendorRerollDiscount(const FGameplayTag& VendorTag, const float ModifyBy, bool bReset) {
}

void UPlayerDetailsObject::ChangeVendorOnSaleDiscount(const FGameplayTag& VendorTag, const float ModifyBy, bool bReset) {
}

void UPlayerDetailsObject::ChangeVendorDiscount(const FGameplayTag& VendorTag, const float ModifyBy, bool bReset) {
}

bool UPlayerDetailsObject::CanVendorUpgradeGear(const FGameplayTag& VendorTag) const {
    return false;
}

bool UPlayerDetailsObject::CanUpgradeSyComStat(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const {
    return false;
}

bool UPlayerDetailsObject::CanUpgradeGear_Vendor(const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo) const {
    return false;
}

EGearUpgradeQueryResult UPlayerDetailsObject::CanUpgradeGear(FGameplayTag GearTag, FGearUpgradeCost& OutUpgradeCost) const {
    return EGearUpgradeQueryResult::Invalid;
}

bool UPlayerDetailsObject::CanUnlockAbilitySection(const int32 SectionNumber) const {
    return false;
}

bool UPlayerDetailsObject::CanPurchaseSyCom(FGameplayTag SyComTag) const {
    return false;
}

bool UPlayerDetailsObject::CanPurchaseAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel) const {
    return false;
}

bool UPlayerDetailsObject::CanEquipAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel) const {
    return false;
}

bool UPlayerDetailsObject::CanAfford(FCurrencyCostMap Cost) const {
    return false;
}

bool UPlayerDetailsObject::CacheGearAtSlot(FGenericGearInfo CachedGear, int32 SlotIndex) {
    return false;
}

void UPlayerDetailsObject::CacheDeathDropLocation() {
}

void UPlayerDetailsObject::AddXpToGear(FGameplayTag GearTag, int32 XP) {
}

bool UPlayerDetailsObject::AddGearToVault(FGenericGearInfo GearInfo, int32 SlotIndex) {
    return false;
}

int32 UPlayerDetailsObject::AddCurrency(ECurrencyType CurrencyType, int32 Amount, bool bAutoSave, bool bBypassCaching) {
    return 0;
}


