#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DebugPoolInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDebugPoolInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PooledClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PooledActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PooledActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InFlightActors;
    
    BREAKER_API FDebugPoolInfo();
};

