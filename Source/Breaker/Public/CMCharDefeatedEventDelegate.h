#pragma once
#include "CoreMinimal.h"
#include "CMCharDefeatedEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCMCharDefeatedEvent, AActor*, Actor);

