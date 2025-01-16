#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TempZoneIndexMapping.generated.h"

USTRUCT(BlueprintType)
struct FTempZoneIndexMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ZoneList;
    
    BREAKER_API FTempZoneIndexMapping();
};

