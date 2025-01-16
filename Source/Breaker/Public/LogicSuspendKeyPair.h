#pragma once
#include "CoreMinimal.h"
#include "LogicSuspendKeyPair.generated.h"

USTRUCT(BlueprintType)
struct FLogicSuspendKeyPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    BREAKER_API FLogicSuspendKeyPair();
};

