#include "FastNoiseWrapper.h"

UFastNoiseWrapper::UFastNoiseWrapper() {
}

void UFastNoiseWrapper::SetupFastNoise(const EFastNoise_NoiseType NoiseType, const int32 Seed, const float Frequency, const EFastNoise_Interp interp, const EFastNoise_FractalType FractalType, const int32 Octaves, const float Lacunarity, const float Gain, const float CellularJitter, const EFastNoise_CellularDistanceFunction CellularDistanceFunction, const EFastNoise_CellularReturnType CellularReturnType) {
}

void UFastNoiseWrapper::SetSeed(const int32 Seed) {
}

void UFastNoiseWrapper::SetReturnType(const EFastNoise_CellularReturnType CellularReturnType) {
}

void UFastNoiseWrapper::SetOctaves(const int32 Octaves) {
}

void UFastNoiseWrapper::SetNoiseType(const EFastNoise_NoiseType NoiseType) {
}

void UFastNoiseWrapper::SetLacunarity(const float Lacunarity) {
}

void UFastNoiseWrapper::SetInterpolation(const EFastNoise_Interp interp) {
}

void UFastNoiseWrapper::SetGain(const float Gain) {
}

void UFastNoiseWrapper::SetFrequency(const float Frequency) {
}

void UFastNoiseWrapper::SetFractalType(const EFastNoise_FractalType FractalType) {
}

void UFastNoiseWrapper::SetDistanceFunction(const EFastNoise_CellularDistanceFunction distanceFunction) {
}

void UFastNoiseWrapper::SetCellularJitter(const float CellularJitter) {
}

bool UFastNoiseWrapper::IsInitialized() const {
    return false;
}

int32 UFastNoiseWrapper::GetSeed() const {
    return 0;
}

EFastNoise_CellularReturnType UFastNoiseWrapper::GetReturnType() const {
    return EFastNoise_CellularReturnType::CellValue;
}

int32 UFastNoiseWrapper::GetOctaves() const {
    return 0;
}

EFastNoise_NoiseType UFastNoiseWrapper::GetNoiseType() {
    return EFastNoise_NoiseType::Value;
}

float UFastNoiseWrapper::GetNoise3D(const float X, const float Y, const float Z) const {
    return 0.0f;
}

float UFastNoiseWrapper::GetNoise2D(const float X, const float Y) const {
    return 0.0f;
}

float UFastNoiseWrapper::GetLacunarity() const {
    return 0.0f;
}

EFastNoise_Interp UFastNoiseWrapper::GetInterpolation() const {
    return EFastNoise_Interp::Linear;
}

float UFastNoiseWrapper::GetGain() const {
    return 0.0f;
}

float UFastNoiseWrapper::GetFrequency() const {
    return 0.0f;
}

EFastNoise_FractalType UFastNoiseWrapper::GetFractalType() const {
    return EFastNoise_FractalType::FBM;
}

EFastNoise_CellularDistanceFunction UFastNoiseWrapper::GetDistanceFunction() const {
    return EFastNoise_CellularDistanceFunction::Euclidean;
}

float UFastNoiseWrapper::GetCellularJitter() const {
    return 0.0f;
}


