#include "AutoExpandingNotifyEntry.h"

FAutoExpandingNotifyEntry::FAutoExpandingNotifyEntry() {
    this->NotifyClass = NULL;
    this->NotifyStateClass = NULL;
    this->bSkipCreateNotify = false;
}

