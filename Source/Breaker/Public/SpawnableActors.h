#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpawnableActors.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpawnableActors : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ClassToSpawn;
    
    BREAKER_API FSpawnableActors();
};

