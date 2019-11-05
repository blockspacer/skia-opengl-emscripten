// --- SETUP ---

#include <string>
#include <cstdio>
#include <fstream>

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
static std::string g_local_file_prefix = "";
#else
static std::string g_local_file_prefix = "file:///";
#endif

static std::string LOCAL_FILE(const std::string& filepath) {
  return g_local_file_prefix + filepath;
}

/// \note cxtpl_output will be changed from another file (from Cling)
std::string cxtpl_output;

void writeToFile(const std::string& str, const std::string& file_path) {
    fs::create_directories(fs::path(file_path).parent_path());

    std::ofstream ofs(file_path);
    if(!ofs) {
        // TODO: better error reporting
        printf("ERROR: can`t write to file %s\n", file_path.c_str());
        return;
    }
    ofs << str;
    ofs.close();
    if(!ofs)    //bad() function will check for badbit
    {
        printf("ERROR: writing to file failed %s\n", file_path.c_str());
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
