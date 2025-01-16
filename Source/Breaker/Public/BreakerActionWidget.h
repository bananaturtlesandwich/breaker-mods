#pragma once
#include "CoreMinimal.h"
#include "CommonActionWidget.h"
#include "Styling/SlateBrush.h"
#include "BreakerActionWidget.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class BREAKER_API UBreakerActionWidget : public UCommonActionWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDesignTimePreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviewGamepadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAsKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAsGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush WrapperMaterialBrush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WrapperMaterial_TextureParam;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WrapperMaterial_InvertParam;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WrapperMaterial_ScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapperInverted;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrapperScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WrapperDynamicMaterial;
    
public:
    UBreakerActionWidget();

    UFUNCTION(BlueprintCallable)
    void SetWrapperScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetWrapperInverted(bool bInverted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetWrappedIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetRawIcon() const;
    
};

