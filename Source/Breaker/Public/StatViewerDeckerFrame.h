#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatViewerDeckerFrame.generated.h"

USTRUCT(BlueprintType)
struct FStatViewerDeckerFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WhichFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    BREAKER_API FStatViewerDeckerFrame();
};

