#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VirtualPropertySet.h"
#include "FedVirtualTargetOptions.generated.h"

USTRUCT(BlueprintType)
struct FFedVirtualTargetOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnVirtualTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VirtualActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualPropertySet VirtualProperties;
    
    BREAKER_API FFedVirtualTargetOptions();
};

