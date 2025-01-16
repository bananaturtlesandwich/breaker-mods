#include "LevelInstanceLoadingVolume.h"

ALevelInstanceLoadingVolume::ALevelInstanceLoadingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ALevelInstanceLoadingVolume::UnloadLevel() {
}

void ALevelInstanceLoadingVolume::LoadLevel() {
}

ACameraActor* ALevelInstanceLoadingVolume::GetLevelCamera() {
    return NULL;
}


