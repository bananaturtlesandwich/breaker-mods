#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BreakerSessionSearchResult.h"
#include "GenericSessionUpdateDelegateDelegate.h"
#include "GenericSuccessSessionUpdateDelegateDelegate.h"
#include "NetworkEventDelegate.h"
#include "OnFindSessionToUpdateDelegate.h"
#include "OnNetworkSessionInvitationEventDelegate.h"
#include "SessionStartedDelegate.h"
#include "BreakerSessions.generated.h"

class APlayerController;
class UNetworkPeer;

UCLASS(Blueprintable)
class BREAKER_API UBreakerSessions : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSessionName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkSessionInvitationEvent InvitationReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSessionUpdateDelegate InvitationsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSessionUpdateDelegate SessionMembersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionStarted SessionCreatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionStarted SessionUpdatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionStarted SessionStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionStarted SessionEndedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSessionUpdateDelegate MatchStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSessionUpdateDelegate MatchEndedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionStarted SessionDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkEvent OnFindSessionsComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSessionUpdateDelegate JoinIncorrectPassword;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSessionUpdateDelegate JoinFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSuccessSessionUpdateDelegate ReadFriendsListCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSuccessSessionUpdateDelegate JoinSessionAttemptComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNetworkPeer*> CurrentSessionMembers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNetworkPeer*> CurrentFriendsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNetworkPeer*> CurrentRecentPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakerSessionSearchResult> SessionInvitations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakerSessionSearchResult> FindSessionResults;
    
public:
    UBreakerSessions();

    UFUNCTION(BlueprintCallable)
    void UnRegisterPlayerFromGameMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void StartMatch();
    
    UFUNCTION(BlueprintCallable)
    void SendSessionInvitation(UNetworkPeer* Friend);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlayerFromGameMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ReadFriendsList();
    
    UFUNCTION(BlueprintCallable)
    void LeaveSession(bool ChangeLevel, const FString& LevelArgs);
    
    UFUNCTION(BlueprintCallable)
    bool JoinSession(FBreakerSessionSearchResult SessionSearchResult, const FString& Password, bool bIsInvite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionSecure();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInSession(UNetworkPeer* Peer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSession();
    
    UFUNCTION(BlueprintCallable)
    void GetUpdatedSessionData(FBreakerSessionSearchResult SessionToUpdate, const FOnFindSessionToUpdate& UpdatedInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetSessionSearchResults(TArray<FBreakerSessionSearchResult>& SearchResults);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionHostName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetSessionCurrentAndMaxPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UNetworkPeer*> GetRecentPlayersList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPendingInvites(TArray<FBreakerSessionSearchResult>& Invites);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLocalPlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UNetworkPeer*> GetFriendsList();
    
    UFUNCTION(BlueprintCallable)
    bool FindSessions(int32 MaximumResults, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSession(int32 MaxPlayers, const FString& Password);
    
};

