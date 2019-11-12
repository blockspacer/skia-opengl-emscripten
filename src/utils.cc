#include "utils.h"

#include "gl_helpers.h"

#include <cstdio>
#include <algorithm>
#include <cassert>
#include <functional>
#include <iostream>
#include <cstdlib>
#include <map>
#include <sstream>
#include <limits>
#include <cstdint>
#include <utility>
#include <cmath>
#include <memory>
#include <string>
#include <cstring>
#include <vector>
#include <cassert>

int DRAW_BUFFER_WIDTH = 1280;

int DRAW_BUFFER_HEIGHT = 720;

int DRAW_SURFACE_WIDTH = DRAW_BUFFER_WIDTH;

int DRAW_SURFACE_HEIGHT = DRAW_BUFFER_HEIGHT;

int MAX_DRAW_BUFFER_WIDTH = 16384;

int MAX_DRAW_BUFFER_HEIGHT = 16384;

int BROWSER_WIDTH = DRAW_SURFACE_WIDTH;

int BROWSER_HEIGHT = DRAW_SURFACE_HEIGHT;

// TODO https://kapadia.github.io/emscripten/2013/09/13/emscripten-pointers-and-pointers.html
// TODO https://github.com/bakerstu/openmrn/blob/5f6bb8934fe13b2897d5f52ec6b358bd87dd886a/src/utils/FileUtils.cxx#L44
int read_file(const char* fPath, char*& fileString, long int& fsize, const bool closeString)
{
    printf("main.cpp: read_file\n");

    if(!strlen(fPath)){
        printf("failed to open file with empty path\n");
        return 1;
    }
    FILE* f = fopen(fPath, "rb");
    if (!f) {
      printf("failed to open file: %s\n", fPath);
      return 1;
    }
    fseek(f, 0, SEEK_END);
    fsize = ftell(f);
    fseek(f, 0, SEEK_SET); /* same as rewind(f); */
    fileString = new char[static_cast<unsigned long>(fsize + 1)];
    fread(fileString, 1, static_cast<size_t>(fsize), f);
    fclose(f);
    if(closeString)
      fileString[fsize] = 0;
    return 0;
}

static int debugPeriodicCounter = 0;
static int debugPeriod = 100; // TODO: use time
/*#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__) \
  && defined(ENABLE_COBALT)
static bool hasLayout = false;
#endif*/

bool isDebugPeriodReached() {
    //DCHECK(debugPeriodicCounter >=0
    //       && debugPeriodicCounter <= debugPeriod);
    return debugPeriodicCounter == debugPeriod;
    ///return true;
}

bool incDebugPeriodicCounter() {
    debugPeriodicCounter++;
    if(debugPeriodicCounter > debugPeriod) {
        debugPeriodicCounter = 0;
        return false;
    }
    return true;
}

// TODO
/// \note debug-check only for MT WASM (MultiThreaded WebAssembly)
void DCHECK_RUNS_IN_THEAD_ON_MT_WASM() {
#if defined(OS_EMSCRIPTEN) && !defined(DISABLE_PTHREADS)
  if(emscripten_has_threading_support()) {
#if defined(ENABLE_BASE)
    DCHECK(!EM_IS_MAIN_THREAD());
#else
#if defined(NDEBUG)
    printf("!DCHECK_RUNS_IN_THEAD_ON_MT_WASM");
    std::exit(EXIT_FAILURE); // from <cstdlib>
#else
    assert(!EM_IS_MAIN_THREAD()); // from <cassert>
#endif
#endif // ENABLE_BASE
  }
#endif // defined(OS_EMSCRIPTEN) && !defined(DISABLE_PTHREADS)
}
