#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ActorArray.h"
#include "BiomeInfoProviderInterface.h"
#include "BiomeZoneInfo.h"
#include "BiomeZoneLocationInfoComplex.h"
#include "BiomeZones.h"
#include "ByteFieldArray.h"
#include "ByteFieldResources.h"
#include "DirectionalByteField2d.h"
#include "ELevelState.h"
#include "GrassifyDelegate.h"
#include "LocatorData.h"
#include "LocatorRow.h"
#include "RPAList.h"
#include "RPASubCandidatePoints.h"
#include "RandomPropTableList.h"
#include "RowMarkerData.h"
#include "SpawnList.h"
#include "StageData.h"
#include "TempZoneIndexMapping.h"
#include "Templates/SubclassOf.h"
#include "TestMonkeyReflectableInterface.h"
#include "WorldReadyForGameplayDelegate.h"
#include "Decker.generated.h"

class AADA;
class ADecker;
class ADeckerHISM;
class ASpannerBase;
class UByteField;
class UDataTable;
class UFastNoiseWrapper;
class UInteractablesManagerComponent;
class ULevel;
class UMaterial;
class UMaterialInterface;
class UMaterialParameterCollection;
class UNoiseGenerator;
class UObject;
class UReplicatedReadyStateComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTerrainPointTable;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ADecker : public AActor, public IBiomeInfoProviderInterface, public ITestMonkeyReflectableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MapRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> GlobalDeckingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ZoneBoundaryNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ZoneBoundaryBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoneBoundaryNoiseSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoneExclusionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ZoneSelectionInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> BiomeTagIndexOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTempZoneIndexMapping> ZoneIndexOrderMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBiomeZones> SelectedZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BytefieldSampleWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* M_PreProcessParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* M_ProcessParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* M_PostProcessParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> RT_IslomeParent0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> RT_IslomeParent1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> RT_IslomeParent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> RT_IslomeParent3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFastNoiseWrapper* GlobalNoiseWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FByteFieldResources ByteFieldGenResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevel* SpawnWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevel* CoreGameplaySpawnWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTransform> BiomeGridTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PanLayoutPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedPanLayoutIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldReadyForGameplay OnWorldReadyForGameplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrassify OnGrassify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrassify PostGrassify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumBiomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> OverrideVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoloBiome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BiomeToSolo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipRPADecking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipGrass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLayoutPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceLayoutPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> tier1AllowedBiomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> tier2AllowedBiomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> tier3AllowedBiomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IslomeSeparationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IslomeFootprintRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tier2Elevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tier3Elevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkytechElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> BiomeOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplicatedReadyStateComponent* HyperfabsSettledComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHyperfabsSettled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> BiomeSeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteractableSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> PathMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathWidthBreakup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNoiseGenerator* NoiseGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalGrassSpawnNoiseCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Variant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariantIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSpawnList> BiomeSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AADA*> ADAsToGrassify;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> CurrentLandscapeMeshObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorldVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpawnGroupLimitTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FStageData> StageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FoliageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ByteFieldResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetRowDeckingNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRowMarkerData> TargetRowMarkerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoOverrideVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAutoDecking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LandscapeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractablesManagerComponent* InteractablesManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* AllTerrainPointsSpawnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TestMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstanceAsDensityCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UByteField*, FByteFieldArray> BiomeZoneByteFields;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UByteField* BeachByteField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UByteField* ShorelineDistanceByteField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectionalByteField2d ShorelineDirectionByteField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UByteField* OceanDistanceByteField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectionalByteField2d OceanDirectionByteField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UByteField* PathDistanceByteField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectionalByteField2d PathDirectionByteField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UByteField* PathMaskByteField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UByteField* BiomeBoundaryByteField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IslomeSpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLocatorData> RpaLocators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLocatorData> SpawnedActorsWithLocators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SkytechActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LocatorPlaceholderActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpannerBase> SpannerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocatorRow> InteractableLocatorRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDataOnlyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMapCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> JumpPadParentClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PropsDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PermittedAdjacencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRandomPropTableList> RandomPropsDTs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRPAList> IslomeTotalRPAs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOldParentCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActorArray> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADeckerHISM*> IslomeSpawnedHisms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedGrassifying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllTerrainPointsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADeckerHISM* AllTerrainPointsHISM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADeckerHISM*> MultiZonePointHISMs;
    
