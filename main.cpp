#ifdef __EMSCRIPTEN__
//#include <SDL.h>
//#include <SDL_opengles2.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengles2.h>
#include <SDL2/SDL_thread.h>
#include <SDL2/SDL_syswm.h>
#include <SDL2/SDL_video.h>
#include <emscripten.h>
#include <emscripten/html5.h>
//#include "SDL_opengles2.h"
//#include <SDL_opengles2_gl2.h>
//#include <SDL_opengles2_gl2ext.h>
// TODO
#define GL_RGBA8 0x8058
#else
#include "SDL2/SDL.h"
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <SDL_opengl_glext.h>
#endif

#include <SkStream.h>
#include <SkData.h>
#include <SkDocument.h>
#include <SkImage.h>
#include <SkMatrix.h>
#include <SkTypeface.h>
#include <SkColorPriv.h>
#include <SkGraphics.h>
#include <SkSurface.h>
#include <SkPath.h>
#include <SkMallocPixelRef.h>
#include <SkImageEncoder.h>
#include <SkColorFilter.h>
#include <SkColorMatrixFilter.h>
#include <SkPaint.h>
#include <SkCanvas.h>
#include <SkPath.h>


#include "SkCanvas.h"
#include "SkSurfaceCharacterization.h"
#include "GrBackendSurface.h"
#include "GrRenderTarget.h"
#include "GrTexture.h"
#include "GrRecordingContext.h"
#include "SkDeferredDisplayList.h"
#include "SkImagePriv.h"
#include "GrAHardwareBufferUtils.h"
#include "GrCaps.h"
#include "GrContextPriv.h"
#include "GrContextThreadSafeProxyPriv.h"
#include "GrRecordingContextPriv.h"
#include "GrRenderTargetContextPriv.h"
#include "GrRenderTargetProxyPriv.h"
#include "SkGpuDevice.h"
#include "SkImage_Base.h"
#include "SkImage_Gpu.h"
#include "SkSurface_Base.h"
#include "SkSurface_Gpu.h"

#include "gl/GrGLConfig.h"
#include "gl/GrGLInterface.h"
#include "gl/GrGLUtil.h"

#include "src/gpu/gl/GrGLDefines.h"

#include "GrBackendSurface.h"
#include "GrContext.h"
#include "SkCanvas.h"
#include "SkRandom.h"
#include "SkSurface.h"
#include "SkGraphics.h"
#include "SkSurface_Gpu.h"
#include "GrRenderTargetContext.h"

#include <stdio.h>
#include <string>

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <cmath>
#include <cassert>

GrContext* sContext = nullptr;
SkSurface* sSurface = nullptr;

static void init_skia(int w, int h) {
  GrContextOptions options;
  //options.fRequireDecodeDisableForSRGB = false;
  //options.fDisableGpuYUVConversion = false;
  sContext = GrContext::MakeGL(nullptr, options).release();

  GrGLFramebufferInfo framebufferInfo;
  framebufferInfo.fFBOID = 0; // assume default framebuffer
  // We are always using OpenGL and we use RGBA8 internal format for both RGBA and BGRA configs in OpenGL.
  //(replace line below with this one to enable correct color spaces) framebufferInfo.fFormat = GL_SRGB8_ALPHA8;
  framebufferInfo.fFormat = GL_RGBA8;

  SkColorType colorType;
  if (kRGBA_8888_GrPixelConfig == kSkia8888_GrPixelConfig) {
    colorType = kRGBA_8888_SkColorType;
  }
  else {
    colorType = kBGRA_8888_SkColorType;
  }
  GrBackendRenderTarget backendRenderTarget(w, h,
    0, // sample count
    0, // stencil bits
    framebufferInfo);

  //(replace line below with this one to enable correct color spaces) sSurface = SkSurface::MakeFromBackendRenderTarget(sContext, backendRenderTarget, kBottomLeft_GrSurfaceOrigin, colorType, SkColorSpace::MakeSRGB(), nullptr).release();
  sSurface = SkSurface::MakeFromBackendRenderTarget(sContext, backendRenderTarget, kBottomLeft_GrSurfaceOrigin, colorType, nullptr, nullptr).release();
  if (sSurface == nullptr) abort();
}

static void cleanup_skia() {
  delete sSurface;
  delete sContext;
}

/*        SkCanvas *canvas = nullptr;
        SkCanvas *cacheCanvas = nullptr;
        sk_sp<SkImage> cacheImage;

        sk_sp<SkSurface> surface;
        sk_sp<SkSurface> cacheSurface;

static SkCanvas* hardwareCanvas = nullptr;
static sk_sp<const GrGLInterface> interface;

        sk_sp<GrContext> grContext;*/

