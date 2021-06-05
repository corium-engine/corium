project "corium"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	pchheader "crpch.h"
	pchsource "src/crpch.cpp"

	files { "src/**.h", "src/**.cpp" }

	includedirs {
		"src", "vendor/spdlog/include", "%{IncludeDirs.glad}", "%{IncludeDirs.glfw}"
	}

	links
	{
		"glad",
        "glfw",
		"opengl32.lib"
	}

	filter "system:windows"
		systemversion "latest"

		defines
		{
		}

	filter "configurations:Debug"
		defines "CR_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "CR_RELEASE"
		runtime "Release"
		optimize "on"