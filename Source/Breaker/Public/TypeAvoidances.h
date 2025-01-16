#pragma once
#include "CoreMinimal.h"
#include "EObjectType.h"
#include "TypeAvoidances.generated.h"

USTRUCT(BlueprintType)
struct FTypeAvoidances {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceDistance;
    
    BREAKER_API FTypeAvoidances();
};

