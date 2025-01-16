#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CacheInventoryDetails.h"
#include "CharacterEquipmentDetails.h"
#include "CharacterInventoryDetails.h"
#include "CharacterProgressionDetails.h"
#include "CharacterStatDetails.h"
#include "DefaultGearInfo.h"
#include "GameplayTagFloatPair.h"
#include "GearTagSet.h"
#include "GenericGearInfo.h"
#include "LoadoutSelections.h"
#include "ModSpecializationInfo.h"
#include "PangaeaWorldState.h"
#include "SyComUpgrades.h"
#include "PlayerCharacterDetails.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FPlayerCharacterDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterInventoryDetails InventoryDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterProgressionDetails ProgressionDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatDetails DEPRECIATED_StatDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnlockedCharacterClassTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCharactersUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DEPRECATED_UnlockedEquipmentSchematicTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterEquipmentDetails> DEPRECATED_UnlockedWeaponClassDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCharacterEquipmentDetails> GearDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCacheInventoryDetails CachedInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenericGearInfo> ExtractedInventry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenericGearInfo> VaultInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FDefaultGearInfo> SyComDefaultGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGearTagSet DEPRECIATED_LastSelectedRunLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutSelections LastLoadoutSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModSpecializationInfo> AllMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AllOwnedSyComs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyComUpgrades PurchasedSyComUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagFloatPair> LiveCoreAttributeValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagFloatPair> LiveCoreAttributeMaximums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPangaeaWorldState PangaeaWorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> StoryPanelsDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> StoryPanelSetsDecoded;
    
    FPlayerCharacterDetails();
};

