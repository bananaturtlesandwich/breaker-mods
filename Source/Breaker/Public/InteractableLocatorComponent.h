#pragma once
#include "CoreMinimal.h"
#include "Components/BillboardComponent.h"
#include "InteractableLocatorComponent.generated.h"

class UInteractableSet;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInteractableLocatorComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractableSet* InteractableSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnValidFabComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LockedDoorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UInteractableLocatorComponent(const FObjectInitializer& ObjectInitializer);

};

