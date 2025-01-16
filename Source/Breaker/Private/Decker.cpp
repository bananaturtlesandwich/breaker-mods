#include "Decker.h"
#include "Components/StaticMeshComponent.h"
#include "FastNoiseWrapper.h"
#include "InteractablesManagerComponent.h"
#include "NoiseGenerator.h"
#include "ReplicatedReadyStateComponent.h"

ADecker::ADecker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LandscapeMesh"));
    this->MapRenderTarget = NULL;
    this->ZoneBoundaryNoiseSelected = 10000.00f;
    this->ZoneExclusionDistance = 27500.00f;
    this->ZoneSelectionInformation = NULL;
    this->BiomeTagIndexOrder.AddDefaulted(6);
    this->BytefieldSampleWidth = 150000.00f;
    this->M_PreProcessParent = NULL;
    this->M_ProcessParent = NULL;
    this->M_PostProcessParent = NULL;
    this->GlobalNoiseWrapper = CreateDefaultSubobject<UFastNoiseWrapper>(TEXT("GlobalNoiseWrapper"));
    this->SpawnWorld = NULL;
    this->CoreGameplaySpawnWorld = NULL;
    this->PanLayoutPresets = NULL;
    this->SelectedPanLayoutIndex = -1;
    this->NumBiomes = 5;
    this->bSoloBiome = false;
    this->bSkipRPADecking = false;
    this->bSkipGrass = false;
    this->bUseLayoutPresets = false;
    this->ForceLayoutPreset = -1;
    this->tier1AllowedBiomes.AddDefaulted(2);
    this->tier2AllowedBiomes.AddDefaulted(3);
    this->tier3AllowedBiomes.AddDefaulted(4);
    this->IslomeSeparationMin = 200.00f;
    this->IslomeFootprintRadius = 27500.00f;
    this->Tier2Elevation = 0.00f;
    this->Tier3Elevation = 0.00f;
    this->SkytechElevation = 30000.00f;
    this->HyperfabsSettledComponent = CreateDefaultSubobject<UReplicatedReadyStateComponent>(TEXT("HyperfabsSettled"));
    this->bHyperfabsSettled = false;
    this->Seed = -1;
    this->InteractableSeed = -1;
    this->PathWidth = 250.00f;
    this->PathFalloff = 700.00f;
    this->PathWidthBreakup = -750.00f;
    this->NoiseGenerator = CreateDefaultSubobject<UNoiseGenerator>(TEXT("NoiseGenerator"));
    this->GlobalGrassSpawnNoiseCutoff = 0.66f;
    this->Variant = -1;
    this->VariantIndex = -1;
    this->WorldVariants = NULL;
    this->SpawnGroupLimitTable = NULL;
    this->FoliageInfo = NULL;
    this->ByteFieldResources = NULL;
    this->OverrideSeed = -1;
    this->DoOverrideVariant = false;
    this->OverrideVariant = 0;
    this->bDisableAutoDecking = false;
    this->LandscapeMesh = (UStaticMeshComponent*)RootComponent;
    this->InteractablesManager = CreateDefaultSubobject<UInteractablesManagerComponent>(TEXT("InteractablesManager"));
    this->AllTerrainPointsSpawnMesh = NULL;
    this->TestMaterial = NULL;
    this->InstanceAsDensityCoefficient = 0.02f;
    this->BeachByteField = NULL;
    this->ShorelineDistanceByteField = NULL;
    this->OceanDistanceByteField = NULL;
    this->PathDistanceByteField = NULL;
    this->PathMaskByteField = NULL;
    this->BiomeBoundaryByteField = NULL;
    this->SkytechActor = NULL;
    this->LocatorPlaceholderActor = NULL;
    this->SpannerAsset = NULL;
    this->bDataOnlyMode = false;
    this->bMapCaptured = false;
    this->JumpPadParentClass = NULL;
    this->PropsDT = NULL;
    this->PermittedAdjacencies = NULL;
    this->bUseOldParentCheck = true;
    this->bFinishedGrassifying = false;
    this->bAllTerrainPointsSpawned = false;
    this->AllTerrainPointsHISM = NULL;
}

