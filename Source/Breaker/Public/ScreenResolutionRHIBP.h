#pragma once
#include "CoreMinimal.h"
#include "ScreenResolutionRHIBP.generated.h"

USTRUCT(BlueprintType)
struct FScreenResolutionRHIBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshRate;
    
    BREAKER_API FScreenResolutionRHIBP();
};

