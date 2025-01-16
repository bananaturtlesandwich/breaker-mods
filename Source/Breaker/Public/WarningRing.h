#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WarningRing.generated.h"

class UMaterialInterface;
class UProceduralMeshComponent;

UCLASS(Blueprintable)
class BREAKER_API AWarningRing : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* ProcMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSegments;
    
    AWarningRing(const FObjectInitializer& ObjectInitializer);

};

