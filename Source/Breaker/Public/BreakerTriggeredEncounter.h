#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ADA.h"
#include "BreakerTriggeredEncounter.generated.h"

UCLASS(Abstract, Blueprintable)
class BREAKER_API ABreakerTriggeredEncounter : public AADA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBarrierRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncrementSize;
    
    ABreakerTriggeredEncounter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnBarriersSimple(TArray<FVector>& BarrierSpawnPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointWithinBarrierSimple(FVector Point, float Padding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsActivated();
    
};

