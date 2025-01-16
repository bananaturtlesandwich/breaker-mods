#pragma once
#include "CoreMinimal.h"
#include "RandomPropTableList.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FRandomPropTableList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> PropTableList;
    
    BREAKER_API FRandomPropTableList();
};

