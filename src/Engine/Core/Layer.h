#ifndef ENGINE_LAYER
#define ENGINE_LAYER

#pragma once
#include <memory>
#include "Event.h"

namespace Engine
{
    class Layer 
    {
    public:
        virtual void OnAdded() = 0;
        virtual void OnEvent(int id,std::weak_ptr<Events::Event> event)= 0;
    };
} // namespace Engine


#endif