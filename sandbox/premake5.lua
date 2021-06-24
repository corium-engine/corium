project "sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"


	files { "src/**.h", "src/**.cpp" }

	includedirs {
        "src",
		"../corium/src",
        "../corium/vendor/spdlog/include"
	}

	links
	{
		"corium"
	}

	filter "system:windows"
		systemversion "latest"