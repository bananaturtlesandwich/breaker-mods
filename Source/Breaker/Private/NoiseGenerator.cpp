#include "NoiseGenerator.h"

UNoiseGenerator::UNoiseGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideSeed = -1;
    this->NoiseScale = 100000.00f;
    this->AreaBounds = 1000.00f;
    this->TargetTexture = NULL;
    this->IslomeNoiseTable = NULL;
    this->SampleWidth = 150000.00f;
}

void UNoiseGenerator::WriteNoiseToTexture() {
}

bool UNoiseGenerator::WriteEditedNoiseToTable(FIslomeNoiseLayers EditedLayers, int32 IslomeIndex) {
    return false;
}

void UNoiseGenerator::LogNoiseGenTime() {
}

float UNoiseGenerator::GetValueAtPosition(FVector position) {
    return 0.0f;
}

float UNoiseGenerator::GetIslomeNoiseValueAtPosition(FVector position, FGameplayTag BiomeTag) {
    return 0.0f;
}

void UNoiseGenerator::GenerateIslomeNoiseFields(FVector IslomePosition) {
}


