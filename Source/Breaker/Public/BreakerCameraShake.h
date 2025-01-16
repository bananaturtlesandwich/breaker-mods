#pragma once
#include "CoreMinimal.h"
#include "MatineeCameraShake.h"
#include "BreakerCameraShakeParams.h"
#include "BreakerCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BREAKER_API UBreakerCameraShake : public UMatineeCameraShake {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBreakerCameraShakeParams BreakerCameraShakeParams;
    
public:
    UBreakerCameraShake();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostSetBreakerShakeParams();
    
};

