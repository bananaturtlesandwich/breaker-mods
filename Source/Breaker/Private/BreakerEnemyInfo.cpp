#include "BreakerEnemyInfo.h"
#include "Templates/SubclassOf.h"

UBreakerEnemyInfo::UBreakerEnemyInfo() {
    this->SpawnWeight = 1.00f;
    this->ResolvedClass = NULL;
}

TSubclassOf<ACMCharBase> UBreakerEnemyInfo::GetEnemyClass() {
    return NULL;
}


