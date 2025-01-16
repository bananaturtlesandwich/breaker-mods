#include "BreakerAudioPriority.h"

FBreakerAudioPriority::FBreakerAudioPriority() {
    this->BasePriorityScoreGlobal = 0.00f;
    this->BasePriorityScoreIndividual = 0.00f;
    this->ProximityCurve = NULL;
    this->MinPriorityRankDeath = 0;
    this->MinPriorityRankFootstep = 0;
    this->MaxPriorityRank = 0;
}

