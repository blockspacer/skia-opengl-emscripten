﻿from conans import ConanFile, CMake, tools, python_requires
import traceback
import os
import shutil

# conan runs the methods in this order:
# config_options(),
# configure(),
# requirements(),
# package_id(),
# build_requirements(),
# build_id(),
# system_requirements(),
# source(),
# imports(),
# build(),
# package(),
# package_info()

conan_build_helper = python_requires("conan_build_helper/[~=0.0]@conan/stable")

class skg_conan_project(conan_build_helper.CMakePackage):
    name = "skg"

    # Indicates License type of the packaged library
    # TODO (!!!)
    # license = "MIT"

    version = "master"

    # TODO (!!!)
    #url = "https://github.com/blockspacer/CXXCTP"

    description = "`skg` library"
    topics = ('c++')

    options = {
        "shared": [True, False],
        "debug": [True, False],
        "enable_tests": [True, False],
        "enable_sanitizers": [True, False],
        "enable_cobalt": [True, False],
        "enable_web_pthreads": [True, False],
        "use_system_zlib": [True, False]
    }

    default_options = (
        "shared=False",
        "debug=False",
        "enable_tests=False",
        "enable_sanitizers=False",
        "enable_cobalt=True",
        "enable_web_pthreads=True",
        "use_system_zlib=False"
        # build
        #"*:shared=False"
    )

    # Custom attributes for Bincrafters recipe conventions
    _source_subfolder = "."
    _build_subfolder = "build_subfolder"

    # NOTE: no cmake_find_package due to custom FindXXX.cmake
    generators = "cmake", "cmake_paths", "virtualenv"

    # Packages the license for the conanfile.py
    #exports = ["LICENSE.md"]

    # If the source code is going to be in the same repo as the Conan recipe,
    # there is no need to define a `source` method. The source folder can be
    # defined like this
    exports_sources = ("LICENSE", "*.md", "include/*", "src/*",
                       "cmake/*", "CMakeLists.txt", "tests/*", "benchmarks/*",
                       "scripts/*", "tools/*", "codegen/*", "assets/*",
                       "docs/*", "licenses/*", "patches/*", "resources/*",
                       "submodules/*", "thirdparty/*", "third-party/*",
                       "base/*")

    settings = "os", "compiler", "build_type", "arch"

    #def source(self):
    #  url = "https://github.com/....."
    #  self.run("git clone %s ......." % url)

    def configure(self):
        if self.settings.os == "Emscripten":
           self.options.use_system_zlib = "True"

    def build_requirements(self):
        self.build_requires("cmake_platform_detection/master@conan/stable")
        self.build_requires("cmake_build_options/master@conan/stable")

        if self.options.enable_tests:
            self.build_requires("catch2/[>=2.1.0]@bincrafters/stable")
            self.build_requires("gtest/[>=1.8.0]@bincrafters/stable")
            self.build_requires("FakeIt/[>=2.0.4]@gasuketsu/stable")

    def requirements(self):
        # NOTE: same as self.requires("glm/0.9.9.1@g-truc/stable")
        self.requires("cobalt_glm/0.9.9.1@conan/stable")

        if not self.options.use_system_zlib:
          self.requires("chromium_zlib/master@conan/stable")

        self.requires("chromium_libxml/master@conan/stable")

        if self.settings.os == "Linux":
            self.requires("chromium_libevent/master@conan/stable")
            self.requires("chromium_tcmalloc/master@conan/stable")
            self.requires("chromium_xdg_user_dirs/master@conan/stable")
            self.requires("chromium_xdg_mime/master@conan/stable")

        self.requires("chromium_build_util/master@conan/stable")
        self.requires("chromium_icu/master@conan/stable")
        self.requires("chromium_dynamic_annotations/master@conan/stable")
        self.requires("chromium_modp_b64/master@conan/stable")
        self.requires("chromium_compact_enc_det/master@conan/stable")
        self.requires("chromium_url/master@conan/stable")
        self.requires("chromium_base/master@conan/stable")

        if self.options.enable_cobalt:
          self.requires("cobalt_starboard_headers_only/master@conan/stable")
          self.requires("cobalt_starboard/master@conan/stable")
          self.requires("cobalt_nanobase/master@conan/stable")
          self.requires("cobalt_base/master@conan/stable")

    def _configure_cmake(self):
        cmake = CMake(self)
        cmake.parallel = True
        cmake.verbose = True

        if self.options.shared:
            cmake.definitions["BUILD_SHARED_LIBS"] = "ON"

        self.add_cmake_option(cmake, "ENABLE_SANITIZERS", self.options.enable_sanitizers)

        self.add_cmake_option(cmake, "ENABLE_TESTS", self.options.enable_tests)

        self.add_cmake_option(cmake, "USE_SYSTEM_ZLIB", self.options.use_system_zlib)

        self.add_cmake_option(cmake, "ENABLE_COBALT", self.options.enable_cobalt)

        self.add_cmake_option(cmake, "ENABLE_WEB_PTHREADS", self.options.enable_web_pthreads)

        cmake.configure(build_folder=self._build_subfolder)

        return cmake

    def package(self):
        self.copy(pattern="LICENSE", dst="licenses", src=self._source_subfolder)
        cmake = self._configure_cmake()
        cmake.install()

    def build(self):
        cmake = self._configure_cmake()
        if self.settings.compiler == 'gcc':
            cmake.definitions["CMAKE_C_COMPILER"] = "gcc-{}".format(
                self.settings.compiler.version)
            cmake.definitions["CMAKE_CXX_COMPILER"] = "g++-{}".format(
                self.settings.compiler.version)

        #cmake.definitions["CMAKE_TOOLCHAIN_FILE"] = 'conan_paths.cmake'

        # The CMakeLists.txt file must be in `source_folder`
        cmake.configure(source_folder=".")

        cpu_count = tools.cpu_count()
        self.output.info('Detected %s CPUs' % (cpu_count))

        # -j flag for parallel builds
        cmake.build(args=["--", "-j%s" % cpu_count])

        if self.options.enable_tests:
          self.output.info('Running tests')
          self.run('ctest --parallel %s' % (cpu_count))
          # TODO: use cmake.test()

    # Importing files copies files from the local store to your project.
    def imports(self):
        dest = os.getenv("CONAN_IMPORT_PATH", "bin")
        self.output.info("CONAN_IMPORT_PATH is ${CONAN_IMPORT_PATH}")
        self.copy("license*", dst=dest, ignore_case=True)
        self.copy("*.dll", dst=dest, src="bin")
        self.copy("*.so*", dst=dest, src="bin")
        self.copy("*.pdb", dst=dest, src="lib")
        self.copy("*.dylib*", dst=dest, src="lib")
        self.copy("*.lib*", dst=dest, src="lib")
        self.copy("*.a*", dst=dest, src="lib")

    # package_info() method specifies the list of
    # the necessary libraries, defines and flags
    # for different build configurations for the consumers of the package.
    # This is necessary as there is no possible way to extract this information
    # from the CMake install automatically.
    # For instance, you need to specify the lib directories, etc.
    def package_info(self):
        #self.cpp_info.libs = ["SKG"]

        self.cpp_info.includedirs = ["include"]
        self.cpp_info.libs = tools.collect_libs(self)
        self.cpp_info.libdirs = ["lib"]
        self.cpp_info.bindirs = ["bin"]
        self.env_info.LD_LIBRARY_PATH.append(
            os.path.join(self.package_folder, "lib"))
        self.env_info.PATH.append(os.path.join(self.package_folder, "bin"))
        for libpath in self.deps_cpp_info.lib_paths:
            self.env_info.LD_LIBRARY_PATH.append(libpath)

        # in linux we need to link also with these libs
        #if self.settings.os == "Linux":
        #    self.cpp_info.libs.extend(["pthread", "dl", "rt"])

        #self.cpp_info.libs = tools.collect_libs(self)
        #self.cpp_info.defines.append('PDFLIB_DLL')

