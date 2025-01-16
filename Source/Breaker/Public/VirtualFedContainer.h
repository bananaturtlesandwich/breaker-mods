#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TaggedPropertiesInterface.h"
#include "VirtualPropertySet.h"
#include "VirtualFedContainer.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AVirtualFedContainer : public AActor, public ITaggedPropertiesInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualPropertySet VirtualProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    AVirtualFedContainer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

