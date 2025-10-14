#ifndef ENGINE_OpenGLShaderResource
#define ENGINE_OpenGLShaderResource

#pragma once
#include "ShaderResource.h"
#include <glad/glad.h>

namespace Engine
{
    struct OpenGLShaderResource : public ShaderResource
    {
        OpenGLShaderResource(const char* path)
        {

        };
    };
    
}
#endif