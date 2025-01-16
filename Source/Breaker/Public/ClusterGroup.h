#pragma once
#include "CoreMinimal.h"
#include "ClusterGroup.generated.h"

class UFoliageInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FClusterGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFoliageInstancedStaticMeshComponent*> ClusterFISMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClusterFISMCount;
    
    BREAKER_API FClusterGroup();
};

