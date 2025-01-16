#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAttributeModifierType.h"
#include "AttributeModifier.generated.h"

USTRUCT(BlueprintType)
struct HMMAGIC_API FAttributeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustmentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifiesBaseValue;
    
    FAttributeModifier();
};

