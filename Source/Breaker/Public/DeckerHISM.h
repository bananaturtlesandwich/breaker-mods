#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeckerHISM.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class ADeckerHISM : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* MyHISM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HISMID;
    
    ADeckerHISM(const FObjectInitializer& ObjectInitializer);

};

