#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ELevelState.h"
#include "Templates/SubclassOf.h"
#include "BreakerAudioGlobals.generated.h"

class ABreakerAudioCombatPriorityManager;
class ABreakerOceanShorePlayer;
class AMultiPositionAmbientAudioPlayer;
class UAkAudioEvent;
class UAkRtpc;
class UAkStateValue;
class UAkSwitchValue;
class UDataTable;

UCLASS(Blueprintable)
class BREAKER_API UBreakerAudioGlobals : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABreakerAudioCombatPriorityManager> BreakerAudioCombatPriorityManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MeshAudioAssociation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMultiplePositionsPerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MultiPositionAudioMeshSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMultiPositionAmbientAudioPlayer> MultiPositionAmbientAudioPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABreakerOceanShorePlayer> BreakerOceanShorePlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UAkSwitchValue*> AudioSurfaceSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELevelState, UAkStateValue*> CurrentLevelAK_States_GlobalValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> BiomeRTPC_GlobalValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAkStateValue*> BiomeAK_States_GlobalValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkStateValue*> TimeOfDayAK_States_GlobalValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DistanceToNearestBiomeRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DistanceToNearestMiniBossRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DistanceToEliteRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAkAudioEvent*> DangerAudioEvents;
    
    UBreakerAudioGlobals();

};

