#ifndef ENGINE_Renderer
#define ENGINE_Renderer

#pragma once
#include "../Core/Log.h"

namespace Engine
{
    enum GraphicsAPI
    {
        OpenGL
    };

    class Renderer
    {
    public:
        Renderer(GraphicsAPI api);
    };
} // namespace Engine


#endif