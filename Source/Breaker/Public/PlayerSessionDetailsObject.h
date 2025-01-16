#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "PlayerSessionDetailsObjectDelegateDelegate.h"
#include "PlayerSessionDetailsObject.generated.h"

class UPlayerSessionDetailsObject;

UCLASS(Blueprintable)
class BREAKER_API UPlayerSessionDetailsObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcquiredBrightBloodAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcquiredMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AcquiredSchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmpsUsedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDealtAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageReceivedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DashCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> EquipmentLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealthKitsUsedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinibossesKilledAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinionsKilledAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRevivesAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SessionTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate AcquiredMaterialsChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate AcquiredSchematicsChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate AcquiredBrightBloodAmountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate AmpsUsedAmountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate DamageDealtAmountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate DamageReceivedAmountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate DashCountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate EquipmentLoadoutChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate HealthKitsUsedAmountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate LevelProgressionChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate LevelExperienceChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate MinibossesKilledAmountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate MinionsKilledAmountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate PlayerRevivesAmountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate SessionTimeChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSessionDetailsObjectDelegate OnSessionResetEvent;
    
public:
    UPlayerSessionDetailsObject();

    UFUNCTION(BlueprintCallable)
    void RemoveAcquiredSchematic(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void ModifyMinionsKilledAmount(const int32& Amount);
    
    UFUNCTION(BlueprintCallable)
    void ModifyMinibossesKilledAmount(const int32& Amount);
    
    UFUNCTION(BlueprintCallable)
    void ModifyLevelProgression(const int32& Amount);
    
    UFUNCTION(BlueprintCallable)
    void ModifyLevelExperience(const int32& Amount);
    
    UFUNCTION(BlueprintCallable)
    void ModifyEquipmentLoadout(const TArray<FGameplayTag>& Loadout);
    
    UFUNCTION(BlueprintCallable)
    void ModifyDamageReceivedAmount(const float& Amount);
    
    UFUNCTION(BlueprintCallable)
    void ModifyDamageDealtAmount(const float& Amount);
    
    UFUNCTION(BlueprintCallable)
    void ModifyAcquiredMaterials(const int32& Amount);
    
    UFUNCTION(BlueprintCallable)
    void ModifyAcquiredBrightbloodAmount(const int32& Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipmentLoadoutValid();
    
    UFUNCTION(BlueprintCallable)
    void IncrementPlayerRevivesAmount();
    
    UFUNCTION(BlueprintCallable)
    void IncrementHealthKitsUsedCount();
    
    UFUNCTION(BlueprintCallable)
    void IncrementDashCount();
    
    UFUNCTION(BlueprintCallable)
    void IncrementAmpsUsed();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UPlayerSessionDetailsObject* GetPlayerSessionDetailsObject(UObject* WorldContext);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAcquiredSchematic(const FGameplayTag& Tag);
    
};

