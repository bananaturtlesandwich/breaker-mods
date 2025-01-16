#include "BreakerSessions.h"

UBreakerSessions::UBreakerSessions() {
}

void UBreakerSessions::UnRegisterPlayerFromGameMode(APlayerController* PlayerController) {
}

void UBreakerSessions::StartMatch() {
}

void UBreakerSessions::SendSessionInvitation(UNetworkPeer* Friend) {
}

void UBreakerSessions::RegisterPlayerFromGameMode(APlayerController* PlayerController) {
}

void UBreakerSessions::ReadFriendsList() {
}

void UBreakerSessions::LeaveSession(bool ChangeLevel, const FString& LevelArgs) {
}

bool UBreakerSessions::JoinSession(FBreakerSessionSearchResult SessionSearchResult, const FString& Password, bool bIsInvite) {
    return false;
}

bool UBreakerSessions::IsSessionSecure() {
    return false;
}

bool UBreakerSessions::IsPlayerInSession(UNetworkPeer* Peer) {
    return false;
}

bool UBreakerSessions::IsInSession() {
    return false;
}

void UBreakerSessions::GetUpdatedSessionData(FBreakerSessionSearchResult SessionToUpdate, const FOnFindSessionToUpdate& UpdatedInfo) {
}

void UBreakerSessions::GetSessionSearchResults(TArray<FBreakerSessionSearchResult>& SearchResults) {
}

FString UBreakerSessions::GetSessionHostName() {
    return TEXT("");
}

FIntPoint UBreakerSessions::GetSessionCurrentAndMaxPlayers() {
    return FIntPoint{};
}

TArray<UNetworkPeer*> UBreakerSessions::GetRecentPlayersList() {
    return TArray<UNetworkPeer*>();
}

void UBreakerSessions::GetPendingInvites(TArray<FBreakerSessionSearchResult>& Invites) {
}

FString UBreakerSessions::GetLocalPlayerName() {
    return TEXT("");
}

TArray<UNetworkPeer*> UBreakerSessions::GetFriendsList() {
    return TArray<UNetworkPeer*>();
}

bool UBreakerSessions::FindSessions(int32 MaximumResults, float Timeout) {
    return false;
}

bool UBreakerSessions::CreateSession(int32 MaxPlayers, const FString& Password) {
    return false;
}


