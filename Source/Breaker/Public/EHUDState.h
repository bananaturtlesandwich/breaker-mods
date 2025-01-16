#pragma once
#include "CoreMinimal.h"
#include "EHUDState.generated.h"

UENUM(BlueprintType)
enum class EHUDState : uint8 {
    None,
    HUB,
    HUBVendor,
    Dialogue,
    Loadout,
    Inventory,
    ReturnFromRun,
    RanksProgression,
    WeaponProgression,
    Run,
    RunVendor,
    GearBitHolobytePickThree,
    HolobyteUpgrade,
    CharacterCreator,
    MultiplayerMenu,
    StatUpgrade,
    Pause,
    Settings,
    Dead,
    ArtifactStoryGrid,
    NPCActions,
    ArtifactDecode,
    UnlocksFromRun,
    BugReport,
    DecodeGear,
    AbilityUpgrade,
    Test,
    CycleResults,
    Tutorial,
    Spectator,
    Telepad,
    VendorUnlock,
    Empty,
};

