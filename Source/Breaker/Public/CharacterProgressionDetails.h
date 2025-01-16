#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterProgressionDetails.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FCharacterProgressionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DEPRECIATED_Experience;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 GameTimePlayed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SessionsPlayed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SessionTimePlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCycles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfRuns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Abilities_Purchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Abilities_Equipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUnlockedAbilitiesSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PurchasedAbilityEquipSlots;
    
    FCharacterProgressionDetails();
};

