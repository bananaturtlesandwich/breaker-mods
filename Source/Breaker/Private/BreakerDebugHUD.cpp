#include "BreakerDebugHUD.h"

ABreakerDebugHUD::ABreakerDebugHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
}

void ABreakerDebugHUD::RecordSample(FName Name, float Value) {
}


