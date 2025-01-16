#include "BTDecorator_InRangeOfTarget.h"

UBTDecorator_InRangeOfTarget::UBTDecorator_InRangeOfTarget() {
    this->NodeName = TEXT("Breaker_InRange");
    this->AttackChannelDataToUse = EAttackChannel::InvalidAttack;
    this->bUseBlackboardSelectorsForBaseRangeValues = true;
    this->bRangeModifiersUseBlackboardSelectors = false;
    this->MinRangeNoBBCm = 512.00f;
    this->MaxRangeNoBBCm = 1028.00f;
    this->MinAdditiveRangeCm = 0.00f;
    this->MinMultiplicativeRangeCm = 1.00f;
    this->MaxAdditiveRangeCm = 0.00f;
    this->MaxMultiplicativeRangeCm = 1.00f;
    this->IconRelativePathBTEditor = TEXT("BTEditor.Graph.BTNode.Decorator.DoesPathExist.Icon");
}


