#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AudioAttributesByZone.generated.h"

USTRUCT(BlueprintType)
struct FAudioAttributesByZone : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectDensity;
    
    BREAKER_API FAudioAttributesByZone();
};

