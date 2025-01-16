#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EquipmentLevel.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentLevel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    BREAKER_API FEquipmentLevel();
};

