#include "PanDecker.h"

APanDecker::APanDecker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BiomeTagIndexOrder.AddDefaulted(6);
    this->tier1AllowedBiomes.AddDefaulted(2);
    this->tier2AllowedBiomes.AddDefaulted(3);
    this->tier3AllowedBiomes.AddDefaulted(4);
}

void APanDecker::TestDecking() {
}

void APanDecker::TestAllTerrainPointsByZone() {
}

void APanDecker::TestAllTerrainPoints() {
}

void APanDecker::StartTryFinishTestDecking() {
}

void APanDecker::MarkRows() {
}

void APanDecker::ForceRemoveAllTestInstances() {
}

void APanDecker::EditorSpawnTerrainProps() {
}

void APanDecker::DeckingReport() {
}

void APanDecker::DebugBiome(FGameplayTag TargetBiome, uint8 TargetVariant) {
}


