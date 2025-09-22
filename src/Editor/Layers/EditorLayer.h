#pragma once
#include "Core/Log.h"
#include "Core/Layer.h"

class EditorLayer : public Engine::Layer
{
public:
    EditorLayer() = default;
    void OnAdded() {
        CONSOLE_LOG_INFO("Layer Added");
    };

    void OnEvent() {

    };
};