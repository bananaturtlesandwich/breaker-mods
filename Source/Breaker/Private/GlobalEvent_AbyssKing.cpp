#include "GlobalEvent_AbyssKing.h"

AGlobalEvent_AbyssKing::AGlobalEvent_AbyssKing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Frequency = 0;
    this->CurrentFrequency = 0;
    this->ContinousFire = false;
    this->NumMeteorsToFire = 1;
    this->NumMeteorsFired = 0;
    this->NumMeteorsTotal = 15;
    this->State = EGlobalEvent_AbyssKingState::AbyssKingState_Inactive;
    this->Timer = 0.00f;
    this->TimerTotal = 0.00f;
    this->Emerge_TargetHeight = 2000.00f;
    this->Perpare_Time = 4.00f;
    this->Emerge_Time = 4.00f;
    this->InPosition_Time = 2.00f;
    this->SpawnMeteors_Time = 2.00f;
    this->FireWaitMeteors_Time = 3.00f;
    this->FireMeteors_Time = 3.00f;
    this->Return_Time = 4.00f;
    this->Meteor_SpawnHeight = 5000.00f;
}

void AGlobalEvent_AbyssKing::UpdateMeteorMPCData_Implementation() {
}

void AGlobalEvent_AbyssKing::Start() {
}

void AGlobalEvent_AbyssKing::ShowAllMeteors() {
}

void AGlobalEvent_AbyssKing::LocateAbyssKingStartPosition_Implementation() {
}

bool AGlobalEvent_AbyssKing::IsLocationInsideAbyssKingZone(FVector Loc) {
    return false;
}

bool AGlobalEvent_AbyssKing::IsActive() {
    return false;
}

void AGlobalEvent_AbyssKing::HideAllMeteors() {
}

float AGlobalEvent_AbyssKing::GetTotalAbyssKingEventTime() {
    return 0.0f;
}

void AGlobalEvent_AbyssKing::Clear() {
}


