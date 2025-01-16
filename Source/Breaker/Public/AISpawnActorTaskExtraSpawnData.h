#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnActorTaskExtraSpawnData.generated.h"

class ACMCharBase;

USTRUCT(BlueprintType)
struct FAISpawnActorTaskExtraSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACMCharBase> SpawnActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContributesToMaxSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnLocationMustProjectToNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpawnDistanceCmFromOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpawnDistanceCmFromOwner;
    
    BREAKER_API FAISpawnActorTaskExtraSpawnData();
};

