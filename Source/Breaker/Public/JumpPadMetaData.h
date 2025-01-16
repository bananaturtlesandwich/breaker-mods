#pragma once
#include "CoreMinimal.h"
#include "JumpPadMetaData.generated.h"

USTRUCT(BlueprintType)
struct FJumpPadMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MetaData;
    
    BREAKER_API FJumpPadMetaData();
};

