#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestInfo.generated.h"

USTRUCT(BlueprintType)
struct FQuestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QuestTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingRuns;
    
    BREAKER_API FQuestInfo();
};

