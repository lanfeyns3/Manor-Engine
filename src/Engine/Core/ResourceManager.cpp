#include "ResourceManager.h"

namespace Engine
{
    std::expected<Resource*,bool> ResourceManager::LoadAsset(const char *name, const char *path)
    {
        if (!m_resources.contains(name))
        {
            FileStream stream(path);
            auto data = stream.Read();
            if (data)
            {
                auto raw = *data;
                m_resources[name] = new Resource();
                m_resources[name]->data = new char[raw.size() + 1];
                std::memcpy(m_resources[name]->data,raw.c_str(),raw.size() + 1);
                return m_resources[name];
            }
        };
        return std::unexpected(false);
    }
    std::expected<Resource*,bool> ResourceManager::GetAsset(const char *name)
    {
        if (m_resources.contains(name))
            return m_resources[name];
        return std::unexpected(false);
    }
} // namespace Engine
