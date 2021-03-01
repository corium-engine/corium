#ifndef CORIUM_H
#define CORIUM_H

namespace corium
{
    class Core
    {
    public:
        Core();
        ~Core();

        int initialize();
        void terminate();
        void setErrorCallback(GLFWerrorfun);
    };
}

#endif