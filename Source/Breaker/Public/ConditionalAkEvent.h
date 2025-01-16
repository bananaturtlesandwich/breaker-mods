#pragma once
#include "CoreMinimal.h"
#include "ConditionalAkEvent.generated.h"

class UAkAudioEvent;
class UBreakerConditionBase;

USTRUCT(BlueprintType)
struct BREAKER_API FConditionalAkEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerConditionBase* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    FConditionalAkEvent();
};

