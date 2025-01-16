#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeckingFootprint.h"
#include "PickedProp.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPickedProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> PropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PropRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeckingFootprint PropFootprint;
    
    BREAKER_API FPickedProp();
};

