#ifndef ENGINE_LOGGING
#define ENGINE_LOGGING

#pragma once
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace Engine
{
    void InitLogging();
} // namespace Engine

#define ENGINE_LOG_TRACE(...)    spdlog::get("ENGINE")->trace(__VA_ARGS__)
#define ENGINE_LOG_DEBUG(...)    spdlog::get("ENGINE")->debug(__VA_ARGS__)
#define ENGINE_LOG_INFO(...)     spdlog::get("ENGINE")->info(__VA_ARGS__)
#define ENGINE_LOG_WARN(...)     spdlog::get("ENGINE")->warn(__VA_ARGS__)
#define ENGINE_LOG_ERROR(...)    spdlog::get("ENGINE")->error(__VA_ARGS__)
#define ENGINE_LOG_CRITICAL(...) spdlog::get("ENGINE")->critical(__VA_ARGS__)

#define CONSOLE_LOG_TRACE(...)    spdlog::get("CONSOLE")->trace(__VA_ARGS__)
#define CONSOLE_LOG_DEBUG(...)    spdlog::get("CONSOLE")->debug(__VA_ARGS__)
#define CONSOLE_LOG_INFO(...)     spdlog::get("CONSOLE")->info(__VA_ARGS__)
#define CONSOLE_LOG_WARN(...)     spdlog::get("CONSOLE")->warn(__VA_ARGS__)
#define CONSOLE_LOG_ERROR(...)    spdlog::get("CONSOLE")->error(__VA_ARGS__)
#define CONSOLE_LOG_CRITICAL(...) spdlog::get("CONSOLE")->critical(__VA_ARGS__)


#endif