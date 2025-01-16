#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameModeBase.h"
#include "PlayerPostLoginDelegate.h"
#include "BreakerGameModeBase.generated.h"

class AController;
class APawn;
class UCombatChoreographer;
class UEnemySpawnManager;

UCLASS(Blueprintable, NonTransient)
class BREAKER_API ABreakerGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPostLogin PlayerPostLogin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPostLogin PlayerLogout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* EnemySpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatChoreographer* CombatChoreographer;
    
    ABreakerGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    APawn* SpawnDefaultBreakerPawnAtTransform(AController* NewPlayer, const FTransform& SpawnTransform);
    
};

