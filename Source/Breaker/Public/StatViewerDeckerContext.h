#pragma once
#include "CoreMinimal.h"
#include "StatViewerDeckerFrame.h"
#include "StatViewerDeckerContext.generated.h"

USTRUCT(BlueprintType)
struct FStatViewerDeckerContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatViewerDeckerFrame> FrameData;
    
    BREAKER_API FStatViewerDeckerContext();
};

