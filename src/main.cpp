// TODO https://github.com/blockspacer/sk_glft

// based on https://github.com/blockspacer/minos/blob/master/hello_world.cc

// see MakeFromBackendRenderTarget https://github.com/google/skia/blob/master/src/image/SkSurface_Gpu.cpp

// see https://github.com/google/skia/blob/81abc43e6f0b1a789e1bf116820c8ede68d778ab/example/SkiaSDLExample.cpp

// see https://github.com/marcj/Pesto

// see https://github.com/donghaoren/Allofw/blob/master/liballofw/src/graphics_skia.cpp

// see https://github.com/lijianegret/SkiaInGL/tree/f9ee0f81ab46243cfc331ac74b47c272969422f4/SkiaInGL/gl

// see https://github.com/google/skia/blob/master/example/SkiaSDLExample.cpp

// see https://github.com/WebKit/webkit/blob/master/Source/WebCore/rendering/RenderBoxModelObject.cpp#L741

#ifdef __EMSCRIPTEN__
//#include <SDL.h>
//#include <SDL_opengles2.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengles2.h>
//#include <SDL2/SDL_thread.h>
//#include <SDL2/SDL_syswm.h>
#include <SDL2/SDL_video.h>
#include <emscripten.h>
#include <emscripten/html5.h>
//#include "SDL_opengles2.h"
//#include <SDL_opengles2_gl2.h>
//#include <SDL_opengles2_gl2ext.h>
// TODO
//#define GL_RGBA8 0x8058
#include <GL/gl.h>
#include <GLES2/gl2.h>
#include <EGL/egl.h>
//#include <OpenGL/gl.h>
//#include <SDL/SDL_ttf.h>
//#include <SDL2/SDL_image.h>
#else
#include "SDL2/SDL.h"
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <SDL_opengl_glext.h>
#endif

// see https://lyceum-allotments.github.io/2016/06/emscripten-and-sdl-2-tutorial-part-1/
#include <SDL2/SDL_ttf.h>

#include <skia/include/core/SkCanvas.h>
#include <skia/include/core/SkSurface.h>
#include <skia/include/core/SkFont.h>

//#include <SkCanvas.h>
//#include <SkColorFilter.h>
//#include <SkColorMatrixFilter.h>
//#include <SkColorPriv.h>
//#include <SkData.h>
//#include <SkDocument.h>
//#include <SkGraphics.h>
//#include <SkImage.h>
//#include <SkImageEncoder.h>
//#include <SkMallocPixelRef.h>
//#include <SkMatrix.h>
//#include <SkPaint.h>
//#include <SkPath.h>
//#include <SkStream.h>
//#include <SkSurface.h>
//#include <SkTypeface.h>
//#include <SkFont.h>
//
//#include "SkBitmap.h"
//#include "SkPixelRef.h"
//#include "SkImageEncoder.h"
//#include "SkImageInfo.h"
//#include "SkColor.h"
//#include "SkColorPriv.h"
//#include "SkColorSpace.h"
//#include "SkHalf.h"
//#include "SkMatrix44.h"
//#include "SkUnPreMultiply.h"
//#include "SkStream.h"
//
//#include "GrContext.h"
//
//#include "GrTypes.h"
//#include "GrTypesPriv.h"
//#include "SkRefCnt.h"
//
//#include "GrContextPriv.h"
//#include "GrGpu.h"
////#include "src/gpu/GrDirectContext.h"
//#include "src/gpu/gl/GrGLGpu.h"
//
//#include "GrAHardwareBufferUtils.h"
//#include "GrBackendSurface.h"
//#include "GrCaps.h"
//#include "GrContextPriv.h"
//#include "GrContextThreadSafeProxyPriv.h"
//#include "GrRecordingContext.h"
//#include "GrRecordingContextPriv.h"
//#include "GrRenderTarget.h"
//#include "GrRenderTargetContextPriv.h"
//#include "GrRenderTargetProxyPriv.h"
//#include "GrTexture.h"
//#include "SkCanvas.h"
//#include "SkDeferredDisplayList.h"
//#include "SkGpuDevice.h"
//#include "SkImagePriv.h"
//#include "SkImage_Base.h"
//#include "SkImage_Gpu.h"
//#include "SkSurfaceCharacterization.h"
//#include "SkSurface_Base.h"
//#include "SkSurface_Gpu.h"
//
//#include "gl/GrGLConfig.h"
//#include "gl/GrGLInterface.h"
//#include "gl/GrGLUtil.h"
//
//#include "src/gpu/gl/GrGLDefines.h"
//
//#include "GrBackendSurface.h"
//#include "GrContext.h"
//#include "GrRenderTargetContext.h"
//#include "SkCanvas.h"
//#include "SkGraphics.h"
//#include "SkRandom.h"
//#include "SkSurface.h"
//#include "SkSurface_Gpu.h"

