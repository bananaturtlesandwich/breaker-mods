#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BiomeZoneInfo.h"
#include "BiomeZones.generated.h"

USTRUCT(BlueprintType)
struct FBiomeZones {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBiomeZoneInfo> ZoneList;
    
    BREAKER_API FBiomeZones();
};

