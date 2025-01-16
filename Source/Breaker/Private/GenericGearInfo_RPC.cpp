#include "GenericGearInfo_RPC.h"

FGenericGearInfo_RPC::FGenericGearInfo_RPC() {
    this->EquipmentSlot = EEquipmentType::Amp;
    this->Level = 0;
    this->Rarity = 0;
    this->IsEncoded = false;
    this->NumTimesUpgraded = 0;
    this->Durability = 0;
    this->bAppliedAffixMods = false;
    this->Weapon_EquipmentCategory = EEquipmentCategory::None;
    this->Weapon_Rail_RateOfFire = 0.00f;
    this->Holobyte_Type = EHolobyteType::NONE;
    this->Armor_Type = EArmorType::DEFAULT;
    this->Armor_ShieldBonus = 0;
    this->Armor_ArmorBonus = 0;
    this->Armor_DashSpeedBonus = 0;
    this->Armor_DashDistanceBonus = 0;
    this->Currency_Type = ECurrencyType::None;
}

