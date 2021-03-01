#include <stdio.h>
#include <GLFW/glfw3.h>

#include "core.hpp"

using namespace corium;

int Core::initialize()
{
    return glfwInit();
}

void Core::terminate()
{
    glfwTerminate();
}

void Core::setErrorCallback(GLFWerrorfun FuncErrorCallback)
{
    glfwSetErrorCallback(FuncErrorCallback);
}