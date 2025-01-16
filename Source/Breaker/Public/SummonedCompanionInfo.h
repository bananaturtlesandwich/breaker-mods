#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SummonedCompanionInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSummonedCompanionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SourceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CompanionActor;
    
    BREAKER_API FSummonedCompanionInfo();
};

