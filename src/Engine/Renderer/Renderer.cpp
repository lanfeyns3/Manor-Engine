#include "Renderer.h"

namespace Engine
{
    Renderer::Renderer(GraphicsAPI api)
    {
        ENGINE_LOG_TRACE("Selecting Graphics API");
        switch (api)
        {
        case GraphicsAPI::OpenGL:
            ENGINE_LOG_TRACE("Loading OpenGL");
            break;
        default:
            break;
        }
    }

} // namespace Engine
