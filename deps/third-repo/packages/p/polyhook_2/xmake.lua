package("polyhook_2")

    add_urls("https://github.com/stevemk14ebr/PolyHook_2_0.git")
    -- local version = os.iorun("git rev-list --count HEAD"):trim()
    -- git rev-list --count HEAD ==> 593 ==> 0.0.593
    add_versions("v0.0.593", "19e7cec8cce4a0068f6db04b6d3680c078183002") 
    add_patches("v0.0.593", path.join(os.scriptdir(), "for-arm64.patch"))

    set_sourcedir(os.scriptdir())
    
    add_deps("cmake", "zydis", "zycore")

    on_install(function (package)
        local configs = {}

        -- Set CMake Build types
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        -- Set CMake Options for PolyHook 
        table.insert(configs, "-DPOLYHOOK_BUILD_DLL=ON") 
        table.insert(configs, "-DPOLYHOOK_BUILD_SHARED_LIB=" .. (package:config("shared") and "ON" or "OFF"))
        table.insert(configs, "-DPOLYHOOK_USE_EXTERNAL_ZYDIS=ON") 
        table.insert(configs, "-DASMJIT_STATIC=" .. (package:config("shared") and "OFF" or "ON"))
        table.insert(configs, "-DPOLYHOOK_BUILD_STATIC_RUNTIME=OFF") 

        if package:is_plat("windows") then
            table.insert(configs, "-DZYDIS_INCLUDE_DIR=" .. package:dep("zydis"):installdir("include"))
            table.insert(configs, "-DZYCORE_INCLUDE_DIR=" .. package:dep("zycore"):installdir("include"))
            table.insert(configs, "-DZYCORE_LIBRARY=" .. package:dep("zycore"):installdir("lib/zycore.lib"))
            table.insert(configs, "-DZYDIS_LIBRARY=" .. package:dep("zydis"):installdir("lib/zydis.lib"))
        elseif package:is_plat("linux") then
            table.insert(configs, "-DZYDIS_INCLUDE_DIR=" .. package:dep("zydis"):installdir("include"))
            table.insert(configs, "-DZYCORE_INCLUDE_DIR=" .. package:dep("zycore"):installdir("include"))
            table.insert(configs, "-DZYCORE_LIBRARY=" .. package:dep("zycore"):installdir("lib/libzycore.a"))
            table.insert(configs, "-DZYDIS_LIBRARY=" .. package:dep("zydis"):installdir("lib/libzydis.a"))
        end
         
        -- Set MSVC Settings 
        if is_plat("windows") then
            local tmp_msvc = os.getenv("MSVC")
            os.setenv("MSVC", nil)  
            import("package.tools.cmake").install(package, configs)
            os.setenv("MSVC", tmp_msvc)  
        else
            import("package.tools.cmake").install(package, configs)
        end 

        print(package:get("links"))
        package:add("links", "PolyHook_2")
        package:add("links", "asmtk")
        package:add("links", "asmjit")
        print(package:get("links"))
    end)
package_end()