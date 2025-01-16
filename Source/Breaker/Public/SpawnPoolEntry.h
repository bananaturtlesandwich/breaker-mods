#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpawnPoolEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BREAKER_API FSpawnPoolEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlySpawnOnServer;
    
    FSpawnPoolEntry();
};

