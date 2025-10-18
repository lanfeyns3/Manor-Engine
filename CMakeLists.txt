cmake_minimum_required(VERSION "3.19.2")

set(CMAKE_CXX_STANDARD 23)

add_subdirectory("vendor/GLFW/")

project(GameEngine)

file(GLOB EDITORFILES src/Editor/**.cpp)
file(GLOB ENGINEFILES src/Engine/Core/**.cpp src/Engine/Utils/**.cpp)

add_library(Engine STATIC ${ENGINEFILES} vendor/glad/src/glad.c)
target_include_directories(Engine PUBLIC vendor/GLFW/include/ vendor/glad/include/ vendor/spdlog/include/)

find_package(OpenGL REQUIRED)
target_link_libraries(Engine PRIVATE glfw OpenGL::GL)

add_executable(Editor ${EDITORFILES})
target_link_libraries(Editor PRIVATE Engine)
target_include_directories(Editor PRIVATE src/Engine)

if (MSVC)
    target_compile_options(Engine PUBLIC /utf-8)
    target_compile_options(Editor PUBLIC /utf-8)
endif()