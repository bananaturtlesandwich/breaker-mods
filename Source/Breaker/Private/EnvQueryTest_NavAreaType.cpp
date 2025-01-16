#include "EnvQueryTest_NavAreaType.h"
#include "NavArea_GameBase.h"

UEnvQueryTest_NavAreaType::UEnvQueryTest_NavAreaType() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->NavAreaForMatch = UNavArea_GameBase::StaticClass();
}


