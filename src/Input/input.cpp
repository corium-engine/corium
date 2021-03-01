#include <iostream>
#include <string>
#include <GLFW/glfw3.h>

#include "input.hpp"

using namespace std;
using namespace corium;

Input::Input() 
{

}

Keyboard::Keyboard()
{
    int keyCallback = glfwSetKeyCallback(window, key_callback);
    // Key States: GLFW_KEY_<KEYCODE>
    int state = glfwGetKey(window, GLFW_KEY_E);
}

Mouse::Mouse() 
{

}