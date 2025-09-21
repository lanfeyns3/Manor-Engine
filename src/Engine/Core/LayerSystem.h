#ifndef ENGINE_LAYERSYSTEM
#define ENGINE_LAYERSYSTEM

#include "Layer.h"

#include <vector>
#include <memory>

namespace Engine {
    class LayerSystem
    {
    public:
        void AppendLayer();
    private:
        std::vector<std::unique_ptr<Layer>> m_layers;
    };
}
#endif