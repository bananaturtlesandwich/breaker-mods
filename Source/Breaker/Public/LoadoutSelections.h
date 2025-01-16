#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LoadoutSelectionsPerClass.h"
#include "LoadoutSelections.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutSelections {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChosenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FLoadoutSelectionsPerClass> SelectionsPerClass;
    
    BREAKER_API FLoadoutSelections();
};

