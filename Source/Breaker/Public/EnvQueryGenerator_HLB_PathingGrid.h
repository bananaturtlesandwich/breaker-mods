#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h"
#include "EnvQueryGenerator_HLB_PathingGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BREAKER_API UEnvQueryGenerator_HLB_PathingGrid : public UEnvQueryGenerator_PathingGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainSimilarVerticalLevel;
    
public:
    UEnvQueryGenerator_HLB_PathingGrid();

};

