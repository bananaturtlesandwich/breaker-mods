#pragma once
#include "CoreMinimal.h"
#include "LocatorData.h"
#include "LocatorDataArray.generated.h"

USTRUCT(BlueprintType)
struct FLocatorDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocatorData> Items;
    
    BREAKER_API FLocatorDataArray();
};

