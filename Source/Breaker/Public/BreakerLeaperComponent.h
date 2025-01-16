#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "LeapEndEventDelegate.h"
#include "LeapEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "BreakerLeaperComponent.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBreakerLeaperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TargetIndicatorClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeapEvent OnLeap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeapEndEvent OnEndLeap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeapToTargetIsFreeOfCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeapTestHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeapTestRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopRotationPostAttackTimeDurationSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector JumpTargetPosition;
    
public:
    UBreakerLeaperComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool StartLeap(UAnimMontage* Anim, FVector TargetPosition, float MidPointHeight, float JumpDuration, float MaximumAllowedError);
    
    UFUNCTION(BlueprintCallable)
    void SetLeapTargetLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnDisabled();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartLeap(UAnimMontage* Anim, FVector TargetPosition, float Duration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_FinishLeap();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeapInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeapActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeapTargetLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishLeap();
    
};

