#include "HMEventContainer.h"

FHMEventContainer::FHMEventContainer() {
    this->CategoryFlags = 0;
    this->RecordedEvents = 0;
    this->FirstEventIdx = 0;
    this->FirstDataOffset = 0;
    this->FirstFuncOffset = 0;
    this->RecordedFunctionCalls = 0;
}

