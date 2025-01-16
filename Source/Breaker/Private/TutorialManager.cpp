#include "TutorialManager.h"

UTutorialManager::UTutorialManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TutorialTable = NULL;
    this->OwningPawn = NULL;
}

void UTutorialManager::TriggerTutorial(const ETutorialTrigger TutorialTrigger) const {
}

void UTutorialManager::ResetTutorials() const {
}

void UTutorialManager::MarkTutorialTagsSeen(const TArray<FGameplayTag> TutorialTags) const {
}

bool UTutorialManager::IsValidTutorialTag(const FGameplayTag& Tag) const {
    return false;
}

FTutorialDetails UTutorialManager::GetTutorialDetails(const FGameplayTag& TutorialTag) const {
    return FTutorialDetails{};
}


