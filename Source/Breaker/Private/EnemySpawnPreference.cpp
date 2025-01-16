#include "EnemySpawnPreference.h"

FEnemySpawnPreference::FEnemySpawnPreference() {
    this->bUseEnemyType = false;
    this->bAllowElites = false;
    this->bAllowMinibosses = false;
    this->DifficultyMin = 0;
    this->DifficultyMax = 0;
    this->NumberOfPlayersMin = 0;
    this->NumberOfPlayersMax = 0;
}

