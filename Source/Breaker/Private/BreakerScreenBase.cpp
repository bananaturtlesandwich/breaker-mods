#include "BreakerScreenBase.h"

UBreakerScreenBase::UBreakerScreenBase() {
    this->bDisableSlateNavigation = false;
    this->bEnableWASDNavigation = true;
    this->LatestInputDeviceType = EUIInputDeviceType::None;
}

void UBreakerScreenBase::StopListeningForScreenAction(const FBreakerScreenAction& ScreenAction) {
}

void UBreakerScreenBase::StopListeningForAllScreenActions() {
}

void UBreakerScreenBase::ListenForScreenAction(const FBreakerScreenAction& ScreenAction, FOnScreenActionExecuted Callback) {
}


