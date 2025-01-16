#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CandidateIndices.h"
#include "CandidatePointIndices.generated.h"

UCLASS(Blueprintable)
class UCandidatePointIndices : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCandidateIndices> IndexList;
    
    UCandidatePointIndices();

};

