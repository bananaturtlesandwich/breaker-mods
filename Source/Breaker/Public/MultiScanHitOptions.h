#pragma once
#include "CoreMinimal.h"
#include "BreakerCamModifierData.h"
#include "Templates/SubclassOf.h"
#include "MultiScanHitOptions.generated.h"

class UBreakerCamModifier;

USTRUCT(BlueprintType)
struct FMultiScanHitOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerCamModifier> NonLethalCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerCamModifierData NonLethalModifierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerCamModifier> LethalCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerCamModifierData LethalModifierData;
    
    BREAKER_API FMultiScanHitOptions();
};

