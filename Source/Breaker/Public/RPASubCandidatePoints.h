#pragma once
#include "CoreMinimal.h"
#include "RPASubCandidatePoints.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FRPASubCandidatePoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> RPASubCandidatePoints;
    
    BREAKER_API FRPASubCandidatePoints();
};

