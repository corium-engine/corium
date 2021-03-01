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

void Mouse::setCursorPosCallback(GLFWwindow *window, GLFWcursorposfun callback)
{
    glfwSetCursorPosCallback(window, callback);
}

void Mouse::inputMode(GLFWwindow *window) 
{
    if(glfwRawMouseMotionSupported()) {
        glfwSetInputMode(window, GLFW_RAW_MOUSE_MOTION, GLFW_TRUE);
    }
}

void Mouse::createCursor(int shape) 
{
    glfwCreateStandardCursor(shape);
}

// Create a cursor with custom image
void Mouse::createCustomCursor(const GLFWimage *image, int xhot, int yhot) 
{
    glfwCreateCursor(image, xhot, yhot);
}