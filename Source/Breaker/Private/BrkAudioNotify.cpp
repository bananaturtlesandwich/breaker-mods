#include "BrkAudioNotify.h"

UBrkAudioNotify::UBrkAudioNotify() {
    this->bAllowPlaybackOnDefeated = true;
}

bool UBrkAudioNotify::IsInEditor(const UObject* WorldContextObject) const {
    return false;
}


