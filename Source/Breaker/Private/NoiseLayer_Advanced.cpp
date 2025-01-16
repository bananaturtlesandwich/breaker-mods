#include "NoiseLayer_Advanced.h"

FNoiseLayer_Advanced::FNoiseLayer_Advanced() {
    this->InterpType = EFastNoise_Interp::Linear;
    this->FractalType = EFastNoise_FractalType::FBM;
    this->Octaves = 0;
    this->Lacunarity = 0.00f;
    this->Gain = 0.00f;
    this->CellularJitter = 0.00f;
    this->CellularDistanceFunction = EFastNoise_CellularDistanceFunction::Euclidean;
    this->CellularReturnType = EFastNoise_CellularReturnType::CellValue;
}

