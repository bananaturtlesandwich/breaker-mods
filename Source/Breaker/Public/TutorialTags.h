#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TutorialTags.generated.h"

USTRUCT(BlueprintType)
struct FTutorialTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TutorialTags;
    
    BREAKER_API FTutorialTags();
};

