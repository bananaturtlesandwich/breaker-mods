#include "PlayerCheatCodes.h"

UPlayerCheatCodes::UPlayerCheatCodes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningPawn = NULL;
}

void UPlayerCheatCodes::TryTriggerCheatRefillStats_Implementation() {
}

void UPlayerCheatCodes::CheatTeleport(float X, float Y, float Z) {
}

void UPlayerCheatCodes::CheatRefillHealth() {
}

void UPlayerCheatCodes::CheatApplyHealth(int32 Amount) {
}

void UPlayerCheatCodes::CheatApplyDamage(int32 Damage) {
}


