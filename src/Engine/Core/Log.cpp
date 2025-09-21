#include "Log.h"

void Engine::InitLogging()
{
    auto ENGINE = spdlog::stdout_color_mt("ENGINE");
    auto CONSOLE = spdlog::stdout_color_mt("CONSOLE");

    ENGINE->set_pattern("%^[%r]:[%n]: %v%$");
    CONSOLE->set_pattern("%^[%r]:[%n]: %v%$");

    spdlog::set_level(spdlog::level::debug);
}