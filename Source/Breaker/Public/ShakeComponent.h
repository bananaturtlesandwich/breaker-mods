#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Components/SceneComponent.h"
#include "ShakeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShakeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ShakeEasingFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsPerShake;
    
    UShakeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopShake();
    
    UFUNCTION(BlueprintCallable)
    void AppendShake(float Magnitude, float Duration);
    
};

