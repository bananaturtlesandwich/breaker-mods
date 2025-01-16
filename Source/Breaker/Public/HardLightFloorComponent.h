#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HardLightFloorComponent.generated.h"

class UMaterialInstance;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UHardLightFloorComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* FloorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SealSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FloorMatInstance;
    
    UHardLightFloorComponent(const FObjectInitializer& ObjectInitializer);

};

