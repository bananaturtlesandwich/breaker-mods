#include "BrkAudioNotifyState.h"

UBrkAudioNotifyState::UBrkAudioNotifyState() {
    this->OnStopActionType = AkActionOnEventType::Stop;
    this->OnStopFadeOutMs = 120;
    this->OnStopFadeOutCurve = EAkCurveInterpolation::Linear;
}

bool UBrkAudioNotifyState::IsInEditor(const UObject* WorldContextObject) const {
    return false;
}


