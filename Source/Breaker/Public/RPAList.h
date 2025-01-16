#pragma once
#include "CoreMinimal.h"
#include "RPAParameters.h"
#include "RPAList.generated.h"

USTRUCT(BlueprintType)
struct FRPAList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRPAParameters> IslomeTotalRPA;
    
    BREAKER_API FRPAList();
};

