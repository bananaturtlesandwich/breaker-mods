#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnTimeOfDayPhaseUpdatedDelegate.h"
#include "BreakerTimeOfDay.generated.h"

UCLASS(Blueprintable)
class BREAKER_API ABreakerTimeOfDay : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeOfDayPhaseUpdated OnTimeOfDayPhaseUpdated;
    
    ABreakerTimeOfDay(const FObjectInitializer& ObjectInitializer);

};

