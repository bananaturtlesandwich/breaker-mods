#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECharacterEquipmentSlot.h"
#include "GenericGearInfo.h"
#include "LoadoutSelectionsPerClass.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutSelectionsPerClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChosenSyCom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterEquipmentSlot, FGenericGearInfo> ChosenGearInfo;
    
    BREAKER_API FLoadoutSelectionsPerClass();
};

