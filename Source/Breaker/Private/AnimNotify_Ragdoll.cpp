#include "AnimNotify_Ragdoll.h"

UAnimNotify_Ragdoll::UAnimNotify_Ragdoll() {
    this->bStopAllMontages = true;
    this->BlendOutTime = 0.00f;
    this->ImpulseBoneName = TEXT("Body");
    this->bImpulseIsVelocityChange = true;
    this->bExitRagdoll = false;
}


