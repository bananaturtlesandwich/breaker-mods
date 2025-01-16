#pragma once
#include "CoreMinimal.h"
#include "HitscanGunShotPacket.h"
#include "BreakerProjectileEventDelegate.generated.h"

class AClientProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBreakerProjectileEvent, AClientProjectile*, SpawnedProjectile, const FHitscanGunShotPacket&, ShotInfo);

