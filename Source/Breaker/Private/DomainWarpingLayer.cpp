#include "DomainWarpingLayer.h"

FDomainWarpingLayer::FDomainWarpingLayer() {
    this->NoiseType = EFastNoise_NoiseType::Value;
    this->Seed = 0;
    this->Frequency = 0.00f;
    this->NoiseBlendFunction = Add;
    this->NoiseStrength = 0.00f;
    this->InvertNoise = false;
}

