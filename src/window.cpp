#include "window.hpp"
#include <GLFW/glfw3.h>
#include <string>

using namespace corium;
using namespace std;

// Window constructor
Window::Window(int width_, int height_, string title, bool fullscreen)
{
    // Check if GLFW is initialized
    if (!glfwInit())
        exit(-1);

    if (fullscreen)
    {
        // Get primary monitor
        monitor = glfwGetPrimaryMonitor();
        mode = glfwGetVideoMode(monitor);

        // Set width and height to monitor size
        width = mode->width;
        height = mode->height;
    }
    else if (width_ != NULL && height_ != NULL)
    {
        // Use height parameter
        width = width_;
        height = height_;
    }

    // Create GLFW window
    window = glfwCreateWindow(width, height, title.c_str(), monitor, NULL);
    if (!window)
        exit(-1);
}

void Window::setWindowSizeLimits(int minWidth, int maxWidth, int minHeight, int maxHeight)
{
    glfwSetWindowSizeLimits(window, minWidth, minHeight, maxWidth, maxHeight);
}

void Window::setWindowIcon(int count, GLFWimage *icon_)
{
    if (icon_ != nullptr)
    {
        icon = icon_;
        glfwSetWindowIcon(window, 1, icon_);
    }
}

void Window::makeContextCurrent()
{
    glfwMakeContextCurrent(window);
}

Window::~Window()
{
    glfwTerminate();
}