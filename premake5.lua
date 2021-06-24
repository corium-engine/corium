include "dependencies.lua"

workspace "corium"
    location "build"
    architecture "x86_64"
    startproject "sandbox"

    configurations { "debug", "release" }


group "dependencies"
    include "corium/vendor/glad"
    include "corium/vendor/glfw"
group ""

include "corium"
include "sandbox"