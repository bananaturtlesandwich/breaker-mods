#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BreakerCharacterLandingEvent.generated.h"

USTRUCT(BlueprintType)
struct FBreakerCharacterLandingEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ImpactSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ImpactLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ImpactNormal;
    
    BREAKER_API FBreakerCharacterLandingEvent();
};

