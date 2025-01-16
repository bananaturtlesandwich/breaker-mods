#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "NetworkPeer.generated.h"

UCLASS(Blueprintable)
class UNetworkPeer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MemberName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PingMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UserId;
    
    UNetworkPeer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingThisGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnline();
    
};

