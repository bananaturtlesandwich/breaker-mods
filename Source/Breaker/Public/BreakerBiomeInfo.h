#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "BreakerZoneInfo.h"
#include "EnemySpawnRegionRuleset.h"
#include "BreakerBiomeInfo.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BREAKER_API UBreakerBiomeInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BiomeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BiomeSpawnCompositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BiomeInteriorSpawnCompositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BiomeLabSpawnCompositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnRegionRuleset BiomeRuleset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakerZoneInfo> ZoneInfos;
    
    UBreakerBiomeInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindZoneInfoForTag(FGameplayTag ZoneTag, FBreakerZoneInfo& OutZoneInfo) const;
    
};

