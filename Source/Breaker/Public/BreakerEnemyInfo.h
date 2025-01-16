#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "BreakerEnemyInfo.generated.h"

class ACMCharBase;

UCLASS(Blueprintable)
class BREAKER_API UBreakerEnemyInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACMCharBase> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACMCharBase> ResolvedClass;
    
public:
    UBreakerEnemyInfo();

    UFUNCTION(BlueprintCallable)
    TSubclassOf<ACMCharBase> GetEnemyClass();
    
};

