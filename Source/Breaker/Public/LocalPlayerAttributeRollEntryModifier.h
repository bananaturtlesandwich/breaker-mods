#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FederalReserveRollModifier.h"
#include "LocalPlayerAttributeRollEntryModifier.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ULocalPlayerAttributeRollEntryModifier : public UFederalReserveRollModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RollsToReWeight;
    
    ULocalPlayerAttributeRollEntryModifier();

};

