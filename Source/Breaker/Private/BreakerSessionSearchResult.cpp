#include "BreakerSessionSearchResult.h"

FBreakerSessionSearchResult::FBreakerSessionSearchResult() {
    this->CurrentPlayerCount = 0;
    this->MaximumPlayerCount = 0;
    this->bIsSecure = false;
    this->bMatchStarted = false;
    this->PingInMs = 0;
}

