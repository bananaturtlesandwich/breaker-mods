#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "PangaeaWorldState.h"
#include "BreakerPlayerController.generated.h"

class AActor;
class ABreakerPlayerController;
class AExtractionBeam;
class APlayerState;
class ARobotShrine;
class UReplicatedReadyStateComponent;
class USimpleReplicationTrigger;

UCLASS(Abstract, Blueprintable)
class BREAKER_API ABreakerPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsingGamepadInput;
    
    ABreakerPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ShrineHealingUsed(ARobotShrine* Shrine);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ShrineDiscovered(ARobotShrine* Shrine);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetupExtractionVote(AExtractionBeam* Beam);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SendSimpleReplicationTrigger(USimpleReplicationTrigger* RepTrigger, ABreakerPlayerController* InstigatingPlayer);
    
    UFUNCTION(Reliable, Server)
    void Server_SendHash(uint32 ClientHash, const FString& ClientId, uint32 HashIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RevivePlayer(APlayerState* PlayerToRevive, bool Relocate, FVector RelocationPoint, bool ShrineRevive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestWorldSave();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayerSetWorldReady(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayerSendReadyUpActivate(int32 RepPlayerID, AActor* SourceActor, const FText& Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayerSendReadied(int32 RepPlayerID, UReplicatedReadyStateComponent* SourceComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayerSendHyperfabsSettled(int32 RepPlayerID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_GiveRunTokensFromClient(int32 NumRunTokens);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DisableShrineExtraction(ARobotShrine* Shrine);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DangerPoints(int32 Points);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CancelReadyUp(int32 RepPlayerID);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void RequestTime_Server(float ClientTime, float ClientLag);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ReportTime_Client(float RequestWorldTime, float ServerTime);
    
    UFUNCTION()
    void ReCheckHash(uint32 ClientHash, const FString& ClientId, uint32 HashIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFullyLoadedByNetwork();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendWorldSave(const FPangaeaWorldState& WorldState);
    
};

