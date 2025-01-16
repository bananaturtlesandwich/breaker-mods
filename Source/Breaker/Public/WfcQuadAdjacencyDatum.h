#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WfcQuadAdjacencies.h"
#include "WfcQuadAdjacencyDatum.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWfcQuadAdjacencyDatum : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, FWfcQuadAdjacencies> QuadAdjacencies;
    
    BREAKER_API FWfcQuadAdjacencyDatum();
};

