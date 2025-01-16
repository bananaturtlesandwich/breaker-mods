#pragma once
#include "CoreMinimal.h"
#include "BreakerConditionBase.h"
#include "EBreakerCompareFunction.h"
#include "EBreakerWeaponProperty.h"
#include "ECharacterEquipmentSlot.h"
#include "BreakerCondition_WeaponChargeDuration.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBreakerCondition_WeaponChargeDuration : public UBreakerConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseManualValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakerWeaponProperty WeaponProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterEquipmentSlot EquipmentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargeIncrementLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTreatAsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakerCompareFunction CompareFunction;
    
    UBreakerCondition_WeaponChargeDuration();

};

