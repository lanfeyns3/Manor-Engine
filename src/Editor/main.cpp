#include "Core/Application.h"

class Editor : public Engine::Application 
{
public:
    Editor() {

        Engine::AppSpecifications appSpecs;

        appSpecs.width = 1280;
        appSpecs.height = 720;
        appSpecs.name = (char*)"Editor";

        CreateApp(appSpecs);
    }

};

Engine::Application* Engine::CreateApplication() {
    return new Editor;
}