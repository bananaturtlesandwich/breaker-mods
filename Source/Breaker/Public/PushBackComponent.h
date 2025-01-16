#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "EPushBackSourceType.h"
#include "PushBackComponent.generated.h"

class ABreakerPawn;
class IBreakerMovementDelegate;
class UBreakerMovementDelegate;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPushBackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PushBackEasingFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushBackEasingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPushBackSourceType, float> OverrideEasingDurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToImpulseConversionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EPushBackSourceType> IgnoredPushSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePushes;
    
    UPushBackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TickPushBack(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComponentOwnerAI() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMovementModeChanged(ABreakerPawn* Owner, TScriptInterface<IBreakerMovementDelegate> PrevState, TScriptInterface<IBreakerMovementDelegate> CurrState);
    
public:
    UFUNCTION(BlueprintCallable)
    void AppendPushBack(FVector PushBack, EPushBackSourceType PushType);
    
};

