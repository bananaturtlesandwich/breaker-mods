#pragma once
#include "CoreMinimal.h"
#include "AdvancedMeshComponent.h"
#include "ClusterGroup.h"
#include "GrassSpawnTransforms.h"
#include "RuntimeProceduralFoliage.h"
#include "MeshGrassifier.generated.h"

class ADecker;
class UFoliageInstancedStaticMeshComponent;
class UNoiseGenerator;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UMeshGrassifier : public UAdvancedMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GrassTriangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrassSpawnCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFoliageInstancedStaticMeshComponent*> BaseFISMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseFISMCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFoliageInstancedStaticMeshComponent*> AvoidedFISMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidedFISMCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeProceduralFoliage> BaseInstanceInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClusterGroup> ClusterGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeProceduralFoliage> AvoidedInstanceInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNoiseGenerator* NoiseGeneratorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrassSpawnTransforms> AllClusterTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrassSpawnTransforms> AllAvoidanceTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrassSpawnTransforms> AllBaseTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFoliageInstancedStaticMeshComponent*> AllClusterFISMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFoliageInstancedStaticMeshComponent*> AllAvoidanceFISMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFoliageInstancedStaticMeshComponent*> AllBaseFISMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAutoComplete;
    
    UMeshGrassifier(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateBaseGrassCullDistance(float GrassCullingScale);
    
    UFUNCTION(BlueprintCallable)
    void SpawnGrass();
    
    UFUNCTION(BlueprintCallable)
    void PlaceAndSpawnGrass();
    
    UFUNCTION(BlueprintCallable)
    void GrassInit(ADecker* DeckerRef_);
    
    UFUNCTION(BlueprintCallable)
    void Grassify();
    
};

