#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "BreakerDamage.h"
#include "ECharacterAgentType.h"
#include "CharacterAgentInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UCharacterAgentInterface : public UInterface {
    GENERATED_BODY()
};

class ICharacterAgentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAllyOf(AActor* OtherAgent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSuccessfulHit(AActor* Victim, const FBreakerDamage& InDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetIsStaggered(bool& OutStaggered) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetCharacterConfigTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterAgentType GetCharacterAgentType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<ECharacterAgentType> GetCharacterAgentFriendGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAgentSizeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FBreakerDamage ConstructDamageMessage(AActor* Victim, const FBreakerDamage& InDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanReceiveDashDamage() const;
    
};

