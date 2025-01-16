#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemySpawnRegionRuleset.h"
#include "BreakerZoneInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FBreakerZoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ZoneTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ZoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ZoneSpawnCompositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnRegionRuleset ZoneRuleset;
    
    BREAKER_API FBreakerZoneInfo();
};

