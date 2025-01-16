#include "BreakerActionWidget.h"

UBreakerActionWidget::UBreakerActionWidget() {
    this->bAllowDesignTimePreview = false;
    this->PreviewGamepadName = TEXT("XboxOne");
    this->bForceAsKeyboard = false;
    this->bForceAsGamepad = false;
    this->WrapperMaterial_TextureParam = TEXT("Texture");
    this->WrapperMaterial_InvertParam = TEXT("Invert");
    this->WrapperMaterial_ScaleParam = TEXT("Scale");
    this->bWrapperInverted = false;
    this->WrapperScale = 1.68f;
    this->WrapperDynamicMaterial = NULL;
}

void UBreakerActionWidget::SetWrapperScale(float Scale) {
}

void UBreakerActionWidget::SetWrapperInverted(bool bInverted) {
}

FSlateBrush UBreakerActionWidget::GetWrappedIcon() const {
    return FSlateBrush{};
}

FSlateBrush UBreakerActionWidget::GetRawIcon() const {
    return FSlateBrush{};
}


