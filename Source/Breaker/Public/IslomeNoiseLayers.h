#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NoiseLayer.h"
#include "IslomeNoiseLayers.generated.h"

USTRUCT(BlueprintType)
struct FIslomeNoiseLayers : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseLayer> IslomeNoiseLayers;
    
    BREAKER_API FIslomeNoiseLayers();
};

