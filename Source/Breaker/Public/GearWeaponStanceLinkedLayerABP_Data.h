#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "GearWeaponStanceLinkedLayerABP_Data.generated.h"

class ABreakerWeaponProp;
class UBreakerAnimInstance;

USTRUCT(BlueprintType)
struct FGearWeaponStanceLinkedLayerABP_Data : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABreakerWeaponProp> GearOrWeaponAttributeStance_Class_Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerAnimInstance> WeaponStancesAnimBP_Class;
    
    BREAKER_API FGearWeaponStanceLinkedLayerABP_Data();
};

