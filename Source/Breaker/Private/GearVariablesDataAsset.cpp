#include "GearVariablesDataAsset.h"

UGearVariablesDataAsset::UGearVariablesDataAsset() {
    this->ChanceIncRarityPerLvl = 0.10f;
    this->UniqueAffixBonusStackCurve = NULL;
    this->MaxUniqueAffixesOnGear = 3;
    this->StatusEffectAffixChance = 0.50f;
    this->SynergyAffixChance = 0.75f;
    this->HolobyteGroupTag_BasePercent = 0.10f;
    this->HolobyteGroupTag_AdditionalPercent = 0.03f;
}


