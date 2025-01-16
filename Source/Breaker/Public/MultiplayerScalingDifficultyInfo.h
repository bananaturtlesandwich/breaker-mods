#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "MultiplayerScalingDifficultyInfo.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerScalingDifficultyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeToScaleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AttributeToSalarCurve;
    
    BREAKER_API FMultiplayerScalingDifficultyInfo();
};

