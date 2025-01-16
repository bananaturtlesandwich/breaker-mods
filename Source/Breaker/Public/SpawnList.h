#pragma once
#include "CoreMinimal.h"
#include "SpawnInfo.h"
#include "SpawnList.generated.h"

USTRUCT(BlueprintType)
struct FSpawnList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSpawnInfo> SpawnInfo;
    
    BREAKER_API FSpawnList();
};

