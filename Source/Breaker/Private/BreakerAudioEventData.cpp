#include "BreakerAudioEventData.h"

FBreakerAudioEventData::FBreakerAudioEventData() {
    this->AudioEvent = NULL;
    this->OnStopActionType = AkActionOnEventType::Stop;
    this->OnStopFadeOutMs = 0;
    this->OnStopFadeOutCurve = EAkCurveInterpolation::Log3;
}

