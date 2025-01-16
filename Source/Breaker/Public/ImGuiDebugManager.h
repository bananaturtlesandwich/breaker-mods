#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BreakerModuleImGuiDrawDelegateDelegate.h"
#include "ImGuiDebugManager.generated.h"

class AActor;
class APlayerController;
class UImGuiDebugManager;
class UObject;
class UWorld;

UCLASS(Blueprintable, Transient)
class BREAKER_API UImGuiDebugManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBreakerModuleImGuiDrawDelegate BreakerModuleImGuiDrawDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsImGuiRenderingHalted;
    
public:
    UImGuiDebugManager();

    UFUNCTION(BlueprintCallable)
    void SetBreakerImGuiHaltStatus(const bool bInHaltStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameplayManagerLoaded(const UWorld* worldInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameplayDebugManagerEnabled(const UWorld* worldInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* IsGameplayDebuggerEnabledAndHasTarget(const UWorld* worldInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetLocalPlayerController(const UWorld* worldInstance) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UImGuiDebugManager* GetImGuiDebugManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBreakerImGuiHaltStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* EnableGameplayDebuggerWithReplicatedTarget(const UWorld* worldInstance, const AActor* inDebuggerTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EnableGameplayDebugger(const UWorld* worldInstance) const;
    
};

