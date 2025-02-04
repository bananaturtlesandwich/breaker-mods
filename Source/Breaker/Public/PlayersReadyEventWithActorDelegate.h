#pragma once
#include "CoreMinimal.h"
#include "PlayersReadyEventWithActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayersReadyEventWithActor, AActor*, ActorSource);

