#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FederalReserveActionResults.h"
#include "FederalReserveDocketContext.h"
#include "FederalReserveResultAction.generated.h"

class UFederalReserveApplicationCondition;
class UFederalReserveModifier;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UFederalReserveResultAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFederalReserveApplicationCondition*> RequiredConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFederalReserveModifier*> Modifiers;
    
    UFederalReserveResultAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetEditorDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConditionsMet(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Apply(const FFederalReserveDocketContext& Context, UPARAM(Ref) FFederalReserveActionResults& OutResults);
    
};

