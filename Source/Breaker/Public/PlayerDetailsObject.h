#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "CacheInventoryDetails.h"
#include "CachedCurrencyAddedDelegate.h"
#include "CachedInventoryChangedDelegate.h"
#include "CachedInventoryExtractedDelegate.h"
#include "CharacterClassUnlockedDelegate.h"
#include "CharacterCurrencyChangedDelegate.h"
#include "CharacterEquipmentDetails.h"
#include "CharacterEquipmentDetailsChangedDelegate.h"
#include "CurrencyCostMap.h"
#include "DeathDropData.h"
#include "ECharacterEquipmentSlot.h"
#include "ECurrencyType.h"
#include "EEquipmentSchematicState.h"
#include "EGearUpgradeQueryResult.h"
#include "EPreviousRunState.h"
#include "EquipmentDetails.h"
#include "ExtractedInventoryChangedDelegate.h"
#include "GearDiscoveryStateChangedDelegate.h"
#include "GearUpgradeCost.h"
#include "GenericGearCachedDelegate.h"
#include "GenericGearInfo.h"
#include "InRunVendorInventoryItem.h"
#include "LoadoutSelections.h"
#include "ModAddedDelegate.h"
#include "ModInfo.h"
#include "OnAbilitySectionUnlockedDelegate.h"
#include "OnCoreShardsConvertedDelegate.h"
#include "OnDeathDropDataSetDelegate.h"
#include "OnInRunVendorInventoryChangedDelegate.h"
#include "OnNumberOfHealthKitsChangedDelegate.h"
#include "OnPlayerAbilityEquipSlotsIncreasedDelegate.h"
#include "OnPlayerChangeEquippedAbilitiesDelegate.h"
#include "OnPlayerPurchaseAbilityDelegate.h"
#include "OnRunStartEndDelegate.h"
#include "RunData.h"
#include "StoryPanelDiscoveredDelegate.h"
#include "StoryPanelSetDecodedDelegate.h"
#include "SyComStatUpgrades.h"
#include "VaultInventoryChangedDelegate.h"
#include "VendorAffinityLevelChangedDelegate.h"
#include "VendorUnlockedDelegate.h"
#include "XPAwardedDelegate.h"
#include "PlayerDetailsObject.generated.h"

