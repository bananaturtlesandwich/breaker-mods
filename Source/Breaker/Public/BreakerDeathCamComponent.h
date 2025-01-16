#pragma once
#include "CoreMinimal.h"
#include "PlayerComponentBase.h"
#include "BreakerDeathCamComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerDeathCamComponent : public UPlayerComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewViewTargetSet, APawn*, ViewPawn);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewViewTargetSet OnNewViewTargetSet;
    
    UBreakerDeathCamComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewNextSpectatorCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsSpectating() const;
    
};

