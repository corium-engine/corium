#ifndef INPUT_H
#define INPUT_H

namespace corium
{
    class Keyboard
    {
    public:
        void setKeyCallback(GLFWwindow *, GLFWkeyfun);
    };

    class Mouse
    {
    public:
        void setCursorPosCallback(GLFWwindow *, GLFWcursorposfun);
        void inputMode(GLFWwindow *);
        void createCursor(int shape);
        void createCustomCursor(const GLFWimage *, int, int);
    };
}

#endif