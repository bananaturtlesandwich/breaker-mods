#include "CutsceneManager.h"

UCutsceneManager::UCutsceneManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CutsceneState = ECutsceneState::CutsceneState_Inactive;
    this->TimeDilation = false;
    this->TimeDilation_UntilStart = -1.00f;
    this->TimeDilation_UntilStart_OG = -1.00f;
    this->TimeDilation_RampUp = -1.00f;
    this->TimeDilation_RampUp_OG = -1.00f;
    this->TimeDilation_Hold = -1.00f;
    this->TimeDilation_Hold_OG = -1.00f;
    this->TimeDilation_RampDown = -1.00f;
    this->TimeDilation_RampDown_OG = -1.00f;
    this->TimeDilation_Target = -1.00f;
}

bool UCutsceneManager::StartCutsceneState(bool PauseAI) {
    return false;
}

bool UCutsceneManager::StartCutscene(const FTransform& StartCamera, const float time_static, const float time_zoom_back, bool PauseAI) {
    return false;
}

void UCutsceneManager::SetTimeDilation(const float time_until_start, const float time_ramp_up, const float time_hold, const float time_ramp_down, const float time_dilation_target) {
}

void UCutsceneManager::OnCutsceneStart_Implementation() {
}

void UCutsceneManager::OnCutsceneEnd_Implementation() {
}

bool UCutsceneManager::IsCutscenePlaying() const {
    return false;
}

float UCutsceneManager::GetCutsceneTimeDilation() const {
    return 0.0f;
}

bool UCutsceneManager::EndCutsceneState() {
    return false;
}


