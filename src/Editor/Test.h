#pragma once
#include "Core/Event.h"

namespace Events {
    struct Test : public Engine::Events::Event
    {
        int GetID() override
        {
            return 1;
        };
        uint32_t data = 0;
    };
    
}