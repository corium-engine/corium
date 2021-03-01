#ifndef WINDOW_H
#define WINDOW_H

#include <GLFW/glfw3.h>
#include <string>

namespace corium
{
    class Window
    {
    private:
        // Window Dimensions
        int height;
        int width;

        int minWidth;
        int maxWidth;
        int minHeight;
        int maxHeight;

        // Window Position
        int positionX;
        int positionY;

        GLFWmonitor *monitor;
        const GLFWvidmode *mode;
        const GLFWimage *icon;

    public:
        std::string windowTitle;
        GLFWwindow *window;

        //void setWindowSize(int, int);
        void setWindowSizeLimits(int, int, int, int); // Setter for max-/minWidth and max-/minHeight
        void setWindowIcon(int, GLFWimage *);         // Setter for window icon
        void makeContextCurrent();                    // Make window context current

        Window(int, int, std::string, bool);
        ~Window();
    };
}

#endif