#ifndef ENGINE_LAYERSYSTEM
#define ENGINE_LAYERSYSTEM

#include "Layer.h"

#include <vector>
#include <memory>

namespace Engine {
    class LayerSystem
    {
    public:
        template<typename T>
        void AppendLayer() {
            m_layers.emplace_back(new T());
            m_layers.back()->OnAdded();
        }
    private:
        std::vector<Layer*> m_layers;
    };
}
#endif