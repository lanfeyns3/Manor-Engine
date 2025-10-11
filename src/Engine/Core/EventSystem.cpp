#include "EventSystem.h"

namespace Engine
{

    void EventSystem::AddEvent(std::shared_ptr<Events::Event> event)
    {
        m_events.push_back(event);
    }

    void EventSystem::Subscribe(Layer *&layer, uint32_t id)
    {
        m_layers[id].emplace_back(layer);
    }
    void EventSystem::Ping()
    {
        for (auto& event : m_events)
        {
            for (auto& layer : m_layers[event->GetID()])
            {
                layer->OnEvent();
            }
        }
        m_events.clear();
    }
}