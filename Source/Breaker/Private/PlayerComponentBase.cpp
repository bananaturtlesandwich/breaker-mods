#include "PlayerComponentBase.h"

UPlayerComponentBase::UPlayerComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningPawn = NULL;
}


