#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AssassinData.h"
#include "AssassinManager_AssassinDefeatedDelegate.h"
#include "AssassinManager_AssassinSpawnedDelegate.h"
#include "Templates/SubclassOf.h"
#include "AssassinManager.generated.h"

class AActor;
class ACMCharBase;
class UDataTable;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class BREAKER_API UAssassinManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssassinManager_AssassinSpawned OnAssassinSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssassinManager_AssassinDefeated OnAssassinDefeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssassinManager_AssassinDefeated OnAssassinDespawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACMCharBase*> AssassinEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AssassinDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssassinData> AssassinDataCache;
    
    UAssassinManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ACMCharBase* SpawnAssassin(UObject* WorldContextObject, FVector Location, float RadiusMin, float RadiusMax, bool ShowAssassinSpawnedMessage);
    
    UFUNCTION(BlueprintCallable)
    bool InitializeAssassinData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ACMCharBase> GetRandomAssassinClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfAssassins();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACMCharBase* GetAssassin();
    
    UFUNCTION(BlueprintCallable)
    void DespawnAllAssassins();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AssassinSpawned_Multicast(ACMCharBase* Enemy, bool ShowAssassinSpawnedMessage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AssassinDespawned_Multicast(ACMCharBase* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void AssassinDespawned(ACMCharBase* Actor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AssassinDefeated_Multicast(ACMCharBase* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void AssassinDefeated(AActor* Actor);
    
};

