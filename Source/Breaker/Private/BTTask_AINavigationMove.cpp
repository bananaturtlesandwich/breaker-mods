#include "BTTask_AINavigationMove.h"

UBTTask_AINavigationMove::UBTTask_AINavigationMove() {
    this->NodeName = TEXT("Breaker_AIMoveTo");
    this->AcceptanceRadius = 5.00f;
    this->ExtractAcceptanceRadiusCmFromBlackboard = false;
    this->FilterClass = NULL;
    this->ObservedBlackboardValueTolerance = 4.75f;
    this->ShouldObserveBlackboardValue = false;
    this->AllowStrafe = false;
    this->AllowPartialPath = true;
    this->ShouldTrackMovingActorGoal = false;
    this->ProjectGoalLocation = true;
    this->ReachTestIncludesAgentRadius = true;
    this->ReachTestIncludesGoalRadius = true;
    this->StopOnOverlap = true;
    this->StopOnOverlapNeedsUpdate = false;
    this->SkipAllPathingOptimizations = false;
    this->ShouldClearAIFocusOnFinished = false;
    this->ShouldClearBlackboardNavigationDataOnExit = false;
    this->FilterClassNoAreaModifiers = NULL;
    this->AllowActorTetheringAndSmoothingAdjustments = true;
    this->MaxPathingCost = -1.00f;
    this->ShouldApplyVelocityMaxSpeedAttributeModifier = false;
    this->VelocityMaxSpeedAttributeModifier = 0.75f;
    this->MaxMoveSpeedAttributeEffectLevel = 0;
    this->WantsToSprint = false;
    this->RadiusKeyAdjustForBlackboardValueCm = -32.00f;
    this->bUseCrowdManagerAvoidance = false;
    this->bPreserveMomentumOnPathEnd = false;
    this->ForceSyncPathing = false;
}


