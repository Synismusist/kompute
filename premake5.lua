project "Kompute"
	kind "StaticLib"
	language "C++"
	cppdialect "C++20"
    staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"src/**.hpp", "src/**.cpp"
	}

	includedirs
	{  
		"src/include",
	   "%{IncludeDir.VulkanSDK}",
	   "../fmt/include", 
	   "../../Walnut/vendor/spdlog/include", 
	   "../../Logger/include",
	}
 
	links
	{
		"fmt",
		"Logger",
	}

	filter "system:windows"
		systemversion "latest"

	filter "system:linux"
		pic "On"
		systemversion "latest"

	filter "configurations:Debug"
		defines { "KOMPUTE_OPT_LOG_LEVEL_DISABLED" }
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines { "KOMPUTE_OPT_LOG_LEVEL_DISABLED","KOMPUTE_OPT_DISABLE_VK_DEBUG_LAYERS" }
		runtime "Release"
		optimize "on"

    filter "configurations:Dist"
		defines { "KOMPUTE_OPT_LOG_LEVEL_DISABLED","KOMPUTE_OPT_DISABLE_VK_DEBUG_LAYERS" }
		runtime "Release"
		optimize "on"
        symbols "off"
