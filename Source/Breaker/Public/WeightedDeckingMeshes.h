#pragma once
#include "CoreMinimal.h"
#include "WeightedDeckingMeshes.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FWeightedDeckingMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> MeshToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    BREAKER_API FWeightedDeckingMeshes();
};

