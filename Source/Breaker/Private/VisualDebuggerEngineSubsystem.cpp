#include "VisualDebuggerEngineSubsystem.h"

UVisualDebuggerEngineSubsystem::UVisualDebuggerEngineSubsystem() {
}

void UVisualDebuggerEngineSubsystem::SetInputCaptured(bool bCaptured) {
}

void UVisualDebuggerEngineSubsystem::SetDemoVisible(bool bVisible) {
}

bool UVisualDebuggerEngineSubsystem::IsInputCaptured() const {
    return false;
}

bool UVisualDebuggerEngineSubsystem::IsDemoVisible() const {
    return false;
}

FString UVisualDebuggerEngineSubsystem::InputCaptureToggleString() const {
    return TEXT("");
}

FString UVisualDebuggerEngineSubsystem::DemoVisibilityToggleString() const {
    return TEXT("");
}


