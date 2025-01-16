#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VisualDebuggerInterface.h"
#include "VisualDebuggerBaseGameInstanceSubsystem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UVisualDebuggerBaseGameInstanceSubsystem : public UGameInstanceSubsystem, public IVisualDebuggerInterface {
    GENERATED_BODY()
public:
    UVisualDebuggerBaseGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnPersistentWorldDestroyed(UWorld* TheWorld);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetPresented(bool bPresented) override PURE_VIRTUAL(SetPresented,);
    
    UFUNCTION(BlueprintCallable)
    bool IsPresented() const override PURE_VIRTUAL(IsPresented, return false;);
    
    UFUNCTION(BlueprintCallable)
    FString GetDebuggerName() const override PURE_VIRTUAL(GetDebuggerName, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    FString AssociatedHotKeyString() const override PURE_VIRTUAL(AssociatedHotKeyString, return TEXT(""););
    
};

