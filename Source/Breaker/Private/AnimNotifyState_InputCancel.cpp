#include "AnimNotifyState_InputCancel.h"

UAnimNotifyState_InputCancel::UAnimNotifyState_InputCancel() {
    this->BlendOutTime = -1.00f;
    this->bDisabled = false;
    this->bCancelOnStick = true;
    this->bCancelOnJump = true;
    this->bCancelOnAnyAction = true;
    this->bCanExpand = false;
    this->ParentNotify = NULL;
}


