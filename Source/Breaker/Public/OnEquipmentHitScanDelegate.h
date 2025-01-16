#pragma once
#include "CoreMinimal.h"
#include "BreakerDamage.h"
#include "OnEquipmentHitScanDelegate.generated.h"

class AActor;
class ABreakerWeaponProp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnEquipmentHitScan, AActor*, WieldingActor, ABreakerWeaponProp*, Prop, const FBreakerDamage&, RawDamage, const TArray<AActor*>&, Overlaps);

