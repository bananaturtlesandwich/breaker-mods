#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_GameBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BREAKER_API UNavArea_GameBase : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_GameBase();

    UFUNCTION(BlueprintCallable)
    void SetFlagRangedAlternative();
    
    UFUNCTION(BlueprintCallable)
    void SetFlagRangedAdvantageArea();
    
    UFUNCTION(BlueprintCallable)
    void SetFlagIsSlopeArea();
    
    UFUNCTION(BlueprintCallable)
    void SetFlagIsObstacleArea();
    
    UFUNCTION(BlueprintCallable)
    void SetFlagIsJumpingArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSniperArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlopeArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangedAlternativeArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangedAdvantageArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObstacleArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpArea() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAreaFlags();
    
};

