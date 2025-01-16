#pragma once
#include "CoreMinimal.h"
#include "Interactable.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    BREAKER_API FInteractable();
};

