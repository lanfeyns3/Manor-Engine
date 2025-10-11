#include "Application.h"

namespace Engine
{
    void Application::CreateApp(AppSpecifications appSpecs)
    {
        if (!glfwInit())
        {
            ENGINE_LOG_CRITICAL("COULDNT INIT GLFW");
            return;
        }

        m_window = glfwCreateWindow(appSpecs.width,appSpecs.height,appSpecs.name,NULL,NULL);

        glfwMakeContextCurrent(m_window);

        if (!gladLoadGL()) {
            ENGINE_LOG_CRITICAL("COULDN'T INITIATED GLAD");
            return;
        }
    }

    void Application::Run() {
        while (m_running)
        {
            glfwPollEvents();
            m_events.Ping();

            if (glfwWindowShouldClose(m_window))
                break;

            glfwSwapBuffers(m_window);
        }
        
    }
} // namespace Engine
