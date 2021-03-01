#include <iostream>
#include <string>
#include <GLFW/glfw3.h>

#include "input.hpp"

using namespace std;
using namespace corium;

void Keyboard::setKeyCallback(GLFWwindow *window, GLFWkeyfun callback)
{
    glfwSetKeyCallback(window, callback);
}
