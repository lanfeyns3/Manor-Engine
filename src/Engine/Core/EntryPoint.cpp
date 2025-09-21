#include "Application.h"
#include "Log.h"

int main() {
    Engine::InitLogging();
    Engine::Application* app = Engine::CreateApplication();
    app->Run();
    delete app;
}