UCLASS(Blueprintable, Within=BreakerGameInstance)
class BREAKER_API UPlayerDetailsObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGearDiscoveryStateChanged OnGearDiscoveryStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterEquipmentDetailsChanged OnCharacterEquipmentDetailsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCurrencyChanged OnCharacterCurrencyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCurrencyChanged OnCharacterCachedCurrencyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModAdded OnModAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedInventoryChanged OnCachedInventoryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedInventoryExtracted OnCachedInventoryExtracted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedCurrencyAdded OnCachedCurrencyAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericGearCached OnGenericGearCached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtractedInventoryChanged OnExtractedInventoryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVaultInventoryChanged OnVaultInventoryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryPanelDiscovered OnStoryPanelDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryPanelSetDecoded OnStoryPanelSetDecoded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoreShardsConverted OnCoreShardsConverted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FXPAwarded XPAwarded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPurchaseAbility OnPlayerPurchaseAbility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerChangeEquippedAbilities OnPlayerChangeEquippedAbilities;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerAbilityEquipSlotsIncreased OnPlayerAbilityEquipSlotsIncreased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilitySectionUnlocked OnAbilitySectionUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeathDropDataSet OnDeathDropDataSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRunStartEnd OnRunStartEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNumberOfHealthKitsChanged OnNumberOfHealthKitsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendorUnlocked OnVendorUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendorAffinityLevelChanged OnVendorAffinityLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInRunVendorInventoryChanged OnInRunVendorInventoryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterClassUnlocked OnCharacterClassUnlocked;
    
    UPlayerDetailsObject();

    UFUNCTION(BlueprintCallable)
    void UpgradeEquippedGear_DEBUG(const ECharacterEquipmentSlot EquipSlot);
    
    UFUNCTION(BlueprintCallable)
    void UnlockVendorUpgrades(const FGameplayTag& VendorTag, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockCharacterClass(const FGameplayTag& CharacterClassTag);
    
    UFUNCTION(BlueprintCallable)
    bool TryUpgradeSyComStat(const FGameplayTag& SyComTag, const FGameplayTag& StatTag);
    
    UFUNCTION(BlueprintCallable)
    bool TryUpgradeGear_Vendor(const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo, FGenericGearInfo& OutUpgradedGearInfo);
    
    UFUNCTION(BlueprintCallable)
    bool TryUpgradeGear(FGameplayTag GearTag, bool bDeductCostFromInventory, FGearUpgradeCost& OutUpgradeCost);
    
    UFUNCTION(BlueprintCallable)
    bool TryUnlockVendor(const FGameplayTag& VendorTag, const FCurrencyCostMap PaidCurrency);
    
    UFUNCTION(BlueprintCallable)
    bool TryUnlockAbilitySection(const int32 SectionNumber);
    
    UFUNCTION(BlueprintCallable)
    bool TryUnEquipAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel);
    
    UFUNCTION(BlueprintCallable)
    bool TrySetLoadoutGearForSlot(const FGenericGearInfo& NewGearInfo, const ECharacterEquipmentSlot EquipSlot, FGenericGearInfo& OldGearInfo);
    
    UFUNCTION(BlueprintCallable)
    bool TrySetGearUpgradeState(FGameplayTag GearTag, FCharacterEquipmentDetails Details);
    
    UFUNCTION(BlueprintCallable)
    bool TryPurchaseSyCom(FGameplayTag SyComTag, FCurrencyCostMap& OutUpgradeCost, bool bDeductCostFromInventory);
    
    UFUNCTION(BlueprintCallable)
    bool TryPurchaseAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel, bool bDeductCostFromInventory);
    
    UFUNCTION(BlueprintCallable)
    bool TryPurchase(FCurrencyCostMap Cost);
    
    UFUNCTION(BlueprintCallable)
    bool TryLevelUpVendorAffinityLevel(const FGameplayTag& VendorTag);
    
    UFUNCTION(BlueprintCallable)
    bool TryEquipAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel);
    
    UFUNCTION(BlueprintCallable)
    bool TryEarn(FCurrencyCostMap Cost);
    
    UFUNCTION(BlueprintCallable)
    int32 SubtractCurrency(ECurrencyType CurrencyType, int32 Amount, bool bAutoSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetGearUpgradeLevel(FGameplayTag GearTag, int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    bool SetGearDiscoveryLevel(FGameplayTag GearTag, EEquipmentSchematicState NewState);
    
    UFUNCTION(BlueprintCallable)
    int32 SetCurrency(ECurrencyType CurrencyType, int32 Amount, bool bAutoSave);
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveFromTitle();
    
    UFUNCTION(BlueprintCallable)
    void ResetRunData();
    
    UFUNCTION(BlueprintCallable)
    void ResetRunCurrency(bool bAutoSave);
    
    UFUNCTION(BlueprintCallable)
    void ResetDeathDrop();
    
    UFUNCTION(BlueprintCallable)
    bool RerollVendor(const FGameplayTag& VendorTag);
    
    UFUNCTION(BlueprintCallable)
    void ReportVendorGearBought(const FGameplayTag& VendorTag, const FGenericGearInfo& BoughtGearInfo);
    
    UFUNCTION(BlueprintCallable)
    void ReportInRunVendorItemBought(const FGameplayTag& VendorTag, const FInRunVendorInventoryItem& BoughtItem, const int32 AmountBought);
    
    UFUNCTION(BlueprintCallable)
    bool ReportGearSold_Vendor(const FGenericGearInfo& SoldGearInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveGearFromVault_Index(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveGearFromVault_GearInfo(const FGenericGearInfo& RemoveGearInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveGearFromExtractedInventory(const FGenericGearInfo& RemoveGearInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCachedGearAtSlot(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool PurchaseAbilityEquipmentSlot();
    
    UFUNCTION(BlueprintCallable)
    void ModifyNumberHealthKits(const int32 Modifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVendorUnlocked(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaultInventoryFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyComOwned(FGameplayTag SyComTag) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsModInList(FGameplayTag ModTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearFullyUpgraded_Vendor(const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCachedInventoryFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilitySectionUnlocked(const int32 SectionNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityPurchased(const FGameplayTag& AbilityTag, const int32 AbilityLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityEquipped(const FGameplayTag& AbilityTag, const int32 AbilityLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseVendorGearSlots(const FGameplayTag& VendorTag, const int32 IncreaseBy, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseVendorGearMaxUpgrades(const FGameplayTag& VendorTag, const int32 IncreaseBy, bool bReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasDiscoveredStoryPanel(FName StoryPanelName, bool& bDiscovered);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasDecodedStoryPanelSet(FName StoryPanelSetName, bool& bDecoded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDeathDrop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorldXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorldRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVendorUnlockAmounts(const FGameplayTag& VendorTag, FCurrencyCostMap& UnlockAmountSpent, FCurrencyCostMap& TotalVendorUnlockCost) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetVendorRerollCost(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVendorOnSaleItemIndex(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVendorOnSaleItemDiscount(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGenericGearInfo> GetVendorGear(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVendorDiscount(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVendorAffinityLevel(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVaultInventorySize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGenericGearInfo> GetVaultInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVaultGearAtSlot(const int32 SlotIndex, FGenericGearInfo& GearAtSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGenericGearInfo> GetUpgradableGearForVendor(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetSyComStatUpgradeCost(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSyComStatUpgradeAmount(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatValueForSyCom(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRunData GetRunData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSyComStatUpgrades GetPurchasedStatUpgradesForSycom(const FGameplayTag& SyComTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPreviousRunState GetPreviousRunState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfTempCacheInventorySlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfRunsUntilHUBVendorRefresh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfRuns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfCycles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberHealthKits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNextVendorAffinityLevelCost(const FGameplayTag& VendorTag, FCurrencyCostMap& OutLevelCost) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetNextUnlockCharacterCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetNextAbilityEquipmentSlotPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxUnlockedAbilitySection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSyComStatUpgrades(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumberHealthKits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastLoadoutSelections(FLoadoutSelections& OutLastLoadoutSelections) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInRunVendorInventoryItem> GetInRunVendorInventory(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGearUpgradeState(FGameplayTag GearTag, FCharacterEquipmentDetails& OutDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGearUpgradeLevel(FGameplayTag GearTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetGearUpgradeCost_Vendor(const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGenericGearInfo> GetExtractedInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetEquippedAbilityInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetEndOfCycleTax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDeathDropData GetDeathDropInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ECharacterEquipmentSlot, FGenericGearInfo> GetCurrentLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrency(ECurrencyType CurrencyType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCharacterEquippingSavedGear(const FGenericGearInfo& GearInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCachedInventorySize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCacheInventoryDetails GetCachedInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCachedGearAtSlot(const int32 SlotIndex, FGenericGearInfo& GearAtSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfMaterialsEarnedThisCycle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAllUnlockedCharacterClassTags() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetAllUnfoundSchematics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGenericGearInfo> GetAllSavedGear(const bool bIncludeSyComDefaults) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEquipmentDetails> GetAllPurchasedGear(FGameplayTag Filter, const bool bFilterByEquipable) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FEquipmentDetails> GetAllPurchasableGear(FGameplayTag Filter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllOwnedSyComs(TArray<FGameplayTag>& OutSyComs, FGameplayTag OptionalCharacterClassTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAllCharacterClassTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllAvailableSyComs(TArray<FGameplayTag>& OutSyComs, FGameplayTag OptionalCharacterClassTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllAbilityInfo(TMap<FGameplayTag, int32>& OutPurchasedLevels, TMap<FGameplayTag, int32>& OutMaxLevels, TArray<FModInfo>& OutAvailableAbilities) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAbilitySectionSlotInfo(const int32 SectionNumber, int32& OutPurchasedSlots, int32& OutTotalSlots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAbilityInfo(const FGameplayTag& AbilityModTag, int32& OutPurchasedLevel, int32& OutMaxLevel, FModInfo& AbilityInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAbilityEquipmentSlotInfo(int32& OutOccupiedSlots, int32& OutOwnedSlots, int32& OutMaxSlots) const;
    
    UFUNCTION(BlueprintCallable)
    void ExtractCachedInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EquipCurrentLoadout() const;
    
    UFUNCTION(BlueprintCallable)
    void DiscoverStoryPanel(FName StoryPanelName);
    
    UFUNCTION(BlueprintCallable)
    void DecodeStoryPanelSet(FName StoryPanelSetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGenericGearInfo DecodeGear(UPARAM(Ref) FGenericGearInfo& EncodedGear) const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_UnlockVendor(const FGameplayTag& VendorTag);
    
    UFUNCTION(BlueprintCallable)
    void Debug_UnlockAllCharacterClasses();
    
    UFUNCTION(BlueprintCallable)
    bool Debug_SetWorldRank(const int32 NewWorldRank);
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_SetRunData(const FRunData& NewRunData);
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_ResetPlayerAbilities();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ResetInRunVendorInventories();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ResetAllVendorData();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ResetAllVendorAffinityLevels();
    
    UFUNCTION(BlueprintCallable)
    void Debug_RefreshVendorGear();
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_PretendRunStartEnd(const bool bRunStart);
    
    UFUNCTION(BlueprintCallable)
    void Debug_IncreaseVendorAffinityLevel(const FGameplayTag& VendorTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearExtractedInventory();
    
    UFUNCTION(BlueprintCallable)
    void ChangeVendorRerollDiscount(const FGameplayTag& VendorTag, const float ModifyBy, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void ChangeVendorOnSaleDiscount(const FGameplayTag& VendorTag, const float ModifyBy, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void ChangeVendorDiscount(const FGameplayTag& VendorTag, const float ModifyBy, bool bReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanVendorUpgradeGear(const FGameplayTag& VendorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradeSyComStat(const FGameplayTag& SyComTag, const FGameplayTag& StatTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradeGear_Vendor(const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGearUpgradeQueryResult CanUpgradeGear(FGameplayTag GearTag, FGearUpgradeCost& OutUpgradeCost) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUnlockAbilitySection(const int32 SectionNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPurchaseSyCom(FGameplayTag SyComTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPurchaseAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAfford(FCurrencyCostMap Cost) const;
    
    UFUNCTION(BlueprintCallable)
    bool CacheGearAtSlot(FGenericGearInfo CachedGear, int32 SlotIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CacheDeathDropLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddXpToGear(FGameplayTag GearTag, int32 XP);
    
    UFUNCTION(BlueprintCallable)
    bool AddGearToVault(FGenericGearInfo GearInfo, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCurrency(ECurrencyType CurrencyType, int32 Amount, bool bAutoSave, bool bBypassCaching);
    
};

