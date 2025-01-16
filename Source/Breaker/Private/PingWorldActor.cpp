#include "PingWorldActor.h"

APingWorldActor::APingWorldActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UI = NULL;
    this->bAutoDestroy = true;
    this->PingedActor = NULL;
}


