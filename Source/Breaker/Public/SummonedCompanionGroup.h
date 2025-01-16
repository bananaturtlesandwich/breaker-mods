#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SummonedCompanionInfo.h"
#include "SummonedCompanionGroup.generated.h"

USTRUCT(BlueprintType)
struct FSummonedCompanionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GroupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSummonedCompanionInfo> Companions;
    
    BREAKER_API FSummonedCompanionGroup();
};

