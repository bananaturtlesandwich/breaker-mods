#include "BreakerBiomeInfo.h"

UBreakerBiomeInfo::UBreakerBiomeInfo() {
    this->BiomeSpawnCompositions = NULL;
    this->BiomeInteriorSpawnCompositions = NULL;
    this->BiomeLabSpawnCompositions = NULL;
}

bool UBreakerBiomeInfo::FindZoneInfoForTag(FGameplayTag ZoneTag, FBreakerZoneInfo& OutZoneInfo) const {
    return false;
}


