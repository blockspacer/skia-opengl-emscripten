#pragma once

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
  void handleTestEvent(const char *text);
};

#endif // ENABLE_SKIA
