#include "Core/Application.h"
#include "Layers/EditorLayer.h"

#include "Core/LayerSystem.h"
#include "Test.h"

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
        auto testEvent = std::make_shared<Events::Test>();
        testEvent->data = 300;
        
        m_events.Subscribe(layer,1);
        m_events.AddEvent(testEvent);
    }

};

Engine::Application* Engine::CreateApplication() {
    return new Editor;
}