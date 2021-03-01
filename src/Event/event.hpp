#ifndef EVENT_H
#define EVENT_H

#include <GLFW/glfw3.h>

namespace corium
{
    class Event
    {
    public:
        Event();
        ~Event();

        void setFrambufferSizeCallback(GLFWwindow *, GLFWframebuffersizefun);
    };
}

#endif