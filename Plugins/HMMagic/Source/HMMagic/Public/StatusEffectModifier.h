#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttributeModifier.h"
#include "StatusEffectModifier.generated.h"

USTRUCT(BlueprintType)
struct HMMAGIC_API FStatusEffectModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EffectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumStackSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttributeModifier> AttributeModifiers;
    
    FStatusEffectModifier();
};

