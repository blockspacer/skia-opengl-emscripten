// based on https://github.com/blockspacer/minos/blob/master/hello_world.cc

// see MakeFromBackendRenderTarget https://github.com/google/skia/blob/master/src/image/SkSurface_Gpu.cpp

// see https://github.com/google/skia/blob/81abc43e6f0b1a789e1bf116820c8ede68d778ab/example/SkiaSDLExample.cpp

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
#else
#include "SDL2/SDL.h"
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <SDL_opengl_glext.h>
#endif

#include <SkCanvas.h>
#include <SkColorFilter.h>
#include <SkColorMatrixFilter.h>
#include <SkColorPriv.h>
#include <SkData.h>
#include <SkDocument.h>
#include <SkGraphics.h>
#include <SkImage.h>
#include <SkImageEncoder.h>
#include <SkMallocPixelRef.h>
#include <SkMatrix.h>
#include <SkPaint.h>
#include <SkPath.h>
#include <SkStream.h>
#include <SkSurface.h>
#include <SkTypeface.h>

#include "GrContext.h"

#include "GrTypes.h"
#include "GrTypesPriv.h"
#include "SkRefCnt.h"

#include "GrContextPriv.h"
#include "GrGpu.h"
//#include "src/gpu/GrDirectContext.h"
#include "src/gpu/gl/GrGLGpu.h"

#include "GrAHardwareBufferUtils.h"
#include "GrBackendSurface.h"
#include "GrCaps.h"
#include "GrContextPriv.h"
#include "GrContextThreadSafeProxyPriv.h"
#include "GrRecordingContext.h"
#include "GrRecordingContextPriv.h"
#include "GrRenderTarget.h"
#include "GrRenderTargetContextPriv.h"
#include "GrRenderTargetProxyPriv.h"
#include "GrTexture.h"
#include "SkCanvas.h"
#include "SkDeferredDisplayList.h"
#include "SkGpuDevice.h"
#include "SkImagePriv.h"
#include "SkImage_Base.h"
#include "SkImage_Gpu.h"
#include "SkSurfaceCharacterization.h"
#include "SkSurface_Base.h"
#include "SkSurface_Gpu.h"

#include "gl/GrGLConfig.h"
#include "gl/GrGLInterface.h"
#include "gl/GrGLUtil.h"

#include "src/gpu/gl/GrGLDefines.h"

#include "GrBackendSurface.h"
#include "GrContext.h"
#include "GrRenderTargetContext.h"
#include "SkCanvas.h"
#include "SkGraphics.h"
#include "SkRandom.h"
#include "SkSurface.h"
#include "SkSurface_Gpu.h"

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
static const int kMsaaSampleCount = 0;//4;

//static sk_sp<GrContext> sContext = nullptr;
static GrContext* sContext = nullptr;
//static sk_sp<SkSurface> sSurface = nullptr;
static SkSurface* sSurface = nullptr;
//static sk_sp<const GrGLInterface> sInterface = nullptr;
//static const GrGLInterface* sInterface = nullptr;

/*        SkCanvas *canvas = nullptr;
        SkCanvas *cacheCanvas = nullptr;
        sk_sp<SkImage> cacheImage;

        sk_sp<SkSurface> surface;
        sk_sp<SkSurface> cacheSurface;

static SkCanvas* hardwareCanvas = nullptr;
static sk_sp<const GrGLInterface> interface;

        sk_sp<GrContext> grContext;*/

// static GLuint programObject;

// must be POT
static int width = 512;
// must be POT
static int height = 512;

// static GLint uniformTex;

static SDL_Window* window;
static SDL_GLContext glContext;

// Main loop flag
static bool quit = false;

// static GLuint vertexPosObject;

// Event handler
static SDL_Event e;

/*static GLfloat const kVertexData[] = {
    1.0f, 1.0f, 1.0f, 0.0f,
    -1.0f, 1.0f, 0.0f, 0.0f,
    1.0f, -1.0f, 1.0f, 1.0f,
    -1.0f, -1.0f, 0.0f, 1.0f
};*/

