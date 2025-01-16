#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELevelState.h"
#include "BossFightData.generated.h"

USTRUCT(BlueprintType)
struct FBossFightData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelState BossArena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeFromStartToCutsceneIntro;
    
    BREAKER_API FBossFightData();
};