void ADecker::TriggerNewCycleDecking() {
}

void ADecker::TriggerDecking() {
}

void ADecker::TerrainMeshLoaded() {
}

void ADecker::StartTryFinishDecking() {
}

void ADecker::SpawnSpanners() {
}

bool ADecker::SpawnFromData() {
    return false;
}

float ADecker::SignedDistanceToNearestShoreline(const FVector Location) {
    return 0.0f;
}

float ADecker::SignedDistanceToNearestOcean(const FVector Location) {
    return 0.0f;
}

void ADecker::SetupShorelineDistanceBytefields() {
}

void ADecker::SetupPathMaskBytefield() {
}

void ADecker::SetupPathDistanceBytefields() {
}

void ADecker::SetupOceanDistanceBytefield() {
}

void ADecker::SetupBiomeZoneBytefields() {
}

bool ADecker::SetAssets() {
    return false;
}

void ADecker::SendHashToServer(int32 HashIndex) {
}

void ADecker::RemoveAllTestInstances() {
}

void ADecker::PollAssetLoading() {
}

float ADecker::PathMaskValueAtLocation(const FVector Location) {
    return 0.0f;
}

void ADecker::OnGrassComplete() {
}

void ADecker::MapTerrainDataToStageSlot_Implementation(uint8 StageIndex_, const TArray<UTerrainPointTable*>& TerrainPoints_, const TArray<TSoftObjectPtr<UDataTable>>& RPATables_, const TArray<FRPASubCandidatePoints>& RPACandidatePoints_, const TArray<UDataTable*>& VariantMeshList_, const UDataTable* AudioVertexEvents_) {
}

void ADecker::LockNav() {
}

void ADecker::LevelStreamingStartedClearDecking(ELevelState NewLevel, ELevelState OldLevel) {
}

bool ADecker::IsGrassifyingComplete() const {
    return false;
}

bool ADecker::IsDeckingComplete() const {
    return false;
}

void ADecker::HyperfabsSettled() {
}

void ADecker::HandleLevelStreamingCompleteAutoDecking(ELevelState NewLevel, ELevelState OldLevel) {
}

float ADecker::GetGlobalNoiseValueAtPosition(FVector position) {
    return 0.0f;
}

FVector2D ADecker::GetDirectionalByteField2dValueAtPosition(FDirectionalByteField2d& InDirectionalByteField2d, FVector InPosition) {
    return FVector2D{};
}

bool ADecker::GetByteFieldResourcesForVariant(FByteFieldResources& Resources) {
    return false;
}


void ADecker::GetBiomeZoneAtLocationWithStrength(FVector Location, FGameplayTag& BiomeTag, FGameplayTag& SecondBiomeTag, FGameplayTag& ZoneTag, FGameplayTag& SecondBiomeZoneTag, float& BiomeStrength, float& ZoneStrength) {
}

void ADecker::GetBiomeZoneAtLocationComplex(FVector Location, FBiomeZoneLocationInfoComplex& ComplexBiomeZoneInfo) {
}

void ADecker::GetBiomeZoneAtLocation(FVector Location, int32& Biome, int32& Zone, FGameplayTag& BiomeTag, FGameplayTag& ZoneTag) {
}

ADecker* ADecker::Get(const UObject* WorldContextObject) {
    return NULL;
}

void ADecker::FinishDecking() {
}


float ADecker::DistanceToNearestShoreline(const FVector Location) {
    return 0.0f;
}

float ADecker::DistanceToNearestPath(const FVector Location) {
    return 0.0f;
}

float ADecker::DistanceToNearestOcean(const FVector Location) {
    return 0.0f;
}

float ADecker::DistanceToBiomeBoundary(const FVector Location) {
    return 0.0f;
}

FVector2D ADecker::DirectionToNearestShoreline(const FVector Location) {
    return FVector2D{};
}

FVector2D ADecker::DirectionToNearestPath(const FVector Location) {
    return FVector2D{};
}

FVector2D ADecker::DirectionToNearestOcean(const FVector Location) {
    return FVector2D{};
}


void ADecker::ClearDecking() {
}


bool ADecker::AsyncLoadAllAssets() {
    return false;
}


