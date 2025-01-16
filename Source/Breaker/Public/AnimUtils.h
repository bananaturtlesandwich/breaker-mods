#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimNotifyStateInstanceData.h"
#include "Templates/SubclassOf.h"
#include "AnimUtils.generated.h"

class UAnimMontage;
class UAnimNotifyState;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UAnimUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimUtils();

    UFUNCTION(BlueprintCallable)
    static bool SkeletalMeshHasQueuedAnimNotify(USkeletalMeshComponent* MeshComp, TSubclassOf<UAnimNotifyState> NotifyStateClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimNotifyStateInstanceData(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Sequence, TSubclassOf<UAnimNotifyState> NotifyStateClass, FAnimNotifyStateInstanceData InstanceData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAnimNotifyStateInstanceData(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Sequence, const UAnimNotifyState* NotifyState, FAnimNotifyStateInstanceData& OutInstanceData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ExtractRootMotion(const UAnimMontage* Montage);
    
};

