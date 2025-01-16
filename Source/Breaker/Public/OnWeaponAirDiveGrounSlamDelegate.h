#pragma once
#include "CoreMinimal.h"
#include "OnWeaponAirDiveGrounSlamDelegate.generated.h"

class ABreakerPawn;
class ABreakerWeaponProp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponAirDiveGrounSlam, ABreakerPawn*, Player, ABreakerWeaponProp*, Weapon);

