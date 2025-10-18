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
        template<typename T>
        std::expected<Resource*,bool> LoadResource(const char* name, const char* path)
        {
            if (!m_resources.contains(name))
            {
                FileStream stream(path);
                auto data = stream.Read();
                if (data)
                {
                    auto raw = *data;
                    m_resources[name] = new T();
                    m_resources[name]->data = new char[raw.size() + 1];
                    std::memcpy(m_resources[name]->data,raw.c_str(),raw.size() + 1);
                    return m_resources[name];
                }
            };
            return std::unexpected(false);
        };
        std::expected<Resource*,bool> GetResource(const char* name);
    private:
        std::unordered_map<const char*,Resource*> m_resources;
    };
} // namespace Engine


#endif