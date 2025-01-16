#include "PropPicker.h"

UPropPicker::UPropPicker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxPropSize = PropSizeNull;
    this->PropData = NULL;
    this->BoxComp = NULL;
}