//static GLuint programObject;

// must be POT
static int width = 512;
// must be POT
static int height = 512;

//static GLint uniformTex;

static SDL_Window *window;
static SDL_GLContext context;

//Main loop flag
static bool quit = false;

//static GLuint vertexPosObject;

//Event handler
static SDL_Event e;

/*static GLfloat const kVertexData[] = {
    1.0f, 1.0f, 1.0f, 0.0f,
    -1.0f, 1.0f, 0.0f, 0.0f,
    1.0f, -1.0f, 1.0f, 1.0f,
    -1.0f, -1.0f, 0.0f, 1.0f
};*/

static sk_sp<SkSurface> MakeSurface(int width, int height) {
  return SkSurface::MakeRasterN32Premul(width, height);
}

/*SkCanvas *createCanvas(int width, int height) {
//    uint32_t windowFormat = SDL_GetWindowPixelFormat(window);
    int contextType;
    SDL_GL_GetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, &contextType);

    // Wrap the frame buffer object attached to the screen in a Skia render target so Skia can
    // render to it
    GrGLint buffer;
    GR_GL_GetIntegerv(interface.get(), GR_GL_FRAMEBUFFER_BINDING, &buffer);
    GrGLFramebufferInfo info;
    info.fFBOID = (GrGLuint) buffer;
    SkColorType colorType;

    uint32_t windowFormat = SDL_GetWindowPixelFormat(window);

    //SkDebugf("%s", SDL_GetPixelFormatName(windowFormat));
    // TODO: the windowFormat is never any of these?
    if (SDL_PIXELFORMAT_RGBA8888 == windowFormat) {
        info.fFormat = GR_GL_RGBA8;
        colorType = kRGBA_8888_SkColorType;
    } else {
        colorType = kBGRA_8888_SkColorType;
        if (SDL_GL_CONTEXT_PROFILE_ES == contextType) {
            info.fFormat = GR_GL_BGRA8;
        } else {
            // We assume the internal format is RGBA8 on desktop GL
            info.fFormat = GR_GL_RGBA8;
        }
    }

    int kStencilBits = 8;  // Skia needs 8 stencil bits
    int kMsaaSampleCount = 0; //4;
    GrBackendRenderTarget target(width, height, kMsaaSampleCount, kStencilBits, info);

    // setup SkSurface
    // To use distance field text, use commented out SkSurfaceProps instead
    // SkSurfaceProps props(SkSurfaceProps::kUseDeviceIndependentFonts_Flag,
    //                      SkSurfaceProps::kLegacyFontHost_InitType);
    SkSurfaceProps props(SkSurfaceProps::kLegacyFontHost_InitType);

    surface = SkSurface::MakeFromBackendRenderTarget(grContext.get(), target,
                                                     kBottomLeft_GrSurfaceOrigin,
                                                     colorType, nullptr, &props);

//    auto imageInfo = SkImageInfo::MakeN32Premul(width, height);
////    surface = SkSurface::SkSurface::MakeRaster(imageInfo);
//    surface = SkSurface::SkSurface::MakeR(grContext.get(), SkBudgeted::kNo, imageInfo);

    hardwareCanvas = surface->getCanvas();
    if (!hardwareCanvas) {
        throw std::runtime_error("Could not create canvas");
    }

    hardwareCanvas->clear(0xffffffff);
    hardwareCanvas->flush();

//    cacheSurface = SkSurface::MakeRenderTarget(hardwareCanvas->getGrContext(), SkBudgeted::kNo,
//                                               hardwareCanvas->imageInfo());
//    cacheCanvas = cacheSurface->getCanvas();

    return hardwareCanvas;
}*/


class MyView
{

public:
    SkPoint m_pos = SkPoint::Make(100, 100);
    SkPoint m_prev = SkPoint::Make(110, 110);
    SkColor m_color = SK_ColorDKGRAY;
    SkScalar m_size = 200;

    //sk_sp<SkSurface> m_surface;

    void onDraw(SkCanvas* canvas)
    {
        if (!canvas->getGrContext()) {
            return;
        }

        SkPaint paint;
        paint.setAlpha(255);
        paint.setAntiAlias(true);
        paint.setColor(m_color);
        canvas->drawCircle(m_pos.x(), m_pos.y(), m_size, paint);

        canvas->drawLine(m_pos.x(), m_pos.y(), m_prev.x(), m_prev.y(), paint);
    }
    MyView(SkColor color, SkScalar size)
        : m_color(color)
        , m_size(size)
    {
    }
};

