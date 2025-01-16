#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FindoVariantLocations.generated.h"

USTRUCT(BlueprintType)
struct FFindoVariantLocations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Locations;
    
    BREAKER_API FFindoVariantLocations();
};

