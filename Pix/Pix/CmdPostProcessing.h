#pragma once

#include "Command.h"

class CmdPostProcessingBeginDraw : public Command
{
public:
    const char* GetName() override
    {
        return "PostProcessingBeginDraw";
    }

    const char* GetDescription() override
    {
        return
            "PostProcessingBeginDraw()"
            "\n"
            "- Initiates render to the render target instead of the main screen.";
    }

    bool Execute(const std::vector<std::string>& params) override;
};

class CmdPostProcessingEndDraw : public Command
{
public:
    const char* GetName() override
    {
        return "PostProcessingEndDraw";
    }

    const char* GetDescription() override
    {
        return
            "PostProcessingEndDraw()"
            "\n"
            "- Draws the Render Target back to the main screen.\n"
            "- Applies set effects to the image.";
    }

    bool Execute(const std::vector<std::string>& params) override;
};

class CmdPostProcessingSetEffectType : public Command
{
public:
const char* GetName() override
    {
        return "PostProcessingSetEffectType";
    }

    const char* GetDescription() override
    {
        return
            "SetEffectType(effectType)"
            "\n"
            "- Sets the effect type to be applied to the image."
            "- None, Monochrome, Invert, Mirror, Blur,"
            "- ColorMaskR, ColorMaskG, ColorMaskB"
            "- Sepia, Wave, FishEye.";
    }

    bool Execute(const std::vector<std::string>& params) override;
};;