#include <GLFW/glfw3.h>

#include "corium.hpp"

using namespace corium;

int Core::initialize()
{
    return glfwInit();
}

void Core::terminate()
{
    glfwTerminate();
}