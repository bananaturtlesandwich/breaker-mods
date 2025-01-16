#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FederalReserveActionResults.h"
#include "FederalReserveDocketContext.h"
#include "FederalReserveApplicationCondition.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UFederalReserveApplicationCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegate;
    
    UFederalReserveApplicationCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetSpecificityScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetEditorDisplayName() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Evaluate(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ConditionsMet(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ApplyNegate(bool bResult) const;
    
};

