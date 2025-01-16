#include "SignificanceResponderComponent.h"

USignificanceResponderComponent::USignificanceResponderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRunOnServer = true;
    this->bRunOnClient = true;
}

bool USignificanceResponderComponent::IsAtLeastAsSignificantAs(ESignificanceLevel Input, ESignificanceLevel Other) {
    return false;
}

ESignificanceLevel USignificanceResponderComponent::GetSignificance() const {
    return ESignificanceLevel::None;
}

float USignificanceResponderComponent::GetRawSignificance() const {
    return 0.0f;
}

ESignificanceLevel USignificanceResponderComponent::DiscretizeSignificance(float RawSignificance) {
    return ESignificanceLevel::None;
}

float USignificanceResponderComponent::ConvertSignificanceLevelToFloat(ESignificanceLevel Level) {
    return 0.0f;
}


