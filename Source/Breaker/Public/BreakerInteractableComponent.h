#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "BreakerInteractEventDelegate.h"
#include "BreakerManualSetStateEventDelegate.h"
#include "BreakerSetCostEventDelegate.h"
#include "CurrencyCostArrays.h"
#include "CurrencyCostMap.h"
#include "DifficultyUnlockCost.h"
#include "BreakerInteractableComponent.generated.h"

class AActor;
class UBreakerInteractPromptWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerInteractableComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerInteractEvent OnInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerManualSetStateEvent OnManualSetState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerSetCostEvent OnCostSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerInteractEvent OnUnlock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerInteractEvent OnUnlockFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsReplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutomatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLockIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractChargeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDifficultyUnlockCost> CostByDifficulty;
    
    UBreakerInteractableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCost(AActor* OtherPawn, FCurrencyCostArrays NewCost);
    
    UFUNCTION(BlueprintCallable)
    void Unlock();
    
    UFUNCTION(BlueprintCallable)
    void SetPromptWidget(UBreakerInteractPromptWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionState(AActor* OtherPawn, bool bInteracted);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetLock();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnInteractFocusReceived(AActor* OtherPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnInteractFocusLost(AActor* OtherPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnInteractChargeTick(AActor* OtherPawn, float ChargeRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnInteractChargeStopped(AActor* OtherPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnInteractChargeStarted(AActor* OtherPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnInteractChargeDepleted(AActor* OtherPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnInteractChargeCompleted(AActor* OtherPawn);
    
    UFUNCTION(BlueprintCallable)
    void ManuallyUnlock();
    
    UFUNCTION(BlueprintCallable)
    void ManuallyLock();
    
    UFUNCTION(BlueprintCallable)
    bool IsManuallyLocked();
    
    UFUNCTION(BlueprintCallable)
    bool IsLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool IsInteractChargeRequired() const;
    
    UFUNCTION(BlueprintCallable)
    bool Interact(AActor* OtherPawn);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetActualCost();
    
};

