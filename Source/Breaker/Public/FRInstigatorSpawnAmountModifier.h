#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FRSpawnActorModifierBase.h"
#include "FederalReserveDocketContext.h"
#include "FRInstigatorSpawnAmountModifier.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFRInstigatorSpawnAmountModifier : public UFRSpawnActorModifierBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InstigatorStatModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStatModsAreMultiplicative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifiesSpawnedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLocalPlayerAsInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ModifiedSpawnedProperties;
    
    UFRInstigatorSpawnAmountModifier();

protected:
    UFUNCTION(BlueprintCallable)
    float ComputeModifier(const FFederalReserveDocketContext& Context);
    
};