// see https://github.com/flutter/engine/blob/master/shell/gpu/gpu_surface_gl.cc#L125
static void
init_skia(int w, int h)
{
#ifdef __EMSCRIPTEN__
  sContext = GrContext::MakeGL(nullptr).release();
#else
  auto sInterface = GrGLMakeNativeInterface(); //sk_sp<const GrGLInterface>(GrGLCreateNativeInterface());
  if (sInterface == nullptr) {
    printf("Error while creating GrGLInterface\n");
    abort();
  }
  // Validates that the GrGLInterface supports its advertised standard. This means the necessary
  // function pointers have been initialized for both the GL version and any advertised
  // extensions.
  if (!sInterface->validate()) {
    printf("Error while validating GrGLInterface\n");
    abort();
  }

  GrGLint bufferID;
  GR_GL_GetIntegerv(sInterface.get(), GR_GL_FRAMEBUFFER_BINDING, &bufferID);

  GrContextOptions options;
  //options.fDisableDistanceFieldPaths = true;
  //options.fDisableCoverageCountingPaths = true;
  //options.fRequireDecodeDisableForSRGB = false;
  //options.fDisableGpuYUVConversion = false;
  //sContext = GrContext::Create(kOpenGL_GrBackend, (GrBackendContext)fInterface);
  sContext = GrContext::MakeGL(std::move(sInterface), options).release();
#endif

  //using GrBackend::kOpenGL_GrBackend;
  /*{
    sk_sp<GrContext> context(new GrDirectContext(kOpenGL_GrBackend));

    context->fGpu = GrGLGpu::Make(std::move(sInterface), options, context.get());
    if (!context->fGpu) {
        return nullptr;
    }

    context->fCaps = context->fGpu->refCaps();
    if (!context->init(options)) {
        return nullptr;
    }
  }*/

  //sContext = GrContext::MakeGL(sInterface).release();
  if (sContext == nullptr) {
    printf("Error while creating GrContext\n");
    abort();
  }
  //sContext = GrContext::MakeGL(kOpenGL_GrBackend, (GrBackendContext)interface.get());
  SkASSERT(sContext);
  //assert(sContext != nullptr);

  GrGLFramebufferInfo framebufferInfo;
#ifdef __EMSCRIPTEN__
  framebufferInfo.fFBOID = 0; // assume default framebuffer
#else
  framebufferInfo.fFBOID = static_cast<GrGLuint>(bufferID);
#endif
  // We are always using OpenGL and we use RGBA8 internal format for both RGBA
  // and BGRA configs in OpenGL.
  //(replace line below with this one to enable correct color spaces)
  //framebufferInfo.fFormat = GL_SRGB8_ALPHA8;
  //framebufferInfo.fFormat = GL_RGBA8;

  uint32_t windowFormat = SDL_GetWindowPixelFormat(window);
  int contextType;
  SDL_GL_GetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, &contextType);
  SkColorType colorType;

  if (SDL_PIXELFORMAT_RGBA8888 == windowFormat) {
      framebufferInfo.fFormat = GR_GL_RGBA8;
      colorType = kRGBA_8888_SkColorType;
  } else {
      colorType = kBGRA_8888_SkColorType;
      if (SDL_GL_CONTEXT_PROFILE_ES == contextType) {
          framebufferInfo.fFormat = GR_GL_BGRA8;
      } else {
          // We assume the internal format is RGBA8 on desktop GL
          framebufferInfo.fFormat = GR_GL_RGBA8;
      }
  }

    const SkImageInfo info = SkImageInfo::MakeN32(800, 600, kPremul_SkAlphaType);
    sSurface = SkSurface::MakeRenderTarget(sContext, SkBudgeted::kNo, info, 0,
                                                               kTopLeft_GrSurfaceOrigin,
                                                               nullptr, false).release();
    printf("gpuSurface %p\n", sSurface);
    if (!sSurface) {
        printf("failed to create gpu surface.");
    }

  /*GrBackendRenderTarget backendRenderTarget(w,
                                            h,
                                            kMsaaSampleCount, // sample count
                                            kStencilBits, // stencil bits
                                            framebufferInfo);

  //(replace line below with this one to enable correct color spaces) sSurface =
  //SkSurface::MakeFromBackendRenderTarget(sContext, backendRenderTarget,
  //kBottomLeft_GrSurfaceOrigin, colorType, SkColorSpace::MakeSRGB(),
  //nullptr).release();

  // setup SkSurface
  // To use distance field text, use commented out SkSurfaceProps instead
  // SkSurfaceProps props(SkSurfaceProps::kUseDeviceIndependentFonts_Flag,
  //                      SkSurfaceProps::kLegacyFontHost_InitType);
  SkSurfaceProps props(SkSurfaceProps::kLegacyFontHost_InitType);

  sSurface = SkSurface::MakeFromBackendRenderTarget((GrContext*)sContext,
                                                    backendRenderTarget,
                                                    kBottomLeft_GrSurfaceOrigin,
                                                    colorType,
                                                    nullptr,
                                                    //&props);
                                                    nullptr).release();
  if (sSurface == nullptr) {
    printf("Error while creating SkSurface\n");
    abort();
  }*/

  //SkCanvas* canvas = sSurface->getCanvas();
  //canvas->scale((float)dw/dm.w, (float)dh/dm.h);
}

