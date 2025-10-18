#ifndef ENGINE_ResourceManager
#define ENGINE_ResourceManager

#pragma once
#include "Resource.h"
#include "../Utils/FileStream.h"
#include "Log.h"

#include <unordered_map>
#include <expected>

namespace Engine
{
    class ResourceManager
    {
    public:
        std::expected<Resource*,bool> LoadAsset(const char* name, const char* path);
        std::expected<Resource*,bool> GetAsset(const char* name);
    private:
        std::unordered_map<const char*,Resource*> m_resources;
    };
} // namespace Engine


#endif