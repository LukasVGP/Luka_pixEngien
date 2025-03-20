#pragma once

#include "Command.h"

class CmdBeginRayTracing : public Command
{
public:
    const char* GetName() override 
    { 
        return "BeginRayTracing"; 
    }

    const char* GetDescription() override
    {
        return "Begin ray tracing"; 
    }

    bool Execute(const std::vector<std::string>& params) override;
};

class CmdEndRayTracing : public Command
{
public:
    const char* GetName() override
    {
        return "EndRayTracing";
    }

    const char* GetDescription() override
    {
        return "End ray tracing";
    }

    bool Execute(const std::vector<std::string>& params) override;
};

class CmdRTSphere : public Command
{
public:
    const char* GetName() override
    {
        return "RTSphere";
    }

    const char* GetDescription() override
    {
        return "RTSphere(x, y, z, radius, r, g, b, ri)"
            "\n"
            "- Add a sphere to the ray tracing scene."
            "- Optional Refraction Index (ri).";
    }

    bool Execute(const std::vector<std::string>& params) override;
};

class CmdRTLight : public Command
{
public:
    const char* GetName() override
    {
        return "RTLight";
    }

    const char* GetDescription() override
    {
        return "RTLight(x, y, z, r, g, b)"
            "\n"
            "- Add a Light to the ray tracing scene.";
    }

    bool Execute(const std::vector<std::string>& params) override;
};
