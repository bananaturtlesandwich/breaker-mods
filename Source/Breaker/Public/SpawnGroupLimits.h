#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpawnGroupLimits.generated.h"

USTRUCT(BlueprintType)
struct FSpawnGroupLimits : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupLimit;
    
    BREAKER_API FSpawnGroupLimits();
};

