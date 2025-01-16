#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "BreakerCameraShakeDefinition.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FBreakerCameraShakeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ValidTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShakeClass;
    
    BREAKER_API FBreakerCameraShakeDefinition();
};

