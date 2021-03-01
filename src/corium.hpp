#ifndef CORIUM_H
#define CORIUM_H

#include <GLFW/glfw3.h>

namespace corium
{
    class Core
    {
    public:
        int initialize();
        void terminate();
    };
}

#endif
