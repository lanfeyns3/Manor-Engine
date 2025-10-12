#pragma once
#include "Core/Log.h"
#include "Core/Layer.h"

#include "../Test.h"

class EditorLayer : public Engine::Layer
{
public:
    EditorLayer() = default;
    void OnAdded() {
        CONSOLE_LOG_INFO("Layer Added");
    };

    void OnEvent(int id,std::weak_ptr<Engine::Events::Event> event) {
        auto eventLock = event.lock();
        switch (id)
        {
        case 1: {
            auto TestEvent = std::dynamic_pointer_cast<Events::Test>(eventLock);
            CONSOLE_LOG_DEBUG(TestEvent->data);
            break;
        }    
        
        default:
            CONSOLE_LOG_ERROR("Event isnt known to EditorLayer");
            CONSOLE_LOG_ERROR(id);
            break;
        }
    };
};