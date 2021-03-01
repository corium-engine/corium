#include <iostream>
#include <string>
#include <GLFW/glfw3.h>

using namespace std;

namespace corium 
{
    class input {

    };

    class Keyboard 
    {
        int keyCallback = glfwSetKeyCallback(window, key_callback);
        // Key States: GLFW_KEY_<KEYCODE>
        int state = glfwGetKey(window, GLFW_KEY_E);

    };

    class Mouse
    {
        
    };
}