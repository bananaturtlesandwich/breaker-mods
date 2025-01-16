#include "VisualDebuggerPlayerCombat.h"

UVisualDebuggerPlayerCombat::UVisualDebuggerPlayerCombat() {
    this->HitReactTargetTracker = NULL;
    this->MostRecentMontage = NULL;
}

void UVisualDebuggerPlayerCombat::OnDebugTargetChanged(UDebugTargetTracker* Tracker, AActor* OldTarget, AActor* NewTarget) {
}

void UVisualDebuggerPlayerCombat::OnDebugLockChanged(UDebugTargetTracker* Tracker, AActor* Target, bool bLockedOn) {
}


