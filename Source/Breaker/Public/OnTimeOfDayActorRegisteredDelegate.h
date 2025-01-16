#pragma once
#include "CoreMinimal.h"
#include "OnTimeOfDayActorRegisteredDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeOfDayActorRegistered, AActor*, TimeOfDayActor);

