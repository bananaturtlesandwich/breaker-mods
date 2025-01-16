#pragma once
#include "CoreMinimal.h"
#include "PangaeaActorList.generated.h"

USTRUCT(BlueprintType)
struct FPangaeaActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RobotShrinesInMyWorld;
    
    BREAKER_API FPangaeaActorList();
};

