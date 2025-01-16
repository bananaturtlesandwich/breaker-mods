#include "VendorFunctionLibrary.h"

UVendorFunctionLibrary::UVendorFunctionLibrary() {
}

int32 UVendorFunctionLibrary::InRun_GetHealthKitCost(const UObject* WorldContextObject, const FGameplayTag& VendorTag) {
    return 0;
}

FCurrencyCostMap UVendorFunctionLibrary::InRun_GetGearCost(const UObject* WorldContextObject, const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo) {
    return FCurrencyCostMap{};
}

int32 UVendorFunctionLibrary::InRun_GetCurrencyCost(const UObject* WorldContextObject, const FGameplayTag& VendorTag, const ECurrencyType CurrencyType) {
    return 0;
}

UDataTable* UVendorFunctionLibrary::GetVendorUnlockTable() {
    return NULL;
}

bool UVendorFunctionLibrary::GetVendorUnlockCost(const FGameplayTag& VendorTag, TMap<ECurrencyType, int32>& VendorUnlockCost) {
    return false;
}

UDataTable* UVendorFunctionLibrary::GetVendorAffinityLevelTable() {
    return NULL;
}

FVendorAffinityLevelData UVendorFunctionLibrary::GetVendorAffinityLevelDetails(const int32 VendorAffinityLevel) {
    return FVendorAffinityLevelData{};
}

FGameplayTag UVendorFunctionLibrary::GetRewardTagForVendorAffinityLevel(const FGameplayTag& VendorTag, const int32 VendorAffinityLevel) {
    return FGameplayTag{};
}

FCurrencyCostMap UVendorFunctionLibrary::GetGearWorth_Sell(const UObject* WorldContextObject, const FGenericGearInfo& GearInfo) {
    return FCurrencyCostMap{};
}

FCurrencyCostMap UVendorFunctionLibrary::GetGearCost_Buy(const UObject* WorldContextObject, const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo) {
    return FCurrencyCostMap{};
}


