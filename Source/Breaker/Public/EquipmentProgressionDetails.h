#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EquipmentProgressionDetails.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FEquipmentProgressionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Skin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquipmentUpgradeLevel;
    
    FEquipmentProgressionDetails();
};

