#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeightedDeckingClasses.h"
#include "PermittedAdjacencies.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPermittedAdjacencies : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> RootActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedDeckingClasses> PermittedAdjacencies;
    
    BREAKER_API FPermittedAdjacencies();
};

