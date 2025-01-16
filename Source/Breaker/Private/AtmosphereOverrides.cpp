#include "AtmosphereOverrides.h"

FAtmosphereOverrides::FAtmosphereOverrides() {
    this->bOverride_FogDensity = false;
    this->FogDensity = 0.00f;
    this->bOverride_FogHeight = false;
    this->FogHeight = 0.00f;
    this->bOverride_FogHeightFalloff = false;
    this->FogHeightFalloff = 0.00f;
    this->bOverride_FogStartDistance = false;
    this->FogStartDistance = 0.00f;
    this->bOverride_FogMaxOpacity = false;
    this->FogMaxOpacity = 0.00f;
    this->bOverride_FogColor = false;
}

