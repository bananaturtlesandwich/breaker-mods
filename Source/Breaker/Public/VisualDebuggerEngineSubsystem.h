#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "VisualDebuggerEntry.h"
#include "VisualDebuggerEngineSubsystem.generated.h"

UCLASS(Blueprintable)
class UVisualDebuggerEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVisualDebuggerEntry> RegisteredDebuggers;
    
public:
    UVisualDebuggerEngineSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetInputCaptured(bool bCaptured);
    
    UFUNCTION(BlueprintCallable)
    void SetDemoVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputCaptured() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDemoVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString InputCaptureToggleString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DemoVisibilityToggleString() const;
    
};

