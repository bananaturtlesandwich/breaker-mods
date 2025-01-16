#pragma once
#include "CoreMinimal.h"
#include "HMEventContainer.generated.h"

USTRUCT(BlueprintType)
struct FHMEventContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CategoryFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RecordedEvents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FirstEventIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FirstDataOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FirstFuncOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RecordedFunctionCalls;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> FuncCompressionBlocks;
    
    BREAKER_API FHMEventContainer();
};

