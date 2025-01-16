#pragma once
#include "CoreMinimal.h"
#include "VisualDebuggerBaseWorldSubsystem.h"
#include "AIChoreographerVisualDebugger.generated.h"

UCLASS(Blueprintable, Transient)
class BREAKER_API UAIChoreographerVisualDebugger : public UVisualDebuggerBaseWorldSubsystem {
    GENERATED_BODY()
public:
    UAIChoreographerVisualDebugger();

};

