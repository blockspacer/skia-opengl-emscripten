from conans import ConanFile, CMake, tools
import traceback
import os
import shutil

class chromium_base_conan_project(ConanFile):
    name = "chromium_base"

    # Indicates License type of the packaged library
    # TODO (!!!)
    # license = "MIT"

    version = "master"

    # TODO (!!!)
    #url = "https://github.com/blockspacer/CXXCTP"

    description = "modified `base` library from chromium"
    topics = ('c++')

    options = {
        "enable_tests": [True, False],
        "enable_sanitizers": [True, False]
    }

    default_options = (
        "enable_tests=False",
        "enable_sanitizers=False"
        # build
        #"*:shared=False"
    )

    generators = 'cmake_find_package', "cmake", "cmake_paths"

    # Packages the license for the conanfile.py
    #exports = ["LICENSE.md"]
    exports_sources = ("LICENSE", "README.md", "include/*", "src/*",
                       "cmake/*", "CMakeLists.txt", "tests/*", "benchmarks/*",
                       "scripts/*")

    settings = "os", "compiler", "build_type", "arch"

    def requirements(self):
        if self.options.enable_tests:
            self.requires("catch2/[>=2.1.0]@bincrafters/stable")
            self.requires("gtest/[>=1.8.0]@bincrafters/stable")
            self.requires("FakeIt/[>=2.0.4]@gasuketsu/stable")

    def package(self):
        cmake = CMake(self)
        cmake.install()

    def build(self):
        cmake = CMake(self)
        if self.settings.compiler == 'gcc':
            cmake.definitions["CMAKE_C_COMPILER"] = "gcc-{}".format(
                self.settings.compiler.version)
            cmake.definitions["CMAKE_CXX_COMPILER"] = "g++-{}".format(
                self.settings.compiler.version)

        cmake.definitions["ENABLE_SANITIZERS"] = 'ON'
        if not self.options.enable_sanitizers:
            cmake.definitions["ENABLE_SANITIZERS"] = 'OFF'

        cmake.definitions["ENABLE_TESTS"] = 'ON'
        if not self.options.enable_tests:
            cmake.definitions["ENABLE_TESTS"] = 'OFF'

        cmake.definitions["CMAKE_TOOLCHAIN_FILE"] = 'conan_paths.cmake'
        cmake.configure()
        cmake.build()
        #cmake.test()

    # Importing files copies files from the local store to your project.
    def imports(self):
        dest = os.getenv("CONAN_IMPORT_PATH", "bin")
        self.output.info("CONAN_IMPORT_PATH is ${CONAN_IMPORT_PATH}")
        self.copy("license*", dst=dest, ignore_case=True)
        self.copy("*.dll", dst=dest, src="bin")
        self.copy("*.so", dst=dest, src="bin")
        self.copy("*.dylib*", dst=dest, src="lib")
        self.copy("*.lib*", dst=dest, src="lib")
        self.copy("*.a*", dst=dest, src="lib")
