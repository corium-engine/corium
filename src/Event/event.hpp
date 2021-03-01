#ifndef EVENT_H
#define EVENT_H

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