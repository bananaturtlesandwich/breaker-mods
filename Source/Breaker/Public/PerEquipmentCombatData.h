#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HitStopDetails.h"
#include "PerEquipmentCombatData.generated.h"

USTRUCT(BlueprintType)
struct FPerEquipmentCombatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MatchTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitStopDetails HitStop;
    
    BREAKER_API FPerEquipmentCombatData();
};

