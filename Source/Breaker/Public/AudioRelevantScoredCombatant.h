#pragma once
#include "CoreMinimal.h"
#include "AudioRelevantScoredCombatant.generated.h"

class UChoreographyComponent;

USTRUCT(BlueprintType)
struct FAudioRelevantScoredCombatant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UChoreographyComponent> CombatantScored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AudioIntermediateRelevanceScore;
    
    BREAKER_API FAudioRelevantScoredCombatant();
};

