#include "EnemyGroupTracker.h"

UEnemyGroupTracker::UEnemyGroupTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UEnemyGroupTracker::UpdateGroupInfo(ACMCharBase* CMChar) {
}

int32 UEnemyGroupTracker::NumActorsInGroup(int32 Group) {
    return 0;
}

void UEnemyGroupTracker::BroadcastLastInGroupKilled(ACMCharBase* CMChar) {
}


