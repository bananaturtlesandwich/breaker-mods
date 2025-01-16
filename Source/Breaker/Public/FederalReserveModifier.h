#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FederalReserveActionResults.h"
#include "FederalReserveDocketContext.h"
#include "FederalReserveModifier.generated.h"

class UFederalReserveApplicationCondition;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UFederalReserveModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFederalReserveApplicationCondition*> RequiredConditions;
    
    UFederalReserveModifier();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetEditorDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConditionsMet(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults);
    
};

