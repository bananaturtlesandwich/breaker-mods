#include "EnemySpawnParameters.h"

FEnemySpawnParameters::FEnemySpawnParameters() {
    this->LocationRadiusMax = 0.00f;
    this->LocationRadiusMin = 0.00f;
    this->LocationOnNavMesh = false;
    this->MaxNavMeshAttempts = 0;
    this->LocationAdjustVertically = false;
    this->LocationAdjustVertically_TraceBelow = 0.00f;
    this->LocationAdjustVertically_TraceAbove = 0.00f;
    this->LocationAdjustVertically_DebugDraw = false;
    this->LevelOverride = 0;
    this->EnemyGroupID = 0;
    this->UseBiomeZoneInfoForEnemySpawn = false;
    this->OverrideDisableEnemySpawning = false;
    this->DespawnDistance = 0.00f;
    this->EnemyRequireVisibilityToComposition = false;
    this->RequireVisibilityToLocation = false;
    this->MaxDistanceFromVisibilityLocation = 0.00f;
    this->AllowVerticalSlotOffset = false;
    this->AdjustEnemySpawnLocation = false;
    this->AvoidSafeSpaceLocations = false;
}

