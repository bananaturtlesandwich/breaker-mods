#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "CurrencyCostMap.h"
#include "ECurrencyType.h"
#include "GenericGearInfo.h"
#include "VendorAffinityLevelData.h"
#include "VendorFunctionLibrary.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable, Config=Game)
class BREAKER_API UVendorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath VendorUnlockTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath VendorAffinityLevelTablePath;
    
public:
    UVendorFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 InRun_GetHealthKitCost(const UObject* WorldContextObject, const FGameplayTag& VendorTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FCurrencyCostMap InRun_GetGearCost(const UObject* WorldContextObject, const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 InRun_GetCurrencyCost(const UObject* WorldContextObject, const FGameplayTag& VendorTag, const ECurrencyType CurrencyType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetVendorUnlockTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVendorUnlockCost(const FGameplayTag& VendorTag, TMap<ECurrencyType, int32>& VendorUnlockCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetVendorAffinityLevelTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVendorAffinityLevelData GetVendorAffinityLevelDetails(const int32 VendorAffinityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetRewardTagForVendorAffinityLevel(const FGameplayTag& VendorTag, const int32 VendorAffinityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FCurrencyCostMap GetGearWorth_Sell(const UObject* WorldContextObject, const FGenericGearInfo& GearInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FCurrencyCostMap GetGearCost_Buy(const UObject* WorldContextObject, const FGameplayTag& VendorTag, const FGenericGearInfo& GearInfo);
    
};

