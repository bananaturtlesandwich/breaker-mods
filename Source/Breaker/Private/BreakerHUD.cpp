#include "BreakerHUD.h"
#include "PointOfInterestManager.h"
#include "Templates/SubclassOf.h"

ABreakerHUD::ABreakerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->PointOfInterestManager = CreateDefaultSubobject<UPointOfInterestManager>(TEXT("POIManager"));
    this->PreviousState = EHUDState::None;
    this->CurrentState = EHUDState::None;
    this->DesiredState = EHUDState::None;
    this->FadeClass = NULL;
    this->LoadingClass = NULL;
    this->LevelTitleClass = NULL;
    this->Fade = NULL;
    this->Loading = NULL;
    this->LevelTitle = NULL;
}

void ABreakerHUD::UpdateNPCPortrait(FName InkCharID, FName Emote) {
}



bool ABreakerHUD::ShouldHideVersionInfo() {
    return false;
}

bool ABreakerHUD::SetHUDState(EHUDState NewState, TSubclassOf<UBreakerScreenBase> OutputType, UBreakerScreenBase*& OutScreen) {
    return false;
}

void ABreakerHUD::OverridePreviousState(EHUDState NewPreviousState) {
}

bool ABreakerHUD::GoToPreviousState() {
    return false;
}

bool ABreakerHUD::GoToDefaultState() {
    return false;
}

TSubclassOf<UBreakerScreenBase> ABreakerHUD::GetScreenClass(EHUDState State) const {
    return NULL;
}

UBreakerScreenBase* ABreakerHUD::GetScreen(EHUDState State, TSubclassOf<UBreakerScreenBase> OutputType) const {
    return NULL;
}

EHUDState ABreakerHUD::GetDefaultState_Implementation() const {
    return EHUDState::None;
}

ABreakerHUD* ABreakerHUD::Get(const UObject* WorldContextObject) {
    return NULL;
}

void ABreakerHUD::EnableSecondaryHealthBar(float Delay, float BetweenTime, float Percentage) {
}

void ABreakerHUD::DisplayTelepadPrompt(FText Text) {
}

void ABreakerHUD::DisplayMissionMessage(FText Header, FText Message, FText Clarification, UTexture2D* MessageIcon, float WaitTime) {
}

void ABreakerHUD::DisplayAlert(FText Text, FText Header) {
}


void ABreakerHUD::AddNetworkInformationMessage(FText Text) {
}

void ABreakerHUD::AddGameInformationMessage(FText Text) {
}


