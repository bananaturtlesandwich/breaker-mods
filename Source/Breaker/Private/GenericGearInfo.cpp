#include "GenericGearInfo.h"

FGenericGearInfo::FGenericGearInfo() {
    this->EquipmentSlot = EEquipmentType::Amp;
    this->Level = 0;
    this->Rarity = 0;
    this->IsEncoded = false;
    this->Durability = 0;
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

