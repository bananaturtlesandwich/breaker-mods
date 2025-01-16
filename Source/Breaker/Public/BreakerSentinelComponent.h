#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ShieldedTargetsUpdateDelegate.h"
#include "Templates/SubclassOf.h"
#include "BreakerSentinelComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBreakerSentinelComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShieldsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShieldedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryShieldRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickyShieldRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ClassesToNotShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumShieldTargetHeight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldedTargetsUpdate OnShieldedTargetsUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OnShieldedTargetsUpdated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ShieldedTargets;
    
public:
    UBreakerSentinelComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetShieldsActive(bool Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnShieldedTargetsUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasShieldTarget(const int32 TargetIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPotentialAllyToShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetShieldTargetScale(const int32 TargetIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetShieldTargetLocation(const int32 TargetIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetShieldTargetActor(const int32 TargetIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreShieldsActive() const;
    
};

