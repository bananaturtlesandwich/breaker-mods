#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EPropSizeCategory.h"
#include "PropPicker.generated.h"

class UPropAreaVisualizer;
class UPropSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPropPicker : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPropSizeCategory> MaxPropSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPropSet* PropData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPropAreaVisualizer* BoxComp;
    
    UPropPicker(const FObjectInitializer& ObjectInitializer);

};