#include <stdio.h>
#include <string>

#include <algorithm>
#include <cassert>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

static const int kStencilBits = 8;  // Skia needs 8 stencil bits
static const int kMsaaSampleCount = 4;
static TTF_Font* ttfFont = nullptr;
static sk_sp<SkSurface> sRasterSurface;

static GLuint skia_texture = 0;

// must be POT
static int width = 512;
// must be POT
static int height = 512;

static GLint uniformTex;

static SDL_Window* window;
static SDL_GLContext glContext;

// Main loop flag
static bool quit = false;

static GLuint vertexPosObject;

// Event handler
static SDL_Event e;

class SkPainter;

static SkPainter* myView = nullptr;

static GLuint programObject;

static GLfloat const kVertexData[] = {
    1.0f, 1.0f, 1.0f, 0.0f,
    -1.0f, 1.0f, 0.0f, 0.0f,
    1.0f, -1.0f, 1.0f, 1.0f,
    -1.0f, -1.0f, 0.0f, 1.0f
};

// see https://github.com/flutter/engine/blob/master/shell/gpu/gpu_surface_gl.cc#L125
static void
init_skia(int w, int h)
{
  const SkImageInfo info = SkImageInfo::MakeN32(width, height, kPremul_SkAlphaType);
  sRasterSurface = SkSurface::MakeRaster(info);
  if (!sRasterSurface) {
      printf("failed to create raster surface\n");
  }
}

static void
cleanup_skia()
{
  if (sRasterSurface.get())
    delete sRasterSurface.release();
}

class SkPainter
{
public:
  SkPoint m_pos = SkPoint::Make(100, 100);
  SkPoint m_prev = SkPoint::Make(110, 110);
  SkColor m_color = SK_ColorDKGRAY;
  SkScalar m_size = 200;

  void onDraw(SkCanvas* canvas)
  {
    /*if (!canvas->getGrContext()) {
      return;
    }*/

    SkPaint paint;

    //paint.setAlpha(255);
    paint.setAntiAlias(true);
    paint.setColor(SK_ColorRED);
    canvas->drawCircle(m_pos.x(), m_pos.y(), m_size, paint);

    canvas->drawLine(m_pos.x(), m_pos.y(), m_prev.x(), m_prev.y(), paint);

    /*paint.setColor(SK_ColorGREEN);
    canvas->drawRect({ 0, 0, 50, 50 }, paint);

    paint.setColor(SK_ColorBLUE);
    canvas->drawRect({ 100, 200, 300, 500 }, paint);*/

    paint.setColor(SK_ColorBLACK);
    paint.setStyle(SkPaint::kFill_Style);
    SkFont font;//(nullptr, 24);//SkFont::kA8_MaskType, flags);
    canvas->drawString("Skia Test Skia Test Skia Test", 20, 32, font, paint);

    /*{
      const SkScalar sigma = 1.65f;
      const SkScalar xDrop = 2.0f;
      const SkScalar yDrop = 2.0f;
      const SkScalar x = 8.0f;
      const SkScalar y = 52.0f;
      const SkScalar textSize = 48.0f;
      const uint8_t blurAlpha = 127;
      auto blob = SkTextBlob::MakeFromString("Skia!", SkFont(nullptr, textSize));
      paint.setAntiAlias(true);
      SkPaint blur(paint);
      blur.setAlpha(blurAlpha);
      blur.setMaskFilter(SkMaskFilter::MakeBlur(kNormal_SkBlurStyle, sigma, 0));
      canvas->drawColor(SK_ColorWHITE);
      canvas->drawTextBlob(blob.get(), x + xDrop, y + yDrop, blur);
      canvas->drawTextBlob(blob.get(), x,         y,         paint);
    }*/
  }
  SkPainter(SkColor color, SkScalar size)
    : m_color(color)
    , m_size(size)
  {}
};

GLuint
LoadShader(GLenum type, const char* shaderSrc)
{
  GLuint shader;
  GLint compiled;

  shader = glCreateShader(type);
  if (shader == 0)
    return 0;

  glShaderSource(shader, 1, &shaderSrc, NULL);
  glCompileShader(shader);
  glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled);
  if (!compiled) {
    GLint infoLen = 0;
    glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &infoLen);
    if (infoLen > 1) {
      char* infoLog = static_cast<char*>(malloc(sizeof(char) * infoLen));
      glGetShaderInfoLog(shader, infoLen, NULL, infoLog);
      printf("Error compiling shader:\n%s\n", infoLog);
      free(infoLog);
    }
    glDeleteShader(shader);
    return 0;
  }
  return shader;
}

