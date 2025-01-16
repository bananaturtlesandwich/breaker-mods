#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Interactable.h"
#include "InteractableSet.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UInteractableSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractable> Interactables;
    
    UInteractableSet();

};

