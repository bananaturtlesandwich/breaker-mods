#pragma once
#include "CoreMinimal.h"
#include "HitStopDetails.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FHitStopDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DilationAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FHitStopDetails();
};

