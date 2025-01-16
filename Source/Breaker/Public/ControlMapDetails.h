#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EControlMapBehavior.h"
#include "ControlMapDetails.generated.h"

USTRUCT(BlueprintType)
struct FControlMapDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlMapBehavior ControlMapBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ControlMapMinMax;
    
    BREAKER_API FControlMapDetails();
};

