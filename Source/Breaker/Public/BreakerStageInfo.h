#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "BreakerRunTimeInfo.h"
#include "DaytimeCycleConfiguration.h"
#include "EnemySpawnRegionRuleset.h"
#include "MultiplayerScalingByGameplayTag.h"
#include "MultiplayerScalingDifficultyInfo.h"
#include "StageEnemySpawnEntry.h"
#include "BreakerStageInfo.generated.h"

class UBreakerBiomeInfo;
class UBreakerEnemyInfo;
class UDataTable;

UCLASS(Blueprintable)
class BREAKER_API UBreakerStageInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDaytimeCycleConfiguration DaytimeCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerRunTimeInfo RunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DifficultyLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBreakerEnemyInfo*> EnemySpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStageEnemySpawnEntry> EnemySpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiplayerScalingDifficultyInfo> TwoPlayerDifficultyScaling_GlobalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiplayerScalingDifficultyInfo> ThreePlayerDifficultyScaling_GlobalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiplayerScalingByGameplayTag> TwoPlayerDifficultyScaling_ByTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiplayerScalingByGameplayTag> ThreePlayerDifficultyScaling_ByTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttemptMP_ScalingAtInitialSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Debug_TimeInSecsOnScreenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Debug_TreatAsDayForMP_Scaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_TreatAsTwoPlayerGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_TreatAsThreePlayerGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBreakerEnemyInfo* FallbackEnemySpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageSpawnCompositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnRegionRuleset StageRuleset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UBreakerBiomeInfo*> BiomeInfos;
    
    UBreakerStageInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindBiomeInfoForTag(FGameplayTag BiomeTag, UBreakerBiomeInfo*& OutBiomeInfo) const;
    
};

