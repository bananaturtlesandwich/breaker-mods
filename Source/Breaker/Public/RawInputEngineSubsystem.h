#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "RawAnalogEventDelegate.h"
#include "RawKeyEventDelegate.h"
#include "RawInputEngineSubsystem.generated.h"

UCLASS(Blueprintable)
class URawInputEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawKeyEvent OnRawKeyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawAnalogEvent OnRawAnalogEvent;
    
    URawInputEngineSubsystem();

};

