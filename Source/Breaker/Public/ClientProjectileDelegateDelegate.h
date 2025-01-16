#pragma once
#include "CoreMinimal.h"
#include "ClientProjectileDelegateDelegate.generated.h"

class AClientProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClientProjectileDelegate, AClientProjectile*, Source);

