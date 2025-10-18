#include "ResourceManager.h"

namespace Engine
{
    std::expected<Resource*,bool> ResourceManager::GetResource(const char *name)
    {
        if (m_resources.contains(name))
            return m_resources[name];
        return std::unexpected(false);
    }
} // namespace Engine
