#include "VendorAffinityDataAsset.h"

UVendorAffinityDataAsset::UVendorAffinityDataAsset() {
    this->UnlockTable = NULL;
    this->AffinityLevelTable = NULL;
    this->VendorGearLevel_NumberOfRanksBelow = 1;
    this->VendorGearLevel_NumberOfRanksAbove = 1;
    this->GearSlots_Base = 5;
    this->HUB_NumberOfRunsUntilRefresh = 3;
    this->Reroll_IncreasePercent = 0.15f;
    this->GearWorth_MarkdownModifier = 0.40f;
    this->GearUpgrade_MaxNumber = 3;
    this->InRunHealthKitsForSale = 0;
    this->InRunHealthKitCost = 0;
}


