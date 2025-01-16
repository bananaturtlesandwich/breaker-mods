#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayNiagaraEffectPlugin.h"
#include "ScaleBySpecialCharge_NiagaraEffectPlugin.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UScaleBySpecialCharge_NiagaraEffectPlugin : public UPlayNiagaraEffectPlugin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVector> SpecialChargeToOverrideScale;
    
    UScaleBySpecialCharge_NiagaraEffectPlugin();

};

