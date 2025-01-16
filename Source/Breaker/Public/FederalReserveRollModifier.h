#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FederalReserveActionResults.h"
#include "FederalReserveDocketContext.h"
#include "FederalReserveRollEntry.h"
#include "FederalReserveRollModifier.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UFederalReserveRollModifier : public UObject {
    GENERATED_BODY()
public:
    UFederalReserveRollModifier();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FFederalReserveRollEntry ModifyRollEntry(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults, const FFederalReserveRollEntry& InRollEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetEditorDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConditionsMet(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults, const FFederalReserveRollEntry& InRollEntry);
    
};

