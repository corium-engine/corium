#ifndef WINDOW_H
#define WINDOW_H

#define DEF_WINDOW_HEIGHT 600
#define DEF_WINDOW_WIDTH 800

#include <GLFW/glfw3.h>
#include <string>

namespace corium
{
    class Window
    {
    private:
        // Window dimensions
        int height;
        int width;

        bool isFullscreen = false;

        const GLFWimage *windowIcon;

        std::string windowTitle;

    public:
        Window();
        ~Window();

        GLFWwindow *window;
        GLFWmonitor *monitor;
        const GLFWvidmode *mode;

        // Window instance creation
        void spawnWindow();       // Spawn the window instance
        void makeContextCurrent() // Make window context current
        {
            glfwMakeContextCurrent(window);
        };

        // Instance manipulation
        void setWindowSize(int width_, int height_) // Setter for window height and widths
        {
            height = height_;
            width = width_;
        };
        void setWindowIcon(GLFWimage *icon) // Setter for window icon
        {
            windowIcon = icon;
        };
        void setFullscreen() // Make window fullscreen
        {
            isFullscreen = true;
        };
    };
}

#endif