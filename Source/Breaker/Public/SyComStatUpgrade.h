#pragma once
#include "CoreMinimal.h"
#include "SyComStatUpgradeLevel.h"
#include "SyComStatUpgrade.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FSyComStatUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyComStatUpgradeLevel> StatUpgradeLevels;
    
    FSyComStatUpgrade();
};

