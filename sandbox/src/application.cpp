#include <corium.h>
#include <iostream>

class SandboxApplication : public corium::Corium
{
    void setup(int &argc, char **argv) override
    {
        std::cout << "Corium got " << argc << " arguments: " << std::endl;
        std::cout << argv[0] << std::endl;
    }

    void loop() override
    {
        std::cout << "Da game loop" << std::endl;
        CR_LOG_ERROR("Help");
    }
};

int main(int argc, char **argv)
{
    SandboxApplication app;
    app.start(argc, argv);
    return EXIT_SUCCESS;
}