#ifndef ENGINE_EventSystem
#define ENGINE_EventSystem

#pragma once
#include "Event.h"
#include "Layer.h"

#include <vector>
#include <memory>
#include <unordered_map>

namespace Engine {
    class EventSystem
    {
    public:
        void AddEvent(std::shared_ptr<Events::Event> event);
        void Subscribe(Layer*& layer, uint32_t id);
        void Ping();
        
    private:
        std::vector<std::shared_ptr<Events::Event>> m_events;
        std::unordered_map<uint32_t,std::vector<std::shared_ptr<Layer>>> m_layers;
    };
}

#endif