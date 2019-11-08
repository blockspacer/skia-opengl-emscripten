// --- SETUP ---

/// \note define for easier debugging of that source file
// #define _ENABLE_DEBUG_PRINTF 1

/// \note include here all headers that may be used by `.cxtpl` templates
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>

// __has_include is currently supported by GCC and Clang. However GCC 4.9 may have issues and
// returns 1 for 'defined( __has_include )', while '__has_include' is actually not supported:
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=63662
#if __has_include(<filesystem>)
#include <filesystem>
#else
#include <experimental/filesystem>
#endif // __has_include

#if __has_include(<filesystem>)
namespace fs = std::filesystem;
#else
namespace fs = std::experimental::filesystem;
#endif // __has_include

// template params
#if defined(ENABLE_NATIVE_HTML)
#define TO_STR2(x) #x
#define TO_STR(x) TO_STR2(x)
/// \note WEBSITE_ROOT_URL must be string in quotes
static std::string g_local_file_prefix = WEBSITE_ROOT_URL;
#else
static std::string g_local_file_prefix = "file:///";
#endif // ENABLE_NATIVE_HTML

static std::string g_platform_name = PLATFORM_NAME;

enum class PlatformType {
  WIN,
  MAC,
  ANDROID,
  LINUX,
  WEBGL,
  HTML5
};

static PlatformType g_platform_type = PLATFORM_TYPE;

static std::string local_path_prefix(const std::string& filepath) {
#if defined(_ENABLE_DEBUG_PRINTF)
  printf("LOCAL_FILE prefix %s\n", g_local_file_prefix.c_str());
#endif // _ENABLE_DEBUG_PRINTF
  return g_local_file_prefix + filepath;
}

#define LOCAL_FILE local_path_prefix

/// \note cxtpl_output will be changed from another file (from Cling)
/// \todo remove that global variable: get `cxtpl_output` as cling::Value and pass it into onAfterTemplateGeneration
std::string cxtpl_output;

void writeToFile(const std::string& str, const std::string& file_path) {
/*#if defined(_ENABLE_DEBUG_PRINTF)
  printf("writeToFile %s %s\n", file_path.c_str(), str.substr(0, 100).c_str());
#endif // _ENABLE_DEBUG_PRINTF*/

    fs::create_directories(fs::path(file_path).parent_path());

    std::ofstream ofs(file_path);
    if(!ofs) {
        // TODO: better error reporting
        printf("ERROR: can`t write to file %s\n", file_path.c_str());
        /// \todo better error reporting
        return;
    }
    ofs << str;
    ofs.close();
    if(!ofs)    //bad() function will check for badbit
    {
        printf("ERROR: writing to file failed %s\n", file_path.c_str());
        /// \todo better error reporting
        return;
    }
}

/// \note cxtpl_output is empty here
void onBeforeTemplateGeneration(const std::string original_code,
  const std::string out_file)
{
  cxtpl_output = ""; ///\note clear old outputs
}

/// \note cxtpl_output is not empty here
void onAfterTemplateGeneration(const std::string original_code,
  const std::string out_file)
{
  writeToFile(cxtpl_output, out_file);
}
