#pragma once

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
#include <SDL2/SDL.h>
#endif // defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)

#if !defined(ENABLE_BASE)
#define TO_STRING(s) #s
#define NOTREACHED(s)\
  { std::cout << "NOTREACHED\n"; }
#define CHECK(condition) \
  if (!(condition)) { std::cerr << TO_STRING(condition); exit(1); }
#define DCHECK(condition) \
  { CHECK(condition); }
#define DCHECK_LE(condition, val) \
  if (!(condition < val)) { std::cerr << TO_STRING(condition); exit(1); }
#endif // ENABLE_BASE

#if defined(ENABLE_SKIA)

class SkiaUiDemo {
 public:
  SkiaUiDemo();
  void animateUI();
  void resetAssets();
  void refreshUIDemo();
  void drawUIDemo();
  void loadUIAssets();
  void initUISkiaSurface(int w, int h);
  void prepareUIFonts();
  void drawTexture(const int texWidth, const int texHeight,
    const void* texData);
  void prepare_gl();
  void cleanup_gl();
  void cleanup_skia_ui();
  void initBlinkPlatform();
  void SetCursorScreenPoint(int x, int y);
  void handleTestEvent(const char *text);
#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  void handleSDLEvent(SDL_Event* e);
#endif // defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
};

#endif // ENABLE_SKIA
