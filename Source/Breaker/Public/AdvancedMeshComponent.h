#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "MeshTriangle.h"
#include "AdvancedMeshComponent.generated.h"

class UStaticMeshComponent;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UAdvancedMeshComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LODChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshTriangle> Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxBound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> IndicesArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> IndicesArray_16;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumTris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> VertexArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VertexBufferStride;
    
public:
    UAdvancedMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveEverything();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTriangles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIsInside2D(FMeshTriangle Tri, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIsInside(FMeshTriangle Tri, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugStuff(FMeshTriangle MeshTri, FColor DebugColor, float DisplayTime);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugOnce();
    
    UFUNCTION(BlueprintCallable)
    bool AdvancedMeshInit();
    
};

