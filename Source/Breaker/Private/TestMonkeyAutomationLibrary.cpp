#include "TestMonkeyAutomationLibrary.h"

UTestMonkeyAutomationLibrary::UTestMonkeyAutomationLibrary() {
}

bool UTestMonkeyAutomationLibrary::WidgetWithIdTagIsOnScreen(FName Tag) {
    return false;
}

bool UTestMonkeyAutomationLibrary::SimulateInputActionByNameOnWidgetsInSearchContext(const FWidgetSearchContext& Context, FName InputAction, FName IdTag) {
    return false;
}

bool UTestMonkeyAutomationLibrary::SimulateInputActionByNameOnWidgetByTag(FName InputAction, FName IdTag) {
    return false;
}

bool UTestMonkeyAutomationLibrary::SimulateClickOnWidgetByTag(FName WidgetTag) {
    return false;
}

bool UTestMonkeyAutomationLibrary::SearchForWidgetsWithIdTagOnScreen(FWidgetSearchContext& Context, FName IdTag) {
    return false;
}

void UTestMonkeyAutomationLibrary::ResetWidgetSearchContext(FWidgetSearchContext& Context) {
}

void UTestMonkeyAutomationLibrary::RemoveIdTagFromWidget(UUserWidget* UserWidget, FName Tag) {
}

void UTestMonkeyAutomationLibrary::RecordVectorStat(const FString& EventName, FVector Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordTransformStat(const FString& EventName, FTransform Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordStringStateStat(const FString& EventName, const FString& Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordStringStat(const FString& EventName, const FString& Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordRotationStat(const FString& EventName, FRotator Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordPositionStat(const FString& EventName, FVector Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordObjectStat(const FString& EventName, UObject* Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordIntegerStat(const FString& EventName, int64 Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordFloatStat(const FString& EventName, float Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordDurationStat(const FString& EventName, float Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordDeltaIntStat(const FString& EventName, int64 Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordDeltaFloatStat(const FString& EventName, float Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::RecordByteStateStat(const FString& EventName, uint8 Value, UObject* Context) {
}

void UTestMonkeyAutomationLibrary::ReadTextFromClipboard(FString& OutText) {
}

bool UTestMonkeyAutomationLibrary::ParseDeckerContextFromJsonString(const FString& Json, FStatViewerDeckerContext& OutContext) {
    return false;
}

UUserWidget* UTestMonkeyAutomationLibrary::GetUserWidgetWithId(FName IdTag) {
    return NULL;
}

UUserWidget* UTestMonkeyAutomationLibrary::GetUserWidgetFromSearchContext(const FWidgetSearchContext& Context) {
    return NULL;
}

FName UTestMonkeyAutomationLibrary::GetUISelectIdTag() {
    return NAME_None;
}

FName UTestMonkeyAutomationLibrary::GetUICancelIdTag() {
    return NAME_None;
}

FString UTestMonkeyAutomationLibrary::GetSimpleObjectDescription(UObject* Object, const FTestMonkeyClassProperties& Properties) {
    return TEXT("");
}

APawn* UTestMonkeyAutomationLibrary::GetPlayerPawnInActiveGameWorld(int32 PlayerIdx) {
    return NULL;
}

FVector2D UTestMonkeyAutomationLibrary::GetDisplayWindowAutoLayoutPosition(int32 GameInstance, FVector2D WindowSize) {
    return FVector2D{};
}

TArray<FScreenResolutionRHIBP> UTestMonkeyAutomationLibrary::GetDisplayAdapterScreenResolutions() {
    return TArray<FScreenResolutionRHIBP>();
}

void UTestMonkeyAutomationLibrary::AddIdTagToWidget(UUserWidget* UserWidget, FName Tag) {
}


