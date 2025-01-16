#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "CurrencyCostMap.h"
#include "BreakerInteractPromptWidget.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BREAKER_API UBreakerInteractPromptWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBreakerInteractPromptWidget();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void Unlock(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void SetOwningActor(AActor* OwningActor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void SetCost(FCurrencyCostMap Cost, bool Locked, bool bShowLockIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInteractFocusReceived(bool bRequiresCharge);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInteractFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInteractChargeTick(float ChargeRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInteractChargeStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInteractChargeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInteractChargeDepleted();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInteractChargeCompleted();
    
};

