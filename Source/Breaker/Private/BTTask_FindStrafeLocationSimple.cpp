#include "BTTask_FindStrafeLocationSimple.h"

UBTTask_FindStrafeLocationSimple::UBTTask_FindStrafeLocationSimple() {
    this->NodeName = TEXT("Breaker_AIFindStrafeLocation");
    this->BlackboardKeyNameStrafeLocation = TEXT("StrafePosition");
    this->BlackboardKeyNameStrafeDirection = TEXT("StrafeDirection");
    this->UpdateChoreographerHintMetaData = false;
    this->StrafingMagnitudeCm = 500.00f;
    this->StrafingMagnitudeMaxCm = -1.00f;
    this->ProjectGoalLocation = true;
    this->StrafeRelativeDirection = EStrafeXYDirection::StrafeXYDirection_Horizontal;
    this->StrafeResultSelectionMechanism = EStrafeResultPreference::StrafeResultPreference_Random;
    this->NavigationProjectionDownCm = 1024.00f;
    this->NavigationProjectionUpCm = 1204.00f;
    this->bAllowRandomAngleDeviations = false;
    this->RandomDeviationAngleDegrees = 60.00f;
    this->bInvalidateBlackboardEntriesOnFail = true;
    this->bShowStrafeAnimSupportAsserts = false;
}


