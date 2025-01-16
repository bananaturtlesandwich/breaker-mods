#include "BreakerOceanShorePlayer.h"
#include "BreakerAkComponent.h"

ABreakerOceanShorePlayer::ABreakerOceanShorePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBreakerAkComponent>(TEXT("Breaker Ak Component"));
    this->BreakerAkComponent = (UBreakerAkComponent*)RootComponent;
    this->MovementInterpolationSpeed = 3.00f;
    this->DistanceToTeleportThreshold = 2750.00f;
    this->MaxDistanceFromPawn = 4000.00f;
    this->Decker = NULL;
    this->TargetPlayerPawn = NULL;
}

void ABreakerOceanShorePlayer::SetTargetBreakerPawn(APawn* Pawn) {
}


