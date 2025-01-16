#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FederalReserveActionResults.h"
#include "FederalReserveDocketContext.h"
#include "FederalReserveModifier.h"
#include "FRSpawnActorModifierBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UFRSpawnActorModifierBase : public UFederalReserveModifier {
    GENERATED_BODY()
public:
    UFRSpawnActorModifierBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifySpawnProperties(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults, TMap<FGameplayTag, float>& OutNumericProperties, TMap<FGameplayTag, FString>& OutStringProperties, TMap<FGameplayTag, FGameplayTag>& OutTagProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 ModifySpawnAmount(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults, int32 InSpawnAmount);
    
};

