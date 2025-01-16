#include "AIScopedStateChangeData.h"

FAIScopedStateChangeData::FAIScopedStateChangeData() {
    this->StateChangeFlagAssociation = EAIScopedStateChange::NoStateChanges;
    this->bAssociatedStateFlag = false;
}

