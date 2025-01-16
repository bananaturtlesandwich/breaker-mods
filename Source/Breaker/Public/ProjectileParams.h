#pragma once
#include "CoreMinimal.h"
#include "ProjectileParams.generated.h"

USTRUCT(BlueprintType)
struct FProjectileParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistance;
    
    BREAKER_API FProjectileParams();
};

