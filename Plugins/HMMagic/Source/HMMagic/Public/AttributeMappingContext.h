#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AttributeMapping.h"
#include "AttributeMappingContext.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HMMAGIC_API UAttributeMappingContext : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeDescriptionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAttributeMapping> DataCollection;
    
    UAttributeMappingContext();

};

