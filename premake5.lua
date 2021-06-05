include "dependencies.lua"

workspace "corium"
    location "build"
    architecture "x86_64"
    startproject "corium"

    configurations { "debug", "release" }


group "dependencies"
    include "corium/vendor/glad"
group ""

include "corium"