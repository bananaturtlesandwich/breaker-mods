#include "MovementHookshot.h"
#include "Net/UnrealNetwork.h"

UMovementHookshot::UMovementHookshot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMovementHookshot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMovementHookshot, RepInput);
}


