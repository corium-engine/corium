#include <GLFW/glfw3.h>

#include "event.hpp"

using namespace corium;

void Event::setFrambufferSizeCallback(GLFWwindow *window, GLFWframebuffersizefun callback) 
{
    glfwSetFramebufferSizeCallback(window, callback);
}