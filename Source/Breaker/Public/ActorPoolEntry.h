#pragma once
#include "CoreMinimal.h"
#include "ActorPoolEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorPoolEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpectedActorCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> PoolArray;
    
    BREAKER_API FActorPoolEntry();
};

