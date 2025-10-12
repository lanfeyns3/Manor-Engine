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
            int id = event->GetID();
            for (auto& layer : m_layers[id])
            {
                layer->OnEvent(id,event);
            }
        }
        m_events.clear();
    }
}