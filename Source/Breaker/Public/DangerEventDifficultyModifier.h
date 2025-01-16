#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DangerEventDifficultyModifierChance.h"
#include "DangerEventDifficultyModifier.generated.h"

USTRUCT(BlueprintType)
struct FDangerEventDifficultyModifier : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDangerEventDifficultyModifierChance> ModifierChances;
    
    BREAKER_API FDangerEventDifficultyModifier();
};

