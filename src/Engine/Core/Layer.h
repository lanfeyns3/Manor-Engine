#ifndef ENGINE_LAYER
#define ENGINE_LAYER

namespace Engine
{
    class Layer 
    {
    public:
        virtual void OnAdded() = 0;
        virtual void OnEvent() = 0;
    };
} // namespace Engine


#endif