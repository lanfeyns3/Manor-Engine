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

        auto& layer = m_layers.AppendLayer<EditorLayer>();
        auto val = m_resources.LoadAsset("Test",".\\test.res");
        if (val)
        {
            auto data = *val;
            CONSOLE_LOG_INFO("Resource Value: {}",data->data);
        }
    }

};

Engine::Application* Engine::CreateApplication() {
    return new Editor;
}