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
        Layer*& AppendLayer() {
            m_layers.emplace_back(new T());
            m_layers.back()->OnAdded();
            return m_layers.back();
        }
    private:
        std::vector<Layer*> m_layers;
    };
}
#endif