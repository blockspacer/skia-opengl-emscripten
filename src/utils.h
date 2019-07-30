#pragma once

// TODO https://kapadia.github.io/emscripten/2013/09/13/emscripten-pointers-and-pointers.html
// TODO https://github.com/bakerstu/openmrn/blob/5f6bb8934fe13b2897d5f52ec6b358bd87dd886a/src/utils/FileUtils.cxx#L44
int read_file(const char* fPath, char*& fileString, long int& fsize, const bool closeString);

bool isDebugPeriodReached();

bool incDebugPeriodicCounter();

void DCHECK_RUNS_IN_THEAD_ON_MT_WASM();

//// must be POT
//int width = 1920;//1024;//512;
constexpr int DRAW_SURFACE_WIDTH = 1920;
//// must be POT
//int height = 1080;//1080;//4096;//10000;//1200;//1024;//512;
constexpr int DRAW_SURFACE_HEIGHT = 1080;

//int drawingBufferWidth = 1920;
extern int DRAW_BUFFER_WIDTH;
//int drawingBufferHeight = 1080;
extern int DRAW_BUFFER_HEIGHT;

//const int maxDrawingBufferWidth = 1920;
constexpr int MAX_DRAW_BUFFER_WIDTH = 1920;
//const int maxDrawingBufferHeight = 1080;
constexpr int MAX_DRAW_BUFFER_HEIGHT = 1080;

//int browser_width = width;//1920;
constexpr int BROWSER_WIDTH = DRAW_SURFACE_WIDTH;
//int browser_height = height;//10000;
constexpr int BROWSER_HEIGHT = DRAW_SURFACE_HEIGHT;
