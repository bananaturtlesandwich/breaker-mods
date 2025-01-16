#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "FastNoiseList.h"
#include "IslomeNoiseLayers.h"
#include "NoiseLayer.h"
#include "NoiseGenerator.generated.h"

class UDataTable;
class UFastNoiseWrapper;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNoiseGenerator : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseLayer> NoiseLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TargetTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IslomeNoiseTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseLayer> b01NoiseLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> b01NoiseWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> b01DomainWarpingWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFastNoiseList> b01DomainWarpingDict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseLayer> b02NoiseLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> b02NoiseWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> b02DomainWarpingWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFastNoiseList> b02DomainWarpingDict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseLayer> b03NoiseLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> b03NoiseWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> b03DomainWarpingWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFastNoiseList> b03DomainWarpingDict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseLayer> b04NoiseLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> b04NoiseWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> b04DomainWarpingWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFastNoiseList> b04DomainWarpingDict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> NoiseWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> DomainWarpingWrappers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFastNoiseList> DomainWarpingDict;
    
public:
    UNoiseGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WriteNoiseToTexture();
    
    UFUNCTION(BlueprintCallable)
    bool WriteEditedNoiseToTable(FIslomeNoiseLayers EditedLayers, int32 IslomeIndex);
    
    UFUNCTION(BlueprintCallable)
    void LogNoiseGenTime();
    
    UFUNCTION(BlueprintCallable)
    float GetValueAtPosition(FVector position);
    
    UFUNCTION(BlueprintCallable)
    float GetIslomeNoiseValueAtPosition(FVector position, FGameplayTag BiomeTag);
    
    UFUNCTION(BlueprintCallable)
    void GenerateIslomeNoiseFields(FVector IslomePosition);
    
};

