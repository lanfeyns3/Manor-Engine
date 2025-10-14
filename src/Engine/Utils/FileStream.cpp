#include "FileStream.h"

namespace Engine {
    FileStream::FileStream(const char *path)
        : m_path(path)
    {
    }

    std::expected<std::string, FileErrors> FileStream::Read()
    {
        std::fstream file = std::fstream(m_path);

        if (!file.is_open())
        {
            return std::unexpected(FileErrors::FileDoesntExist);
        }

        std::ostringstream ss;
        ss << file.rdbuf();

        return ss.str();
    }
}