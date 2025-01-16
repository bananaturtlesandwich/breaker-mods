#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/WidgetComponent.h"
#include "BreakerCharacterLocalComponentListener.h"
#include "EAttackTargetStatus.h"
#include "AttackTargetComponent.generated.h"

class AActor;
class UAttackTargetTriageComponent;
class UObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UAttackTargetComponent : public UWidgetComponent, public IBreakerCharacterLocalComponentListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargetable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAimVolumeIsCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimRelativeLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimWorldLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AimCapsuleRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAttackTargetStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> AttackVictim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AttackingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOffScreenAndInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAimAssistTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ThingsLockedOnToMe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> EvaluatorsFocusedOnMe;
    
    UAttackTargetComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseAimCapsuleVolume() const;
    
    UFUNCTION(BlueprintCallable)
    void StopAttacking();
    
    UFUNCTION(BlueprintCallable)
    void SetObjectIsLockedOnToMe(UObject* Object, bool bLockedOn);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttackingForSeconds(float Seconds, AActor* Victim);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttacking(AActor* Victim);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomEvaluatorFocus(UObject* Evaluator);
    
    UFUNCTION(BlueprintCallable)
    void MarkCustomEvaluatorFocus(UObject* Evaluator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectLockedOnToMe(UObject* Object) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyObjectLockedOnToMe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAimPivotLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetAimCapsuleRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAimCapsuleCapPositions(FVector& OutCap1, FVector& OutCap2) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackTargetTriageComponent* FindTriageComponent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CustomEvaluatorStateChanged(UObject* Evaluator);
    

    // Fix for true pure virtual functions not being implemented
};

