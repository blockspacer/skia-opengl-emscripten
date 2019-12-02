from conans import ConanFile, CMake, tools

class cobalt_glmConan(ConanFile):
    name = "cobalt_glm"
    version = "0.9.9.1"
    description = "OpenGL Mathematics (GLM)"
    license = "MIT"
    # url = "https://github.com/.../conan-glm"
    no_copy_source = True
    exports = ["Findcobalt_glm.cmake", "LICENSE.md"]

    # TODO: unused option
    options = {
        "shared": [True, False],
        "debug": [True, False],
        "enable_tests": [True, False]
    }

    default_options = (
        "shared=False",
        "debug=False",
        "enable_tests=False"
    )

    def source(self):
        # git = tools.Git(folder=".")
        # git.clone("https://github.com/g-truc/glm", "0.9.9.1")

        # NOTE: allows to use git settings from system, like http.sslVerify=false
        self.run("git clone https://github.com/g-truc/glm --branch 0.9.9.1 --depth 1")

    def package(self):
        self.copy("Findcobalt_glm.cmake", ".", ".")
        self.copy("*", dst="include/glm", src="glm/glm")

    def package_id(self):
        self.info.header_only()
