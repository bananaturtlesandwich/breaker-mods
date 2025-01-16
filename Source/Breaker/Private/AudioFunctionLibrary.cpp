#include "AudioFunctionLibrary.h"

UAudioFunctionLibrary::UAudioFunctionLibrary() {
}

void UAudioFunctionLibrary::SetDistanceProbeAkComponent(UAkComponent* ListenerAkComp, UAkComponent* DistanceProbeAkComp) {
}

int32 UAudioFunctionLibrary::PlayBreakerMusicStinger(UObject* WorldContextObject, UAkAudioEvent* MusicStinger) {
    return 0;
}

bool UAudioFunctionLibrary::IsOverlappingSpatialAudioObjectWithTags(AActor* Actor, FGameplayTagContainer GameplayTags) {
    return false;
}

FName UAudioFunctionLibrary::GetVoiceAkComponentTag() {
    return NAME_None;
}

FName UAudioFunctionLibrary::GetVoiceAkComponentSocketName() {
    return NAME_None;
}

bool UAudioFunctionLibrary::GetVoiceAkAudioComponent(AActor* Actor, UAkComponent*& AudioComponent) {
    return false;
}

bool UAudioFunctionLibrary::GetPhysicalSurfaceAkSwitch(const UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> PhysicalSurface, UAkSwitchValue*& AkSwitchValue) {
    return false;
}

FName UAudioFunctionLibrary::GetMuzzleAkComponentSocketName() {
    return NAME_None;
}

float UAudioFunctionLibrary::GetMinAudioCombatRank() {
    return 0.0f;
}

float UAudioFunctionLibrary::GetMaxAudioCombatRank() {
    return 0.0f;
}

FName UAudioFunctionLibrary::GetMainAkComponentTag() {
    return NAME_None;
}

FName UAudioFunctionLibrary::GetMainAkComponentSocketName() {
    return NAME_None;
}

bool UAudioFunctionLibrary::GetMainAkAudioComponent(AActor* Actor, UAkComponent*& AudioComponent) {
    return false;
}

void UAudioFunctionLibrary::GetAudioCombatRankWithPOV_Validation(AActor* Actor, float& Out_Rank, bool& IsPointOfViewPawn) {
}

void UAudioFunctionLibrary::GetAudioCombatRank(AActor* Actor, float& Out_Rank) {
}

void UAudioFunctionLibrary::GetAllMultiPositionAudioStaticMeshesAsync(UObject* WorldContextObject, const FOnAudioMeshEmitterDataReady& OutData) {
}

bool UAudioFunctionLibrary::GetAllAkComponentsInActor(const AActor* Actor, TArray<UAkComponent*>& AkComponents) {
    return false;
}

void UAudioFunctionLibrary::ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDurationMs, EAkCurveInterpolation FadeCurve) {
}

void UAudioFunctionLibrary::ExecuteActionOnEventInComponent(const UAkComponent* AkComponent, const UAkAudioEvent* AudioEvent, const AkActionOnEventType ActionType, const int32 TransitionDuration, const EAkCurveInterpolation FadeCurve) {
}

void UAudioFunctionLibrary::CompressTransformsByHorizontalGrid(TArray<FTransform> Transforms, TArray<FTransform>& CompressedTransforms, float GridSize) {
}

bool UAudioFunctionLibrary::CanMultiplePositionAudioEmitterSpawnAtLocation(const UObject* WorldContextObject, const FVector Location) {
    return false;
}


