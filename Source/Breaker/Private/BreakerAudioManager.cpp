#include "BreakerAudioManager.h"

UBreakerAudioManager::UBreakerAudioManager() {
    this->bMultiPositionAudioAllowed = true;
    this->FadeOutAll_SFX_Event = NULL;
    this->FadeInAll_SFX_Event = NULL;
}

void UBreakerAudioManager::SetNewInputTypeAudioState(const FName& NewInputMethod) {
}

int32 UBreakerAudioManager::PlayUI_AudioEvent_2D(UAkAudioEvent* AudioEvent) {
    return 0;
}

void UBreakerAudioManager::HandleOnLocalPlayerAdded(ULocalPlayer* LocalPlayer) {
}

void UBreakerAudioManager::HandleOnInputMethodChanged(ECommonInputType InputType) {
}

void UBreakerAudioManager::FadeOutAllSFX() const {
}

void UBreakerAudioManager::FadeInAllSFX() const {
}


