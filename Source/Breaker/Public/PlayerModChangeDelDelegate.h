#pragma once
#include "CoreMinimal.h"
#include "PlayerModChangeDelDelegate.generated.h"

class ABreakerMod;
class ABreakerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerModChangeDel, ABreakerPawn*, Player, ABreakerMod*, Mod);

