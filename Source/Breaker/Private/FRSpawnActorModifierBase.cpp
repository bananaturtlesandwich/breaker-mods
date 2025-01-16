#include "FRSpawnActorModifierBase.h"

UFRSpawnActorModifierBase::UFRSpawnActorModifierBase() {
}

void UFRSpawnActorModifierBase::ModifySpawnProperties_Implementation(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults, TMap<FGameplayTag, float>& OutNumericProperties, TMap<FGameplayTag, FString>& OutStringProperties, TMap<FGameplayTag, FGameplayTag>& OutTagProperties) {
}

int32 UFRSpawnActorModifierBase::ModifySpawnAmount_Implementation(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults, int32 InSpawnAmount) {
    return 0;
}