int
Init()
{
  char vShaderStr[] =
    "attribute vec2 vPosition;                \n"
    "attribute vec2 vUV;                \n"
    "varying vec2 v_texcoord;\n"
    //"uniform mat4 uMVPMatrix; \n"
    //"uniform float zoom;	\n"
    "void main()                              \n"
    "{                                        \n"
    "    v_texcoord = vUV;\n"
    "    gl_Position = vec4(vPosition, -1, 1);\n"
//		"   gl_Position = uMVPMatrix * vPosition;              \n"
//		"   gl_Position.x = gl_Position.x * zoom; \n"
//		"   gl_Position.y = gl_Position.y * zoom; \n"
    "}                                        \n";

  char fShaderStr[] =
    "precision mediump float;\n"
    "uniform sampler2D u_tex;\n"
    "varying vec2 v_texcoord;\n"
//		"uniform vec4 vColor;"
    "void main()                                  \n"
    "{                                            \n"
//		"  gl_FragColor = vColor;        \n"
    "    vec4 colour = texture2D(u_tex, v_texcoord);\n"
//    "    vec4 colour = vec4(100, 0, 100, 100);\n"
    "    colour.rgba = colour.rgba;\n"
    "    gl_FragColor = colour;\n"
    "}                                            \n";

  GLuint vertexShader;
  GLuint fragmentShader;
  GLint linked;

  vertexShader = LoadShader(GL_VERTEX_SHADER, vShaderStr);
  fragmentShader = LoadShader(GL_FRAGMENT_SHADER, fShaderStr);

  programObject = glCreateProgram();
  if (programObject == 0)
    return 0;

  glAttachShader(programObject, vertexShader);
  glAttachShader(programObject, fragmentShader);
  glBindAttribLocation(programObject, 0, "vPosition");
  glBindAttribLocation(programObject, 1, "vUV");
  glLinkProgram(programObject);
  uniformTex = glGetUniformLocation(programObject, "u_tex");
  glGetProgramiv(programObject, GL_LINK_STATUS, &linked);
  if (!linked)
  {
    GLint infoLen = 0;
    glGetProgramiv(programObject, GL_INFO_LOG_LENGTH, &infoLen);
    if (infoLen > 1)
    {
      char* infoLog = static_cast<char*>(malloc(sizeof(char) * infoLen));
      glGetProgramInfoLog(programObject, infoLen, NULL, infoLog);
      printf("Error linking program:\n%s\n", infoLog);
      free(infoLog);
    }
    glDeleteProgram(programObject);
    return GL_FALSE;
  }

    glGenTextures(1, &skia_texture);

  // No clientside arrays, so do this in a webgl-friendly manner
  glGenBuffers(1, &vertexPosObject);
  glBindBuffer(GL_ARRAY_BUFFER, vertexPosObject);
    glBufferData(GL_ARRAY_BUFFER, sizeof(kVertexData), kVertexData,
                 GL_STATIC_DRAW);
  glBindBuffer(GL_ARRAY_BUFFER, 0);

  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
  return GL_TRUE;
}

///
// Draw a triangle using the shader pair created in Init()
//
void
Draw()
{
  glViewport(0, 0, width, height);
  glClear(GL_COLOR_BUFFER_BIT);

  glUseProgram(programObject);
  glActiveTexture(GL_TEXTURE0);

  {
    // Draw to the surface via its SkCanvas.
    // We don't manage this pointer's lifetime.
    SkCanvas* canvas = sRasterSurface->getCanvas();

    canvas->clear(SkColorSetARGB(255, 255, 255, 255));

    myView->onDraw(canvas);

    sRasterSurface->flush();

    const sk_sp<SkImage> pImage = sRasterSurface->makeImageSnapshot();
    if (nullptr == pImage) {
      printf("can`t makeImageSnapshot\n");
    }

    SkPixmap pixmap;
    if (!pImage->peekPixels(&pixmap)) {
      printf("can`t peekPixels\n");
    }

    glBindTexture(GL_TEXTURE_2D, skia_texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, pixmap.width(), pixmap.height(), 0,
                 GL_RGBA, GL_UNSIGNED_BYTE, pixmap.addr());
  }

  glUniform1i(uniformTex, 0);

  glBindBuffer(GL_ARRAY_BUFFER, vertexPosObject);
  //
  glVertexAttribPointer(0,  2, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat),
                          NULL);
  glEnableVertexAttribArray(0);
  //
  glVertexAttribPointer(1,  2, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat),
                          (GLvoid*)(2 * sizeof(GLfloat)));
  glEnableVertexAttribArray(1);

  int w, h, fs;
