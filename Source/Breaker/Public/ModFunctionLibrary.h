#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CurrencyCostMap.h"
#include "EEquipmentType.h"
#include "EHolobyteCategory.h"
#include "EModifierSpawnPool.h"
#include "EquipmentDetails.h"
#include "ModInfo.h"
#include "ModInfoText.h"
#include "ModSpecializationInfo.h"
#include "ModFunctionLibrary.generated.h"

class AActor;
class ABreakerMod;
class UDataTable;

UCLASS(Blueprintable, Config=Game)
class BREAKER_API UModFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ModTableRef;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ModTextTableRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ModTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ModTextTable;
    
public:
    UModFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RemoveModFromActor(AActor* Target, ABreakerMod* ModToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFloatRange GetSecondaryModValueRangeAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSecondaryModValueAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FModInfo> GetRandomModsForActor(const AActor* TargetActor, FGameplayTagContainer RequiredParentTags, const TArray<EModifierSpawnPool>& RequiredSpawnPools, const TArray<EHolobyteCategory>& RequiredCategories, int32 Count, const EEquipmentType EquipmentType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumberOfEquipSlotsForAbility(const FGameplayTag& AbilityTag, const int32 AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFloatRange GetModValueRangeAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetModValueAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetModTextTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetModTable();
    
    UFUNCTION(BlueprintCallable)
    static TArray<ABreakerMod*> GetModsOnActor(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static bool GetModInfoTextForTag(FGameplayTag Tag, FModInfoText& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool GetModInfoForTag(FGameplayTag Tag, FModInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEquipmentDetails GetModInfoAsFakeEquipment(const FModInfo& ModInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetModDurationAtStackLevel(const FGameplayTag& Tag, const int32 StackLevel);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FModInfo> GetAllModsForActor(const AActor* TargetActor, FGameplayTagContainer RequiredParentTags, FGameplayTagContainer IgnoredTags, const TArray<EModifierSpawnPool>& RequiredSpawnPools, const TArray<EHolobyteCategory>& RequiredCategories, const EEquipmentType EquipmentType);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllMods(TArray<FModInfo>& OutMods, const TArray<EModifierSpawnPool> RequiredSpawnPools, FGameplayTagContainer RequiredParentTags, FGameplayTagContainer IgnoredTags, const TArray<EHolobyteCategory> RequiredCategories, const TArray<EHolobyteCategory> IgnoredCategories);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCurrencyCostMap GetAbilityCost(const FGameplayTag& AbilityTag, const int32 AbilityLevel);
    
    UFUNCTION(BlueprintCallable)
    static ABreakerMod* FindMatchingModOnActor_Unsafe(const AActor* Target, FGameplayTag Tag, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    static ABreakerMod* FindMatchingModOnActor(const AActor* Target, FGameplayTag Tag, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    static ABreakerMod* AddModToActor(AActor* Target, FModSpecializationInfo ModSpecialization, FModInfo ModInfo);
    
};

