#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AudioVertLocations.generated.h"

USTRUCT(BlueprintType)
struct FAudioVertLocations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> Locations;
    
    BREAKER_API FAudioVertLocations();
};

