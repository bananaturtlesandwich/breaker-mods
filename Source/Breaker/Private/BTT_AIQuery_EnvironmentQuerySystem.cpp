#include "BTT_AIQuery_EnvironmentQuerySystem.h"

UBTT_AIQuery_EnvironmentQuerySystem::UBTT_AIQuery_EnvironmentQuerySystem() {
    this->NodeName = TEXT("Breaker_EQS_AIQuery");
    this->bUseBlackboardKeyForEQSQuery = true;
}

float UBTT_AIQuery_EnvironmentQuerySystem::GetInvalidEQSServerTimeEntreeSeconds() {
    return 0.0f;
}

int32 UBTT_AIQuery_EnvironmentQuerySystem::GetInvalidEQSRequestLinkID() {
    return 0;
}


