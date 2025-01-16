#include "OnlineGameInstance.h"

UOnlineGameInstance::UOnlineGameInstance() {
    this->UpdateFeedType = -1;
    this->UpdateTagFilter = TEXT("patchnotes");
}

void UOnlineGameInstance::RefreshLatestUpdateInfoFromSteam() {
}

void UOnlineGameInstance::GetLatestUpdateInfoFromSteam(bool& bSuccess, FString& URL, FString& Title, FDateTime& Date) {
}

UBreakerOnlineSession* UOnlineGameInstance::GetBreakerOnlineSession() const {
    return NULL;
}


