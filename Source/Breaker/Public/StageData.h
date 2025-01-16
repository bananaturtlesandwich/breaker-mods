#pragma once
#include "CoreMinimal.h"
#include "RPASubCandidatePoints.h"
#include "StageData.generated.h"

class UDataTable;
class UTerrainPointTable;

USTRUCT(BlueprintType)
struct FStageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTerrainPointTable*> TerrainPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> RPATables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRPASubCandidatePoints> RPACandidatePoints;
    
    BREAKER_API FStageData();
};

