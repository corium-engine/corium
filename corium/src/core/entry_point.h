#pragma once

namespace corium
{
    class Corium
    {
    public:
        virtual void loop() = 0;
        virtual void setup(int &argc, char **argv) = 0;
        inline void start(int &argc, char **argv)
        {
            setup(argc, argv);
            while (1)
                loop();
        }
    };
} // namespace corium
