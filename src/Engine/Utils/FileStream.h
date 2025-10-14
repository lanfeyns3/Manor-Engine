#ifndef ENGINE_FileStream
#define ENGINE_FileStream

#pragma once
#include <fstream>
#include <string>
#include <expected>
#include <sstream>

namespace Engine {
    enum FileErrors {
        FileDoesntExist,
    };

    class FileStream {
    public:
        FileStream(const char* path);

        std::expected<std::string,FileErrors> Read();
    private:
        const char* m_path;
    };
}

#endif