#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "UpdateInfoReceivedDelegate.h"
#include "OnlineGameInstance.generated.h"

class UBreakerOnlineSession;

UCLASS(Abstract, Blueprintable, NonTransient)
class BREAKER_API UOnlineGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateInfoReceived UpdateInfoReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateFeedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UpdateTagFilter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBreakerOnlineSession> BreakerOnlineSession;
    
public:
    UOnlineGameInstance();

    UFUNCTION(BlueprintCallable)
    void RefreshLatestUpdateInfoFromSteam();
    
    UFUNCTION(BlueprintCallable)
    void GetLatestUpdateInfoFromSteam(bool& bSuccess, FString& URL, FString& Title, FDateTime& Date);
    
    UFUNCTION(BlueprintCallable)
    UBreakerOnlineSession* GetBreakerOnlineSession() const;
    
};

