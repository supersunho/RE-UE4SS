package("polyhook_2")

    add_urls("https://github.com/stevemk14ebr/PolyHook_2_0.git")
    -- local version = os.iorun("git rev-list --count HEAD"):trim()
    -- git rev-list --count HEAD ==> 593 ==> 0.0.593
    add_versions("v0.0.593", "19e7cec8cce4a0068f6db04b6d3680c078183002") 


    set_sourcedir(os.scriptdir())
    
    add_deps("cmake", "zydis", "zycore")

    on_install(function (package)
        local configs = {}
        -- patch
        local patch_src = path.join(os.scriptdir(), "for-arm64.patch")
        local patch_dest = path.join(package:cachedir(), "source", "polyhook_2")
        os.cp(patch_src, patch_dest)
        print(path.join(patch_dest, "for-arm64.patch"))
        -- add_patches("v0.0.593", path.join(patch_dest, "for-arm64.patch"))
        -- /usr/bin/git apply --reject --ignore-whitespace /tmp/.xmake0/250124/patches/polyhook_2/v0.0.593/for-arm64.patch
        os.cd(patch_dest)
        os.vrun("/usr/bin/git apply --reject --ignore-whitespace %s", path.join(patch_dest, "for-arm64.patch"))
        -- Set CMake build types
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        -- Set CMake options for PolyHook 
        table.insert(configs, "-DCMAKE_INSTALL_PREFIX=" .. package:installdir())
        table.insert(configs, "-DPOLYHOOK_BUILD_SHARED_LIB=ON")
        -- table.insert(configs, "-DPOLYHOOK_BUILD_DLL=ON") 
        -- table.insert(configs, "-DPOLYHOOK_BUILD_SHARED_LIB=" .. (package:config("shared") and "ON" or "OFF"))
        -- table.insert(configs, "-DPOLYHOOK_USE_EXTERNAL_ZYDIS=ON") 
        -- table.insert(configs, "-DASMJIT_STATIC=" .. (package:config("shared") and "OFF" or "ON"))
        -- table.insert(configs, "-DPOLYHOOK_BUILD_STATIC_RUNTIME=OFF") 
        
        if is_plat("windows") then
            table.insert(configs, "-DZYDIS_INCLUDE_DIR=" .. package:dep("zydis"):installdir("include"))
            table.insert(configs, "-DZYCORE_INCLUDE_DIR=" .. package:dep("zycore"):installdir("include"))
            table.insert(configs, "-DZYCORE_LIBRARY=" .. package:dep("zycore"):installdir("lib/zycore.lib"))
            table.insert(configs, "-DZYDIS_LIBRARY=" .. package:dep("zydis"):installdir("lib/zydis.lib"))
        elseif is_plat("linux") then
            table.insert(configs, "-DZYDIS_INCLUDE_DIR=" .. package:dep("zydis"):installdir("include"))
            table.insert(configs, "-DZYCORE_INCLUDE_DIR=" .. package:dep("zycore"):installdir("include"))
            table.insert(configs, "-DZYCORE_LIBRARY=" .. package:dep("zycore"):installdir("lib/libzycore.a"))
            table.insert(configs, "-DZYDIS_LIBRARY=" .. package:dep("zydis"):installdir("lib/libzydis.a"))
            if is_arch("arm64") then
                -- table.insert(configs, "-DCMAKE_TOOLCHAIN_FILE=" .. path.join(os.scriptdir(), "toolchain.cmake")) 
                table.insert(configs, "-DCMAKE_POSITION_INDEPENDENT_CODE=ON") 
                
            end
        end
          
        import("package.tools.cmake").install(package, configs, { packagedeps = { "zycore", "zydis" } })
        print(package:get("links"))
        package:add("links", "PolyHook_2")
        package:add("links", "asmtk")
        package:add("links", "asmjit")
        print(package:get("links")) 
        -- os.cp(path.join(package:cachedir(), "source/polyhook_2/polyhook2"), package:installdir("include"))
    end)
package_end()