#ifdef __EMSCRIPTEN__
  // see https://github.com/floooh/oryol/blob/master/code/Modules/Gfx/private/emsc/emscDisplayMgr.cc#L174
  emscripten_get_canvas_element_size("#canvas", &w, &h); //, &fs); // width, height, isFullscreen
#else
  w = width;
  h = height;
#endif
  float xs = (float)h / w;
  float ys = 1.0f;
  float mat[] = { xs, 0, 0, 0, 0, ys, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

 glBindBuffer(GL_ARRAY_BUFFER, 0);

    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);

}

void
mainLoop()
{
#ifdef __EMSCRIPTEN__
  if (quit) {
    printf("quitting main loop\n");
    emscripten_cancel_main_loop();
  }
#endif
  while (SDL_PollEvent(&e) != 0) {
    // Render
    Draw();

    // Update screen
    SDL_GL_SwapWindow(window);
    if (e.type == SDL_QUIT) {
      quit = true;
      printf("recieved quit signal\n");
    }
  }
}

int
main(int argc, char** argv)
{
#ifdef __EMSCRIPTEN__
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
#else
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
#endif

  SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
  SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 0);
  SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, kStencilBits);

  SDL_GL_SetAttribute(SDL_GL_ACCELERATED_VISUAL, 1);

  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS) != 0) {
    printf("Unable to initialize SDL: %s\n", SDL_GetError());
    return 1;
  }

  if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
    printf("Warning: Linear texture filtering not enabled!");
  }

  if (kMsaaSampleCount > 0) {
    SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, 1);
    SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, kMsaaSampleCount);
  }

  window = SDL_CreateWindow("skemgl",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            width,
                            height,
                            SDL_WINDOW_OPENGL);

  if (!window) {
    printf("Unable to create window: %s\n", SDL_GetError());
    return 1;
  }

  glContext = SDL_GL_CreateContext(window);
  if (!glContext) {
      printf("Error while SDL_GL_CreateContext %s\n", SDL_GetError());
      SDL_ClearError();
      return 0;
  }

#ifndef __EMSCRIPTEN__
  // Initialize GLEW
  glewExperimental = GL_TRUE;
  GLenum glewError = glewInit();
  if (glewError != GLEW_OK) {
    printf("Error initializing GLEW! %s\n", glewGetErrorString(glewError));
  }
#endif

  int success =  SDL_GL_MakeCurrent(window, glContext);
  if (success != 0) {
      printf("Error while SDL_GL_MakeCurrent %s\n", SDL_GetError());
      SDL_ClearError();
      return success;
  }

  glDisable(GL_DEPTH_TEST);
  glViewport(0, 0, (int) width, (int) height);
  glClearColor(1, 1, 1, 1);
  glClearStencil(0);
  glClear(GL_COLOR_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

  // Use Vsync
  if (SDL_GL_SetSwapInterval(1) < 0) {
    printf("Warning: Unable to set VSync! SDL Error: %s\n", SDL_GetError());
  }

  /*// Initialize PNG loading
  int imgFlags = IMG_INIT_PNG;
  if (!(IMG_Init(imgFlags) & imgFlags)) {
    printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
  }*/

  printf("Initializing fonts...\n");

  // Initialize SDL_ttf
  if (TTF_Init() == -1) {
    printf("SDL_ttf could not initialize! SDL_ttf Error: %s\n", TTF_GetError());
  }

  ttfFont = TTF_OpenFont("./resources/FreeSans.ttf", 30);
  if (ttfFont == nullptr) {
    printf("Failed to load lazy font! SDL_ttf Error: %s\n", TTF_GetError());
  }

  printf("Initializing subsystems...\n");

  Init();

  printf("Initializing skia...\n");

  init_skia(width, height);

  printf("Initializing skia view...\n");

  myView = new SkPainter(SK_ColorRED, 200);

#ifdef __EMSCRIPTEN__
  printf("running with __EMSCRIPTEN__\n");
  emscripten_set_main_loop(mainLoop, 0, 1);
#else
  printf("running with glew\n");
  while (!quit) {
    mainLoop();
  }
#endif

  printf("Running cleanup...\n");

  cleanup_skia();

  glDeleteTextures(1, &skia_texture);
  glDeleteBuffers(1, &vertexPosObject);

  if (glContext) {
    SDL_GL_DeleteContext(glContext);
  }

  if (ttfFont) {
    TTF_CloseFont(ttfFont);
    ttfFont = nullptr;
  }

  SDL_DestroyWindow(window);
  window = nullptr;

  // Quit SDL subsystems
  TTF_Quit();
  SDL_Quit();
  return 0;
}
