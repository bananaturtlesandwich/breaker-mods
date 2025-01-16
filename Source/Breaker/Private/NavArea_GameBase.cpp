#include "NavArea_GameBase.h"

UNavArea_GameBase::UNavArea_GameBase() {
}

void UNavArea_GameBase::SetFlagRangedAlternative() {
}

void UNavArea_GameBase::SetFlagRangedAdvantageArea() {
}

void UNavArea_GameBase::SetFlagIsSlopeArea() {
}

void UNavArea_GameBase::SetFlagIsObstacleArea() {
}

void UNavArea_GameBase::SetFlagIsJumpingArea() {
}

bool UNavArea_GameBase::IsSniperArea() const {
    return false;
}

bool UNavArea_GameBase::IsSlopeArea() const {
    return false;
}

bool UNavArea_GameBase::IsRangedAlternativeArea() const {
    return false;
}

bool UNavArea_GameBase::IsRangedAdvantageArea() const {
    return false;
}

bool UNavArea_GameBase::IsObstacleArea() const {
    return false;
}

bool UNavArea_GameBase::IsJumpArea() const {
    return false;
}

void UNavArea_GameBase::ClearAreaFlags() {
}


