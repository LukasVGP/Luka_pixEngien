#pragma once

#include "RenderTarget.h"

enum class EffectType
{
    None,
    MonoChrome,
    Invert,
    Mirror,
    Blur,
    Sepia,
    Wave,
    FishEye,
    ColorMaskR,
    ColorMaskG,
    ColorMaskB
};

class PostProcessing final
{
public:
    static PostProcessing* Get();

    void Initialize(int width, int height, const X::Color& clearColor = X::Colors::Black);

    void OnNewFrame();

    void SetEffectType(EffectType effectType);

    void BeginDraw();

    bool Draw(int x, int y, const X::Color& color);

    void EndDraw(); // Where we will do the effects

private:
    void DrawPixel(int x, int y);

    bool mDrawBegin = false;
    X::Color mClearColor = X::Colors::Black;
    RenderTarget mRenderTarget;
    EffectType mEffectType = EffectType::None;
};