static void
cleanup_skia()
{
  delete sSurface;
  //delete sSurface.release();
  delete sContext;
  //delete sContext.release();
}

static sk_sp<SkSurface>
MakeSurface(int width, int height)
{
  return SkSurface::MakeRasterN32Premul(width, height);
}

/*SkCanvas *createCanvas(int width, int height) {
//    uint32_t windowFormat = SDL_GetWindowPixelFormat(window);
    int contextType;
    SDL_GL_GetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, &contextType);

    // Wrap the frame buffer object attached to the screen in a Skia render
target so Skia can
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
    GrBackendRenderTarget target(width, height, kMsaaSampleCount, kStencilBits,
info);

    // setup SkSurface
    // To use distance field text, use commented out SkSurfaceProps instead
    // SkSurfaceProps props(SkSurfaceProps::kUseDeviceIndependentFonts_Flag,
    //                      SkSurfaceProps::kLegacyFontHost_InitType);
    SkSurfaceProps props(SkSurfaceProps::kLegacyFontHost_InitType);

    surface = SkSurface::MakeFromBackendRenderTarget(grContext.get(), target,
                                                     kBottomLeft_GrSurfaceOrigin,
                                                     colorType, nullptr,
&props);

//    auto imageInfo = SkImageInfo::MakeN32Premul(width, height);
////    surface = SkSurface::SkSurface::MakeRaster(imageInfo);
//    surface = SkSurface::SkSurface::MakeR(grContext.get(), SkBudgeted::kNo,
imageInfo);

    hardwareCanvas = surface->getCanvas();
    if (!hardwareCanvas) {
        throw std::runtime_error("Could not create canvas");
    }

    hardwareCanvas->clear(0xffffffff);
    hardwareCanvas->flush();

//    cacheSurface = SkSurface::MakeRenderTarget(hardwareCanvas->getGrContext(),
SkBudgeted::kNo,
//                                               hardwareCanvas->imageInfo());
//    cacheCanvas = cacheSurface->getCanvas();

    return hardwareCanvas;
}*/

class SkPainter
{
public:
  SkPoint m_pos = SkPoint::Make(100, 100);
  SkPoint m_prev = SkPoint::Make(110, 110);
  SkColor m_color = SK_ColorDKGRAY;
  SkScalar m_size = 200;

  // sk_sp<SkSurface> m_surface;

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

    paint.setColor(SK_ColorWHITE);
    canvas->drawPaint(paint);
    paint.setColor(SK_ColorBLUE);
    canvas->drawRect({ 100, 200, 300, 500 }, paint);

    //paint.setTextSize(32.0f);
    //paint.setColor(SK_ColorBLACK);
    //paint.setStyle(SkPaint::kFill_Style);
    //canvas->drawString("Skia Test", 20, 32, paint);

    /*const SkScalar sigma = 1.65f;
    const SkScalar xDrop = 2.0f;
    const SkScalar yDrop = 2.0f;
    const SkScalar x = 8.0f;
    const SkScalar y = 52.0f;
    const SkScalar textSize = 48.0f;
    const uint8_t blurAlpha = 127;
    auto blob = SkTextBlob::MakeFromString("Skia", SkFont(nullptr, textSize));
    paint.setAntiAlias(true);
    SkPaint blur(paint);
    blur.setAlpha(blurAlpha);
    blur.setMaskFilter(SkMaskFilter::MakeBlur(kNormal_SkBlurStyle, sigma, 0));
    canvas->drawColor(SK_ColorWHITE);
    canvas->drawTextBlob(blob.get(), x + xDrop, y + yDrop, blur);
    canvas->drawTextBlob(blob.get(), x,         y,         paint);*/
  }
  SkPainter(SkColor color, SkScalar size)
    : m_color(color)
    , m_size(size)
  {}
};

