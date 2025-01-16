#include "BreakerStageInfo.h"

UBreakerStageInfo::UBreakerStageInfo() {
    this->StageTime = 300.00f;
    this->bAttemptMP_ScalingAtInitialSpawn = false;
    this->Debug_TimeInSecsOnScreenTime = 10.00f;
    this->Debug_TreatAsDayForMP_Scaling = -1;
    this->Debug_TreatAsTwoPlayerGame = false;
    this->Debug_TreatAsThreePlayerGame = false;
    this->FallbackEnemySpawn = NULL;
    this->StageSpawnCompositions = NULL;
}

bool UBreakerStageInfo::FindBiomeInfoForTag(FGameplayTag BiomeTag, UBreakerBiomeInfo*& OutBiomeInfo) const {
    return false;
}


