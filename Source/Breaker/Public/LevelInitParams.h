#pragma once
#include "CoreMinimal.h"
#include "LevelInitParams.generated.h"

USTRUCT(BlueprintType)
struct FLevelInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoverAtNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTownWorld;
    
    BREAKER_API FLevelInitParams();
};

