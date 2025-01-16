#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "PC_AndGearLinkedLayerAnimBP_Info.generated.h"

class UBreakerAnimInstance;
class UDataTable;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPC_AndGearLinkedLayerAnimBP_Info : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> CharacterSkinAsset_Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerAnimInstance> AnimBP_ClasssToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> WeaponStanceABPsForGearTypeDT_Asset;
    
    BREAKER_API FPC_AndGearLinkedLayerAnimBP_Info();
};

