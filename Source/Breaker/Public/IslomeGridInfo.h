#pragma once
#include "CoreMinimal.h"
#include "IslomeGridInfo.generated.h"

USTRUCT(BlueprintType)
struct FIslomeGridInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SnapToGridRotation;
    
    BREAKER_API FIslomeGridInfo();
};

