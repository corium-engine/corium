#include <stdio.h>
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

void Core::errorCallback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}