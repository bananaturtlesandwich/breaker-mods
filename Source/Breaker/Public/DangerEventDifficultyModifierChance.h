#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DangerEventDifficultyModifierChance.generated.h"

USTRUCT(BlueprintType)
struct FDangerEventDifficultyModifierChance : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Modifier;
    
    BREAKER_API FDangerEventDifficultyModifierChance();
};

