#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "StatusEffectMappingContext.generated.h"

class UDataTable;
class UStatusEffectBase;

UCLASS(Blueprintable)
class HMMAGIC_API UStatusEffectMappingContext : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DescriptionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftClassPtr<UStatusEffectBase>> DataMapping;
    
    UStatusEffectMappingContext();

};

