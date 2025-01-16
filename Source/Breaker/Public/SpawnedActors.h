#pragma once
#include "CoreMinimal.h"
#include "ActorArray.h"
#include "SpawnedActors.generated.h"

USTRUCT(BlueprintType)
struct FSpawnedActors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActorArray> ActorMap;
    
    BREAKER_API FSpawnedActors();
};

