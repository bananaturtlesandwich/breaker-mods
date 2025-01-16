#include "AnimUtils.h"
#include "Templates/SubclassOf.h"

UAnimUtils::UAnimUtils() {
}

bool UAnimUtils::SkeletalMeshHasQueuedAnimNotify(USkeletalMeshComponent* MeshComp, TSubclassOf<UAnimNotifyState> NotifyStateClass) {
    return false;
}

void UAnimUtils::SetAnimNotifyStateInstanceData(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Sequence, TSubclassOf<UAnimNotifyState> NotifyStateClass, FAnimNotifyStateInstanceData InstanceData) {
}

bool UAnimUtils::GetAnimNotifyStateInstanceData(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Sequence, const UAnimNotifyState* NotifyState, FAnimNotifyStateInstanceData& OutInstanceData) {
    return false;
}

FTransform UAnimUtils::ExtractRootMotion(const UAnimMontage* Montage) {
    return FTransform{};
}


