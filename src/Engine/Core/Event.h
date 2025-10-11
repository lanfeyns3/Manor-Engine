#ifndef ENGINE_Event
#define ENGINE_Event 

#pragma once
#include <stdint.h>

namespace Engine {
    namespace Events {
        struct Event
        {
            virtual int GetID() = 0;
        };
        
    }
}


#endif