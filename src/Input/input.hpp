#ifndef INPUT_H
#define INPUT_H

namespace corium
{
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

        void setCursorPosCallback(GLFWwindow *, GLFWcursorposfun);
        void inputMode(GLFWwindow *);
        void createCursor(int shape);
        void createCustomCursor(const GLFWimage *, int, int);
    };
}

#endif