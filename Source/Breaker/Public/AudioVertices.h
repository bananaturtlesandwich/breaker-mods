#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AudioVertices.generated.h"

USTRUCT(BlueprintType)
struct FAudioVertices {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    BREAKER_API FAudioVertices();
};