public:
    ADecker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerNewCycleDecking();
    
    UFUNCTION(BlueprintCallable)
    void TriggerDecking();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TerrainMeshLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartTryFinishDecking();
    
    UFUNCTION(BlueprintCallable)
    void SpawnSpanners();
    
    UFUNCTION(BlueprintCallable)
    bool SpawnFromData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SignedDistanceToNearestShoreline(const FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SignedDistanceToNearestOcean(const FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetupShorelineDistanceBytefields();
    
    UFUNCTION(BlueprintCallable)
    void SetupPathMaskBytefield();
    
    UFUNCTION(BlueprintCallable)
    void SetupPathDistanceBytefields();
    
    UFUNCTION(BlueprintCallable)
    void SetupOceanDistanceBytefield();
    
    UFUNCTION(BlueprintCallable)
    void SetupBiomeZoneBytefields();
    
    UFUNCTION(BlueprintCallable)
    bool SetAssets();
    
    UFUNCTION(BlueprintCallable)
    void SendHashToServer(int32 HashIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTestInstances();
    
    UFUNCTION(BlueprintCallable)
    void PollAssetLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float PathMaskValueAtLocation(const FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnGrassComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MapTerrainDataToStageSlot(uint8 StageIndex_, const TArray<UTerrainPointTable*>& TerrainPoints_, const TArray<TSoftObjectPtr<UDataTable>>& RPATables_, const TArray<FRPASubCandidatePoints>& RPACandidatePoints_, const TArray<UDataTable*>& VariantMeshList_, const UDataTable* AudioVertexEvents_);
    
    UFUNCTION(BlueprintCallable)
    void LockNav();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LevelStreamingStartedClearDecking(ELevelState NewLevel, ELevelState OldLevel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrassifyingComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeckingComplete() const;
    
    UFUNCTION(BlueprintCallable)
    void HyperfabsSettled();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLevelStreamingCompleteAutoDecking(ELevelState NewLevel, ELevelState OldLevel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlobalNoiseValueAtPosition(FVector position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetDirectionalByteField2dValueAtPosition(FDirectionalByteField2d& InDirectionalByteField2d, FVector InPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetByteFieldResourcesForVariant(FByteFieldResources& Resources);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FBiomeZoneInfo GetBiomeZoneInfo(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBiomeZoneAtLocationWithStrength(FVector Location, FGameplayTag& BiomeTag, FGameplayTag& SecondBiomeTag, FGameplayTag& ZoneTag, FGameplayTag& SecondBiomeZoneTag, float& BiomeStrength, float& ZoneStrength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBiomeZoneAtLocationComplex(FVector Location, FBiomeZoneLocationInfoComplex& ComplexBiomeZoneInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBiomeZoneAtLocation(FVector Location, int32& Biome, int32& Zone, FGameplayTag& BiomeTag, FGameplayTag& ZoneTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADecker* Get(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishDecking();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoGrass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DistanceToNearestShoreline(const FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DistanceToNearestPath(const FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DistanceToNearestOcean(const FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DistanceToBiomeBoundary(const FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D DirectionToNearestShoreline(const FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D DirectionToNearestPath(const FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D DirectionToNearestOcean(const FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearDeckingInBP();
    
    UFUNCTION(BlueprintCallable)
    void ClearDecking();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintDecking(bool& bIsDelayDecking);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AsyncLoadAllAssets();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void GetBiomeZone(FVector Location, FGameplayTag& OutBiome, FGameplayTag& OutZone) override PURE_VIRTUAL(GetBiomeZone,);
    
};

