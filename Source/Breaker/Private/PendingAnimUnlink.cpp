#include "PendingAnimUnlink.h"

FPendingAnimUnlink::FPendingAnimUnlink() {
    this->Condition = EAnimUnlinkCondition::DoItNow;
    this->LinkedAbpClass = NULL;
    this->Mesh = NULL;
}

