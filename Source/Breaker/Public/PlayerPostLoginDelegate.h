#pragma once
#include "CoreMinimal.h"
#include "PlayerPostLoginDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerPostLogin, APlayerController*, NewPlayer);

