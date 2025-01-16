#include "QuestRewards.h"

FQuestRewards::FQuestRewards() {
    this->EncodedGearDrop_Rarity = 0;
    this->DecodedGearDrop_Rarity = 0;
    this->EncodedAmpDrop_Rarity = 0;
    this->DecodedAmpDrop_Rarity = 0;
    this->EncodedCooldownDrop_Rarity = 0;
    this->DecodedCooldownDrop_Rarity = 0;
    this->EncodedHolobyteDrop_Rarity = 0;
    this->DecodedHolobyteDrop_Rarity = 0;
    this->XP = 0;
    this->BrightBlood = 0;
    this->AbyssStones = 0;
    this->bShowEncGearRar = false;
    this->bShowDecGearRar = false;
    this->bShowEncAmpRar = false;
    this->bShowDecAmpRar = false;
    this->bShowEncCDRar = false;
    this->bShowDecCDRar = false;
    this->bShowEncHoloRar = false;
    this->bShowDecHoloRar = false;
}

