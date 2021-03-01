#include "window.hpp"
#include <GLFW/glfw3.h>
#include <string>

using namespace corium;
using namespace std;

void Window::spawnWindow()
{
    // Handle fullscreen
    if (isFullscreen)
    {
        // Get primary monitor
        monitor = glfwGetPrimaryMonitor();
        mode = glfwGetVideoMode(monitor);

        // Set width and height to monitor size
        width = mode->width;
        height = mode->height;
    }

    // Default values for width and height
    if (width == NULL)
        width = DEF_WINDOW_WIDTH;
    if (height == NULL)
        height = DEF_WINDOW_HEIGHT;

    // Create GLFW window
    window = glfwCreateWindow(width, height, windowTitle.c_str(), monitor, NULL);
    if (!window)
        exit(-1);

    // Set window icon
    if (windowIcon != nullptr)
        glfwSetWindowIcon(window, 1, windowIcon);
}