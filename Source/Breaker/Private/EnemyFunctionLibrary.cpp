#include "EnemyFunctionLibrary.h"

UEnemyFunctionLibrary::UEnemyFunctionLibrary() {
}

void UEnemyFunctionLibrary::RescaleFloatCurve(FRuntimeFloatCurve& InCurve, float XScale, float YScale) {
}

void UEnemyFunctionLibrary::RescaleAppendToFloatCurve(FRuntimeFloatCurve& InCurve, float XUnitsToAdd) {
}

void UEnemyFunctionLibrary::PushKeysAtStartAlongTangentToFloatCurve(FRuntimeFloatCurve& InCurve, TArray<float> XOffsets) {
}

void UEnemyFunctionLibrary::PushKeysAtEndAlongTangentToFloatCurve(FRuntimeFloatCurve& InCurve, TArray<float> XOffsets) {
}

void UEnemyFunctionLibrary::PopKeysFromStartOfFloatCurve(FRuntimeFloatCurve& InCurve, int32 Count) {
}

void UEnemyFunctionLibrary::PopKeysFromEndOfFloatCurve(FRuntimeFloatCurve& InCurve, int32 Count) {
}

void UEnemyFunctionLibrary::OffsetFloatCurve(FRuntimeFloatCurve& InCurve, float XUnitsToAdd, float YUnitsToAdd) {
}

bool UEnemyFunctionLibrary::ModifyActorAttributesUsingArchetypeTag(AActor* Actor, float DifficultyLevel, FGameplayTag Archetype) {
    return false;
}

FFloatRange UEnemyFunctionLibrary::GetRangeOfCurveAboveValue(const FRuntimeFloatCurve& InCurve, float Value) {
    return FFloatRange{};
}

UDataTable* UEnemyFunctionLibrary::GetEnemyDetailsTable() {
    return NULL;
}

bool UEnemyFunctionLibrary::GetEnemyDetailsForArchetypeTag(FGameplayTag Archetype, FEnemyDetails& OutDetails) {
    return false;
}

bool UEnemyFunctionLibrary::GetEnemyArchetypeTagFromActor(AActor* Actor, FGameplayTag& OutArchetype) {
    return false;
}

void UEnemyFunctionLibrary::DiscretizeCurve(FRuntimeFloatCurve& InCurve, float Interval, float Tolerance) {
}

bool UEnemyFunctionLibrary::CurveHasKeys(const FRuntimeFloatCurve& InCurve) {
    return false;
}


