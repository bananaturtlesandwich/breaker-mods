#pragma once
#include "CoreMinimal.h"
#include "DeckingFootprint.h"
#include "RowAvoidances.generated.h"

USTRUCT(BlueprintType)
struct FRowAvoidances {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeckingFootprint CustomFootprint;
    
    BREAKER_API FRowAvoidances();
};