static MyView* myView = nullptr;

GLuint programObject;

GLuint LoadShader(GLenum type, const char *shaderSrc)
{
  GLuint shader;
  GLint compiled;

  shader = glCreateShader(type);
  if (shader == 0)
    return 0;

  glShaderSource(shader, 1, &shaderSrc, NULL);
  glCompileShader(shader);
  glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled);
  if (!compiled)
  {
    GLint infoLen = 0;
    glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &infoLen);
    if (infoLen > 1)
    {
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

int Init()
{



  char vShaderStr[] =
    "attribute vec4 vPosition;    \n"
    "void main()                  \n"
    "{                            \n"
    "   gl_Position = vPosition;  \n"
    "}                            \n";

  char fShaderStr[] =
    "precision mediump float;\n"\
    "void main()                                  \n"
    "{                                            \n"
    "  gl_FragColor = vec4 ( 0.0, 0.0, 1.0, 1.0 );\n"
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
  glLinkProgram(programObject);
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

  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
  return GL_TRUE;
}

///
// Draw a triangle using the shader pair created in Init()
//
void Draw()
{
  GLfloat vVertices[] = { 0.0f,  0.5f, 0.0f,
    -0.5f, -0.5f, 0.0f,
    0.5f, -0.5f, 0.0f };

  // No clientside arrays, so do this in a webgl-friendly manner
  GLuint vertexPosObject;
  glGenBuffers(1, &vertexPosObject);
  glBindBuffer(GL_ARRAY_BUFFER, vertexPosObject);
  glBufferData(GL_ARRAY_BUFFER, 9 * 4, vVertices, GL_STATIC_DRAW);

  glViewport(0, 0, width, height);
  glClear(GL_COLOR_BUFFER_BIT);
  glUseProgram(programObject);

  glBindBuffer(GL_ARRAY_BUFFER, vertexPosObject);
  glVertexAttribPointer(0, 3, GL_FLOAT, 0, 0, 0);
  glEnableVertexAttribArray(0);

  glDrawArrays(GL_TRIANGLES, 0, 3);

  // Draw to the surface via its SkCanvas.
  // We don't manage this pointer's lifetime.
  SkCanvas* canvas = sSurface->getCanvas();
  SkPaint paint;
  paint.setColor(SK_ColorWHITE);
  canvas->drawPaint(paint);
  paint.setColor(SK_ColorBLUE);
  canvas->drawRect({100, 200, 300, 500}, paint);
  sContext->flush();
}

void mainLoop() {
#ifdef __EMSCRIPTEN__
  if (quit) emscripten_cancel_main_loop();
#endif
  while (SDL_PollEvent(&e) != 0)
  {
    //Render
    Draw();

    //Update screen
    SDL_GL_SwapWindow(window);
    if (e.type == SDL_QUIT)
    {
      quit = true;
    }
  }
}

int main(int argc, char** argv)
{
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0) {
    printf("Unable to initialize SDL: %s\n", SDL_GetError());
    return 1;
  }

  if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
  {
    printf("Warning: Linear texture filtering not enabled!");
  }

  window = SDL_CreateWindow("sdl_gl_read", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL);

  if (!window) {
    printf("Unable to create window: %s\n", SDL_GetError());
    return 1;
  }

#ifdef __EMSCRIPTEN__
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
#else
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
#endif

  context = SDL_GL_CreateContext(window);

#ifndef __EMSCRIPTEN__
  //Initialize GLEW
  glewExperimental = GL_TRUE;
  GLenum glewError = glewInit();
  if (glewError != GLEW_OK)
  {
    printf("Error initializing GLEW! %s\n", glewGetErrorString(glewError));
  }
#endif

  //Use Vsync
  if (SDL_GL_SetSwapInterval(1) < 0)
  {
    printf("Warning: Unable to set VSync! SDL Error: %s\n", SDL_GetError());
  }

  init_skia(width, height);

  myView = new MyView(SK_ColorRED, 200);

  Init();

#ifdef __EMSCRIPTEN__
  emscripten_set_main_loop(mainLoop, 0, 1);
#else
  while (!quit)
  {
    mainLoop();
  }
#endif

  cleanup_skia();

  SDL_DestroyWindow(window);
  window = NULL;

  //Quit SDL subsystems
  SDL_Quit();
  return 0;
}