static SkPainter* myView = nullptr;

GLuint programObject;

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

  char vShaderStr[] = "attribute vec4 vPosition;    \n"
                      "void main()                  \n"
                      "{                            \n"
                      "   gl_Position = vPosition;  \n"
                      "}                            \n";

  char fShaderStr[] = "precision mediump float;\n"
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
  if (!linked) {
    GLint infoLen = 0;
    glGetProgramiv(programObject, GL_INFO_LOG_LENGTH, &infoLen);
    if (infoLen > 1) {
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
void
Draw()
{
  GLfloat vVertices[] = { 0.0f, 0.5f, 0.0f,  -0.5f, -0.5f,
                          0.0f, 0.5f, -0.5f, 0.0f };

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

  {
    // Draw to the surface via its SkCanvas.
    // We don't manage this pointer's lifetime.
    SkCanvas* canvas = sSurface->getCanvas();

    canvas->clear(SK_ColorWHITE);

    myView->onDraw(canvas);

    sContext->flush();
  }
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
  //SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
  //SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
  //SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);

  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
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

  //SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, 1);
  //SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, kMsaaSampleCount);

  window = SDL_CreateWindow("sdl_gl_read",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            width,
                            height,
                            SDL_WINDOW_OPENGL);

  if (!window) {
    printf("Unable to create window: %s\n", SDL_GetError());
    return 1;
  }

#ifdef __EMSCRIPTEN__
    EmscriptenWebGLContextAttributes attr;
    emscripten_webgl_init_context_attributes(&attr);
    attr.alpha = 1;
    attr.depth = attr.stencil = attr.antialias = attr.preserveDrawingBuffer = attr.preferLowPowerToHighPerformance = attr.failIfMajorPerformanceCaveat = 0;
    attr.enableExtensionsByDefault = 1;
    //attr.premultipliedAlpha = 0;
    //attr.majorVersion = 1;
    //attr.minorVersion = 0;
    EMSCRIPTEN_WEBGL_CONTEXT_HANDLE ctx = emscripten_webgl_create_context(0, &attr);
    printf("create webgl context %d\n", ctx);
    if (ctx < 0) {
        printf("failed to create webgl context %d\n", ctx);
    }
    EMSCRIPTEN_RESULT r = emscripten_webgl_make_context_current(ctx);
    printf("make webgl current %d\n", r);
    if (r < 0) {
        printf("failed to make webgl current %d\n", r);
    }
#else

  glContext = SDL_GL_CreateContext(window);
  if (!glContext) {
      printf("Error while SDL_GL_CreateContext %s\n", SDL_GetError());
      SDL_ClearError();
      return 0;
  }

  // Initialize GLEW
  glewExperimental = GL_TRUE;
  GLenum glewError = glewInit();
  if (glewError != GLEW_OK) {
    printf("Error initializing GLEW! %s\n", glewGetErrorString(glewError));
  }

  int success =  SDL_GL_MakeCurrent(window, glContext);
  if (success != 0) {
      printf("Error while SDL_GL_MakeCurrent %s\n", SDL_GetError());
      SDL_ClearError();
      return success;
  }
#endif

  glDisable(GL_DEPTH_TEST);
  glViewport(0, 0, (int) width, (int) height);
  glClearColor(1, 1, 1, 1);
  glClearStencil(0);
  glClear(GL_COLOR_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

  // Use Vsync
  if (SDL_GL_SetSwapInterval(1) < 0) {
    printf("Warning: Unable to set VSync! SDL Error: %s\n", SDL_GetError());
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

  if (glContext) {
    SDL_GL_DeleteContext(glContext);
  }

  SDL_DestroyWindow(window);
  window = nullptr;

  // Quit SDL subsystems
  SDL_Quit();
  return 0;
}
