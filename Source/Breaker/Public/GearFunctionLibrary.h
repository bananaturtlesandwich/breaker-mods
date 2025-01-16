#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ArmorInfo.h"
#include "ECharacterEquipmentSlot.h"
#include "EEquipmentSpawnability.h"
#include "EEquipmentType.h"
#include "EquipmentDetails.h"
#include "GearLevelDetails.h"
#include "GearRarityDetails.h"
#include "GearStatAffixDetails.h"
#include "GearTagSet.h"
#include "GearTierDetails.h"
#include "GenericGearDropSpawnParameters.h"
#include "GenericGearInfo.h"
#include "SyComDetails.h"
#include "GearFunctionLibrary.generated.h"

class ABreakerPawn;
class AGearItemDrop;
class UDataTable;
class UObject;

UCLASS(Blueprintable, Config=Game)
class BREAKER_API UGearFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath EquipmentTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GearTierTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GearLevelTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GearRarityTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GearHolobyteWhitelistTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GearHolobyteWhitelistOverridesTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GearHolobyteUpgradesTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SyComTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ArmorTablePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath StatAffixTablePath;
    
public:
    UGearFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnGearDrop_Type(const UObject* WorldContextObject, const EEquipmentType EquipmentType, const FGenericGearDropSpawnParameters& Parameters, AGearItemDrop*& OutGearDrop);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnGearDrop_Auto(const UObject* WorldContextObject, UPARAM(Ref) FGenericGearInfo& OverrideGearInfo, const FTransform SpawnTransform, AGearItemDrop*& OutGearDrop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGenericGearInfo MakeFakeGearInfoFromTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGenericGearInfoValid(const FGenericGearInfo& GearInfo);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetSyComTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEquipmentDetails GetSyComDetailsAsFakeEquipment(const FSyComDetails& Details);
    
    UFUNCTION(BlueprintCallable)
    static FSyComDetails GetSyComDetails(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetStatAffixTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetRelatedGearStatusEffectTag(const UObject* WorldContextObject, const FGenericGearInfo& GearInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GetGearXPNeededForProgressionLevel(const FEquipmentDetails EquipmentDetails, int32 ProgressionLevel, int32& OutRelativeXP);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGearTierTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGearTierDetails GetGearTierDetails(const int32 Tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGearTagsFromSet(const FGearTagSet& TagSet, TArray<FGameplayTag>& OutTags, TArray<ECharacterEquipmentSlot>& OutSlots);
    
    UFUNCTION(BlueprintCallable)
    static FGearStatAffixDetails GetGearStatAffixInfo(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGearRarityTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGearRarityDetails GetGearRarityDetails(const int32 RarityLevel);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGearLevelTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGearLevelDetails GetGearLevelDetails(const int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGearHolobyteWhitelistTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGearHolobyteWhitelistOverridesTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGearHolobyteUpgradesTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGearDurability(const UObject* WorldContextObject, const FGenericGearInfo& GearInfo, int32& CurrentDurability, int32& MaxDurability);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetEquipmentTable();
    
    UFUNCTION(BlueprintCallable)
    static FEquipmentDetails GetEquipmentDetails(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGenericGearInfo GetDefaultGearInfoForTag(const FGameplayTag& Tag, const ABreakerPawn* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetClassDefaultSyComTag(const FGameplayTag& CharacterClassTag);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetArmorTable();
    
    UFUNCTION(BlueprintCallable)
    static FArmorInfo GetArmorInfo(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSyComDetails> GetAllSpawnableSyComs(const FGameplayTag& OptionalCharacterClassTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEquipmentSpawnability GetAllowedGearSpawnability();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGenericGearInfo GenerateGearInfo_Type(const UObject* WorldContextObject, const EEquipmentType EquipmentType, const FGenericGearDropSpawnParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<EEquipmentType> DEBUG_GetPossibleEquipmentTypesForAffixTag(const UObject* WorldContextObject, const FGameplayTag& AffixTag);
    
};

