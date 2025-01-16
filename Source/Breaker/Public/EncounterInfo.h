#pragma once
#include "CoreMinimal.h"
#include "EEncounterState.h"
#include "EEncounterType.h"
#include "EncounterInfo.generated.h"

class ACMCharBase;

USTRUCT(BlueprintType)
struct FEncounterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEncounterType EncounterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEncounterState EncounterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACMCharBase* EncounterEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACMCharBase*> EncounterSupportEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unregistered;
    
    BREAKER_API FEncounterInfo();
};

