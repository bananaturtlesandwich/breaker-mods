#include "BreakerLocalPlayer.h"
#include "BreakerPendingPlayerController.h"

UBreakerLocalPlayer::UBreakerLocalPlayer() {
    this->PendingLevelPlayerControllerClass = ABreakerPendingPlayerController::StaticClass();
}


