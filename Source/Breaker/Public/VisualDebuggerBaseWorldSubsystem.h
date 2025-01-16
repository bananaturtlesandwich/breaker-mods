#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "VisualDebuggerInterface.h"
#include "VisualDebuggerBaseWorldSubsystem.generated.h"

UCLASS(Blueprintable)
class UVisualDebuggerBaseWorldSubsystem : public UTickableWorldSubsystem, public IVisualDebuggerInterface {
    GENERATED_BODY()
public:
    UVisualDebuggerBaseWorldSubsystem();


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

