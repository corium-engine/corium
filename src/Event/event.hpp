#ifndef EVENT_H
#define EVENT_H

namespace corium
{
    class Event
    {
    public:
        void setFrambufferSizeCallback(GLFWwindow *, GLFWframebuffersizefun);
    };
}

#endif