#include "BreakerPlayerController.h"

ABreakerPlayerController::ABreakerPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bUsingGamepadInput = true;
}

void ABreakerPlayerController::Server_ShrineHealingUsed_Implementation(ARobotShrine* Shrine) {
}

void ABreakerPlayerController::Server_ShrineDiscovered_Implementation(ARobotShrine* Shrine) {
}

void ABreakerPlayerController::Server_SetupExtractionVote_Implementation(AExtractionBeam* Beam) {
}

void ABreakerPlayerController::Server_SendSimpleReplicationTrigger_Implementation(USimpleReplicationTrigger* RepTrigger, ABreakerPlayerController* InstigatingPlayer) {
}

void ABreakerPlayerController::Server_SendHash_Implementation(uint32 ClientHash, const FString& ClientId, uint32 HashIndex) {
}

void ABreakerPlayerController::Server_RevivePlayer_Implementation(APlayerState* PlayerToRevive, bool Relocate, FVector RelocationPoint, bool ShrineRevive) {
}

void ABreakerPlayerController::Server_RequestWorldSave_Implementation() {
}

void ABreakerPlayerController::Server_PlayerSetWorldReady_Implementation(int32 PlayerId) {
}

void ABreakerPlayerController::Server_PlayerSendReadyUpActivate_Implementation(int32 RepPlayerID, AActor* SourceActor, const FText& Target) {
}

void ABreakerPlayerController::Server_PlayerSendReadied_Implementation(int32 RepPlayerID, UReplicatedReadyStateComponent* SourceComponent) {
}

void ABreakerPlayerController::Server_PlayerSendHyperfabsSettled_Implementation(int32 RepPlayerID) {
}

void ABreakerPlayerController::Server_GiveRunTokensFromClient_Implementation(int32 NumRunTokens) {
}

void ABreakerPlayerController::Server_DisableShrineExtraction_Implementation(ARobotShrine* Shrine) {
}

void ABreakerPlayerController::Server_DangerPoints_Implementation(int32 Points) {
}

void ABreakerPlayerController::Server_CancelReadyUp_Implementation(int32 RepPlayerID) {
}

void ABreakerPlayerController::RequestTime_Server_Implementation(float ClientTime, float ClientLag) {
}

void ABreakerPlayerController::ReportTime_Client_Implementation(float RequestWorldTime, float ServerTime) {
}

void ABreakerPlayerController::ReCheckHash(uint32 ClientHash, const FString& ClientId, uint32 HashIndex) {
}


void ABreakerPlayerController::Client_SendWorldSave_Implementation(const FPangaeaWorldState& WorldState) {
}


