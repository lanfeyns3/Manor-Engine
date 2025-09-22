#include "Core/Application.h"
#include "Layers/EditorLayer.h"

#include "Core/LayerSystem.h"

class Editor : public Engine::Application 
{
public:
    Editor() {

        Engine::AppSpecifications appSpecs;

        appSpecs.width = 1280;
        appSpecs.height = 720;
        appSpecs.name = (char*)"Editor";

        CreateApp(appSpecs);

        m_layers.AppendLayer<EditorLayer>();
    }

};

Engine::Application* Engine::CreateApplication() {
    return new Editor;
}