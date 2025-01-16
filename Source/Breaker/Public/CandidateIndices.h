#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CandidateIndices.generated.h"

USTRUCT(BlueprintType)
struct FCandidateIndices : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Indices;
    
    BREAKER_API FCandidateIndices();
};

