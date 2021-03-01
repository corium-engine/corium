#ifndef INPUT_H
#define INPUT_H

namespace corium
{
    class Input
    {
    public:
        Input();
        ~Input();
    };

    class Keyboard
    {
    public:
        Keyboard();
        ~Keyboard();

        void setKeyCallback(GLFWwindow *, GLFWkeyfun);
    };

    class Mouse
    {
    public:
        Mouse();
        ~Mouse();
    };
}

#endif