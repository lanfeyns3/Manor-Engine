#ifndef ENGINE_APPLICATION
#define ENGINE_APPLICATION

#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdint.h>
#include <chrono>

#include "Log.h"
#include "LayerSystem.h"
#include "EventSystem.h"
#include "ResourceManager.h"

namespace Engine {

    struct AppSpecifications
    {
        uint16_t height,width;
        char* name;
    };
    

    class Application 
    {
    public:
        void CreateApp(AppSpecifications appSpecs);

        void Run();
    protected:
        LayerSystem m_layers;
        EventSystem m_events;
        ResourceManager m_resources;
    private:
        bool m_running = true;
        GLFWwindow* m_window;
    };

    Application* CreateApplication();
}

#endif