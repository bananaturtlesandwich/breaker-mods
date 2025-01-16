#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DangerEvent.generated.h"

UCLASS(Blueprintable)
class BREAKER_API ADangerEvent : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDangerEventIcon;
    
    ADangerEvent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerDangerEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetDangerEvent();
    
};

