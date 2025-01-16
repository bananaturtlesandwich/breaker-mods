#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaterialSnapshotSet.h"
#include "OnDynamicMaterialCreatedDelegate.h"
#include "MaterialStackComponent.generated.h"

class UMaterialInterface;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMaterialStackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialSnapshotSet> SnapshotSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StackRootKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamicMaterials;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDynamicMaterialCreated OnDynamicMaterialCreated;
    
    UMaterialStackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshRootMaterials(bool bResetStacks);
    
    UFUNCTION(BlueprintCallable)
    void PushNewMaterials(const FString& Key, const TArray<UMaterialInterface*>& Materials, bool bCustomRenderDepth);
    
    UFUNCTION(BlueprintCallable)
    void PushNewMaterial(const FString& Key, UMaterialInterface* Material, bool bCustomRenderDepth);
    
    UFUNCTION(BlueprintCallable)
    void PopMaterials(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMaterialInterface*> ConvertMaterialsToDynamic(UObject* Outer, const TArray<UMaterialInterface*>& InMaterials, TArray<int32>& OutConverted);
    
};

