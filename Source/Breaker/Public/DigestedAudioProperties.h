#pragma once
#include "CoreMinimal.h"
#include "AudioRelevantScoredCombatant.h"
#include "DigestedAudioProperties.generated.h"

USTRUCT(BlueprintType)
struct FDigestedAudioProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAudioRelevantScoredCombatant AudioCachedCombatant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AudioProximityScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AudioFocusScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AudioPredictionScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AudioActionScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AudioIntermediateRankScore;
    
    BREAKER_API FDigestedAudioProperties();
};

