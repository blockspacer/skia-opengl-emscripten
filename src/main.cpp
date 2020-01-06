// TODO https://github.com/blockspacer/sk_glft

// based on https://github.com/blockspacer/minos/blob/master/hello_world.cc

// see MakeFromBackendRenderTarget
// https://github.com/google/skia/blob/master/src/image/SkSurface_Gpu.cpp

// see
// https://github.com/google/skia/blob/81abc43e6f0b1a789e1bf116820c8ede68d778ab/example/SkiaSDLExample.cpp

// see https://github.com/marcj/Pesto

// see https://github.com/donghaoren/Allofw/blob/master/liballofw/src/graphics_skia.cpp

// see
// https://github.com/lijianegret/SkiaInGL/tree/f9ee0f81ab46243cfc331ac74b47c272969422f4/SkiaInGL/gl

// see https://github.com/google/skia/blob/master/example/SkiaSDLExample.cpp

// see
// https://github.com/WebKit/webkit/blob/master/Source/WebCore/rendering/RenderBoxModelObject.cpp#L741

//#define PRINT_GL_EXT 1

/// \note defined by CMAKE
//#define ENABLE_SKIA 1

/// \note defined by CMAKE
//#define ENABLE_OPENGL 1

/// \note defined by CMAKE
#if defined(ENABLE_SKIA)
// high quality: anialias, e.t.c.
//#define ENABLE_SKIA_HQ 1
#endif

/// \note defined by CMAKE
//#define ENABLE_BORINGSSL 1
#if defined(ENABLE_BORINGSSL) && !defined(ENABLE_BASE)
#warning "ENABLE_BORINGSSL requires BASE"
#undef ENABLE_BORINGSSL
#endif

/// \note defined by CMAKE
// #define ENABLE_BASE 1
//#undef ENABLE_BASE

/// \note defined by CMAKE
// #define ENABLE_WTF 1
//#undef ENABLE_WTF
#if defined(ENABLE_WTF) && !defined(ENABLE_BASE)
#error "requires BASE"
#endif

#if defined(ENABLE_SKIA) && defined(ENABLE_BLINK)
//#define ENABLE_GFX_GEOMETRY 1
#endif

#if defined(ENABLE_GFX_GEOMETRY) && !defined(ENABLE_BASE)
#warning "ENABLE_GFX_GEOMETRY requires BASE"
#undef ENABLE_GFX_GEOMETRY
#endif

//#define ENABLE_THREAD_TESTS 1
#if defined(ENABLE_THREAD_TESTS) && !defined(ENABLE_WTF)
#warning "ENABLE_THREAD_TESTS requires WTF"
#undef ENABLE_THREAD_TESTS
#endif

#if !defined(ENABLE_BASE)
#define DCHECK(x) \
    { \
        if(!(x)) { \
            printf("DCHECK failed at %s:%d:%s\n",  __FILE__, __LINE__, __func__); \
            abort(); \
        } \
    }
#endif

// see https://github.com/emscripten-core/emscripten/pull/8282
// see https://github.com/save7502/youkyoung/blob/master/Engine/Source/Runtime/OpenGLDrv/Private/HTML5/HTML5OpenGL.cpp#L5
// see https://github.com/emscripten-core/emscripten/issues/6009
// #define ENABLE_HTML5_SDL 1

// see https://github.com/emscripten-core/emscripten/pull/8430#issuecomment-486635898
// #define SKIA_GR_CONTEXT 1
#if SK_SUPPORT_GPU
#if defined(SKIA_GR_CONTEXT)
#error "SKIA_GR_CONTEXT requires SK_SUPPORT_GPU"
#endif // SKIA_GR_CONTEXT
#endif // SK_SUPPORT_GPU

/// \note defined by CMAKE
// #define ENABLE_SKOTTIE 1
#if defined(ENABLE_SKOTTIE) && !defined(ENABLE_SKIA)
#warning "ENABLE_SKOTTIE requires SKIA"
#undef ENABLE_SKOTTIE
#endif
//
#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__) \
  && defined(ENABLE_SKOTTIE)
#warning "TODO: PORT SKOTTIE & PTHREADS"
#endif

/// \note defined by CMAKE
// #define ENABLE_CUSTOM_FONTS 1
#if defined(ENABLE_CUSTOM_FONTS) && !defined(ENABLE_SKIA)
#warning "ENABLE_CUSTOM_FONTS requires SKIA"
#undef ENABLE_CUSTOM_FONTS
#endif
//
/// \note defined by CMAKE
// #define ENABLE_HARFBUZZ 1
#if defined(ENABLE_HARFBUZZ) && !defined(ENABLE_CUSTOM_FONTS)
#warning "ENABLE_HARFBUZZ requires CUSTOM_FONTS"
#undef ENABLE_HARFBUZZ
#endif
//
/// \note defined by CMAKE
// #define HARFBUZZ_UNICODE 1
#if defined(HARFBUZZ_UNICODE) && !defined(ENABLE_HARFBUZZ)
#warning "HARFBUZZ_UNICODE requires HARFBUZZ"
#undef HARFBUZZ_UNICODE
#endif
//
#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__) \
  && defined(ENABLE_CUSTOM_FONTS)
#warning "TODO: PORT SKIA FONTS & PTHREADS"
#endif

/// \note defined by CMAKE
// #define ENABLE_SK_EFFECTS 1 // requires ENABLE_CUSTOM_FONTS
#if defined(ENABLE_SK_EFFECTS) && (!defined(ENABLE_SKIA) || !defined(ENABLE_CUSTOM_FONTS))
#warning "ENABLE_SK_EFFECTS requires SKIA and CUSTOM_FONTS"
#undef ENABLE_SK_EFFECTS
#endif

#if defined(ENABLE_SKIA)
/// \note defined by CMAKE
// #define ENABLE_SK_UI 1
/// \note defined by CMAKE
// #define ENABLE_IMAGES 1
#endif

#if defined(ENABLE_SKIA) && defined(ENABLE_BLINK)
// TODO >>
/// \note defined by CMAKE
// #define ENABLE_BLINK_UI 1
#endif

// TODO >>>
//#undef ENABLE_SKOTTIE

//#undef ENABLE_CUSTOM_FONTS

//#if defined(ENABLE_COBALT_RENDERER_STUB)
//#include "renderer_stub/renderer_module.h"
//#include "renderer_stub/pipeline.h"
//#endif

#ifdef ENABLE_BORINGSSL
#include <third_party/boringssl/src/include/openssl/ssl.h>
#include <assert.h>
#include <string.h>
#include <third_party/boringssl/src/include/openssl/aead.h>
#include <third_party/boringssl/src/include/openssl/bn.h>
#include <third_party/boringssl/src/include/openssl/buf.h>
#include <third_party/boringssl/src/include/openssl/bytestring.h>
#include <third_party/boringssl/src/include/openssl/dh.h>
#include <third_party/boringssl/src/include/openssl/ec_key.h>
#include <third_party/boringssl/src/include/openssl/ecdsa.h>
#include <third_party/boringssl/src/include/openssl/err.h>
#include <third_party/boringssl/src/include/openssl/evp.h>
#include <third_party/boringssl/src/include/openssl/md5.h>
#include <third_party/boringssl/src/include/openssl/mem.h>
#include <third_party/boringssl/src/include/openssl/rand.h>
#include <third_party/boringssl/src/include/openssl/x509.h>
#include <third_party/boringssl/src/include/openssl/x509v3.h>
#include "third_party/boringssl/src/include/openssl/crypto.h"
#include "third_party/boringssl/src/crypto/internal.h"
#endif // ENABLE_BORINGSSL

#if defined(__EMSCRIPTEN__)
#include <emscripten.h>
#include <emscripten/html5.h>
#include <emscripten/key_codes.h>
#include <emscripten/threading.h>
#endif // EMSCRIPTEN

/// \note place before glext.h
/// \note defined by CMAKE
// #define GL_GLEXT_PROTOTYPES
//#undef GL_GLEXT_PROTOTYPES

#if defined(OS_WIN) && !defined(ENABLE_OPENGL)
#error "OS_WIN requires ENABLE_OPENGL"
#endif

// see https://lyceum-allotments.github.io/2016/06/emscripten-and-sdl-2-tutorial-part-1/
//#include <SDL2/SDL_ttf.h>

#ifdef ENABLE_SKIA
#include "skia_ui_demo.h"
static SkiaUiDemo skiaUiDemo;

#include <skia/include/core/SkCanvas.h>
#include <skia/include/core/SkString.h>
#include <skia/include/core/SkFont.h>
#include <skia/include/core/SkGraphics.h>
#include <skia/include/core/SkPictureRecorder.h>
#include <skia/include/core/SkStream.h>
#include <skia/include/core/SkSurface.h>
#include <skia/include/core/SkPixmap.h>
#include <skia/include/core/SkBitmap.h>
#include <skia/include/core/SkCanvas.h>
#include <skia/include/core/SkShader.h>
#endif // ENABLE_SKIA

#include "utils.h"

#ifdef ENABLE_BLINK_PLATFORM
#include <third_party/blink/renderer/platform/runtime_enabled_features.h>
#include "ui/gfx/canvas.h"
#include "ui/gfx/font_list.h"
#include "ui/gfx/font.h"
#include "ui/gfx/font_render_params.h"
#include "ui/gfx/skia_font_delegate.h"
#include "ui/gfx/text_utils.h"
#include "ui/gfx/paint_vector_icon.h"
#include "ui/gfx/vector_icon_types.h"
#include "ui/gfx/platform_font_skia.h"
#include "third_party/blink/renderer/platform/heap/thread_state.h"
#endif

//#if defined(ENABLE_SKIA)
//#define ENABLE_BLINK_PLATFORM 1
//#endif

// TODO >>
// #undef ENABLE_BLINK_PLATFORM

#include "blink_demo.h"

#ifdef ENABLE_HARFBUZZ
#include <hb-ot.h>
#endif // ENABLE_HARFBUZZ

#ifdef HAS_ICU
#include "third_party/icu/source/common/unicode/uchar.h"
#include "third_party/icu/source/i18n/unicode/datefmt.h"
#include "third_party/icu/source/i18n/unicode/dtfmtsym.h"
#include "third_party/icu/source/common/unicode/ubrk.h"
#include "third_party/icu/source/common/unicode/uchar.h"
#include "third_party/icu/source/common/unicode/ustring.h"
#include "third_party/icu/source/common/unicode/brkiter.h"
#endif

#include "generated/models/all_models.h"

#if defined(OS_WIN)
#define GL_GLEXT_PROTOTYPES 1
#define GL_GLES_PROTOTYPES 1
#define GLEW_STATIC 1
#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glext.h>
#include "gl_helpers.h"
#else // OS_WIN
#define GL_GLEXT_PROTOTYPES 1
#define GL_GLES_PROTOTYPES 1
#define GLEW_STATIC 1
#include <GL/glew.h>
#endif // defined(OS_WIN)

#include "gl_helpers.h"

#include <stdint.h>

/*#include <stddef.h>

#include <cassert>
#include <cstring>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>

#include "base/base_export.h"
#include "base/callback_forward.h"
#include "base/compiler_specific.h"
#include "base/debug/debugger.h"
#include "base/logging.h"
#include "base/macros.h"
#include "base/scoped_clear_last_error.h"
#include "base/strings/string_piece_forward.h"
#include "base/template_util.h"
#include "build/build_config.h"


// The vprintf_stderr_common function triggers this error in the Mac build.
// Feel free to remove this pragma if this file builds on Mac.
// According to
// http://gcc.gnu.org/onlinedocs/gcc-4.2.1/gcc/Diagnostic-Pragmas.html#Diagnostic-Pragmas
// we need to place this directive before any data or functions are defined.
#pragma GCC diagnostic ignored "-Wmissing-format-attribute"

#include "third_party/blink/renderer/platform/wtf/assertions.h"

#include "build/build_config.h"

#if defined(OS_MACOSX)
#include <asl.h>
#elif defined(OS_ANDROID)
#include <android/log.h>
#elif defined(OS_WIN)
#include <windows.h>
#endif

PRINTF_FORMAT(1, 0)
void vprintf_stderr_common(const char* format, va_list args) {
#if defined(OS_MACOSX)
  va_list copyOfArgs;
  va_copy(copyOfArgs, args);
  asl_vlog(0, 0, ASL_LEVEL_NOTICE, format, copyOfArgs);
  va_end(copyOfArgs);
#elif defined(OS_ANDROID)
  __android_log_vprint(ANDROID_LOG_WARN, "WebKit", format, args);
#elif defined(OS_WIN)
  if (IsDebuggerPresent()) {
    size_t size = 1024;

    do {
      char* buffer = (char*)malloc(size);
      if (!buffer)
        break;

      if (_vsnprintf(buffer, size, format, args) != -1) {
        OutputDebugStringA(buffer);
        free(buffer);
        break;
      }

      free(buffer);
      size *= 2;
    } while (size > 1024);
  }
#endif
  vfprintf(stderr, format, args);
}*/

#if defined(ENABLE_SKIA) && defined(SKIA_GR_CONTEXT)

#if defined(__EMSCRIPTEN__)
// see https://github.com/emscripten-core/emscripten/pull/5951/commits/7f373a3d86a426ea146e8288972afce4d9396321
extern "C" { extern void* emscripten_GetProcAddress(const char *x); }
//extern "C" { extern void* emscripten_webgl1_get_proc_address(const char *x); }
//extern "C" { extern void* emscripten_webgl2_get_proc_address(const char *x); }
// see https://github.com/emscripten-core/emscripten/pull/8541
//extern "C" { extern void* emscripten_webgl_get_proc_address(const char *x); }
#endif

// see https://github.com/servo/skia/blob/master/experimental/SkV8Example/SkV8Example.cpp
// https://github.com/google/skia/blob/master/src/gpu/gl/egl/GrGLMakeNativeInterface_egl.cpp
static GrGLFuncPtr emscripten_get_gl_proc(void* ctx, const char name[]) {
  SkASSERT(nullptr == ctx);

#if defined(__EMSCRIPTEN__)
  // see https://github.com/emscripten-core/emscripten/pull/8430#issuecomment-486635898
  // see https://github.com/emscripten-core/emscripten/pull/5951/commits/7f373a3d86a426ea146e8288972afce4d9396321
  // see https://github.com/emscripten-core/emscripten/blob/incoming/system/lib/gl/gl.c#L1831
  //return (GrGLFuncPtr)emscripten_webgl_get_proc_address(name);
  //return (GrGLFuncPtr)emscripten_webgl1_get_proc_address(name);
  //return (GrGLFuncPtr)emscripten_webgl2_get_proc_address(name);
  return (GrGLFuncPtr)emscripten_GetProcAddress(name);
#else
  return (GrGLFuncPtr)SDL_GL_GetProcAddress(name);
#endif
  // TODO:
//  em_ctx
//ENABLE_HTML5_SDL
//  return (GrGLFuncPtr)SDL_GL_GetProcAddress(name);
}

// extern void* emscripten_GetProcAddress(const char *x);

sk_sp<const GrGLInterface> emscripten_GrGLMakeNativeInterface() {
  void* ctx = nullptr;
  GrGLGetProc get = emscripten_get_gl_proc;

  // return GrGLMakeAssembledWebGLInterface(nullptr, emscripten_get_gl_proc);
  /*GET_PROC_LOCAL(GetString);
  if (nullptr == GetString) {
      return nullptr;
  }

  const char* verStr = reinterpret_cast<const char*>(GetString(GR_GL_VERSION));
  if (nullptr == verStr) {
      return nullptr;
  }*/

  GrGLStandard standard = kWebGL_GrGLStandard; // GrGLGetStandardInUseFromString("verStr");
  // standard can be unused (optimzed away) if SK_ASSUME_GL_ES is set
  sk_ignore_unused_variable(standard);

  // https://github.com/Rusino/skia/blob/b3929a01f476c63e5358e97128ba7eb9f14e806e/src/gpu/gl/GrGLAssembleWebGLInterfaceAutogen.cpp#L22

  if (GR_IS_GR_GL_ES(standard)) {
    printf("GR_IS_GR_GL_ES\n");
    return GrGLMakeAssembledGLESInterface(ctx, get);
  } else if (GR_IS_GR_GL(standard)) {
    printf("GR_IS_GR_GL\n");
    return GrGLMakeAssembledGLInterface(ctx, get);
  } else if (GR_IS_GR_WEBGL(standard)) {
    printf("GR_IS_GR_WEBGL\n");
    return GrGLMakeAssembledWebGLInterface(ctx, get);
  }
  return nullptr;
}
#endif

/*#if defined(OS_EMSCRIPTEN) && !defined(DISABLE_PTHREADS)
/// \todo render_browser_window must be true ON WASM MT
/// due to deadlock, see commit 0e4faf
static bool render_browser_window = true;
#elif defined(ENABLE_COBALT)
// TODO >>>
static bool render_browser_window = true;
//static bool render_browser_window = false;
#else // ENABLE_COBALT
static bool render_browser_window = false;
#endif // ENABLE_COBALT*/

#if defined(ENABLE_COBALT)
static bool render_browser_window = true;
#else // ENABLE_COBALT
static bool render_browser_window = false;
#endif // ENABLE_COBALT

#include "cobalt_common.h"
#include "custom_atts.h"
#include "components/custom_web_components.h"
#include "custom_controllers.h"

#ifdef ENABLE_COBALT
#include "renderer_stub/rasterizer/skgl/software_rasterizer.h"

#include "cobalt/dom/native_events_port/native_event.h"
#endif // ENABLE_COBALT

// TODO >>>
//#ifdef ENABLE_COBALT
//#undef ENABLE_COBALT
//#endif

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_SKIA)
static SkPixmap browserPixmapCache;
void updateWASMPixmapAndFreeData(void* data)
{
  //printf("updatedWASMPixmap 1!\n");
  DCHECK(data);
  const SkPixmap* pixmapCopy = static_cast<SkPixmap*>(data);
  DCHECK(!pixmapCopy->bounds().isEmpty());
  DCHECK(emscripten_is_main_runtime_thread());
  browserPixmapCache = *pixmapCopy;
  delete pixmapCopy;
  //printf("updatedWASMPixmap 2!\n");
}
#endif // OS_EMSCRIPTEN

#ifdef ENABLE_BASE
static base::Thread main_browser_thread_("Main_Browser_Thread");
// TODO: remove main_browser_thread_wrapper_ or enable only on WASM MT

static base::Thread main_browser_thread_wrapper_("Main_Browser_Thread_Wrapper");
//static base::Thread input_device_thread_("Input_Device_Thread");

static base::Thread* input_browser_thread = &main_browser_thread_;
//static base::Thread* input_browser_thread = nullptr;//&main_browser_thread_;

#if !(defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)) && defined(ENABLE_BASE)
// TODO: causes hangs on WASM MT (even in render_browser_window mode!)
#define SEPARATE_UI_THREAD 1
#define SEPARATE_UI_THREAD_WRAPPER 1
#endif // __EMSCRIPTEN__ && __EMSCRIPTEN_PTHREADS__

#if defined(OS_WIN) && !defined(SEPARATE_UI_THREAD)
#error "OS_WIN requires SEPARATE_UI_THREAD"
#endif

// TODO
#if defined(SEPARATE_UI_THREAD)
static base::Thread ui_draw_thread_("UI_Draw_Thread");
static bool canRefreshUI = true;
static std::mutex canRefreshUIMutex;

#if defined(SEPARATE_UI_THREAD_WRAPPER)
// TODO: remove ui_draw_thread_wrapper_ or enable only on WASM MT
static base::Thread ui_draw_thread_wrapper_("UI_Draw_Thread_Wrapper");
#endif // SEPARATE_UI_THREAD_WRAPPER
#endif // SEPARATE_UI_THREAD

static base::WaitableEvent main_thread_event_;
#endif // ENABLE_BASE

// static ::std::string input    = "Input .json file.";//);
////static ::std::string(writePath, w, nullptr, "Output directory.  Frames are names [0-9]{6}.png.");
// static ::std::string format   = "png";//  , "Output format (png or skp)");
// static double t0=   0;//, "Timeline start [0..1].");
// static double t1=   1;//, "Timeline stop [0..1].");
// static double fps= 30;//, "Decode frames per second.");
// static int width = 800;//, "Render width.");
// static int height= 600;//, "Render height.");

static const int kStencilBits = 8; // Skia needs 8 stencil bits
static const int kMsaaSampleCount = 0;

//static GLclampf redClrTintAnim = 0.0f;

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
static SDL_Window* window;
static SDL_Renderer* sdl_ren;
#endif

#if defined(__EMSCRIPTEN__)
EM_BOOL context_lost(int eventType, const void *reserved, void *userData)
{
    printf("C code received a signal for WebGL context lost! This should not happen!\n");
    ///result = 1;
    /// __TODO__ : free resources
    return 0;
}

EM_BOOL context_restored(int eventType, const void *reserved, void *userData)
{
    printf("C code received a signal for WebGL context restored! This should not happen!\n");
    ///result = 1;
    /// __TODO__ : free resources
    return 0;
}

static EMSCRIPTEN_WEBGL_CONTEXT_HANDLE em_ctx;

// @see https://emscripten.org/docs/api_reference/html5.h.html?highlight=emscripten_webgl_create_context#c.EmscriptenWebGLContextAttributes
// @see https://github.com/emscripten-core/emscripten/blob/incoming/system/include/emscripten/html5.h#L440
static EmscriptenWebGLContextAttributes attr;

// @see explicitSwapControl
#if defined(HAVE_SWAP_CONTROL)
static EM_BOOL enableSwapControl = EM_TRUE;
#else // HAVE_SWAP_CONTROL
static EM_BOOL enableSwapControl = EM_FALSE;
#endif // HAVE_SWAP_CONTROL

// @see enableExtensionsByDefault
static EM_BOOL enableEmscriptenExtensionsByDefault = EM_TRUE;
#else // __EMSCRIPTEN__
#if defined(ENABLE_OPENGL)
static SDL_GLContext glContext;
#endif // ENABLE_OPENGL
#endif // __EMSCRIPTEN__

#if defined(OS_WIN)
// Build UI thread message loop. This is used by platform
// implementations for event polling & running background tasks.
base::MessageLoopForUI* g_ui_message_loop;
#endif // OS_WIN

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
// Event handler
static SDL_Event e;
#endif // ENABLE_HTML5_SDL || !__EMSCRIPTEN__

// Main loop flag
static bool quitApp = false;

#if defined(ENABLE_OPENGL)
//static GLint uniformRedClrTint;

static GLint uniformTex;

static GLuint vertexPosObject;
static GLuint vertexArrayObject;

static GLuint programObject;

static GLfloat const kVertexData[] = {1.0f, 1.0f,  1.0f, 0.0f, -1.0f, 1.0f,  0.0f, 0.0f,
                                      1.0f, -1.0f, 1.0f, 1.0f, -1.0f, -1.0f, 0.0f, 1.0f};

static int InitGL() {
  char vShaderStr[] = "attribute vec2 vPosition;                \n"
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

  char fShaderStr[] = "precision mediump float;\n"
                      "uniform sampler2D u_tex;\n"
                      //"uniform float clrRedTint;\n"
                      "varying vec2 v_texcoord;\n"
                      //		"uniform vec4 vColor;"
                      "void main()                                  \n"
                      "{                                            \n"
                      //		"  gl_FragColor = vColor;        \n"
                      "    vec4 colour = texture2D(u_tex, v_texcoord);\n"
                      //    "    vec4 colour = vec4(100, 0, 100, 100);\n"
#if defined(OS_WIN)
                      "    colour.rgba = colour.bgra;\n"
#else
                      "    colour.rgba = colour.rgba;\n"
#endif
                      //"    colour.rgba = vec4(v_texcoord, 0.0f, 1.0f);\n"
                      //"    colour.r = clrRedTint;\n"
                      "    gl_FragColor = colour;\n"
                      "}                                            \n";

  GLuint vertexShader;
  GLuint fragmentShader;
  GLint linked;

  vertexShader = LoadShader(GL_VERTEX_SHADER, vShaderStr);
  fragmentShader = LoadShader(GL_FRAGMENT_SHADER, fShaderStr);

  programObject = glCreateProgram();
  GL_CHECK_WITH_MESSAGE((::std::string("failed glCreateProgram for") + vShaderStr).c_str());
  if (programObject == 0) {
    printf("programObject == 0 \n");
    return 0;
  }

  char errbuf[4096];
  GLint status;
  GLsizei len;

  GL_CHECK( glAttachShader(programObject, vertexShader) );
  GL_CHECK( glAttachShader(programObject, fragmentShader) );

  GL_CHECK( glBindAttribLocation(programObject, 0, "vPosition") );
  GL_CHECK( glBindAttribLocation(programObject, 1, "vUV") );

  GL_CHECK( glLinkProgram(programObject) );
  GL_CHECK( glGetProgramInfoLog(programObject, sizeof(errbuf), &len, errbuf) );
  GL_CHECK( glGetProgramiv(programObject, GL_LINK_STATUS, &status) );
  if (status != GL_TRUE) {
      printf("failed to link program %s: %s\n", vShaderStr, errbuf);
  }
  else if (len > 16) {
      printf("link log for program %s: %s\n", vShaderStr, errbuf);
  }

/// \todo unused
/// \see https://github.com/lolengine/lol/blob/master/src/gpu/shader.cpp
#if __EMSCRIPTEN__ // WebGL doesn't support GL_ACTIVE_ATTRIBUTE_MAX_LENGTH, so chose a default size value.
    GLint max_len = 256;
#else
    GLint max_len;
    GL_CHECK( glGetProgramiv(programObject, GL_ACTIVE_ATTRIBUTE_MAX_LENGTH, &max_len) );
#endif

  uniformTex = glGetUniformLocation(programObject, "u_tex");
  //uniformRedClrTint = glGetUniformLocation(programObject, "clrRedTint");
  GL_CHECK( glGetProgramiv(programObject, GL_LINK_STATUS, &linked) );
  if (!linked) {
    GLint infoLen = 0;
    GL_CHECK( glGetProgramiv(programObject, GL_INFO_LOG_LENGTH, &infoLen) );
    if (infoLen > 1) {
      char* infoLog = static_cast<char*>(malloc(sizeof(char) * infoLen));
      GL_CHECK( glGetProgramInfoLog(programObject, infoLen, NULL, infoLog) );
      printf("Error linking program:\n%s\n", infoLog);
      free(infoLog);
    }
    GL_CHECK( glDeleteProgram(programObject) );
    return GL_FALSE;
  }

#if defined(ENABLE_SKIA)
  //if(!render_browser_window) {
    skiaUiDemo.prepare_gl();
  //}
#endif // ENABLE_SKIA

  // No clientside arrays, so do this in a webgl-friendly manner
  GL_CHECK( glGenBuffers(1, &vertexPosObject) );
  GL_CHECK( glGenVertexArrays(1, &vertexArrayObject) );
  GL_CHECK( glBindVertexArray(vertexArrayObject) );

  GL_CHECK( glBindBuffer(GL_ARRAY_BUFFER, vertexPosObject) );
  GL_CHECK( glBufferData(GL_ARRAY_BUFFER, sizeof(kVertexData), kVertexData, GL_STATIC_DRAW) );

  //
  GL_CHECK( glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat), nullptr) );
  GL_CHECK( glEnableVertexAttribArray(0) );
  //
  GL_CHECK( glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat),
                        (GLvoid*)(2 * sizeof(GLfloat))) );
  GL_CHECK( glEnableVertexAttribArray(1) );

  // unbind
  GL_CHECK( glBindVertexArray(0) );

  GL_CHECK( glDisableVertexAttribArray(0) );
  GL_CHECK( glDisableVertexAttribArray(1) );

  GL_CHECK( glBindBuffer(GL_ARRAY_BUFFER, 0) );

  GL_CHECK( glClearColor(0.0f, 0.0f, 0.0f, 0.0f) );

  return GL_TRUE;
}
#endif // ENABLE_OPENGL

#ifdef ENABLE_COBALT
using namespace cobalt;
#if !defined(DISABLE_COBALT_DOM_PARSER)
using namespace cobalt::dom_parser;
#endif // !DISABLE_COBALT_DOM_PARSER
using namespace cobalt::loader;
using namespace cobalt::cssom;
using namespace cobalt::css_parser;
using namespace cobalt::layout;
using namespace cobalt::loader;
using namespace cobalt::dom;
using namespace cobalt::dom::customizer;
using namespace cobalt::input;
using namespace cobalt::script;
using namespace cobalt::network;
#if !defined(DISABLE_COBALT_MEDIA)
using namespace cobalt::media;
#endif // !DISABLE_COBALT_MEDIA
using namespace cobalt::renderer;
using namespace cobalt::browser;
//using namespace cobalt::ras;
using namespace cobalt::renderer::backend;
//using namespace cobalt::csp;

/*class CSSParserObserver {
 public:
  void OnWarning(const std::string& message){
    printf("CSSParserObserver OnWarning %s\n", message.c_str());
  }
  void OnError(const std::string& message){
    printf("CSSParserObserver OnError %s\n", message.c_str());
  }
};*/


class DocumentLoadedObserver : public dom::DocumentObserver {
public:
    typedef std::vector<base::Closure> ClosureVector;
    explicit DocumentLoadedObserver(const ClosureVector& loaded_callbacks)
        : loaded_callbacks_(loaded_callbacks) {}
    // Called at most once, when document and all referred resources are loaded.
    void OnLoad() override {
        printf("DocumentLoadedObserver OnLoad 1\n");
        for (size_t i = 0; i < loaded_callbacks_.size(); ++i) {
            loaded_callbacks_[i].Run();
        }
        printf("DocumentLoadedObserver OnLoad 2\n");
    }

    void OnMutation() override {}
    void OnFocusChanged() override {}

private:
    ClosureVector loaded_callbacks_;
};

class CobaltTester {
  public:
    CobaltTester();
    ~CobaltTester()
    {
#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
        printf("can`t destroy CobaltTester on wasm ST platform!");
        HTML5_STACKTRACE();
#endif
    }
    void run();
    void OnWindowClose(base::TimeDelta close_time);
    void OnWindowMinimize();
    void OnLoadComplete(const base::Optional<std::string>& error);
    void OnCspPolicyChanged();
    void OnRanAnimationFrameCallbacks();
    void OnRenderTreeRasterized(
        scoped_refptr<base::SingleThreadTaskRunner> web_module_message_loop,
        const base::TimeTicks& produced_time);
    void BrowserProcessRenderTreeSubmissionQueue();
    renderer::Submission CreateSubmissionFromLayoutResults(
        const cobalt::layout::LayoutManager::LayoutResults& layout_results);
    void OnRendererSubmissionRasterized();
    void SubmitCurrentRenderTreeToRenderer();
    void OnBrowserRenderTreeProduced(
        int main_web_module_generation,
        const cobalt::layout::LayoutManager::LayoutResults& layout_results);
    void QueueOnRenderTreeProduced(
        int main_web_module_generation,
        const cobalt::layout::LayoutManager::LayoutResults& layout_results);
    void OnRenderTreeProduced(const cobalt::layout::LayoutManager::LayoutResults& layout_results);
    void navigationCallback(const GURL&);
    void OnStartDispatchEvent(const scoped_refptr<dom::Event>& event);
    void OnStopDispatchEvent(const scoped_refptr<dom::Event>& event);
    void HandlePointerEvents();
    void OnLoad();
#ifdef HAS_ICU
    void listWordBoundaries(const icu::UnicodeString& s);
#endif
  void OnKeyEventProduced(base::Token type, const dom::KeyboardEventInit &event);
  void OnPointerEventProduced(base::Token type, const dom::PointerEventInit &event);
  void OnWheelEventProduced(base::Token type, const dom::WheelEventInit &event);
  void InjectInputEvent(scoped_refptr<cobalt::dom::Element> element, const scoped_refptr<cobalt::dom::Event> &event);

  void OnOnScreenKeyboardInputEventProduced(
      base::Token type, const dom::InputEventInit& event);

  public:
  //private:
    // Keeps track of all messages containing render tree submissions that will
    // ultimately reference the |render_tree_combiner_| and the
    // |renderer_module_|.  It is important that this is destroyed before the
    // above mentioned references are.  It must however outlive all WebModules
    // that may be producing render trees.
    base::MessageQueue render_tree_submission_queue_;
    // TODO: UTF8
    // set
    // "<meta content='text/html; charset=gb2312' http-equiv=Content-Type>"
    // and
    // "<body>test1陈绮贞</body>"
    // htmlCheckEncoding: unknown encoding gb2312
    // see https://github.com/rchipka/node-osmosis/issues/19
    const ::std::string input =
        "<html>"
        "<head>"
        "<meta content='text/html; charset=iso-8859-1' http-equiv=Content-Type>"
        "</head>"
        "<body>123test456</body>"
        "</html>";

  std::unique_ptr<loader::FetcherFactory> fetcher_factory_;

  std::unique_ptr<loader::LoaderFactory> loader_factory_;

#if !defined(DISABLE_COBALT_DOM_PARSER)
  std::unique_ptr<cobalt::dom_parser::Parser> dom_parser_;
#endif // !DISABLE_COBALT_DOM_PARSER

  std::unique_ptr<cobalt::css_parser::Parser> css_parser_;

  //dom::testing::StubCSSParser stub_css_parser_;
  //dom::testing::StubScriptRunner stub_script_runner_;
  std::unique_ptr<cobalt::dom::DomStatTracker> dom_stat_tracker_;

  //scoped_refptr<render_tree::Node> render_tree_root_;

  std::unique_ptr<cobalt::dom::HTMLElementContext> html_element_context_;
  //std::unique_ptr<cobalt::dom::Element> root_;
  //std::unique_ptr<base::SourceLocation> source_location_;

  std::unique_ptr<cobalt::loader::image::AnimatedImageTracker> animated_image_tracker_;

  // ImageCache that is used to manage image cache logic.
  std::unique_ptr<loader::image::ImageCache> image_cache_;

  dom::ScreenshotManager::ProvideScreenshotFunctionCallback
      provide_screenshot_function;

  // The reduced cache capacity manager can be used to force a reduced image
  // cache over periods of time where memory is known to be restricted, such
  // as when a video is playing.
  std::unique_ptr<loader::image::ReducedCacheCapacityManager>
      reduced_image_cache_capacity_manager_;

  // Object that provides renderer resources like images and fonts.
  render_tree::ResourceProvider* resource_provider_ = nullptr;

  // The type id of resource provider being used by the WebModule. Whenever this
  // changes, the caches may have obsolete data and must be blown away.
  //base::TypeId resource_provider_type_id_ = base::TypeId();

  // RemoteTypefaceCache that is used to manage loading and caching typefaces
  // from URLs.
  std::unique_ptr<loader::font::RemoteTypefaceCache> remote_typeface_cache_;

#if defined(ENABLE_COBALT_SPATIAL_MESH)
  // MeshCache that is used to manage mesh cache logic.
  std::unique_ptr<loader::mesh::MeshCache> mesh_cache_;
#endif // ENABLE_COBALT_SPATIAL_MESH

  // Interface between LocalStorage and the Storage Manager.
#if !defined(DISABLE_COBALT_STORAGE)
  std::unique_ptr<dom::LocalStorageDatabase> local_storage_database_;
#endif // !DISABLE_COBALT_STORAGE

  // Stats for the web module. Both the dom stat tracker and layout stat
  // tracker are contained within it.
  ///std::unique_ptr<browser::WebModuleStatTracker> web_module_stat_tracker_;

  // Post and run tasks to notify MutationObservers.
  dom::MutationObserverTaskManager mutation_observer_task_manager_;

  // JavaScript engine for the browser.
  std::unique_ptr<script::JavaScriptEngine> javascript_engine_;

  // JavaScript Global Object for the browser. There should be one per window,
  // but since there is only one window, we can have one per browser.
  scoped_refptr<script::GlobalEnvironment> global_environment_;

  // Used by |Console| to obtain a JavaScript stack trace.
  std::unique_ptr<script::ExecutionState> execution_state_;

  // Interface for the document to execute JavaScript code.
  std::unique_ptr<script::ScriptRunner> script_runner_;

#if !defined(DISABLE_COBALT_MEDIA)
  // Object to register and retrieve MediaSource object with a string key.
  std::unique_ptr<dom::MediaSource::Registry> media_source_registry_;
#endif // !DISABLE_COBALT_MEDIA

  // Object to register and retrieve Blob objects with a string key.
  std::unique_ptr<dom::Blob::Registry> blob_registry_;

  // The Window object wraps all DOM-related components.
  scoped_refptr<dom::Window> window_;

  std::unique_ptr<layout::TopmostEventTarget> topmost_event_target_;

  scoped_refptr<base::SingleThreadTaskRunner> self_task_runner_;

  // Thread checker ensures all calls are made from the same
  // thread that it is created in.
  base::ThreadChecker thread_checker_;

  bool isLoadComplete = false;

  // Cache a WeakPtr in the WebModule that is bound to the Window's message loop
  // so we can ensure that all subsequently created WeakPtr's are also bound to
  // the same loop.
  // See the documentation in base/memory/weak_ptr.h for details.
  base::WeakPtr<dom::Window> window_weak_;

  // Environment Settings object
  std::unique_ptr<dom::DOMSettings> environment_settings_;

  // Called by |OnRenderTreeProduced|.
  //OnRenderTreeProducedCallback render_tree_produced_callback_;

  // Called by |OnError|.
  //OnErrorCallback error_callback_;

  // Triggers layout whenever the document changes.
  std::unique_ptr<layout::LayoutManager> layout_manager_;

  // DocumentObserver that observes the loading document.
  std::unique_ptr<DocumentLoadedObserver> document_load_observer_;

  // see https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/cobalt/browser/web_module.h#L126

  // A list of callbacks to be called once the web page finishes loading.
  std::vector<base::Closure> loaded_callbacks;

  //network::NetworkModule network_module_;

  // Manages the three render trees, combines and renders them.
  RenderTreeCombiner render_tree_combiner_;
  std::unique_ptr<RenderTreeCombiner::Layer> main_web_module_layer_;

  // Wraps input device and produces input events that can be passed into
  // the web module.
  std::unique_ptr<cobalt::input::InputDeviceManager> input_device_manager_;

  scoped_refptr<cobalt::dom::captions::SystemCaptionSettings>
      system_caption_settings_;

  //scoped_refptr<cobalt::input::Camera3D> camera_3d_;

  scoped_refptr<ui_navigation::NavItem> ui_nav_root_;


  // Allows checking if particular media type can be played.
#if !defined(DISABLE_COBALT_MEDIA)
  std::unique_ptr<cobalt::media::CanPlayTypeHandler> can_play_type_handler_;
#endif // !DISABLE_COBALT_MEDIA

  dom::DOMSettings::Options dom_settings_options;

  layout::LayoutManager::LayoutTrigger layout_trigger;

  // This constant defines the maximum rate at which the layout engine will
  // refresh over time.  Since there is little benefit in performing a layout
  // faster than the display's refresh rate, we set this to 60Hz.
#if defined(__EMSCRIPTEN__)// && !defined(NDEBUG)
#if defined(RELEASE_BUILD)
  const float kLayoutMaxRefreshFrequencyInHz = 60.0f;
#else // !NDEBUG
  /// \note WASM DEBUG build may be too slow for high refresh rate
  const float kLayoutMaxRefreshFrequencyInHz = 29.0f;
#endif // NDEBUG
#else // !__EMSCRIPTEN__
  const float kLayoutMaxRefreshFrequencyInHz = 60.0f;
#endif // __EMSCRIPTEN__

//  const float kLayoutMaxRefreshFrequencyInHz = 60.0f;

  /// \note need value < 200ms for animations
  /// formula: MicrosecondsPerSecond / (layout_refresh_rate_ + 1.0)
  /// 1.0 = 500ms, 5.0 = 166ms, 29.0 = 33.3ms, 60.0 = 16ms
#if defined(ENABLE_NATIVE_HTML)
  float layout_refresh_rate_ = 1.0;
#else
  float layout_refresh_rate_ = kLayoutMaxRefreshFrequencyInHz;
#endif // ENABLE_NATIVE_HTML

  // Web module owns the dom and layout stat trackers.
  std::unique_ptr<layout::LayoutStatTracker> layout_stat_tracker_;

  std::unique_ptr<ScreenshotManager> screenshot_manager_;

  base::WaitableEvent synchronous_loader_interrupt_ = {
      base::WaitableEvent::ResetPolicy::MANUAL,
      base::WaitableEvent::InitialState::NOT_SIGNALED};

  scoped_refptr<cssom::CSSDeclaredStyleData> style;

  base::EventDispatcher event_dispatcher_;

  //std::unique_ptr<backend::GraphicsSystem> graphics_system_;
  //std::unique_ptr<backend::GraphicsContext> graphics_context_;
  //std::unique_ptr<rasterizer::Rasterizer> rasterizer_;

  // Sets up everything to do with graphics, from backend objects like the
  // display and graphics context to the rasterizer and rendering pipeline.
  std::unique_ptr<renderer::RendererModule> renderer_module_;

  // The main system window for our application. This routes input event
  // callbacks, and provides a native window handle on desktop systems.
  std::unique_ptr<system_window::SystemWindow> system_window_;

  const int kMainWebModuleZIndex = 1;
};


static std::unique_ptr<CobaltTester> g_cobaltTester;

void CobaltTester::OnWindowClose(base::TimeDelta /*close_time*/) {
    printf("OnWindowClose\n");
    DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
    DCHECK(thread_checker_.CalledOnValidThread());
/*#if defined(ENABLE_DEBUGGER)
    if (input_device_manager_fuzzer_) {
        return;
    }
#endif

    SbSystemRequestStop(0);*/
}

void CobaltTester::OnWindowMinimize() {
    printf("OnWindowMinimize\n");
    DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
    DCHECK(thread_checker_.CalledOnValidThread());
/*#if defined(ENABLE_DEBUGGER)
    if (input_device_manager_fuzzer_) {
        return;
    }
#endif

    SbSystemRequestSuspend();*/
}

void CobaltTester::OnLoadComplete(const base::Optional<std::string>& error) {
    printf("OnLoadComplete %s\n", error.value_or("no errors").c_str());
    //if (error) error_callback_.Run(window_->location()->url(), *error);
    DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
    DCHECK(thread_checker_.CalledOnValidThread());
    isLoadComplete = true;
}

void CobaltTester::OnCspPolicyChanged() {
    printf("OnCspPolicyChanged\n");
    DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
    DCHECK(thread_checker_.CalledOnValidThread());
}

// Called by |layout_mananger_| after it runs the animation frame callbacks.
void CobaltTester::OnRanAnimationFrameCallbacks() {
#if defined(ENABLE_NATIVE_HTML)
  return;
#endif // ENABLE_NATIVE_HTML

    printf("OnRanAnimationFrameCallbacks\n");
    DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
    DCHECK(thread_checker_.CalledOnValidThread());
}

// Called by the Renderer on the Renderer thread when it rasterizes a render
// tree with this callback attached. It includes the time the render tree was
// produced.
void CobaltTester::OnRenderTreeRasterized(
    scoped_refptr<base::SingleThreadTaskRunner> /*web_module_message_loop*/,
    const base::TimeTicks& /*produced_time*/) {
#if defined(ENABLE_NATIVE_HTML)
  return;
#endif // ENABLE_NATIVE_HTML

    ///printf("OnRenderTreeRasterized\n");

    //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
    //DCHECK(thread_checker_.CalledOnValidThread());

    // TODO
    //main_web_module_layer_->Reset();

    //if (media_module_) {
    //  media_module_->Suspend();
    //}

    // Flush out any submitted render trees pushed since we started shutting down
    // the web modules above.
    //base::MessageLoopCurrent::Get()->task_runner()->PostTask(
    //    FROM_HERE,
    //    base::Bind(&CobaltTester::BrowserProcessRenderTreeSubmissionQueue,
    //               base::Unretained(this)));

    ///layout_manager_->Suspend(); // TODO: remove it & fix freezes
    ///renderer_module_->pipeline()->Clear();
    //renderer_module_->pipeline()->
}

void CobaltTester::BrowserProcessRenderTreeSubmissionQueue() {
//#if defined(ENABLE_NATIVE_HTML)
//  return;
//#endif // ENABLE_NATIVE_HTML

    TRACE_EVENT0("cobalt::browser",
                 "CobaltTester::ProcessRenderTreeSubmissionQueue()");

    DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
    DCHECK(thread_checker_.CalledOnValidThread());

    //printf("BrowserProcessRenderTreeSubmissionQueue 1\n");

#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
   /// \note use emscripten_async* to prevent blocking of browser event loop
   emscripten_async_call_closure(
    base::BindOnce([](base::MessageQueue * queue_in) {
      DCHECK(queue_in);
      queue_in->ProcessAll();
    }, &render_tree_submission_queue_)
   );
#else
    render_tree_submission_queue_.ProcessAll();
#endif
    //printf("BrowserProcessRenderTreeSubmissionQueue 2\n");
}

renderer::Submission CobaltTester::CreateSubmissionFromLayoutResults(
    const cobalt::layout::LayoutManager::LayoutResults& layout_results) {

    //printf("CreateSubmissionFromLayoutResults 1\n");

    renderer::Submission renderer_submission(layout_results.render_tree,
                                             layout_results.layout_time);
    if (!layout_results.on_rasterized_callback.is_null()) {
        renderer_submission.on_rasterized_callbacks.push_back(
            layout_results.on_rasterized_callback);
    }
    return renderer_submission;
}

void CobaltTester::OnRendererSubmissionRasterized() {
#if defined(ENABLE_NATIVE_HTML)
  return;
#endif // ENABLE_NATIVE_HTML

    ///printf("OnRendererSubmissionRasterized 1\n");

    TRACE_EVENT0("cobalt::browser",
                 "CobaltTester::OnRendererSubmissionRasterized()");

    //if (!is_rendered_) {
    //    // Hide the system splash screen when the first render has completed.
    //    is_rendered_ = true;
    //    SbSystemHideSplashScreen();
    //}
}

//static render_tree::animations::AnimateNode::AnimateResults animateResults; // TODO

void CobaltTester::SubmitCurrentRenderTreeToRenderer() {
    DCHECK(thread_checker_.CalledOnValidThread());

    //printf("SubmitCurrentRenderTreeToRenderer 1\n");

    if (!renderer_module_) {
        return;
    }

    base::Optional<renderer::Submission> submission =
        render_tree_combiner_.GetCurrentSubmission();
    if (submission) {
        //printf("SubmitCurrentRenderTreeToRenderer 2.1\n");

        renderer_module_->pipeline()->Submit(*submission);
        {
            /// __TODO__
            //printf("SubmitCurrentRenderTreeToRenderer OnDumpCurrentRenderTree\n");
            //renderer_module_->pipeline()->OnDumpCurrentRenderTree("");
        }
        //printf("SubmitCurrentRenderTreeToRenderer 2.2\n");
    }
    //printf("SubmitCurrentRenderTreeToRenderer 2\n");
}

void CobaltTester::OnBrowserRenderTreeProduced(
    int /*main_web_module_generation*/,
    const cobalt::layout::LayoutManager::LayoutResults& layout_results)
{
#if defined(ENABLE_NATIVE_HTML)
  return;
#endif // ENABLE_NATIVE_HTML

    DCHECK(thread_checker_.CalledOnValidThread());

    /// \note WASM MT don`t have platform fonts,
    /// rendering without custom fonts may cause deadlock
    //window_->document()->font_cache()->TryGetFont()
    /*if(window_->document()->hasLoadedTypefaces()) {
      /// \note tree must be produced on typeface load event
      //DCHECK(false) << "hasLoadedTypefaces";
    } else {
      //DCHECK(false) << "!hasLoadedTypefaces";
      printf("!hasLoadedTypefaces\n");
      return;
    }*/

    //printf("OnBrowserRenderTreeProduced 1\n");

    //if (splash_screen_) {
    //    if (on_screen_keyboard_show_called_) {
    //        // Hide the splash screen as quickly as possible.
    //        DestroySplashScreen(base::TimeDelta());
    //    } else if (!splash_screen_->ShutdownSignaled()) {
    //        splash_screen_->Shutdown();
    //    }
    //}
    //if (application_state_ == base::kApplicationStatePreloading) {
    //    layout_results.on_rasterized_callback.Run();
    //    return;
    //}

    renderer::Submission renderer_submission(
        CreateSubmissionFromLayoutResults(layout_results));

    // Set the timeline id for the main web module.  The main web module is
    // assumed to be an interactive experience for which the default timeline
    // configuration is already designed for, so we don't configure anything
    // explicitly.
    renderer_submission.timeline_info.id = 0;//current_main_web_module_timeline_id_;
    renderer_submission.timeline_info.max_submission_queue_size = 4;//8; // <= 8
    renderer_submission.timeline_info.allow_latency_reduction = true;

    renderer_submission.on_rasterized_callbacks.push_back(base::Bind(
        &CobaltTester::OnRendererSubmissionRasterized,
        base::Unretained(this)));

    //printf("OnBrowserRenderTreeProduced 1.1\n");
    //if (!splash_screen_) {
        render_tree_combiner_.SetTimelineLayer(main_web_module_layer_.get());
    //}
    main_web_module_layer_->Submit(renderer_submission);

    SubmitCurrentRenderTreeToRenderer();
    //printf("OnBrowserRenderTreeProduced 2\n");
}

void CobaltTester::QueueOnRenderTreeProduced(
    int main_web_module_generation,
    const cobalt::layout::LayoutManager::LayoutResults& layout_results) {
#if defined(ENABLE_NATIVE_HTML)
  return;
#endif // ENABLE_NATIVE_HTML

    // printf("QueueOnRenderTreeProduced 1\n");

    TRACE_EVENT0("cobalt::browser", "CobaltTester::QueueOnRenderTreeProduced()");

    /// \note WASM MT don`t have platform fonts,
    /// rendering without custom fonts may cause deadlock
    //window_->document()->font_cache()->TryGetFont()
    /*if(window_->document()->hasLoadedTypefaces()) {
      /// \note tree must be produced on typeface load event
      //DCHECK(false) << "hasLoadedTypefaces";
    } else {
      //DCHECK(false) << "!hasLoadedTypefaces";
      printf("!hasLoadedTypefaces\n");
      return;
    }*/

  DCHECK(thread_checker_.CalledOnValidThread());

    render_tree_submission_queue_.AddMessage(
        base::Bind(&CobaltTester::OnBrowserRenderTreeProduced,
                   base::Unretained(this),
                   main_web_module_generation, layout_results));
    //self_message_loop_->task_runner()->PostTask(

    self_task_runner_->PostTask(
        FROM_HERE,
        base::Bind(&CobaltTester::BrowserProcessRenderTreeSubmissionQueue,
                   base::Unretained(this)));
    //base::Bind BrowserProcessRenderTreeSubmissionQueue();
}


#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__) \
  && defined(ENABLE_COBALT)
static bool isRenderTreeProducePending = false;
//static cobalt::layout::LayoutManager::LayoutResults pending_layout_results;
static scoped_refptr<render_tree::Node> pending_render_tree;
static base::TimeDelta pending_layout_time;
#endif

// Called by |layout_mananger_| when it produces a render tree. May modify
// the render tree (e.g. to add a debug overlay), then runs the callback
// specified in the constructor, |render_tree_produced_callback_|.
void CobaltTester::OnRenderTreeProduced(const cobalt::layout::LayoutManager::LayoutResults& layout_results) {

  /// \note WASM MT don`t have platform fonts,
  /// rendering without custom fonts may cause deadlock
  //window_->document()->font_cache()->TryGetFont()
  /*if(window_->document()->hasLoadedTypefaces()) {
    /// \note tree must be produced on typeface load event
    //DCHECK(false) << "hasLoadedTypefaces";
  } else {
    //DCHECK(false) << "!hasLoadedTypefaces";
    printf("!hasLoadedTypefaces\n");
    return;
  }*/

  // TODO: remove IsRenderTreePending
  //if(layout_manager_->IsRenderTreePending()) {
  //  return;
  //}

    //printf("OnRenderTreeProduced 1\n");

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__) \
  && defined(ENABLE_COBALT)
    /// TODO:
    /// wasm ST only: we need to split heavy task
    /// into multiple smaller tasks
    /// and process them between
    /// multiple main loop iterations
    /// (otherwise we will block/hang single browser thread
    /// and browser will kill task/free resources)
    if(!isRenderTreeProducePending) {
      //printf("OnRenderTreeProduced 1.1\n");
      isRenderTreeProducePending = true;
      /*pending_layout_results =
        cobalt::layout::LayoutManager::LayoutResults
          (layout_results.render_tree, layout_results.layout_time);*/
      pending_render_tree = layout_results.render_tree;
      pending_layout_time = layout_results.layout_time;
      return;
    }

    isRenderTreeProducePending = false;
#endif

    //printf("OnRenderTreeProduced 1.2\n");

    DCHECK(thread_checker_.CalledOnValidThread());

    /// \see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/browser/browser_module.cc#L736
    auto last_render_tree_produced_time_ = base::TimeTicks::Now();
    cobalt::layout::LayoutManager::LayoutResults layout_results_with_callback(
        layout_results.render_tree, layout_results.layout_time,
        base::Bind(&CobaltTester::OnRenderTreeRasterized,
                   base::Unretained(this),
                   self_task_runner_,
                   last_render_tree_produced_time_));

    int main_web_module_generation_ = 1; // TODO
    OnRenderTreeProducedCallback render_tree_produced_callback_ =
        base::Bind(&CobaltTester::QueueOnRenderTreeProduced,
                   base::Unretained(this),
                   main_web_module_generation_);
///#if defined(ENABLE_DEBUGGER)
///    debug_overlay_->OnRenderTreeProduced(layout_results_with_callback);
///#else   // ENABLE_DEBUGGER
    render_tree_produced_callback_.Run(layout_results_with_callback);
///#endif  // ENABLE_DEBUGGER
}

void CobaltTester::navigationCallback(const GURL&) {
    printf("navigationCallback\n");
}

void CobaltTester::OnStartDispatchEvent(const scoped_refptr<dom::Event>& event) {
    //printf("OnStartDispatchEvent %s\n", event->type().c_str());
    /*if (!on_start_dispatch_event_callback_.is_null()) {
        on_start_dispatch_event_callback_.Run(event);
    }*/
}

void CobaltTester::OnStopDispatchEvent(const scoped_refptr<dom::Event>& event) {
    //printf("OnStopDispatchEvent %s\n", event->type().c_str());
    /*if (!on_stop_dispatch_event_callback_.is_null()) {
        on_stop_dispatch_event_callback_.Run(event);
    }*/
}

void CobaltTester::HandlePointerEvents() {
#if defined(__EMSCRIPTEN__)
  //EM_LOG("HandlePointerEvents 1!\n");
#endif
  //printf("HandlePointerEvents 1!\n");

  // TODO >>>
  //return;

  //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
  //DCHECK(thread_checker_.CalledOnValidThread());

  DCHECK(base::MessageLoopCurrent::Get().task_runner() == main_browser_thread_.task_runner());
  if (base::MessageLoopCurrent::Get().task_runner() != main_browser_thread_.task_runner()) {
  //if (base::MessageLoopCurrent::Get().task_runner() != input_device_thread_.task_runner()) {
    //input_device_thread_.task_runner()->PostTask(
    main_browser_thread_.task_runner()->PostTask(
        FROM_HERE, base::Bind(&CobaltTester::HandlePointerEvents,
                              base::Unretained(this)));
    return;
  }

#if defined(__EMSCRIPTEN__)
    //EM_LOG("HandlePointerEvents 2\n");
#endif
    //printf("HandlePointerEvents 2!\n");

  ///TRACE_EVENT0("cobalt::browser", "WebModule::Impl::HandlePointerEvents");
  const scoped_refptr<dom::Document>& document = window_->document();

  scoped_refptr<dom::Event> event;

  int i = 0;
  do {
    //printf("HandlePointerEvents 2.1\n");
    event = document->pointer_state()->GetNextQueuedPointerEvent();
    if (event) {
      //printf("CobaltTester::HandlePointerEvents 2.2 %s\n", event->type().c_str());
      SB_DCHECK(
          window_ ==
          base::polymorphic_downcast<const dom::UIEvent* const>(event.get())
              ->view());
      if (!topmost_event_target_) {
        topmost_event_target_.reset(new layout::TopmostEventTarget());
      }
      topmost_event_target_->MaybeSendPointerEvents(event);
      i++;
      if(i > 1000) {
        printf("WARNING: too many iterations in HandlePointerEvents!\n");
        DCHECK(false);
        break;
      }
    }
  } while (event && !layout_manager_->IsRenderTreePending());
#if defined(__EMSCRIPTEN__)
  //EM_LOG("HandlePointerEvents 3\n");
#endif
  //printf("HandlePointerEvents 3!\n");
}

// Called when the WebModule's Window.onload event is fired.
void CobaltTester::OnLoad() {
  //printf("OnLoad\n");

  // see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/browser/browser_module.cc#L625
}

#if SB_HAS(ON_SCREEN_KEYBOARD)
void CobaltTester::OnOnScreenKeyboardInputEventProduced(
    base::Token type, const dom::InputEventInit& event) {
  DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
  DCHECK(thread_checker_.CalledOnValidThread());

  /// \todo
  NOTIMPLEMENTED();
  DCHECK(false);
}
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)

void CobaltTester::InjectInputEvent(scoped_refptr<cobalt::dom::Element> element,
                                       const scoped_refptr<cobalt::dom::Event>& event) {
//#if defined(__EMSCRIPTEN__)
//  {
//    std::string str;
//    str += "InjectInputEvent type \n";
//    str += event->type().c_str();
//    str += "\n";
//    EM_LOG(str.c_str());
//  }
//#endif

  // printf("InjectInputEvent 1 %s\n", event->type().c_str());

  DCHECK(base::MessageLoopCurrent::Get().task_runner() == main_browser_thread_.task_runner());
  //if (base::MessageLoopCurrent::Get().task_runner() != input_device_thread_.task_runner()) {
  //  input_device_thread_.task_runner()->PostTask(DCHECK(base::MessageLoopCurrent::Get().task_runner() == main_browser_thread_.task_runner());
  if (base::MessageLoopCurrent::Get().task_runner() != main_browser_thread_.task_runner()) {
    main_browser_thread_.task_runner()->PostTask(
        FROM_HERE, base::Bind(&CobaltTester::InjectInputEvent,
                              base::Unretained(this), element, event));
    return;
  }

  TRACE_EVENT1("cobalt::browser", "WebModule::Impl::InjectInputEvent()",
               "event", event->type().c_str());

  //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
  //DCHECK(thread_checker_.CalledOnValidThread());

  //DCHECK(is_running_);
  DCHECK(window_);

  if (element) {
#if defined(__EMSCRIPTEN__)
  //{
  //  std::string str;
  //  str += "InjectInputEvent type 1.1\n";
  //  EM_LOG(str.c_str());
  //}
#endif
    element->DispatchEvent(event);
  } else {
    if (dom::PointerState::CanQueueEvent(event)) {
      // As an optimization we batch together pointer/mouse events for as long
      // as we can get away with it (e.g. until a non-pointer event is received
      // or whenever the next layout occurs).
#if defined(__EMSCRIPTEN__)
  //{
  //  std::string str = "InjectInputEvent type 1.2\n";
  //  EM_LOG(str.c_str());
  //}
#endif
      window_->document()->pointer_state()->QueuePointerEvent(event);
    } else {
#if defined(__EMSCRIPTEN__)
  //{
  //  std::string str = "InjectInputEvent type 1.3\n";
  //  EM_LOG(str.c_str());
  //}
#endif
      // In order to maintain the correct input event ordering, we first
      // dispatch any queued pending pointer events.
      HandlePointerEvents();
#if defined(__EMSCRIPTEN__)
  //{
  //  std::string str = "InjectInputEvent type 1.4\n";
  //  EM_LOG(str.c_str());
  //}
#endif
      window_->InjectEvent(event);
    }
  }

#if defined(__EMSCRIPTEN__)
  //{
  //  std::string str;
  //  str += "InjectInputEvent 2 type \n";
  //  str += event->type().c_str();
  //  str += "\n";
  //  EM_LOG(str.c_str());
  //}
#endif
  // printf("InjectInputEvent 2 %s\n", event->type().c_str());
}

void CobaltTester::OnKeyEventProduced(base::Token type,
                                       const dom::KeyboardEventInit& event) {
  printf("OnKeyEventProduced 1 %s\n", type.c_str());

  //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
  //DCHECK(thread_checker_.CalledOnValidThread());

  //printf("OnKeyEventProduced client_x %s \n", event.code().c_str());

  DCHECK(system_window_);

  TRACE_EVENT0("cobalt::browser", "CobaltTester::OnKeyEventProduced()");
  DCHECK(self_task_runner_);
  DCHECK(base::MessageLoopCurrent::Get().task_runner() == main_browser_thread_.task_runner());
  if (base::MessageLoopCurrent::Get().task_runner() != main_browser_thread_.task_runner()) {
  //if (base::MessageLoopCurrent::Get().task_runner() != input_device_thread_.task_runner()) {
    main_browser_thread_.task_runner()->PostTask(
        FROM_HERE, base::Bind(&CobaltTester::OnKeyEventProduced,
                              base::Unretained(this), type, event));
    return;
  }

  /*// Filter the key event.
  if (!FilterKeyEvent(type, event)) {
    return;
  }*/

  ///InjectKeyEventToMainWebModule(type, event);

  /*if (base::MessageLoop::current() != self_message_loop_) {
    self_message_loop_->task_runner()->PostTask(
        FROM_HERE, base::Bind(&BrowserModule::InjectKeyEventToMainWebModule,
                              weak_this_, type, event));
    return;
  }*/

  //DCHECK(web_module_);
  //web_module_->InjectKeyboardEvent(type, event);

  scoped_refptr<dom::KeyboardEvent> keyboard_event(
      new dom::KeyboardEvent(type, window_, event));
  InjectInputEvent(scoped_refptr<dom::Element>(), keyboard_event);

  printf("OnKeyEventProduced 1 %s\n", type.c_str());
}

void CobaltTester::OnPointerEventProduced(base::Token type,
                                           const dom::PointerEventInit& event) {
  // printf("OnPointerEventProduced 1 %s\n", type.c_str());

  //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
  //DCHECK(thread_checker_.CalledOnValidThread());

  //printf("OnPointerEventProduced client_x %f client_y %f \n", event.client_x(), event.client_y());
  TRACE_EVENT0("cobalt::browser", "CobaltTester::OnPointerEventProduced()");
  DCHECK(system_window_);
  DCHECK(self_task_runner_);
  bool repipeThreads = false;
  if(base::MessageLoopCurrent::IsSet() && base::MessageLoopCurrent::Get())
  {
    DCHECK(base::MessageLoopCurrent::Get().task_runner() == main_browser_thread_.task_runner());
    //if (base::MessageLoopCurrent::Get().task_runner() != input_device_thread_.task_runner()) {
    if (base::MessageLoopCurrent::Get().task_runner() != main_browser_thread_.task_runner()) {
      repipeThreads = true;
    }
  } else {
    repipeThreads = true;
  }
  if (repipeThreads) {
   //  input_device_thread_.task_runner()->PostTask(
    main_browser_thread_.task_runner()->PostTask(
        FROM_HERE, base::Bind(&CobaltTester::OnPointerEventProduced,
                              base::Unretained(this), type, event));
    return;
  }
/*
#if defined(ENABLE_DEBUGGER)
  // If the debug console is fully visible, it gets the next chance to handle
  // pointer events.
  if (debug_console_->GetMode() >= debug::console::DebugHub::kDebugConsoleOn) {
    if (!debug_console_->FilterPointerEvent(type, event)) {
      return;
    }
  }

#endif  // defined(ENABLE_DEBUGGER)

  DCHECK(web_module_);
  web_module_->InjectPointerEvent(type, event);*/

  scoped_refptr<dom::PointerEvent> pointer_event(
      new dom::PointerEvent(type, window_, event));
  InjectInputEvent(scoped_refptr<dom::Element>(), pointer_event);

  printf("OnPointerEventProduced 2 %s\n", type.c_str());
}

void CobaltTester::OnWheelEventProduced(base::Token type,
                                         const dom::WheelEventInit& event) {
  printf("OnWheelEventProduced 1 %s\n", type.c_str());

  DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
  DCHECK(thread_checker_.CalledOnValidThread());

  //printf("OnWheelEventProduced delta_x %f delta_y %f delta_z %f \n",
  //  event.delta_x(), event.delta_y(), event.delta_z());

  TRACE_EVENT0("cobalt::browser", "CobaltTester::OnWheelEventProduced()");

  DCHECK(system_window_);
  DCHECK(self_task_runner_);
  DCHECK(base::MessageLoopCurrent::Get().task_runner() == main_browser_thread_.task_runner());
  if (base::MessageLoopCurrent::Get().task_runner() != self_task_runner_) {
    self_task_runner_->PostTask(
        FROM_HERE, base::Bind(&CobaltTester::OnWheelEventProduced,
                              base::Unretained(this), type, event));
    return;
  }

  /*if (base::MessageLoop::current() != self_message_loop_) {
    self_message_loop_->task_runner()->PostTask(
        FROM_HERE, base::Bind(&CobaltTester::OnWheelEventProduced, weak_this_,
                              type, event));
    return;
  }

#if defined(ENABLE_DEBUGGER)
  // If the debug console is fully visible, it gets the next chance to handle
  // wheel events.
  if (debug_console_->GetMode() >= debug::console::DebugHub::kDebugConsoleOn) {
    if (!debug_console_->FilterWheelEvent(type, event)) {
      return;
    }
  }

#endif  // defined(ENABLE_DEBUGGER)

  DCHECK(web_module_);
  web_module_->InjectWheelEvent(type, event);*/

  scoped_refptr<dom::WheelEvent> wheel_event(
      new dom::WheelEvent(type, window_, event));
  InjectInputEvent(scoped_refptr<dom::Element>(), wheel_event);

  printf("OnWheelEventProduced 2 %s\n", type.c_str());
}

#ifdef HAS_ICU
//static const icu::Locale *t_icu_locale;

// __TODO__
static void listWordBoundaries(const icu::UnicodeString& s) {
        printf("listWordBoundaries 1\n");
        printf("icu::Locale::getUS() %s, %s\n", icu::Locale::getUS().getLanguage(), icu::Locale::getUS().getName());

        printf("listWordBoundaries 2\n");

    /*if(!t_icu_locale) {
      const char* lang = "C";//;"en_US";
      t_icu_locale = new icu::Locale(lang, nullptr, nullptr, nullptr);
    }*/

    UErrorCode status = U_ZERO_ERROR;
    icu::BreakIterator* bi = icu::BreakIterator::createWordInstance(
      icu::Locale::getUS()
      /**t_icu_locale*/
      , status);
    DCHECK(bi);

    bi->setText(s);
    int32_t p = bi->first();
    while (p != icu::BreakIterator::DONE) {
        printf("Boundary at position %d\n", p);
        p = bi->next();
    }
    delete bi;
}
#endif

CobaltTester::CobaltTester()
  //:  self_task_runner_(base::MessageLoopCurrent::Get().task_runner())
  :  self_task_runner_(main_browser_thread_.task_runner())
{
  ::std::cout << "CobaltTester() at " << base::Time::Now() << "\n";

  DCHECK(self_task_runner_);
  //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), self_task_runner_);
  DCHECK(thread_checker_.CalledOnValidThread());

  // Create the rasterizer using the platform default RenderModule options.
  RendererModule::Options render_module_options;
  render_module_options.enable_fps_stdout = false;
  render_module_options.enable_fps_overlay = false;

  /// \todo https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/renderer/renderer_module_default_options.cc
  //render_module_options.create_rasterizer_function = ;

  render_module_options.submit_even_if_render_tree_is_unchanged = true;
  //rasterizer_ = render_module_options.create_rasterizer_function.Run(
  //    graphics_context_.get(), render_module_options);

  base::Optional<math::Size> maybe_size;
  /*if (options_.requested_viewport_size) {
      maybe_size = options_.requested_viewport_size->width_height();
  }*/
  maybe_size = math::Size(BROWSER_WIDTH, BROWSER_HEIGHT);
  system_window_.reset(
      new system_window::SystemWindow(&event_dispatcher_, maybe_size));

  DCHECK(system_window_);
  input_device_manager_ = input::InputDeviceManager::CreateFromWindow(
      base::Bind(&CobaltTester::OnKeyEventProduced, base::Unretained(this)),
      base::Bind(&CobaltTester::OnPointerEventProduced,
                 base::Unretained(this)),
      base::Bind(&CobaltTester::OnWheelEventProduced, base::Unretained(this)),
#if SB_HAS(ON_SCREEN_KEYBOARD)
      base::Bind(&CobaltTester::OnOnScreenKeyboardInputEventProduced,
                 base::Unretained(this)),
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)
      system_window_.get());

  // Create the main web module layer.
  main_web_module_layer_ =
      render_tree_combiner_.CreateLayer(kMainWebModuleZIndex);

  // see RendererModuleWithCameraOptions
  DCHECK(input_device_manager_);

#if !defined(DISABLE_COBALT_CAMERA3D)
  render_module_options.get_camera_transform = base::Bind(
      &input::Camera3D::GetCameraTransformAndUpdateOrientation, input_device_manager_->camera_3d());
#endif // !defined(DISABLE_COBALT_CAMERA3D)

  DCHECK(system_window_);

  printf("main system_window_->GetWindowSize().ToString().c_str() %s\n",
    system_window_->GetWindowSize().ToString().c_str());

  renderer_module_.reset(new renderer::RendererModule(
      system_window_.get(),
      render_module_options));
      /*RendererModuleWithCameraOptions(render_module_options,
                                      input_device_manager_->camera_3d()
                                      //camera_3d_
                                      )));*/

  DCHECK(renderer_module_);

  //resource_provider_ = rasterizer_->GetResourceProvider();
  resource_provider_ = renderer_module_->resource_provider();
  DCHECK(resource_provider_);
  /*
      if (!renderer_module_) {
        if (resource_provider_stub_) {
          DCHECK(application_state_ == base::kApplicationStatePreloading);
          return &(resource_provider_stub_.value());
        }

      return nullptr;
    }

    return renderer_module_->resource_provider();
   */
  DCHECK(resource_provider_);

  loaded_callbacks.push_back(
      //base::Bind(&CobaltTester::OnLoad, base::Unretained(this)));
      base::Bind(&CobaltTester::OnLoad,
                 base::Unretained(this)));

   dom::OnScreenKeyboardBridge* on_screen_keyboard_bridge = nullptr;

  //CSSParserObserver parser_observer_;
  cobalt::css_parser::Parser::SupportsMapToMeshFlag supports_map_to_mesh =
    cobalt::css_parser::Parser::SupportsMapToMeshFlag::kDoesNotSupportMapToMesh;
    //cobalt::css_parser::Parser::SupportsMapToMeshFlag::kSupportsMapToMesh;
  /*cobalt::css_parser::Parser parser_(base::Bind(&CSSParserObserver::OnWarning,
                         base::Unretained(&parser_observer_)),
              base::Bind(&CSSParserObserver::OnError,
                         base::Unretained(&parser_observer_)),
              cobalt::css_parser::Parser::MessageVerbosity::kShort, supports_map_to_mesh);
  */
  css_parser_ = cobalt::css_parser::Parser::Create(supports_map_to_mesh);

#if !defined(DISABLE_COBALT_DOM_PARSER)
  dom_parser_.reset(new cobalt::dom_parser::Parser());
#endif // !DISABLE_COBALT_DOM_PARSER

  blob_registry_.reset(new dom::Blob::Registry);

  base::Callback<int(const std::string&, std::unique_ptr<char[]>*)>
    read_cache_callback;
  //if (data.options.can_fetch_cache) {
  //  read_cache_callback =
  //      base::Bind(&browser::SplashScreenCache::ReadCachedSplashScreen,
  //                 base::Unretained(data.options.splash_screen_cache));
  //}
  fetcher_factory_.reset(new loader::FetcherFactory(
    nullptr/*network_module*/,
    base::FilePath(FILE_PATH_LITERAL(R"raw()raw")),//base::FilePath("resources/html"), // extra_web_file_dir
    dom::URL::MakeBlobResolverCallback(blob_registry_.get()),
    read_cache_callback));
  DCHECK(fetcher_factory_);

  /// \see https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/cobalt/browser/web_module_stat_tracker.cc
  dom_stat_tracker_ = std::make_unique<DomStatTracker>("name");
  layout_stat_tracker_ = std::make_unique<LayoutStatTracker>("name");

  javascript_engine_ = script::JavaScriptEngine::CreateEngine(
      //data.options.javascript_engine_options);
      );
  DCHECK(javascript_engine_);

  global_environment_ = javascript_engine_->CreateGlobalEnvironment();
  DCHECK(global_environment_);

  execution_state_ =
      script::ExecutionState::CreateExecutionState(global_environment_);
  DCHECK(execution_state_);

  script_runner_ =
      script::ScriptRunner::CreateScriptRunner(global_environment_);
  DCHECK(script_runner_);

#if !defined(DISABLE_COBALT_MEDIA)
  can_play_type_handler_ = cobalt::media::MediaModule::CreateCanPlayTypeHandler();

  media_source_registry_.reset(new dom::MediaSource::Registry);
#endif // !DISABLE_COBALT_MEDIA

  animated_image_tracker_.reset(new loader::image::AnimatedImageTracker(
      base::ThreadPriority::BACKGROUND));

  /*source_location_.reset(
  new base::SourceLocation("[object HTMLDecoderTest]", 1, 1));*/

  loader_factory_.reset(
      new loader::LoaderFactory("MainLoaderFactory",
                                fetcher_factory_.get(),
                                resource_provider_,
                                /* encoded_image_cache_capacity */ 10,
                                /*data.options.loader_thread_priority*/ base::ThreadPriority::NORMAL));

  //DCHECK_LE(0, data.options.image_cache_capacity);
  image_cache_ = loader::image::CreateImageCache(
      base::StringPrintf("%s.ImageCache", "Test"),
      static_cast<uint32>(32U * 1024 * 1024),
      loader_factory_.get());
  DCHECK(image_cache_);

  reduced_image_cache_capacity_manager_.reset(
      new loader::image::ReducedCacheCapacityManager(
          image_cache_.get(),
          1.0f));

  remote_typeface_cache_ = loader::font::CreateRemoteTypefaceCache(
      base::StringPrintf("%s.RemoteTypefaceCache", "name_.c_str()"),
      // 4Mb, see memory_tuning.md
      static_cast<uint32>(4 * 1024 * 1024/*data.options.remote_typeface_cache_capacity*/),
      loader_factory_.get());
  DCHECK(remote_typeface_cache_);

#if defined(ENABLE_COBALT_SPATIAL_MESH)
  mesh_cache_ = loader::mesh::CreateMeshCache(
      base::StringPrintf("%s.MeshCache", "name_.c_str()"),
      static_cast<uint32>(1024/*data.options.mesh_cache_capacity*/),
      loader_factory_.get());
  DCHECK(mesh_cache_);
#endif // ENABLE_COBALT_SPATIAL_MESH

   P_LOG("Create html_element_context_...\n");
   html_element_context_.reset(new cobalt::dom::HTMLElementContext(
        //&fetcher_factory_, &loader_factory_, &stub_css_parser_,
        fetcher_factory_.get(), loader_factory_.get(), css_parser_.get(),
#if !defined(DISABLE_COBALT_DOM_PARSER)
        dom_parser_.get(),
#endif // !DISABLE_COBALT_DOM_PARSER
#if !defined(DISABLE_COBALT_MEDIA)
        can_play_type_handler_.get(),
        nullptr , // web_media_player_factory_
#endif // !DISABLE_COBALT_MEDIA
        script_runner_.get(), // &stub_script_runner_,
        nullptr ,
#if !defined(DISABLE_COBALT_MEDIA)
        media_source_registry_.get(),
#endif // !DISABLE_COBALT_MEDIA
        &resource_provider_,
        animated_image_tracker_.get(), image_cache_.get(),
        reduced_image_cache_capacity_manager_.get(), remote_typeface_cache_.get(),
#if defined(ENABLE_COBALT_SPATIAL_MESH)
        mesh_cache_.get(),
#endif // ENABLE_COBALT_SPATIAL_MESH
        dom_stat_tracker_.get(),
        "en_US", //"font_language_script",
        base::kApplicationStateStarted,
        &synchronous_loader_interrupt_));

#if !defined(DISABLE_COBALT_STORAGE)
  local_storage_database_.reset(
      //new dom::LocalStorageDatabase(data.network_module->storage_manager()));
      new dom::LocalStorageDatabase(nullptr));
  DCHECK(local_storage_database_);
#endif // !DISABLE_COBALT_STORAGE

  /*web_module_stat_tracker_.reset(
      new browser::WebModuleStatTracker(name_, data.options.track_event_stats));
  DCHECK(web_module_stat_tracker_);*/

#if !defined(DISABLE_COBALT_MEDIA)
  //media_session_client_ = media_session::MediaSessionClient::Create();
#endif // !DISABLE_COBALT_MEDIA

  system_caption_settings_ = new cobalt::dom::captions::SystemCaptionSettings();

  dom::Window::CacheCallback splash_screen_cache_callback;// =
      //CacheUrlContentCallback(data.options.splash_screen_cache);

  // These members will reference other |Traceable|s, however are not
  // accessible from |Window|, so we must explicitly add them as roots.
  global_environment_->AddRoot(&mutation_observer_task_manager_);
#if !defined(DISABLE_COBALT_MEDIA)
  global_environment_->AddRoot(media_source_registry_.get());
#endif // !DISABLE_COBALT_MEDIA
  global_environment_->AddRoot(blob_registry_.get());

  P_LOG("Create ui_nav_root_...\n");

  ui_nav_root_ = (new cobalt::ui_navigation::NavItem(
      cobalt::ui_navigation::kNativeItemTypeContainer,
      // Currently, events do not need to be processed for the root item.
      base::Closure(), base::Closure(), base::Closure()));

  P_LOG("Create dom::Window 1...\n");

  layout_trigger = layout::LayoutManager::LayoutTrigger::kOnDocumentMutation;

  // In the off chance we have non-square pixels, use the max ratio so the
  // highest quality video suitable to the device gets selected.
  /*float video_pixel_ratio = std::max(
      static_cast<float>(display_width) / size->width,
      static_cast<float>(display_height) / size->height);*/

  /*scoped_refptr<cobalt::dom::Document> new_document_
    = new cobalt::dom::Document(html_element_context_.get());*/

#if defined(ENABLE_TEST_RUNNER)
  auto clock_type =
    data.options.layout_trigger == layout::LayoutManager::kTestRunnerMode
      ? dom::Window::kClockTypeTestRunner
      : (data.options.limit_performance_timer_resolution
             ? dom::Window::kClockTypeResolutionLimitedSystemTime
             : dom::Window::kClockTypeSystemTime);
#else
  auto clock_type =
    dom::Window::kClockTypeSystemTime;//kClockTypeResolutionLimitedSystemTime;
#endif

  scoped_refptr<cobalt::dom::Performance> performance
    = new cobalt::dom::Performance(
        cobalt::dom::Window::MakePerformanceClock(clock_type));

  GURL url(R"raw(file:///resources/html/index.html)raw");

  P_LOG("Create dom::Window 2...\n");

  DCHECK(input_device_manager_);
  const bool autoStartDocumentLoad = false;
  DCHECK(!window_);
  window_ = new cobalt::dom::Window(
      performance,
      autoStartDocumentLoad,
      cssom::ViewportSize(BROWSER_WIDTH, BROWSER_HEIGHT), //data.window_dimensions,
      1.0,//data.video_pixel_ratio,
      base::ApplicationState::kApplicationStateStarted,//data.initial_application_state,
      css_parser_.get(),
#if !defined(DISABLE_COBALT_DOM_PARSER)
      dom_parser_.get(),
#endif // !DISABLE_COBALT_DOM_PARSER
      fetcher_factory_.get(),
      loader_factory_.get(),
      &resource_provider_,
      animated_image_tracker_.get(),
      image_cache_.get(),
      reduced_image_cache_capacity_manager_.get(),
      remote_typeface_cache_.get(),
#if defined(ENABLE_COBALT_SPATIAL_MESH)
      mesh_cache_.get(),
#endif // ENABLE_COBALT_SPATIAL_MESH
#if !defined(DISABLE_COBALT_STORAGE)
      local_storage_database_.get(),
#endif // !DISABLE_COBALT_STORAGE
#if !defined(DISABLE_COBALT_MEDIA)
      can_play_type_handler_.get(),//data.can_play_type_handler,
      nullptr,//data.web_media_player_factory,
#endif // !DISABLE_COBALT_MEDIA
      execution_state_.get(),
      script_runner_.get(),
      global_environment_->script_value_factory(),
#if !defined(DISABLE_COBALT_MEDIA)
      media_source_registry_.get(),
#endif // !DISABLE_COBALT_MEDIA
      dom_stat_tracker_.get(),//nullptr,//web_module_stat_tracker_->dom_stat_tracker(),
      //GURL(R"raw(file:///resources/html/index.html)raw"),//data.initial_url,
      //GURL(R"raw()raw"),//data.initial_url,
      url,
      "data.network_module->GetUserAgent()",
      "data.network_module->preferred_language()",
      "en_US", // font_language_script
      //ata.options.font_language_script_override.empty()
      //   ? base::GetSystemLanguageScript()
      //   : data.options.font_language_script_override,
      base::Bind(&CobaltTester::CobaltTester::navigationCallback, base::Unretained(this)),
      //base::Bind(&navigationCallback, base::Unretained(this)),//data.options.navigation_callback, // const base::Callback<void(const GURL&)>
      //base::Bind(&OnLoadComplete, base::Unretained(this)),
      base::Bind(&CobaltTester::OnLoadComplete, base::Unretained(this)),
      // //data.network_module->cookie_jar(),
      // //data.network_module->GetPostSender(),
      // //data.options.require_csp,
#if defined(ENABLE_COBALT_CSP)
      csp::CSPHeaderPolicy::kCSPOptional,
#endif
      cobalt::dom::CspEnforcementType::kCspEnforcementDisable,
      ///csp::kCspEnforcementEnable,//data.options.csp_enforcement_mode,
      //base::Bind(&OnCspPolicyChanged, base::Unretained(this)),
      base::Bind(&CobaltTester::OnCspPolicyChanged, base::Unretained(this)),
      //base::Bind(&OnRanAnimationFrameCallbacks,
      //           base::Unretained(this)),
      base::Bind(&CobaltTester::OnRanAnimationFrameCallbacks, base::Unretained(this)),
      base::Bind(&CobaltTester::OnWindowClose, base::Unretained(this)),
      //base::Bind(&OnWindowClose, base::Unretained(this)), //data.window_close_callback, // base::Callback<void(base::TimeDelta)>
      //base::Bind(&OnWindowMinimize, base::Unretained(this)), //data.window_minimize_callback, // base::Closure
      base::Bind(&CobaltTester::OnWindowMinimize, base::Unretained(this)),
      on_screen_keyboard_bridge, //data.options.on_screen_keyboard_bridge,
#if !defined(DISABLE_COBALT_CAMERA3D)
      input_device_manager_->camera_3d(), //new Camera3D(),//data.options.camera_3d,
#endif // !defined(DISABLE_COBALT_CAMERA3D)
      // //media_session_client_->GetMediaSession(),
      base::Bind(&CobaltTester::OnStartDispatchEvent, base::Unretained(this)),
      //base::Bind(&WebModule::Impl::OnStartDispatchEvent,
      //           base::Unretained(this)),
      base::Bind(&CobaltTester::OnStopDispatchEvent, base::Unretained(this)),
      //base::Bind(&WebModule::Impl::OnStopDispatchEvent, base::Unretained(this)),
      provide_screenshot_function,//data.options.provide_screenshot_function,
      &synchronous_loader_interrupt_,
      ui_nav_root_,//data.ui_nav_root,
      0,//data.options.csp_insecure_allowed_token,
      999,//data.dom_max_element_depth,
      1.0,//data.options.video_playback_rate_multiplier,
  //#if defined(ENABLE_NATIVE_HTML)
  //      dom::Window::kClockTypeTestRunner,
  //#elif
      clock_type,
      splash_screen_cache_callback,
      system_caption_settings_,
      false//log_tts
      );
  DCHECK(window_);

  P_LOG("AddHTMLElementWithSingleTagName...\n");

  DCHECK(window_);
  DCHECK(window_->document());
  scoped_refptr<Document> document_ = window_->document();
  //scoped_refptr<HTMLElement> elem = new HTMLInputElement(document_.get());
  DCHECK(document_->html_element_context());
  DCHECK(document_->html_element_context()->html_element_factory());

  {
      HTMLElementFactory::CreateHTMLElementTCallback create_input_cb
        = base::Bind([](Document* document) {
            scoped_refptr<HTMLElement> elem = new HTMLInputElement(document);
            return elem;
          });
      document_->html_element_context()->html_element_factory()->
        AddHTMLElementWithSingleTagName(HTMLInputElement::kTagName, create_input_cb);
  }

  {
      HTMLElementFactory::CreateHTMLElementTCallback create_component_cb
          = base::Bind([](Document* document) {
                scoped_refptr<HTMLElement> elem = new HTMLComponentElement(document);
                return elem;
            });
      document_->html_element_context()->html_element_factory()->
          AddHTMLElementWithSingleTagName(HTMLComponentElement::kTagName, create_component_cb);
  }

  P_LOG("Create window_weak_...\n");

  window_weak_ = base::AsWeakPtr(window_.get());
  DCHECK(window_weak_);

  printf("document_->set_window...\n");
#if !defined(DISABLE_COBALT_DOM_PARSER)
  if(!autoStartDocumentLoad)
  {
    const bool document_load_started = window_->TryForceStartDocumentLoad();
    //DCHECK(document_load_started);
  }
#endif // !DISABLE_COBALT_DOM_PARSER

  printf("document_->set_window...\n");

  window_->document()->set_window(window_->window().get());
  window_->document()->SetViewport(
    cssom::ViewportSize(BROWSER_WIDTH, BROWSER_HEIGHT));//kViewSize);

  environment_settings_.reset(new cobalt::dom::DOMSettings(
      99,//kDOMMaxElementDepth,
      fetcher_factory_.get(),
      nullptr,//data.network_module,
      window_,
#if !defined(DISABLE_COBALT_MEDIA)
      media_source_registry_.get(),
#endif // !DISABLE_COBALT_MEDIA
      blob_registry_.get(),
#if !defined(DISABLE_COBALT_MEDIA)
      can_play_type_handler_.get(),//data.can_play_type_handler,
#endif // !DISABLE_COBALT_MEDIA
      javascript_engine_.get(),
      global_environment_.get(),
      &mutation_observer_task_manager_,
      //data.options.dom_settings_options
      dom_settings_options
      ));
  DCHECK(environment_settings_);

  window_->SetEnvironmentSettings(environment_settings_.get());

  /*layout_manager_.reset(new cobalt::layout::LayoutManager(
      "name_",
      window_,
      //base::Bind(&WebModule::Impl::OnRenderTreeProduced,
      //           base::Unretained(this)),
      base::Bind(&CobaltTester::OnRenderTreeProduced, base::Unretained(this)),
      //base::Bind(&WebModule::Impl::HandlePointerEvents, base::Unretained(this)),
      base::Bind(&CobaltTester::HandlePointerEvents, base::Unretained(this)),
      layout_trigger,//data.options.layout_trigger,
      99,//data.dom_max_element_depth,
      layout_refresh_rate_,
      "en_US", //"data.network_module->preferred_language()",
      false, //data.options.enable_image_animations,
      layout_stat_tracker_.get(),//web_module_stat_tracker_->layout_stat_tracker(),
      false//data.options.clear_window_with_background_color
      ));
  DCHECK(layout_manager_);

    if (!loaded_callbacks.empty()) {
        document_load_observer_.reset(
            new DocumentLoadedObserver(loaded_callbacks));
        window_->document()->AddObserver(document_load_observer_.get());
    }*/

  skemgl::preload_textfield_controller_creators();
  skemgl::preload_web_components();
  //generated::models::registerHTMLModels();

  window_->document()->setHTMLModelRegistry(
    std::make_unique<generated::models::MainHTMLModelRegistry>());

#if defined(DISABLE_COBALT_DOM_PARSER)
  scoped_refptr<cobalt::dom::HTMLElement> new_root_
    = window_->document()->CreateElement("html")->AsHTMLElement();
  scoped_refptr<cobalt::dom::HTMLElement> new_head_
    = window_->document()->CreateElement("head")->AsHTMLElement();
  scoped_refptr<cobalt::dom::HTMLElement> new_body_
    = window_->document()->CreateElement("body")->AsHTMLElement();
  new_root_->AppendChild(new_head_);
  new_root_->AppendChild(new_body_);
  window_->document()->AppendChild(new_root_);
#if 0
  new_head_->set_inner_html(
      R"raw(<style>
      html {
        width:100%;
        height:100%;
        overflow: hidden;
      }
      body {
        background:yellow;

        /*
           calc unsupported
             see https://css-tricks.com/fun-viewport-units/
             Minimum 16x, and grows more slowly
             (half the rate of screen growth)
           font-size: calc(16px + 0.5vw);
             see https://css-tricks.com/fun-viewport-units/
             Line-height based on font-size,
             with addition viewport-relative growth
           line-height: calc(1.1em + 0.5vw);
        */

        font-family: "UbuntuCustom";
        font-size: 20px;
        width:100%;
        height:100%;
        overflow: hidden;
      }
      </style>)raw");
  new_body_->set_inner_html(
    R"raw(
    <div class="flip-card" style="z-index:999;">
      <div class="flip-card-inner">
        <div class="flip-card-front">
          <div style="background-image: url('file:///resources/images/mouse.jpeg'); width:300px; height:300px;">
          </div>
        </div>
        <div class="flip-card-back">
          <div>
            <div style="width:1000px;">
              <sk_input width="1000" height="50" style="width:100%;height:50px;" tabindex="0">
                text 2
              </sk_input>
            </div>
            <skottie width="40" height="40" src="./resources/animations/data.json" style="display:block;color:#CCC;width:40px;height:40px;z-index:999;">
            </skottie>
            kkk
          </div>
        </div>
      </div>
    </div>
    )raw");
#endif // 0
  //new_body_->set_text_content("text_content");

  new_body_->SetAttribute("style", "font-size: 20px;width:100%;height:100%;overflow: hidden;background:yellow;");

  scoped_refptr<HTMLElement> div_element_3 =
    new cobalt::dom::HTMLDivElement(document_.get());
  div_element_3->SetAttribute("style", "height:120px;width:100px;background:red;padding:10px;border:5px solid green;");
  div_element_3->AsHTMLElement()->
    style()->set_width("210px", /*todo*/nullptr);
  div_element_3->AppendChild(new cobalt::dom::Text(document_.get(), "This ваыва 123 `1`12"));
  new_body_->AppendChild(div_element_3);
#endif // DISABLE_COBALT_DOM_PARSER
}

static void createCobaltTester() {
    printf("Starting g_cobaltTester...\n");
    /// __TODO__
    g_cobaltTester = std::make_unique<CobaltTester>();

    DCHECK(g_cobaltTester);
    //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), g_cobaltTester->self_task_runner_);
    DCHECK(g_cobaltTester->thread_checker_.CalledOnValidThread());

    /*scoped_refptr<Document> document_ = g_cobaltTester->window_->document();
    document_->html_element_context()->html_element_factory()->
      AddHTMLElementWithSingleTagName<HTMLCustomElement>();*/

    /// __TODO__
    {
        //g_cobaltTester->run();
    }
    printf("Finishing createCobaltTester...\n");
    //main_thread_event_->Signal();
    ///} else if (!g_cobaltTester->isLoadComplete_) {
    ///  /// wait
    ///  //if (isDebugPeriodReached())
    ///  printf("!g_cobaltTester->isLoadComplete_\n");
}

static void createLayoutManager() {
  DCHECK(g_cobaltTester);
  //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), g_cobaltTester->self_task_runner_);
  DCHECK(g_cobaltTester->thread_checker_.CalledOnValidThread());
  printf("layout_manager_.reset...\n");

  ///printf("g_cobaltTester->layout_refresh_rate_ %f...\n", g_cobaltTester->layout_refresh_rate_);

  g_cobaltTester->layout_manager_.reset(new cobalt::layout::LayoutManager(
      "name_",
      /// window_.get(),
      g_cobaltTester->window_, /// __TODO__
      ///window_.get(),
      //base::Bind(&WebModule::Impl::OnRenderTreeProduced,
      //           base::Unretained(this)),
      base::Bind(&CobaltTester::OnRenderTreeProduced,
                 base::Unretained(g_cobaltTester.get())),
      //base::Bind(&WebModule::Impl::HandlePointerEvents, base::Unretained(this)),
      base::Bind(&CobaltTester::HandlePointerEvents,
                 base::Unretained(g_cobaltTester.get())),
      g_cobaltTester->layout_trigger,//data.options.layout_trigger,
      99,//data.dom_max_element_depth,
      g_cobaltTester->layout_refresh_rate_,
      "en_US", //"data.network_module->preferred_language()",
      true, //data.options.enable_image_animations,
      g_cobaltTester->layout_stat_tracker_.get(),//web_module_stat_tracker_->layout_stat_tracker(),
      false//data.options.clear_window_with_background_color
      ));
  DCHECK(g_cobaltTester->layout_manager_);

  if (!g_cobaltTester->loaded_callbacks.empty()) {
      g_cobaltTester->document_load_observer_.reset(
          new DocumentLoadedObserver(g_cobaltTester->loaded_callbacks));
      g_cobaltTester->window_->document()->AddObserver(g_cobaltTester->document_load_observer_.get());
  }
}

void CobaltTester::run() {
  printf("CobaltTester::run...\n");
  DCHECK(g_cobaltTester);
  DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), g_cobaltTester->self_task_runner_);
  DCHECK(g_cobaltTester->thread_checker_.CalledOnValidThread());
}
#endif // ENABLE_COBALT

static void animate() {
  //redClrTintAnim += 0.01f;
  //if (redClrTintAnim > 360.0f) {
  //  redClrTintAnim = 0.0f;
  //}

  //printf("animate start\n");

#if defined(ENABLE_SKIA)
  if(!render_browser_window) {
    skiaUiDemo.animateUI();
  }
#endif // ENABLE_SKIA

  /// \note: (only wasm ST - wasm without pthreads)
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__) \
  && defined(ENABLE_COBALT)
  /// \todo posts new task every frame
  //if (!createdCobaltTester)
  {
      /// \note g_cobaltTester created from separate thread, so
      /// we use extra variable: don`t call "if (!g_cobaltTester)" here
      //createdCobaltTester = true;
      if (!g_cobaltTester) {
          printf("Creating g_cobaltTester (wasm ST)...\n");
          //emscripten_pause_main_loop();
          createCobaltTester();
          //emscripten_resume_main_loop();
      }
      else if (
          !g_cobaltTester->layout_manager_
          ///&& g_cobaltTester->isLoadComplete_
          ) {
          //emscripten_pause_main_loop();
          createLayoutManager();
          //emscripten_resume_main_loop();
      }
      /// \note: (only wasm ST - wasm without pthreads)
      /// don`t batch a lot of work to browser
      /// or browser will crash/hang/loose webgl context
      /// you MUST split work between main loop iterations
      else if(!g_cobaltTester->window_->isDocumentStartedLoading()) {
#if !defined(DISABLE_COBALT_DOM_PARSER)
          //emscripten_pause_main_loop();
          printf("g_cobaltTester TryForceStartDocumentLoad 1\n");
          DCHECK(g_cobaltTester);
          DCHECK(g_cobaltTester->window_);
          const bool res = g_cobaltTester->window_->TryForceStartDocumentLoad();
          //DCHECK(res);
          printf("g_cobaltTester TryForceStartDocumentLoad 2\n");
          //emscripten_resume_main_loop();
#else
          DCHECK(false);
#endif // !defined(DISABLE_COBALT_DOM_PARSER)
      }
      else if(!g_cobaltTester->window_->isStartedDocumentLoader()) {
          //emscripten_pause_main_loop();
          printf("g_cobaltTester ForceStartDocumentLoader 1\n");
          g_cobaltTester->window_->ForceStartDocumentLoader();
          printf("g_cobaltTester ForceStartDocumentLoader 1\n");
          //emscripten_resume_main_loop();
      }
      /// __TODO__
      else /*if (render_browser_window)*/
      {
          if(g_cobaltTester
              && g_cobaltTester->window_->isStartedDocumentLoader()
              && g_cobaltTester->window_->isDocumentStartedLoading())
          {

              /// \note SampleTimelineTime also used
              /// in ForceReLayout / DoLayoutAndProduceRenderTree
              if (g_cobaltTester->window_->document()->html()) {
                g_cobaltTester->window_->document()->SampleTimelineTime();
              }

              // TODO: use layout period, NOT isDebugPeriodReached (!!!)
              //if(isDebugPeriodReached()) printf("isDebugPeriodReached() render_browser_window \n");
              //if(isLayoutRefreshReached()) printf("isLayoutRefreshReached() render_browser_window \n");
              //if(!hasLayout) printf("!hasLayout render_browser_window \n");

              //if (isLayoutRefreshReached() /*|| !hasLayout*/)
              if (isRenderTreeProducePending) {
                //emscripten_pause_main_loop();

                //printf("g_cobaltTester isRenderTreeProducePending OnRenderTreeProduced\n");

                g_cobaltTester->OnRenderTreeProduced(
                  // pending_layout_results
                  cobalt::layout::LayoutManager::LayoutResults
                  (pending_render_tree, pending_layout_time)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          );
                //emscripten_resume_main_loop();

                g_cobaltTester->renderer_module_->pipeline()->RasterizeCurrentTree();
              } else {
                  DCHECK(!isRenderTreeProducePending);
                  //emscripten_pause_main_loop();
                  //if (isDebugPeriodReached())

                  //printf("g_cobaltTester ForceReLayout\n");

                  DCHECK(g_cobaltTester);
                  DCHECK(g_cobaltTester->window_);
                  DCHECK(g_cobaltTester->window_->document());
                  DCHECK(g_cobaltTester->window_);
                  DCHECK(g_cobaltTester->window_->isDocumentStartedLoading());
                  DCHECK(g_cobaltTester->window_->isStartedDocumentLoader());
                  DCHECK(g_cobaltTester);
                  DCHECK(g_cobaltTester->layout_manager_);

//#ifdef __TODO__
//  g_cobaltTester->window_->document()->DoSynchronousLayoutAndGetRenderTree();
//#endif // __TODO__

                  g_cobaltTester->layout_manager_->ForceReLayout();

                  g_cobaltTester->renderer_module_->pipeline()->RasterizeCurrentTree();

                  //hasLayout = true;

                  //if (isDebugPeriodReached())
                  //printf("g_cobaltTester->run\n");
                  //emscripten_resume_main_loop();
              }
          } // if(g_cobaltTester && .. )
      } // if (render_browser_window)

  } // if (!createdCobaltTester)
#endif

  //if (g_cobaltTester && g_cobaltTester->window_ && g_cobaltTester->window_->document()) {
  //    //g_cobaltTester->window_->document()->DoSynchronousLayoutAndGetRenderTree();
  //    g_cobaltTester->layout_manager_->ForceReLayout();
  //}

    if (isDebugPeriodReached()) printf("animate end\n");
    //printf("animate end\n");
}

static void onResize(int widthIn, int heightIn)
{
  printf("onResize %d %d\n", widthIn, heightIn);

  DCHECK(widthIn <= MAX_DRAW_BUFFER_WIDTH && widthIn >= 0);
  DCHECK(heightIn <= MAX_DRAW_BUFFER_HEIGHT && heightIn >= 0);

  DRAW_BUFFER_WIDTH = widthIn;//std::min(widthIn, MAX_DRAW_BUFFER_WIDTH);
  DRAW_BUFFER_HEIGHT = heightIn;//std::min(heightIn, MAX_DRAW_BUFFER_HEIGHT);

  DRAW_SURFACE_WIDTH = DRAW_BUFFER_WIDTH;
  DRAW_SURFACE_HEIGHT = DRAW_BUFFER_HEIGHT;

  BROWSER_WIDTH = DRAW_SURFACE_WIDTH;
  BROWSER_HEIGHT = DRAW_SURFACE_HEIGHT;

#if defined(ENABLE_OPENGL)
  glViewport(0, 0, widthIn, heightIn);
#endif // ENABLE_OPENGL

  // see https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/starboard/shared/x11/application_x11.cc#L1299
#if defined(ENABLE_COBALT)
  base::OnceClosure func = base::Bind([](int w, int h)
  {
    float diagonal = 0.0f;  // Special value meaning diagonal size is not known.
#if defined(__EMSCRIPTEN__)
    // https://github.com/Becavalier/Book-DISO-WebAssembly/issues/10
    double dpr = emscripten_get_device_pixel_ratio();
#else
    double dpr = 1.0; //(float)w / (float)h;
    /*if (g_cobaltTester && g_cobaltTester->system_window_) {
      dpr = g_cobaltTester->system_window_->GetVideoPixelRatio();
    }*/
#endif // __EMSCRIPTEN__

    if(g_cobaltTester && g_cobaltTester->system_window_) {
      DCHECK(g_cobaltTester->system_window_->GetSbWindow());
      g_cobaltTester->system_window_->GetSbWindow()->width = w;
      g_cobaltTester->system_window_->GetSbWindow()->height = h;

      // In the off chance we have non-square pixels, use the max ratio so the
      // highest quality video suitable to the device gets selected.
      /*float video_pixel_ratio = std::max(
          static_cast<float>(display_width) / size->width,
          static_cast<float>(display_height) / size->height);*/

      g_cobaltTester->system_window_->GetSbWindow()->video_pixel_ratio = 1.0;//dpr;

      printf("system_window_->GetWindowSize().c_str() %s\n",
        g_cobaltTester->system_window_->GetWindowSize().ToString().c_str());

      DCHECK(g_cobaltTester->system_window_->GetWindowSize().GetArea() > 0);
    }

    if(g_cobaltTester && g_cobaltTester->window_) {
      DCHECK(g_cobaltTester->renderer_module_);
      DCHECK(g_cobaltTester->renderer_module_->pipeline());
      DCHECK(g_cobaltTester->layout_manager_);
      DCHECK(g_cobaltTester->renderer_module_->render_target());
      DCHECK(g_cobaltTester->window_->document());

      // see DisplayStub
      g_cobaltTester->renderer_module_->render_target()->SetSize(cobalt::math::Size(w, h));

      printf("g_cobaltTester->renderer_module_->render_target()->GetSize().c_str() %s\n",
        g_cobaltTester->renderer_module_->render_target()->GetSize().ToString().c_str());

      /// \note SetSize calls window_->document()->SetViewport
      g_cobaltTester->window_->SetSize(
        cobalt::cssom::ViewportSize(w, h/*, diagonal*/), dpr);
      g_cobaltTester->window_->document()->SetViewport(
        cobalt::cssom::ViewportSize(w, h/*, diagonal*/));
      // TODO: render_target_size

      printf("g_cobaltTester->window_->inner_width %f inner_height %f\n",
        g_cobaltTester->window_->inner_width(), g_cobaltTester->window_->inner_height());

      printf("g_cobaltTester->window_->outer_width %f outer_height %f\n",
        g_cobaltTester->window_->outer_width(), g_cobaltTester->window_->outer_height());

      printf("g_cobaltTester->window_->screen_x %f screen_y %f\n",
        g_cobaltTester->window_->screen_x(), g_cobaltTester->window_->screen_y());

      printf("g_cobaltTester->window_->device_pixel_ratio %f\n",
        g_cobaltTester->window_->device_pixel_ratio());

      printf("g_cobaltTester->window_->screen()->avail_width() %f avail_height %f\n",
        g_cobaltTester->window_->screen()->avail_width(), g_cobaltTester->window_->screen()->avail_height());

      if (!g_cobaltTester->window_->document()->html()) {
        DCHECK(false);
      }

      // g_cobaltTester->window_->document()->SampleTimelineTime();

      // g_cobaltTester->layout_manager_->ForceReLayout();

      // g_cobaltTester->renderer_module_->pipeline()->RasterizeCurrentTree();

      printf("g_cobaltTester->window_->screen() size %f %f\n",
        g_cobaltTester->window_->screen()->width(),
        g_cobaltTester->window_->screen()->height());

      printf("g_cobaltTester->window_->document()->viewport_size().width_height()  %s\n",
        g_cobaltTester->window_->document()->viewport_size().width_height().ToString().c_str());

    }
  }, BROWSER_WIDTH, BROWSER_HEIGHT);

  if(g_cobaltTester && g_cobaltTester->system_window_) {
#if !defined(DISABLE_PTHREADS)
    main_browser_thread_.task_runner()->PostTask(
      FROM_HERE, base::BindOnce([](base::OnceClosure func) {
        DCHECK(g_cobaltTester);
        DCHECK(g_cobaltTester->system_window_);
        std::move(func).Run();
        printf("main_browser_thread_ system_window_->GetWindowSize().ToString().c_str() %s\n",
          g_cobaltTester->system_window_->GetWindowSize().ToString().c_str());
      }, std::move(func))
    );
#elif defined(DISABLE_PTHREADS)
    std::move(func).Run();
#endif // DISABLE_PTHREADS
  }
#endif // ENABLE_COBALT
}

#if defined(ENABLE_COBALT) && defined(ENABLE_SKIA)
static void drawBrowserDemo() {
    //using cobalt::renderer::rasterizer::egl::getRasterizerSkSurface;
    using cobalt::renderer::rasterizer::egl::getRasterizerSkImage;
    //using cobalt::renderer::rasterizer::egl::getRasterizerSkPixmap;

    ///if (isDebugPeriodReached()) printf("Draw() 7\n");
#if !defined(OS_EMSCRIPTEN)
    sk_sp<SkImage> pImage = getRasterizerSkImage();
    if(pImage) {
        SkPixmap pixmap;
        if (!pImage->peekPixels(&pixmap)) {
            ///if (isDebugPeriodReached())
            printf("can`t peekPixels\n");
        }
#endif // OS_EMSCRIPTEN

#if defined(OS_EMSCRIPTEN)
        const SkPixmap& pixmap = browserPixmapCache;
#else // OS_EMSCRIPTEN
        //const SkPixmap& pixmap = getRasterizerSkPixmap();
#endif // OS_EMSCRIPTEN

        if(!pixmap.bounds().isEmpty()) {
            DCHECK(!pixmap.bounds().isEmpty());
            ///if (isDebugPeriodReached()) printf("Draw() 7.1\n");
            //if(!render_browser_window) {
              skiaUiDemo.drawTexture(pixmap.width(), pixmap.height(), pixmap.addr());
            //}
        } else {
#if defined(ENABLE_BASE)
            NOTIMPLEMENTED_LOG_ONCE(); // TODO
#endif // ENABLE_BASE
        }

#if !defined(OS_EMSCRIPTEN)
    } else { // if(pImage)
#endif // OS_EMSCRIPTEN

#if !defined(OS_EMSCRIPTEN)
    } // if(pImage)
#endif // OS_EMSCRIPTEN

    //if (nullptr == pImage) {
    //    ///if (isDebugPeriodReached())
    //    printf("can`t get pImage\n");
    //}
}
#endif // ENABLE_COBALT

///
// Draw a triangle using the shader pair created in Init()
//
#if defined(ENABLE_OPENGL)
static void Draw() {
  //printf("Draw!\n");

  //if (isDebugPeriodReached()) printf("Draw() 1\n");

  GL_CHECK( glClear(GL_COLOR_BUFFER_BIT) );

//#if defined(__TODO__)
  GL_CHECK( glUseProgram(programObject) );
  GL_CHECK( glActiveTexture(GL_TEXTURE0) );
  ///if (isDebugPeriodReached()) printf("Draw() 2\n");

#if defined(ENABLE_SKIA)

#if defined(ENABLE_COBALT) && defined(ENABLE_SKIA)
  if (render_browser_window
      /*&& g_cobaltTester
      && g_cobaltTester->window_->isDocumentStartedLoading()
      && g_cobaltTester->window_->isStartedDocumentLoader()*/)
  {
      if (isDebugPeriodReached()) printf("drawBrowserDemo!\n");
      drawBrowserDemo();
  } else
#endif
#if defined(ENABLE_SK_UI)
  {
#if !defined(SEPARATE_UI_THREAD)
    if(!render_browser_window) {
      if (isDebugPeriodReached()) printf("refreshUIDemo (ST)!\n");
      skiaUiDemo.refreshUIDemo();
    }
#else
  // TODO post_task_and_reply_impl.cc(150)] Check failed: has_sequenced_context || !post_task_success.

  /// FIXME: spammed queue stops app from closing
  {
    /// FIXME: no locks in main browser thread
    std::scoped_lock ui_lock(canRefreshUIMutex);
    if (canRefreshUI
        /*&& !ui_draw_thread_.task_runner()->RunsTasksInCurrentSequence()*/)
    {
      // TODO: PostTask PostBlockingTask
      ui_draw_thread_.task_runner()->PostTask(
          FROM_HERE, base::Bind([]() {
            //while(!quitApp) { // TODO: lock for quitApp
              {
                canRefreshUI = false;
                std::scoped_lock lock(canRefreshUIMutex);
              }
              if(!render_browser_window) {
                skiaUiDemo.refreshUIDemo();
              }
              {
                std::scoped_lock lock(canRefreshUIMutex);
                canRefreshUI = true;
              }
              // TODO: https://stackoverflow.com/a/28008588
              //base::PlatformThread::Sleep(
              //  base::TimeDelta::FromMilliseconds(17));
            //}
          }));
    }
  }
#endif // SEPARATE_UI_THREAD

    if(!render_browser_window) {
      skiaUiDemo.drawUIDemo();
    }
  }
#else
  {
    printf("draw nothing!\n");
    // nothing
  }
#endif

  // Draw to the surface via its SkCanvas.
  // We don't manage this pointer's lifetime.
  //SkCanvas* canvas =
  //  getRasterizerSkSurface()->getCanvas();
  //sRasterSurface->getCanvas();

  //const sk_sp<SkImage> pImage = sRasterSurface->makeImageSnapshot();
  /*const sk_sp<SkImage> pImage = getRasterizerSkSurface()->makeImageSnapshot();
  if (nullptr == pImage) {
    //printf("can`t makeImageSnapshot\n");
  }*/
  //if (isDebugPeriodReached()) printf("Draw() 8\n");

#endif // ENABLE_SKIA

  GL_CHECK( glUniform1i(uniformTex, 0) );

  //printf("redClrTintAnim %f\n", redClrTintAnim);
  //GL_CHECK( glUniform1f(uniformRedClrTint, (sin(redClrTintAnim) / 2.0f + 0.5f)) );

  int w, h;//, fs;
#ifdef __EMSCRIPTEN__
  // see
  // https://github.com/floooh/oryol/blob/master/code/Modules/Gfx/private/emsc/emscDisplayMgr.cc#L174
  EMSCRIPTEN_RESULT r = emscripten_get_canvas_element_size("#canvas", &w, &h); //, &fs); // width, height, isFullscreen
  if (r != EMSCRIPTEN_RESULT_SUCCESS) {
    DCHECK(false);
  }
  EmscriptenFullscreenChangeEvent e_fullscreen;
  r = emscripten_get_fullscreen_status(&e_fullscreen);
  if (r != EMSCRIPTEN_RESULT_SUCCESS) {
    DCHECK(false);
  }
  const bool isFullscreen = e_fullscreen.isFullscreen;
#else
  w = DRAW_SURFACE_WIDTH;
  h = DRAW_SURFACE_HEIGHT;
#endif
  //float xs = (float)h / w;
  //float ys = 1.0f;
  //float mat[] = {xs, 0, 0, 0, 0, ys, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};

  //GL_CHECK( glBindBuffer(GL_ARRAY_BUFFER, 0) );

  GL_CHECK( glBindVertexArray(vertexArrayObject) );

  GL_CHECK( glDrawArrays(GL_TRIANGLE_STRIP, 0, 4) );

  GL_CHECK( glBindVertexArray(0) );

  GL_CHECK( glUseProgram(0) );

//#endif

  //GL_CHECK( glDisableVertexAttribArray(0) );
  //GL_CHECK( glDisableVertexAttribArray(1) );
      //printf("Draw() 7\n");
}
#endif // ENABLE_OPENGL

static int prevBrowserScreenMouseX = -1;
static int prevBrowserScreenMouseY = -1;
// TODO: threading & mutexes / checks
static int curScreenMouseX = -1;
static int curScreenMouseY = -1;

static void updateGlobalMousePos(const int screenMouseX, const int screenMouseY) {
  curScreenMouseX = screenMouseX;
  curScreenMouseY = screenMouseY;

#ifdef ENABLE_SKIA
  //if(!render_browser_window) {
    skiaUiDemo.SetCursorScreenPoint(curScreenMouseX, curScreenMouseY);
  //}
#endif // ENABLE_SKIA

  /*DCHECK(curScreenMouseX > -1);
  DCHECK(curScreenMouseX <= DRAW_SURFACE_WIDTH);
  DCHECK(curScreenMouseY > -1);
  DCHECK(curScreenMouseY <= DRAW_SURFACE_HEIGHT);*/

  // https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/starboard/shared/linux/dev_input/dev_input.cc#L910
  // https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/starboard/android/shared/input_events_generator.cc#L703
  if(prevBrowserScreenMouseX == curScreenMouseX && prevBrowserScreenMouseY == curScreenMouseY) {
    return;
  }

  prevBrowserScreenMouseX = curScreenMouseX;
  prevBrowserScreenMouseY = curScreenMouseY;
}

#if defined(ENABLE_COBALT)
static void sendBrowserInputEvent(std::unique_ptr<SbEvent> event) {
  ///if (base::MessageLoopCurrent::Get().task_runner() != g_cobaltTester->self_task_runner_) {
    //main_browser_thread_.task_runner()->PostBlockingTask(

  if (event->type == kSbEventTypeInput) {
    SbInputData* data = reinterpret_cast<SbInputData*>(event->data);
    DCHECK(data);
    printf("main.cc HandleInputEvent data.key %d\n", data->key);
  }

  base::OnceClosure func = base::Bind(
          [](std::unique_ptr<SbEvent> event) {
            ///printf("PostTask InputEvent\n");

            //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), g_cobaltTester->self_task_runner_);

             if(!g_cobaltTester
               || !g_cobaltTester->layout_manager_
               || !g_cobaltTester->window_
               || !g_cobaltTester->window_->document()
               || g_cobaltTester->layout_manager_->IsRenderTreePending() // TODO
               || curScreenMouseX <= -1
               || curScreenMouseY <= -1) {
              return;
            }

            DCHECK(g_cobaltTester);
            DCHECK(g_cobaltTester->layout_manager_);
            DCHECK(g_cobaltTester->system_window_);
            DCHECK(g_cobaltTester->self_task_runner_);

            //DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), g_cobaltTester->self_task_runner_);
            //DCHECK(g_cobaltTester->thread_checker_.CalledOnValidThread());

            system_window::HandleInputEvent(event.release());

            /*{
              /// TODO: check thread safety for getAttrWithoutCallbacks e.t.c.
              std::shared_ptr<CustomTokenToObservers> attr =
                cobalt::dom::getCustomTokenToObservers("v-test-attr-val");
              if(attr) {
                if (base::Time::Now().ToDeltaSinceWindowsEpoch().InSeconds() % 10 < 5) {
                  attr->SetCustomValue("color:#FFF;");
                } else {
                  attr->SetCustomValue("color:#00bcd4;border:1px solid #FFF;");
                }
              }
            }*/

            {
              std::string testScrollY;
              testScrollY += "transform: translateY(";
              testScrollY += std::to_string(curScreenMouseY);
              testScrollY += "px);";
              //testScrollY += "border-radius:50px;width:50px;height:50px;";
              //printf("testScrollY=%s\n", testScrollY.c_str());
              cobalt::dom::customizer::set_attr("test-y-scroll", testScrollY);
            }

            {
              if (base::Time::Now().ToDeltaSinceWindowsEpoch().InSeconds() % 10 < 5) {
                cobalt::dom::customizer::set_attr("test-background", "background-color:#2a00d4;");
              } else {
                cobalt::dom::customizer::set_attr("test-background", "background-color:#315fd6;");
              }
            }

            {
              if (base::Time::Now().ToDeltaSinceWindowsEpoch().InSeconds() % 10 < 5) {
                cobalt::dom::customizer::set_attr("wh", "width");
              } else {
                cobalt::dom::customizer::set_attr("wh", "height");
              }
            }

            // TODO: active_element

            ///printf("indicated_element...\n");
            DCHECK(g_cobaltTester);
            DCHECK(g_cobaltTester->window_);
            DCHECK(g_cobaltTester->window_->document());
            scoped_refptr<Document> document_ = g_cobaltTester->window_->document();
            scoped_refptr<HTMLElement> indicated_element = document_->indicated_element();
            if(indicated_element) {
              //printf("document->indicated_element() tag_name %s\n", indicated_element->tag_name().c_str());
              //printf("document->indicated_element() node_name %s\n", indicated_element->node_name().c_str());
              //printf("document->indicated_element() local_name %s\n", indicated_element->local_name().c_str());
              //printf("document->indicated_element() %s\n", indicated_element->text_content().value_or("text_content").c_str());
              if (indicated_element->text_content().value_or("") == "hovertest") {
                //indicated_element->set_text_content(std::string("New text content"));
                /// \todo check html on page is fully loaded before editing html

#if !defined(DISABLE_COBALT_DOM_PARSER)
      indicated_element->set_inner_html("<br>Cobalt<br>best<br>");
#else
      indicated_element->set_text_content("<br>Cobalt<br>best<br>");
#endif // !DISABLE_COBALT_DOM_PARSER

                // TODO:: free memory
                scoped_refptr<HTMLElement> div_element_3 =
                    indicated_element->AppendChild(new cobalt::dom::HTMLDivElement(document_.get()))
                        ->AsElement()
                        ->AsHTMLElement();
                div_element_3->SetAttribute("style", "height: 120px;");
                div_element_3->AsHTMLElement()->
                  style()->set_width("210px", /*todo*/nullptr);

                /*
                 // TODO kAnimationProperty
                 // https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/cobalt/src/cobalt/cssom/css_computed_style_data_test.cc#L137
                div_element_3->AsHTMLElement()->
                  style()->
                    SetPropertyValueStringByKey(kAnimationProperty, "", nullptr);
                */

                // TODO: InkDropHighlight https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/animation/ink_drop_highlight.cc
                // md_text_button https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/button/md_text_button.h#L44

                /*
                 // TODO: animation Observer
                 // https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/compositor/layer_animation_sequence_unittest.cc#L270
                */
                div_element_3->AppendChild(new cobalt::dom::Text(document_.get(), "This "));
                div_element_3->AppendChild(new cobalt::dom::Text(document_.get(), "is "));
                div_element_3->AppendChild(new cobalt::dom::Text(document_.get(), "not "));
                div_element_3->AppendChild(new cobalt::dom::Text(document_.get(), "Sparta."));
                indicated_element->style()->SetPropertyValue("background", "#ccc", nullptr);
                // https://www.w3schools.com/cssref/trysel.asp
                scoped_refptr<cobalt::dom::NodeList> spanSelectors = cobalt::dom::QuerySelectorAll(document_.get(), "div + div ~ span.testselector", document_->html_element_context()->css_parser());
                if(spanSelectors) {
                  for(uint32 i = 0; i < spanSelectors->length(); i++) {
                    spanSelectors->Item(i)->AsElement()->SetAttribute("style", "color: green");
                  }
                }
                //div_element_3->AddEventListener("mouseover")
                //document_->UpdateSelectorTree();
              }
            }
          }, base::Passed(&event));

  if(input_browser_thread) {
    DCHECK(input_browser_thread);
    DCHECK(input_browser_thread->IsRunning());
    DCHECK(input_browser_thread->task_runner() == main_browser_thread_.task_runner());

    if(base::MessageLoopCurrent::Get().task_runner() != main_browser_thread_.task_runner()) {
      main_browser_thread_.task_runner()->PostTask(
      ///if (base::MessageLoopCurrent::Get().task_runner() != input_device_thread_.task_runner()) {
        //input_device_thread_.task_runner()->PostTask(
            FROM_HERE, std::move(func));
      ///}
    } else {
      std::move(func).Run();
    }
  } else {
    std::move(func).Run();
  }
}
#endif // ENABLE_COBALT

#ifdef ENABLE_BASE
static void sendKeyEventToUI(base::Optional<const char*> ev_text) {
#ifdef ENABLE_SKIA
#if defined(SEPARATE_UI_THREAD)
#if defined(ENABLE_COBALT) && defined(OS_EMSCRIPTEN)
    if(!render_browser_window) {
      printf("can`t use !render_browser_window wasm platform!");
      HTML5_STACKTRACE();
    }
#endif // ENABLE_COBALT && OS_EMSCRIPTEN
    if(!render_browser_window && ev_text) {
      // from some blink thread (timers require a sequenced context)
      // TODO: PostTask PostBlockingTask
      // TODO: shedulePaintCommand
      ui_draw_thread_.task_runner()->PostTask(
          FROM_HERE, base::Bind([](base::Optional<const char*> ev_text) {
            skiaUiDemo.handleTestEvent(ev_text.value());
          }, ev_text));
    }
#else // SEPARATE_UI_THREAD
    if(!render_browser_window && ev_text) {
      skiaUiDemo.handleTestEvent(ev_text.value());
    }
#endif // SEPARATE_UI_THREAD
#endif // ENABLE_SKIA
}
#endif // ENABLE_BASE

#if defined(__EMSCRIPTEN__)
// In browsers, KeyDown events do not carry a "character code" for most characters, but KeyPresses do.
// For WSAD input, we'd like to know the character code of the button press already at KeyDown time, so
// use the following method to interpret it from the event structure already at KeyDown event.
static int InterpretCharCode(int eventType, const EmscriptenKeyboardEvent *keyEvent)
{
  if (eventType == EMSCRIPTEN_EVENT_KEYPRESS && keyEvent->which) return keyEvent->which;
  if (keyEvent->charCode) return keyEvent->charCode;
  if (strlen(keyEvent->key) == 1) return (int)tolower(keyEvent->key[0]);
  if (keyEvent->which) return keyEvent->which;
  return keyEvent->keyCode;
}

static inline const char *emscripten_event_type_to_string(int eventType) {
  const char *events[] = { "(invalid)", "(none)", "keypress", "keydown", "keyup", "click", "mousedown", "mouseup", "dblclick", "mousemove", "wheel", "resize",
    "scroll", "blur", "focus", "focusin", "focusout", "deviceorientation", "devicemotion", "orientationchange", "fullscreenchange", "pointerlockchange",
    "visibilitychange", "touchstart", "touchend", "touchmove", "touchcancel", "gamepadconnected", "gamepaddisconnected", "beforeunload",
    "batterychargingchange", "batterylevelchange", "webglcontextlost", "webglcontextrestored", "mouseenter", "mouseleave", "mouseover", "mouseout", "(invalid)" };
  ++eventType;
  if (eventType < 0) eventType = 0;
  if (static_cast<unsigned long>(eventType) >= sizeof(events)/sizeof(events[0])) eventType = sizeof(events)/sizeof(events[0])-1;
  return events[eventType];
}

static int interpret_charcode_for_keyevent(int eventType, const EmscriptenKeyboardEvent *e)
{
  // Only KeyPress events carry a charCode. For KeyDown and KeyUp events, these don't seem to be present yet, until later when the KeyDown
  // is transformed to KeyPress. Sometimes it can be useful to already at KeyDown time to know what the charCode of the resulting
  // KeyPress will be. The following attempts to do this:
  if (eventType == EMSCRIPTEN_EVENT_KEYPRESS && e->which) return e->which;
  if (e->charCode) return e->charCode;
  if (strlen(e->key) == 1) return (int)e->key[0];
  if (e->which) return e->which;
  return e->keyCode;
}

static const float wasm_dpi_scale = 1.0f;

static void handleEmscriptenMouseEvent(int emsc_type, const EmscriptenMouseEvent* emsc_event, void* user_data) {
  DCHECK(emsc_event);
  const float mouse_x = (emsc_event->canvasX * wasm_dpi_scale);
  const float mouse_y = (emsc_event->canvasY * wasm_dpi_scale);

  updateGlobalMousePos(static_cast<int>(mouse_x), static_cast<int>(mouse_y));

#if defined(ENABLE_COBALT)
  SbWindow sb_window = nullptr;
  // TODO: free mem
  if(g_cobaltTester && g_cobaltTester->system_window_) {
    sb_window = g_cobaltTester->system_window_->GetSbWindow();
  }
  std::unique_ptr<SbEvent> event = nullptr;

  bool is_button_event = false;
  bool is_sb_event = false;
  SbInputEventType sbInputEventType;
#endif // ENABLE_COBALT

  const int MAX_MOUSEBUTTONS = 3;
  if (emsc_event->button < MAX_MOUSEBUTTONS) {
      bool is_button_event = false;
      switch (emsc_type) {
          case EMSCRIPTEN_EVENT_MOUSEDOWN:
#if defined(ENABLE_COBALT)
              is_button_event = true;
              is_sb_event = true;
              sbInputEventType = SbInputEventType::kSbInputEventTypePress;
#endif // ENABLE_COBALT
              break;
          case EMSCRIPTEN_EVENT_MOUSEUP: {
#if defined(ENABLE_COBALT)
              is_button_event = true;
              is_sb_event = true;
              sbInputEventType = SbInputEventType::kSbInputEventTypeUnpress;
#endif // ENABLE_COBALT
              break;
          }
          case EMSCRIPTEN_EVENT_MOUSEMOVE:
#if defined(ENABLE_COBALT)
              is_sb_event = true;
              sbInputEventType = SbInputEventType::kSbInputEventTypeMove;
#endif // ENABLE_COBALT
              break;
          case EMSCRIPTEN_EVENT_MOUSEENTER:
          case EMSCRIPTEN_EVENT_MOUSELEAVE:
          case EMSCRIPTEN_EVENT_CLICK:
          case EMSCRIPTEN_EVENT_DBLCLICK:
              break;
          default:
              break;
      }

#if defined(ENABLE_COBALT)
      if(g_cobaltTester) {
        unsigned int button_modifiers = native_event::EmscMouseEventToSbButtonModifiers(emsc_event->button);

        if(is_sb_event) {
          event =  native_event::createSbMouseEvent(
            SbEventType::kSbEventTypeInput,
            sbInputEventType,
            sb_window,
            emsc_event->button,
            emsc_event->altKey,
            emsc_event->ctrlKey,
            emsc_event->metaKey,
            emsc_event->shiftKey,
            mouse_x,
            mouse_y,
            button_modifiers,
            native_event::EmscMouseEventToSbKey(emsc_event->button)
          );
        }

        if(!input_browser_thread) {
          sendBrowserInputEvent(std::move(event));
        } else {
          DCHECK(input_browser_thread);
          DCHECK(input_browser_thread->IsRunning());
          input_browser_thread->task_runner()->PostTask(
            FROM_HERE, base::Bind(
                         [](std::unique_ptr<SbEvent> event) {
                           sendBrowserInputEvent(std::move(event));
                         }, base::Passed(&event)));
        }
      }
#endif // ENABLE_COBALT
  }
}

static void handleEmscriptenKeyboardEvent(int emsc_type, const EmscriptenKeyboardEvent* emsc_event, void* user_data) {
  DCHECK(emsc_event);
  const int keyCode = emsc_event->keyCode;
  const int dom_pk_code = emscripten_compute_dom_pk_code(emsc_event->code);
  const int CharCode = InterpretCharCode(emsc_type, emsc_event);

  /// \note "keypress" event will give you a charCode property whenever you press a character key.
  /// \note "keydown" event will capture every keystroke, but it doesn't have a charCode property
  const bool isControlCharacter = !emsc_event->charCode;

  /// \note skips shiftKey
  const bool hasModifier = emsc_event->altKey
    || emsc_event->ctrlKey
    || emsc_event->metaKey;

#if defined(ENABLE_COBALT)
  unsigned int Character = native_event::Utf8CharToUtf32((const unsigned char*)emsc_event->key);

  printf("%s, key: \"%s\" (printable: %s), code: \"%s\" = %s (%d), "
         "location: %lu,%s%s%s%s repeat: %d, locale: \"%s\", "
         "char: \"%s\", charCode: %lu (interpreted: %d), "
         "keyCode: %s(%lu), which: %lu, InterpretCharCode: %d, "
         "Utf8CharToUtf32: %u\n",
    emscripten_event_type_to_string(emsc_type), emsc_event->key,
    native_event::emscripten_key_event_is_printable_character(emsc_event) ? "true" : "false",
    emsc_event->code, emscripten_dom_pk_code_to_string(dom_pk_code),
    dom_pk_code, emsc_event->location, emsc_event->ctrlKey ? " CTRL" : "",
    emsc_event->shiftKey ? " SHIFT" : "", emsc_event->altKey ? " ALT" : "",
    emsc_event->metaKey ? " META" : "", emsc_event->repeat,
    emsc_event->locale, emsc_event->charValue, emsc_event->charCode,
    interpret_charcode_for_keyevent(emsc_type, emsc_event),
    emscripten_dom_vk_to_string(emsc_event->keyCode), emsc_event->keyCode,
    emsc_event->which, CharCode, Character);

  std::unique_ptr<SbEvent> event = nullptr;
  SbInputEventType sbInputEventType;

  SbWindow sb_window = nullptr;
  // TODO: free mem
  if(g_cobaltTester && g_cobaltTester->system_window_) {
    sb_window = g_cobaltTester->system_window_->GetSbWindow();
  }

  bool is_printable = true; //native_event::emscripten_key_event_is_printable_character(emsc_event);

  auto pressKey = [&]()
  {
    if(g_cobaltTester) {
      event =  native_event::createSbKeyboardEvent(
        SbEventType::kSbEventTypeInput,
        sbInputEventType,
        sb_window,
        emsc_event->altKey,
        emsc_event->ctrlKey,
        emsc_event->metaKey,
        emsc_event->shiftKey,
        SbInputDeviceType::kSbInputDeviceTypeKeyboard,
        native_event::EmscKeycodeToSbKey(dom_pk_code),
        native_event::EmscKeycodeToSbKeyLocation(dom_pk_code),
        Character,
        Character,
        emsc_event->key,
        is_printable
      );

      if(!input_browser_thread) {
        sendBrowserInputEvent(std::move(event));
      } else {
        DCHECK(input_browser_thread);
        DCHECK(input_browser_thread->IsRunning());
        input_browser_thread->task_runner()->PostTask(
          FROM_HERE, base::Bind(
                       [](std::unique_ptr<SbEvent> inputEvent) {
                         sendBrowserInputEvent(std::move(inputEvent));
                       }, base::Passed(&event)));
      }
    }
  };
#endif // ENABLE_COBALT

  switch(emsc_type)
  {
    case EMSCRIPTEN_EVENT_KEYDOWN:
    {
      if(!isControlCharacter) {
        break;
      }
#if defined(ENABLE_COBALT)
      sbInputEventType = SbInputEventType::kSbInputEventTypePress;
      is_printable = false;
      pressKey();
#endif // ENABLE_COBALT
      break;
    }
    case EMSCRIPTEN_EVENT_KEYUP:
    {
      if(!isControlCharacter) {
        break;
      }
#if defined(ENABLE_COBALT)
      sbInputEventType = SbInputEventType::kSbInputEventTypeUnpress;
      is_printable = false;
      pressKey();
#endif // ENABLE_COBALT

      break;
    }
    case EMSCRIPTEN_EVENT_KEYPRESS:
    {
#if defined(ENABLE_COBALT)
      // Heuristic: Assume all printables are represented by
      // a string that has exactly one character, other are control characters.
      /// \todo does not work with emojis or Unicode astral https://stackoverflow.com/a/44052348
      if (native_event::NumCharsInUTF8String((const unsigned char*)emsc_event->key) != 1) {
        break;
      }

      if(isControlCharacter || hasModifier) {
        break;
      }

      /*if (native_event::NumCharsInUTF8String((const unsigned char*)emsc_event->key) == 1)
      {
        sbInputEventType = SbInputEventType::kSbInputEventTypePress;
        isKeyEvent = true;
      } else {
        isKeyEvent = false;
      }*/

      if(g_cobaltTester) {
        {
          sbInputEventType = SbInputEventType::kSbInputEventTypePress;
          is_printable = true;
          pressKey();
        }
        {
          sbInputEventType = SbInputEventType::kSbInputEventTypeUnpress;
          is_printable = true;
          pressKey();
        }
      }
#endif // ENABLE_COBALT
      break;
    }
  }
}
#endif // EMSCRIPTEN

#if defined(__EMSCRIPTEN__) && !defined(ENABLE_NATIVE_HTML)
static EM_BOOL emsc_keydown_cb(int emsc_type, const EmscriptenKeyboardEvent* emsc_event, void* user_data) {
  //printf("emsc_keydown_cb\n");
  DCHECK(emsc_event);

  handleEmscriptenKeyboardEvent(emsc_type, emsc_event, user_data);

  // Return true for events we want to suppress default web browser handling for.
  return false;
}

static EM_BOOL emsc_keypress_cb(int emsc_type, const EmscriptenKeyboardEvent* emsc_event, void* user_data) {
  //printf("emsc_keypress_cb\n");
  DCHECK(emsc_event);

  handleEmscriptenKeyboardEvent(emsc_type, emsc_event, user_data);

  // Return true for events we want to suppress default web browser handling for.
  return false;
}

static EM_BOOL emsc_resize_cb(int emsc_type, const EmscriptenUiEvent *emsc_event, void *userData) {
  printf("emsc_resize_cb\n");
  DCHECK(emsc_event);

  float dpr = emscripten_get_device_pixel_ratio();
  double w = DRAW_SURFACE_WIDTH;
  double h = DRAW_SURFACE_HEIGHT;

  // see https://emscripten.org/docs/api_reference/html5.h.html#c.EmscriptenUiEvent
  if(emsc_type == EMSCRIPTEN_EVENT_RESIZE) {
    printf("emsc_resize_cb %i %i\n", emsc_event->documentBodyClientWidth, emsc_event->documentBodyClientHeight);

    w = emsc_event->documentBodyClientWidth;
    w = emsc_event->documentBodyClientHeight;

    emscripten_set_canvas_element_size("#canvas", w, h);
    emscripten_set_element_css_size("#canvas", w * dpr, h * dpr);

    onResize((int)w, (int)h);
  }

  // Return true for events we want to suppress default web browser handling for.
  return false;
}

static EM_BOOL emsc_keyup_cb(int emsc_type, const EmscriptenKeyboardEvent* emsc_event, void* user_data) {
  //printf("emsc_keyup_cb\n");
  DCHECK(emsc_event);

  handleEmscriptenKeyboardEvent(emsc_type, emsc_event, user_data);

  // Return true for events we want to suppress default web browser handling for.
  return false;
}

static EM_BOOL emsc_mouse_down_cb(int emsc_type, const EmscriptenMouseEvent* emsc_event, void* user_data) {
  DCHECK(emsc_event);

  handleEmscriptenMouseEvent(emsc_type, emsc_event, user_data);

  // Return true for events we want to suppress default web browser handling for.
  return false;
}

static EM_BOOL emsc_mouse_up_cb(int emsc_type, const EmscriptenMouseEvent* emsc_event, void* user_data) {
  DCHECK(emsc_event);

  handleEmscriptenMouseEvent(emsc_type, emsc_event, user_data);

  // Return true for events we want to suppress default web browser handling for.
  return false;
}

static EM_BOOL emsc_mouse_move_cb(int emsc_type, const EmscriptenMouseEvent* emsc_event, void* user_data) {
  DCHECK(emsc_event);

  handleEmscriptenMouseEvent(emsc_type, emsc_event, user_data);

  // Return true for events we want to suppress default web browser handling for.
  return false;
}

static EM_BOOL emsc_mouse_wheel_cb(int emsc_type, const EmscriptenWheelEvent* emsc_event, void* user_data) {
  DCHECK(emsc_event);

  const float SpinFactor = 1 / 120.0f;

#if defined(ENABLE_COBALT)
  float mouse_x = 0.0f;
  float mouse_y = 0.0f;

  if(g_cobaltTester) {
    switch(emsc_type)
    {
      case EMSCRIPTEN_EVENT_WHEEL:
      {
        mouse_x = (emsc_event->mouse.canvasX * wasm_dpi_scale);
        mouse_y = (emsc_event->mouse.canvasY * wasm_dpi_scale);
        break;
      }
    }

    SbWindow sb_window = nullptr;
     // TODO: free mem
    if(g_cobaltTester && g_cobaltTester->system_window_) {
      sb_window = g_cobaltTester->system_window_->GetSbWindow();
    } else {
      DCHECK(false);
    }

    unsigned int button_modifiers = native_event::EmscMouseEventToSbButtonModifiers(emsc_event->mouse.button);

    std::unique_ptr<SbEvent> event
      = native_event::createSbWheelEvent(
          SbEventType::kSbEventTypeInput,
          SbInputEventType::kSbInputEventTypeWheel,
          sb_window,
          emsc_event->mouse.button,
          emsc_event->mouse.altKey,
          emsc_event->mouse.ctrlKey,
          emsc_event->mouse.metaKey,
          emsc_event->mouse.shiftKey,
          mouse_x,
          mouse_y,
          -1.0 * emsc_event->deltaX,
          -1.0 * emsc_event->deltaY,
          button_modifiers,
          native_event::EmscMouseEventToSbKey(emsc_event->mouse.button)
      );

    if(!input_browser_thread) {
      sendBrowserInputEvent(std::move(event));
    } else {
      DCHECK(input_browser_thread);
      DCHECK(input_browser_thread->IsRunning());
      input_browser_thread->task_runner()->PostTask(
        FROM_HERE, base::Bind(
                     [](std::unique_ptr<SbEvent> inputEvent) {
                       sendBrowserInputEvent(std::move(inputEvent));
                     }, base::Passed(&event)));
    }
  }
#endif // ENABLE_COBALT

  // Return true for events we want to suppress default web browser handling for.
  return false;
}
#endif // __EMSCRIPTEN__

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
static bool isPrintableKeycode(SDL_Keycode key)
{
  // We test `key` on SDL's internal values for keys
  //
  // To get a list of them, go here:
  // http://wiki.libsdl.org/SDLKeycodeLookup

  return ((key > SDLK_SPACE) && (key < SDLK_z));
}

/*static std::string keycodeToASCII(SDL_Keycode key)
{
  DCHECK(isPrintableKeycode(key));
  char c = (char)(key);
  const char* a = &c;
  return (std::string(a));
}*/
#endif // defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)

static void mainLockFreeLoop() {
#if defined(__EMSCRIPTEN__)

  //browser_loop.task_runner()->

  // see https://github.com/emscripten-core/emscripten/issues/3495
  ///
  /// __TODO__
  ///
  ///emscripten_main_thread_process_queued_calls();

  /*{
    // see https://github.com/emscripten-core/emscripten/issues/8307
    EMSCRIPTEN_RESULT r = emscripten_webgl_make_context_current(em_ctx);
    if( r != EMSCRIPTEN_RESULT_SUCCESS )
    {
      printf( "Unable to make OffscreenCanvas instance the current context (code %d)\n", r );
    }
  }
  DCHECK(emscripten_webgl_get_current_context() == em_ctx);*/
#endif

// __EMSCRIPTEN_PTHREADS__ can be used to detect whether Emscripten is currently targeting pthreads.
// At runtime, you can use the emscripten_has_threading_support()
// see https://emscripten.org/docs/porting/pthreads.html
#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__)
  // TODO
  // printf("emscripten_current_thread_process_queued_calls...\n");
  // emscripten_current_thread_process_queued_calls();
#endif

/*
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  base::Thread thread("render");
  base::WaitableEvent event(base::WaitableEvent::ResetPolicy::MANUAL,
                            base::WaitableEvent::InitialState::NOT_SIGNALED);

  thread.Start();
  DCHECK(thread.task_runner());
  thread.task_runner()->PostTask(
      FROM_HERE,
      base::BindOnce(
          [](base::RepeatingCallback<void()> cb) {
              printf("rendering Draw 1\n");
#endif
              Draw();
              event.Signal();
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
          },
          base::BindRepeating([]() {
              printf("rendering Draw 2\n");
          })));
  ::std::cout << "thread rendering start Wait..." << base::Time::Now() << "\n";
#endif
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
  event.Wait();
#endif
*/

  ///if (isDebugPeriodReached()) printf("mainLoop 3\n");

#if defined(__EMSCRIPTEN__) && defined(HAVE_SWAP_CONTROL)
  if (enableSwapControl) {
    // emscripten_webgl_commit_frame requires offscreen canvas support
    // see https://github.com/emscripten-core/emscripten/issues/5437
    EMSCRIPTEN_RESULT r = emscripten_webgl_commit_frame();
    if(r != EMSCRIPTEN_RESULT_SUCCESS)
    {
      // TODO: https://github.com/emscripten-core/emscripten/issues/5437
      printf( "There was an issue commiting the frame to the offscreen canvas (code %d)\n", r );
    }
  }
#else

  ///if (isDebugPeriodReached()) printf("mainLoop 4\n");

  ///if (isDebugPeriodReached()) printf("mainLoop 5\n");

#endif // defined(__EMSCRIPTEN__) && defined(HAVE_SWAP_CONTROL)

  ///if (isDebugPeriodReached()) printf("mainLoop 6\n");

  int screenMouseX, screenMouseY;

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  while (SDL_PollEvent(&e) != 0) {
    const SDL_Keymod modState = SDL_GetModState();

#if defined(ENABLE_COBALT)
    bool isSbEvent = false;
    bool isSbKeyEvent = false;
    // TODO: free mem
    /*std::unique_ptr<SbEvent> event = std::make_unique<SbEvent>();
    event->type = SbEventType::kSbEventTypeInput;
    std::unique_ptr<SbInputData> data = nullptr;
    data = native_event::createEmptySbEventData();
     // TODO: free mem
    if(g_cobaltTester && g_cobaltTester->system_window_) {
      data->window = g_cobaltTester->system_window_->GetSbWindow();
    }
    DCHECK(data);*/

    std::unique_ptr<SbEvent> event = nullptr;
    SbInputEventType sbInputEventType;

    SbWindow sb_window = nullptr;
    // TODO: free mem
    if(g_cobaltTester && g_cobaltTester->system_window_) {
      sb_window = g_cobaltTester->system_window_->GetSbWindow();
    }

    /// \note skips KMOD_SHIFT
    const bool hasModifier = modState & KMOD_ALT
      || modState & KMOD_CTRL
      || modState & KMOD_MODE;

#endif // ENABLE_COBALT

    /*std::system("chcp 1251");
    if (setlocale(LC_ALL, "ru-RU") == NULL) {
      std::cout << "Error set locale ru-RU." << std::endl;
    }

    std::wcout << L"Unicode -- English -- Русский -- Ελληνικά -- Español." << std::endl;

    //wprintf(L"%s", L"Unicode -- English -- Русский -- Ελληνικά -- Español.\n");
*/

#if !defined(ENABLE_NATIVE_HTML)
    if(!render_browser_window) {
      skiaUiDemo.handleSDLEvent(&e);//SDL_Event * event
    }
#endif // ENABLE_NATIVE_HTML

    bool isTextInput = false;
    bool isPrintable = true;

    //SDL_WaitEvent(&e);

    switch (e.type) {
      case SDL_QUIT: {
        quitApp = true;
        printf("recieved quit signal\n");
        break;
      }
      case SDL_MOUSEMOTION: {
        //printf("SDL_MOUSEMOTION\n");
        SDL_GetMouseState(&screenMouseX, &screenMouseY);
        updateGlobalMousePos(static_cast<int>(screenMouseX), static_cast<int>(screenMouseY));
#if defined(ENABLE_COBALT)
        isSbEvent = true;
        unsigned int button_modifiers = native_event::SDL2MouseEventToSbButtonModifiers(e.button.button);
        unsigned int key_modifiers = button_modifiers | native_event::SDL2ModStateToSbKeyModifiers(modState);

        sbInputEventType = SbInputEventType::kSbInputEventTypeMove;
        event =  native_event::createSbMouseEvent(
          SbEventType::kSbEventTypeInput,
          sbInputEventType,
          sb_window,
          e.button.button,
          modState & KMOD_ALT,
          modState & KMOD_CTRL,
          modState & KMOD_MODE,
          modState & KMOD_SHIFT,
          static_cast<double>(screenMouseX),
          static_cast<double>(screenMouseY),
          button_modifiers,
          native_event::SDL2MouseEventToSbKey(e.button.button)
        );

        //SDL_GetGlobalMouseState(&screenMouseX, &screenMouseY);
        //SDL_GetMouseState(&screenMouseX, &screenMouseY);

        // printf("SDL_MOUSEMOTION %d %d\n", screenMouseX, screenMouseY);
#endif // ENABLE_COBALT
        break;
      }
      case SDL_MOUSEBUTTONDOWN: {
        //printf("SDL_MOUSEBUTTONDOWN\n");
        SDL_GetMouseState(&screenMouseX, &screenMouseY);
        updateGlobalMousePos(static_cast<int>(screenMouseX), static_cast<int>(screenMouseY));
#if defined(ENABLE_COBALT)
        isSbEvent = true;
        unsigned int button_modifiers = native_event::SDL2MouseEventToSbButtonModifiers(e.button.button);
        unsigned int key_modifiers = button_modifiers | native_event::SDL2ModStateToSbKeyModifiers(modState);

        sbInputEventType = SbInputEventType::kSbInputEventTypePress;
        event =  native_event::createSbMouseEvent(
          SbEventType::kSbEventTypeInput,
          sbInputEventType,
          sb_window,
          e.button.button,
          modState & KMOD_ALT,
          modState & KMOD_CTRL,
          modState & KMOD_MODE,
          modState & KMOD_SHIFT,
          static_cast<double>(screenMouseX),
          static_cast<double>(screenMouseY),
          button_modifiers,
          native_event::SDL2MouseEventToSbKey(e.button.button)
        );

#endif // ENABLE_COBALT
        break;
      }
      case SDL_MOUSEBUTTONUP: {
        //printf("SDL_MOUSEBUTTONUP\n");
        SDL_GetMouseState(&screenMouseX, &screenMouseY);
        updateGlobalMousePos(static_cast<int>(screenMouseX), static_cast<int>(screenMouseY));
#if defined(ENABLE_COBALT)
        isSbEvent = true;
        unsigned int button_modifiers = native_event::SDL2MouseEventToSbButtonModifiers(e.button.button);
        unsigned int key_modifiers = button_modifiers | native_event::SDL2ModStateToSbKeyModifiers(modState);

        sbInputEventType = SbInputEventType::kSbInputEventTypeUnpress;
        event =  native_event::createSbMouseEvent(
          SbEventType::kSbEventTypeInput,
          sbInputEventType,
          sb_window,
          e.button.button,
          modState & KMOD_ALT,
          modState & KMOD_CTRL,
          modState & KMOD_MODE,
          modState & KMOD_SHIFT,
          static_cast<double>(screenMouseX),
          static_cast<double>(screenMouseY),
          button_modifiers,
          native_event::SDL2MouseEventToSbKey(e.button.button)
        );

#endif // ENABLE_COBALT
        break;
      }
      case SDL_MOUSEWHEEL: {
        //printf("SDL_MOUSEWHEEL\n");
        SDL_GetMouseState(&screenMouseX, &screenMouseY);
        updateGlobalMousePos(static_cast<int>(screenMouseX), static_cast<int>(screenMouseY));
#if defined(ENABLE_COBALT)
        isSbEvent = true;
        unsigned int button_modifiers = native_event::SDL2MouseEventToSbButtonModifiers(e.button.button);
        unsigned int key_modifiers = button_modifiers | native_event::SDL2ModStateToSbKeyModifiers(modState);

        sbInputEventType = SbInputEventType::kSbInputEventTypeWheel;
        event = native_event::createSbWheelEvent(
            SbEventType::kSbEventTypeInput,
            sbInputEventType,
            sb_window,
            e.button.button,
            modState & KMOD_ALT,
            modState & KMOD_CTRL,
            modState & KMOD_MODE,
            modState & KMOD_SHIFT,
            static_cast<double>(screenMouseX),
            static_cast<double>(screenMouseY),
            static_cast<double>(e.wheel.x),
            static_cast<double>(e.wheel.y),
            //0.0, // TODO: wheel.z
            button_modifiers,
            native_event::SDL2MouseEventToSbKey(e.button.button)
        );
#endif // ENABLE_COBALT
        break;
      }

      case SDL_KEYDOWN:
      {
      printf("SDL_KEYDOWN e.key.keysym.sym %d\n", e.key.keysym.sym);
      printf("SDL_KEYDOWN SDL2KeycodeToSbKey(e.key.keysym.sym) %d\n", native_event::SDL2KeycodeToSbKey(e.key.keysym.sym));
      printf("SDL_TEXTINPUT1 e.key.keysym.scancode %d\n", e.key.keysym.scancode);
      printf("SDL_TEXTINPUT1 SDL2ScancodeToSbKey(e.key.keysym.scancode %d\n", native_event::SDL2ScancodeToSbKey(e.key.keysym.scancode));

#if defined(ENABLE_COBALT)
        /// \note SDL_KEYDOWN NOT for text input!
        /// Use SDL_KEYDOWN only for special keys!
        if(native_event::SDL2KeycodeToSbKey(e.key.keysym.sym) != kSbKeyUnknown
            && native_event::SDL2ScancodeToSbKey(e.key.keysym.scancode) != kSbKeyUnknown
            // TODO
            //&& !base::IsAsciiPrintable(e.key.keysym.sym)
            && e.key.repeat == 0)
        {
          printf("SDL_KEYDOWN SDL_GetKeyName %s\n", SDL_GetKeyName(e.key.keysym.sym));
          printf("SDL_KEYDOWN keycodeToASCII %s\n", native_event::keycodeToASCII(e.key.keysym.sym).c_str());
          printf("SDL_KEYDOWN isPrintableKeycode %d\n", isPrintableKeycode(e.key.keysym.sym));

          isSbEvent = true;
          isSbKeyEvent = true;

          sbInputEventType = SbInputEventType::kSbInputEventTypePress;
          event =  native_event::createSbKeyboardEvent(
            SbEventType::kSbEventTypeInput,
            sbInputEventType,
            sb_window,
            modState & KMOD_ALT,
            modState & KMOD_CTRL,
            modState & KMOD_MODE,
            modState & KMOD_SHIFT,
            SbInputDeviceType::kSbInputDeviceTypeKeyboard,
            native_event::SDL2KeycodeToSbKey(e.key.keysym.sym),
            native_event::SDL2KeycodeToSbKeyLocation(e.key.keysym.sym),
            e.key.keysym.sym,
            e.key.keysym.sym,
            "", //isPrintableKeycode(e.key.keysym.sym) ? native_event::keycodeToASCII(e.key.keysym.sym) : "",
            false//isPrintableKeycode(e.key.keysym.sym) //true // TODO
          );

          //SDL_KeyboardEvent* keyboard = (reinterpret_cast<SDL_KeyboardEvent*> (&event));

          /*if (e.key.keysym.sym == SDLK_x) {
          printf("(1) detected SDLK_x\n");
        }

          if (e.key.keysym.scancode == SDL_SCANCODE_X) {
            printf("(1) detected SDL_SCANCODE_X\n");
          }*/

          //unicode input
          //std::cout << keyboard->keysym.unicode << std::endl;
        }
#endif // ENABLE_COBALT
        break;
      }
      case SDL_KEYUP:
      {
#ifdef ENABLE_BASE

#if defined(ENABLE_COBALT)
        printf("SDL_KEYUP e.key.keysym.sym %d\n", e.key.keysym.sym);
        printf("SDL_KEYUP SDL2KeycodeToSbKey(e.key.keysym.sym) %d\n", native_event::SDL2KeycodeToSbKey(e.key.keysym.sym));
        printf("SDL_TEXTINPUT1 e.key.keysym.scancode %d\n", e.key.keysym.scancode);
        printf("SDL_TEXTINPUT1 SDL2ScancodeToSbKey(e.key.keysym.scancode %d\n", native_event::SDL2ScancodeToSbKey(e.key.keysym.scancode));

        /// \note SDL_KEYUP NOT for text input!
        /// Use SDL_KEYUP only for special keys!
        if(native_event::SDL2KeycodeToSbKey(e.key.keysym.sym) != kSbKeyUnknown
            && native_event::SDL2ScancodeToSbKey(e.key.keysym.scancode) != kSbKeyUnknown
            // TODO
            //&& !base::IsAsciiPrintable(e.key.keysym.sym)
            && e.key.repeat == 0)
        {
          printf("SDL_KEYUP SDL_GetKeyName %s\n", SDL_GetKeyName(e.key.keysym.sym));
          printf("SDL_KEYUP keycodeToASCII %s\n", native_event::keycodeToASCII(e.key.keysym.sym).c_str());
          printf("SDL_KEYUP isPrintableKeycode %d\n", isPrintableKeycode(e.key.keysym.sym));

          isSbEvent = true;
          isSbKeyEvent = true;

          sbInputEventType = SbInputEventType::kSbInputEventTypeUnpress;
          event =  native_event::createSbKeyboardEvent(
            SbEventType::kSbEventTypeInput,
            sbInputEventType,
            sb_window,
            modState & KMOD_ALT,
            modState & KMOD_CTRL,
            modState & KMOD_MODE,
            modState & KMOD_SHIFT,
            SbInputDeviceType::kSbInputDeviceTypeKeyboard,
            native_event::SDL2KeycodeToSbKey(e.key.keysym.sym),
            native_event::SDL2KeycodeToSbKeyLocation(e.key.keysym.sym),
            e.key.keysym.sym,
            e.key.keysym.sym,
            "", //isPrintableKeycode(e.key.keysym.sym) ? native_event::keycodeToASCII(e.key.keysym.sym) : "",
            false//isPrintableKeycode(e.key.keysym.sym) //true // TODO
          );

        }
#endif // ENABLE_COBALT
#endif // ENABLE_BASE
        break;
      }
      case SDL_TEXTINPUT: // use SDL_StartTextInput();
      {
#if 0
        std::cout << TEXT("АГГГГГГГГГГГГГыфвфыв") << std::endl;

        std::cout << u8"Greek: αβγδ; German: Übergrößenträger" << std::endl;

        wchar_t wcharStr[4096];//SDL_TEXTINPUTEVENT_TEXT_SIZE = { 0 };
        if (MultiByteToWideChar(CP_UTF8, 0, e.text.text, strlen(e.text.text) + 1, wcharStr,
          /*SDL_TEXTINPUTEVENT_TEXT_SIZE*/_countof(wcharStr)) > 0)
        {
          std::cout << TEXT("SDL_TEXTINPUTIN wcharStr = ") <<  wcharStr << std::endl;
        }
        else {
          std::cout << TEXT("SDL_ETEXTINPUTINA") << std::endl;
        }
#endif // 0

        /// \note Make sure keys with modifiers are handled only during `keyup` and `keydown`.
        if(hasModifier) {
          break;
        }

        // Try to ignore keypad presses.
        /*if (keypad_pressed_without_KMOD_NUM) {
          // Need to fix KMOD_NUM state here.
          SDL_Keymod mod = SDL_GetModState();
          if (!(mod & KMOD_NUM)) {
            mod |= KMOD_NUM;
            SDL_SetModState(mod);
            D("Detected NUMLOCK is active - toggling KMOD_NUM flag");
            // Break here to ignore this keypress.
            break;
          }
        }*/

        /*if(base::IsStringASCII(std::string(e.text.text))) {
          /// \note ASCII handled by SDL_KEYUP and SDL_KEYDOWN
          break;
        }*/

        /*const char* utf8str = e.text.text;

        static SDL_iconv_t cd = SDL_iconv_t(-1);

        if (cd == SDL_iconv_t(-1))
        {
          // note: just "UTF-32" doesn't work as toFormat, because then you get BOMs, which we don't want.
          const char* toFormat = "UTF-32LE"; // TODO: what does CEGUI expect on big endian machines?
          cd = SDL_iconv_open(toFormat, "UTF-8");
          if (cd == SDL_iconv_t(-1))
          {
            std::cerr << "Couldn't initialize SDL_iconv for UTF-8 to UTF-32!" << std::endl;
            return;
          }
        }

        // utf8str has at most SDL_TEXTINPUTEVENT_TEXT_SIZE (32) chars,
        // so we won't have have more utf32 chars than that
        Uint32 utf32buf[SDL_TEXTINPUTEVENT_TEXT_SIZE] = { 0 };

        // we'll convert utf8str to a utf32 string, saved in utf32buf.
        // the utf32 chars will be injected into cegui

        size_t len = strlen(utf8str);

        size_t inbytesleft = len;
        size_t outbytesleft = 4 * SDL_TEXTINPUTEVENT_TEXT_SIZE; // *4 because utf-32 needs 4x as much space as utf-8
        char* outbuf = (char*)utf32buf;
        size_t n = SDL_iconv(cd, &utf8str, &inbytesleft, &outbuf, &outbytesleft);

        if (n == size_t(-1)) // some error occured during iconv
        {
          std::cerr << "Converting UTF-8 string " << utf8str << " from SDL_TEXTINPUT to UTF-32 failed!" << std::endl;
        }

        const std::string in_text = outbuf;

        // reset cd so it can be used again
        SDL_iconv(cd, NULL, &inbytesleft, NULL, &outbytesleft);*/
        const std::string in_text = e.text.text;

        bool isASCII = strlen(e.text.text) == 1 && (e.text.text[0] & 0x80) == 0;
        wchar_t symbolASCII = e.text.text[0];
        SbKey keyASCII;
        SbKeyLocation keylocationASCII;
        printf("SDL_TEXTINPUT1 isASCII %d\n", isASCII);
        if(isASCII) {
          keyASCII = native_event::ASCIIToSbKey(e.text.text);
          keylocationASCII = native_event::modstateToSbKeyLocation(
              modState & KMOD_LALT,
              modState & KMOD_LCTRL,
              modState & KMOD_LSHIFT, // TODO: KMOD_LGUI?
              modState & KMOD_RALT,
              modState & KMOD_RCTRL,
              modState & KMOD_RSHIFT);//ASCIIToSbKeyLocation(e.text.text);
        }

        /// \note empty e.key.keysym.sym and e.key.keysym.scancode here!
        //const Uint8 *keys = SDL_GetKeyboardState(NULL);
        //printf("SDL_TEXTINPUT1 text %s\n", in_text.c_str());
        /*printf("SDL_TEXTINPUT1 SDL_GetKeyName %s\n", SDL_GetKeyName(e.key.keysym.sym));
        printf("SDL_TEXTINPUT1 e.key.keysym.sym %d\n", e.key.keysym.sym);
        printf("SDL_TEXTINPUT1 SDL2KeycodeToSbKey(e.key.keysym.sym) %d\n", native_event::SDL2KeycodeToSbKey(e.key.keysym.sym));
        printf("SDL_TEXTINPUT1 e.key.keysym.scancode %d\n", e.key.keysym.scancode);
        printf("SDL_TEXTINPUT1 SDL2ScancodeToSbKey(e.key.keysym.scancode %d\n", native_event::SDL2ScancodeToSbKey(e.key.keysym.scancode));
        */

        // TODO WideToUTF8 UTF16ToASCII SDL_TEXTINPUTEVENT_TEXT_SIZE
        /*if(base::IsAsciiPrintable(e.text.text)) {
        }*/

        /// \note SDL_TEXTINPUT NOT for special keys!
        /// Use SDL_TEXTINPUT only for text input!
        /*if(native_event::SDL2KeycodeToSbKey(e.key.keysym.sym) == kSbKeyUnknown
            && (base::IsAsciiPrintable(e.key.keysym.sym)
                || !base::IsStringASCII(e.text.text))
            && e.key.repeat == 0)*/
#if defined(ENABLE_COBALT)
        if(g_cobaltTester) {
          isTextInput = true; /// \note not isSbEvent
          //printf("SDL_TEXTINPUT2 text %s\n", in_text);

          auto pressKey = [&]() {
            //printf("pressKey in_text %s\n", in_text);
            std::unique_ptr<SbEvent> event1 =  native_event::createSbKeyboardEvent(
              SbEventType::kSbEventTypeInput,
              sbInputEventType,
              sb_window,
              modState & KMOD_ALT,
              modState & KMOD_CTRL,
              modState & KMOD_MODE,
              modState & KMOD_SHIFT,
              SbInputDeviceType::kSbInputDeviceTypeKeyboard,
              keyASCII, //native_event::SDL2ScancodeToSbKey(e.key.keysym.scancode),
              keylocationASCII, //native_event::SDL2ScancodeToSbKeyLocation(e.key.keysym.scancode),
              symbolASCII, // e.key.keysym.scancode,
              symbolASCII, // e.key.keysym.scancode,
              in_text,
              isPrintable // TODO
            );
            DCHECK(event1);

            if (event1->type == kSbEventTypeInput) {
              SbInputData* data = reinterpret_cast<SbInputData*>(event1->data);
              DCHECK(data);
              printf("SDL_TEXTINPUT press HandleInputEvent data.key %d\n", data->key);
            }

            if(!input_browser_thread) {
              sendBrowserInputEvent(std::move(event1));
            } else {
              DCHECK(input_browser_thread);
              DCHECK(input_browser_thread->IsRunning());
              input_browser_thread->task_runner()->PostTask(
                FROM_HERE, base::Bind(
                             [](std::unique_ptr<SbEvent> event) {
                               sendBrowserInputEvent(std::move(event));
                             }, base::Passed(&event1)));
            }
          };

          {
            sbInputEventType = SbInputEventType::kSbInputEventTypePress;
            isPrintable = true;
            pressKey();
          }
         // TODO: collect codes like CTRL+A+C+G
         {
           sbInputEventType = SbInputEventType::kSbInputEventTypeUnpress;
           isPrintable = true;
           pressKey();
         }
#endif //ENABLE_COBALT
        }
      break;
    }
      case SDL_JOYBUTTONDOWN:
        printf("SDL_JOYBUTTONDOWN dev %d button %d state %d\n",
            (int)e.jbutton.which, (int)e.jbutton.button, (int)e.jbutton.state);
        break;
      case SDL_JOYBUTTONUP:
        printf("SDL_JOYBUTTONUP dev %d button %d state %d\n",
            (int)e.jbutton.which, (int)e.jbutton.button, (int)e.jbutton.state);
        break;
      case SDL_FINGERDOWN:
      case SDL_FINGERUP:
      case SDL_FINGERMOTION:
        break; // ignore

      case SDL_WINDOWEVENT: {
        switch (e.window.event) {
          case SDL_WINDOWEVENT_RESIZED:
          /// \note SDL_WINDOWEVENT_SIZE_CHANGED event is followed by SDL_WINDOWEVENT_RESIZED
          case SDL_WINDOWEVENT_SIZE_CHANGED: {
            onResize((int)e.window.data1, (int)e.window.data2);
            std::cout << e.window.data1 << " e.window.data2 " << e.window.data2 << std::endl;
            break;
          }
          default:
            break;
        }
        break;
      }
    }

#if defined(ENABLE_COBALT)
    if (isSbEvent) {
      {

        //event->data = data.release();

        DCHECK(event);
        if(!input_browser_thread) {
          sendBrowserInputEvent(std::move(event));
        } else {
          DCHECK(input_browser_thread);
          DCHECK(input_browser_thread->IsRunning());
          input_browser_thread->task_runner()->PostTask(
            FROM_HERE, base::Bind(
                         [](std::unique_ptr<SbEvent> event) {
                           sendBrowserInputEvent(std::move(event));
                         }, base::Passed(&event)));
        }
      }
    }
#endif // ENABLE_COBALT
  }

  ///if (isDebugPeriodReached()) printf("draw...\n");

  // Render on native
#if defined(ENABLE_OPENGL)
  animate();

  /// \note ENABLE_NATIVE_HTML may be enabled on native for debug purposes
#if !defined(ENABLE_NATIVE_HTML)
  Draw();
#endif // ENABLE_NATIVE_HTML

#endif // ENABLE_OPENGL

  // Update screen
#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
#if defined(ENABLE_OPENGL)
  SDL_GL_SwapWindow(window);
#else // ENABLE_OPENGL
  SDL_SetRenderDrawColor(sdl_ren, 255, 255, 255, 255);
  SDL_RenderClear(sdl_ren);
  // the rect color (solid red)
  SDL_SetRenderDrawColor(sdl_ren, 255, 0, 0, 255);
  SDL_Rect rect{0, 0, 100, 50};
  //rect.x = 0;
  //(0, 0, 100, 50); // the rectangle
  SDL_RenderFillRect(sdl_ren, &rect);
  SDL_RenderPresent(sdl_ren);
#endif // ENABLE_OPENGL
#endif // ENABLE_HTML5_SDL || !__EMSCRIPTEN__

#elif defined(__EMSCRIPTEN__) // EMSCRIPTEN without SDL2

  // Render on WASM
  animate();

#if !defined(ENABLE_NATIVE_HTML)
  Draw();
#endif // ENABLE_NATIVE_HTML

#else
  #error "TODO: port SDL_PollEvent"
#endif // ENABLE_HTML5_SDL || !__EMSCRIPTEN__

#ifdef __EMSCRIPTEN__
  if (quitApp) {
    printf("quitting main loop 1\n");
    emscripten_cancel_main_loop();
    printf("quitting main loop 2\n");
  }
#endif

    ///if (isDebugPeriodReached()) printf("mainLoop 7\n");

    incDebugPeriodicCounter();
    //if (isDebugPeriodReached()) {
    //    printf("mainLoop 8\n");
    //    std::cout << std::endl; // flush
    //}
}

#ifdef ENABLE_WTF
/*static void CallOnMainThreadFunction(WTF::MainThreadFunction function, void* context) {
  // TODO
  //
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/scheduler/public/post_cross_thread_task.h#L17
  PostCrossThreadTask(
      *Thread::MainThread()->GetTaskRunner(), FROM_HERE,
      CrossThreadBind(function, CrossThreadUnretained(context)));
}*/

/*static void MakeClosure(base::OnceClosure** closure_out) {
  *closure_out = new base::OnceClosure(WTF::Bind([] {
    printf("OnceClosure!\n");
  }));
  LEAK_SANITIZER_IGNORE_OBJECT(*closure_out);
}*/


class BindChecks{
public:
  int Run(){
    return base::BindOnce(&BindChecks::ConstNoexceptMethod, base::Unretained(this))
              .Run();
  }

  int ConstNoexceptMethod() const noexcept { return 42; }
};

static int SomeHardcoreTask(int max_num) {
    //TRACE_EVENT1(kCategoryName, "SomeHardcoreTask", "max_num", max_num);
    //float x = 1.5f;
    int x = 0;
    for (int i = 0; i < max_num; ++i) {
        //x *= sin(x) / atan(x) * tanh(x) * sqrt(x);
        x += i;
    }

    return x;
}

static void SomeHardcoreAsyncTask(
    base::WaitableEvent* event,
    const base::Callback<void(int)>& out_cb) {
    //TRACE_EVENT0(kCategoryName, "SomeHardcoreAsyncTask");
    printf("SomeHardcoreAsyncTask...\n");

    for (int i : {20000, 5000, 800})
        out_cb.Run(SomeHardcoreTask(i));

    event->Signal();
}
#endif

/*class ThreadControllerNoMT
    : public base::sequence_manager::internal::ThreadControllerWithMessagePumpImpl {
 public:
  ThreadControllerNoMT(std::unique_ptr<base::MessagePump> pump,
                          base::sequence_manager::SequenceManager::Settings& settings)
      : ThreadControllerWithMessagePumpImpl(std::move(pump), settings) {}

  using ThreadControllerWithMessagePumpImpl::DoDelayedWork;
  using ThreadControllerWithMessagePumpImpl::DoIdleWork;
  using ThreadControllerWithMessagePumpImpl::DoWork;
  using ThreadControllerWithMessagePumpImpl::EnsureWorkScheduled;
  using ThreadControllerWithMessagePumpImpl::Quit;
  using ThreadControllerWithMessagePumpImpl::Run;
};

static std::unique_ptr<base::MessagePump> g_main_pump;
static std::unique_ptr<ThreadControllerNoMT> g_thread_controller;

static std::unique_ptr<base::Thread> main_thread;
std::unique_ptr<base::sequence_manager::SequenceManager> sequence_manager;
*/

/// \note don`t use int main(void)
/// \see https://github.com/emscripten-core/emscripten/issues/8757
/// \note use main compatible with SDL2
//int main(int argc, char** argv)
int main(int argc, char* argv[])
{
#if defined(OS_WIN)
  // Set console code page to UTF-8 so console known how to interpret string data
  SetConsoleOutputCP(CP_UTF8);
  // Enable buffering to prevent VS from chopping up UTF-8 byte sequences
  setvbuf(stdout, nullptr, _IOFBF, 1000);
#endif // OS_WIN

    printf("main 0...\n");
#if !defined(ENABLE_MAIN)
  return EXIT_SUCCESS;
#endif // ENABLE_MAIN


#if defined(ENABLE_COBALT)
  skemgl::addTestOnlyAttrCallbacks();
#endif // ENABLE_COBALT

    printf("main 1...\n");
    //SbMemoryAllocateAligned();
    //SbMemoryDeallocateAligned();
    printf("main 2...\n");
#ifdef ENABLE_BORINGSSL
    // see https://boringssl.googlesource.com/boringssl/+/version_for_cocoapods_1.0/ssl/ssl_test.cc
    CRYPTO_library_init();
#endif // ENABLE_BORINGSSL

#if defined(FORCE_WASM_FS)
  printf("Init emscripten FS ...\n");
  EM_ASM(
      try {
          // emscripten cannot mount all of / in the vfs,
          // we can only mount subdirectories...
          FS.mount(NODEFS, { root: '/home' }, '/home');
          FS.mkdir('/root');
          FS.mount(NODEFS, { root: '/root' }, '/root');

          FS.chdir(process.cwd());
      } catch (e) {
          console.log(e);
      });
#endif

#if defined(ENABLE_GFX_GEOMETRY)
    printf("test GFX_GEOMETRY ...\n");
    gfx::Rect gfxRect(100, 200);
    printf("gfxRect top_right = %s ...\n", gfxRect.top_right().ToString().c_str());
#endif

#ifdef ENABLE_BASE
    printf("Init AtExitManager ...\n");
  base::AtExitManager at_exit;
  //at_exit.DisableAllAtExitManagers();
#endif

#ifdef ENABLE_BASE
    base::Thread::Options thread_options;
#if defined(OS_WIN)
      thread_options.message_loop_type = base::MessageLoop::TYPE_UI;
#endif

    main_browser_thread_wrapper_.StartWithOptions(thread_options);
    #if defined(SEPARATE_UI_THREAD_WRAPPER)
      ui_draw_thread_wrapper_.StartWithOptions(thread_options);
    #endif // SEPARATE_UI_THREAD_WRAPPER
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
    /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
    main_browser_thread_wrapper_.WaitUntilThreadStarted();
    #if defined(SEPARATE_UI_THREAD_WRAPPER)
      ui_draw_thread_wrapper_.WaitUntilThreadStarted();
    #endif // SEPARATE_UI_THREAD_WRAPPER
#endif
  DCHECK(main_browser_thread_wrapper_.IsRunning());

  {
    main_browser_thread_wrapper_.task_runner()->PostTask(
          FROM_HERE, base::Bind([](base::WaitableEvent* thread_event) {
    #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
                DCHECK(base::MessageLoopCurrent::Get());
    #endif
              {
                base::Thread::Options options;
#if defined(OS_WIN)
                options.message_loop_type = base::MessageLoop::TYPE_UI;
#endif
                //options.message_loop_type = base::MessageLoop::TYPE_IO;
                main_browser_thread_.StartWithOptions(options);
                //input_device_thread_.StartWithOptions(options);

          #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
                /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
                main_browser_thread_.WaitUntilThreadStarted();
                //input_device_thread_.WaitUntilThreadStarted();
                printf("main_browser_thread_ Started...\n");
          #endif
              }
              thread_event->Signal();
          }, &main_thread_event_));

      printf("Waiting for main_browser_thread_wrapper_...\n");
    #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
      /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
      main_thread_event_.Wait();
    #endif
      main_thread_event_.Reset();
  }
  DCHECK(main_browser_thread_.IsRunning());

  {
    #if defined(SEPARATE_UI_THREAD_WRAPPER)
    ui_draw_thread_wrapper_.task_runner()->PostTask(
    #else
    main_browser_thread_wrapper_.task_runner()->PostTask(
    #endif // SEPARATE_UI_THREAD
          FROM_HERE, base::Bind([](base::WaitableEvent* thread_event) {
    #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
                DCHECK(base::MessageLoopCurrent::Get());
    #endif
              {
                base::Thread::Options options;
#if defined(OS_WIN)
                options.message_loop_type = base::MessageLoop::TYPE_UI;
#endif

    #if defined(SEPARATE_UI_THREAD)
                ui_draw_thread_.StartWithOptions(options);
    #endif // SEPARATE_UI_THREAD

          #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
                /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
    #if defined(SEPARATE_UI_THREAD)
                ui_draw_thread_.WaitUntilThreadStarted();
                printf("ui_draw_thread_ Started...\n");
    #endif // SEPARATE_UI_THREAD
          #endif
              }
              thread_event->Signal();
          }, &main_thread_event_));

      printf("Waiting for ui_draw_thread_wrapper_...\n");
    #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
      /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
      main_thread_event_.Wait();
    #endif
      main_thread_event_.Reset();
  }
  #if defined(SEPARATE_UI_THREAD)
    DCHECK(ui_draw_thread_.IsRunning());
  #endif // SEPARATE_UI_THREAD
#endif // ENABLE_BASE

#ifdef ENABLE_BLINK_PLATFORM
  printf("Init RuntimeEnabledFeatures ...\n");
  // Disable all runtime enabled features
  blink::RuntimeEnabledFeatures::SetStableFeaturesEnabled(false);
  blink::RuntimeEnabledFeatures::SetExperimentalFeaturesEnabled(false);
  blink::RuntimeEnabledFeatures::SetTestFeaturesEnabled(false);
#endif // ENABLE_BLINK_PLATFORM

#ifdef ENABLE_BASE

  printf("Init CommandLine ...\n");

  base::CommandLine::Init(0, nullptr);
#if __TODO__
  base::CommandLine::ForCurrentProcess()->InitFromArgv(argc, argv);
#endif // __TODO__

  ///printf("SysInfo::AmountOfFreeDiskSpace %d ...\n", base::SysInfo::AmountOfFreeDiskSpace());

#ifdef __EMSCRIPTEN__
  printf("SysInfo::AmountOfAvailablePhysicalMemory %lld ...\n", base::SysInfo::AmountOfAvailablePhysicalMemory());
#else
  printf("SysInfo::AmountOfAvailablePhysicalMemory %ld ...\n", base::SysInfo::AmountOfAvailablePhysicalMemory());
#endif

  printf("SysInfo::NumberOfProcessors %d ...\n", base::SysInfo::NumberOfProcessors());
  printf("SysInfo::NumberOfProcessors %s ...\n", base::SysInfo::OperatingSystemArchitecture().c_str());
  printf("SysInfo::NumberOfProcessors %s ...\n", base::SysInfo::CPUModelName().c_str());

 /* printf("Init ThreadControllerNoMT ...\n");
  if(!g_thread_controller.get()) {

  base::sequence_manager::SequenceManager::Settings
   sqm_settings =
    base::sequence_manager::SequenceManager::Settings::Builder()
                      .SetMessageLoopType(base::MessageLoop::Type::TYPE_DEFAULT)
                      .Build();

    g_main_pump = std::make_unique<base::MessagePump>();
    g_thread_controller = std::make_unique<ThreadControllerNoMT>(
      std::move(g_main_pump), sqm_settings);
    // calls RunLoop::RegisterDelegateForCurrentThread(this);
    //g_thread_controller->BindToCurrentThread(std::move(g_main_pump));
  }*/

  /*printf("Init PlatformThread ...\n");
  main_thread = std::make_unique<base::Thread>("BrowserThreadMain");
  base::PlatformThread::SetName("BrowserMain");
  printf("CreateSequenceManagerOnCurrentThread ...\n");
  base::sequence_manager::SequenceManager::Settings
   sequence_manager_settings =
    base::sequence_manager::SequenceManager::Settings::Builder()
                      .SetMessageLoopType(base::MessageLoop::Type::TYPE_DEFAULT)
                      .Build();
  sequence_manager =
        CreateSequenceManagerOnCurrentThread(
          std::move(sequence_manager_settings));
          //base::sequence_manager::SequenceManager::Settings());
  printf("SetDefaultTaskRunner ...\n");
  main_thread->Start();
  DCHECK(main_thread->task_runner().get());
  //sequence_manager->SetDefaultTaskRunner(main_thread->task_runner());
  //printf("Init MessageLoopCurrent ...\n");
  //DCHECK(base::MessageLoopCurrent::Get()); // TODO
  //base::MessageLoopCurrent::Get()->SetTaskRunner(main_thread->task_runner());
  */

#if defined(ENABLE_BLINK_UI) && defined(ENABLE_SKIA) && defined(ENABLE_BLINK)
  printf("Init FontList ...\n");
  // Use a single default font as the default font list.
  gfx::FontList::SetDefaultFontDescription(::std::string());
#endif

#if defined(OS_WIN)
  //base::RouteStdioToConsole(false);
#endif

  printf("Init logging ...\n");

  logging::LoggingSettings logging_settings;
  logging_settings.logging_dest = logging::LOG_TO_SYSTEM_DEBUG_LOG;
  logging::InitLogging(logging_settings);

  // To view log output with IDs and timestamps use "adb logcat -v threadtime".
  logging::SetLogItems(true,   // Process ID
                       true,   // Thread ID
                       true,   // Timestamp
                       true);  // Tick count

#ifdef ENABLE_COBALT
  /// \note nothing to do, see InitCobalt
#else
#ifdef HAS_ICU
  printf("InitializeICU start\n");
  bool icu_initialized = base::i18n::InitializeICU();
  printf("InitializeICU end\n");
#if defined(OS_EMSCRIPTEN)
  if(!icu_initialized) {
    DCHECK(false);
  }
#endif // OS_EMSCRIPTEN
#endif // HAS_ICU
#endif // ENABLE_COBALT

/*#if !defined(OS_EMSCRIPTEN)
  // Initialize stack dumping before initializing sandbox to make sure symbol
  // names in all loaded libraries will be cached.
  base::debug::EnableInProcessStackDumping();
#endif*/

  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  base::FeatureList::InitializeInstance(
      command_line->GetSwitchValueASCII(switches::kEnableFeatures),
      command_line->GetSwitchValueASCII(switches::kDisableFeatures));

  /*WaitForDebuggerIfNecessary();
  service_manager::ServiceExecutableEnvironment environment;
  ServiceMain(environment.TakeServiceRequestFromCommandLine());
  base::ThreadPool::GetInstance()->Shutdown();*/

#if defined(ENABLE_BASE_PREALLOC) && defined(__TODO__)
  printf("Init alloc ...\n");
  // see
  // https://cs.chromium.org/chromium/src/third_party/blink/renderer/controller/blink_initializer.cc?sq=package:chromium&dr=C&g=0&l=88
  {
    /// @TODO don`t reserve much memory on WASM/EMSCRIPTEN platform
    // Try to reserve as much address space as we reasonably can.
    const size_t kMB = 1024 * 1024;
    // for (size_t size = 512 * kMB; size >= 32 * kMB; size -= 16 * kMB) {
    // for (size_t size = 128 * kMB; size >= 32 * kMB; size -= 16 * kMB) {
    //for (size_t size = 64 * kMB; size >= 32 * kMB; size -= 16 * kMB) {
    for (size_t size = 32 * kMB; size >= 32 * kMB; size -= 16 * kMB) {
      printf("ReserveAddressSpace...\n");
      if (base::ReserveAddressSpace(size)) {
        // Report successful reservation.
        // DEFINE_STATIC_LOCAL(CustomCountHistogram, reservation_size_histogram,
        //                    ("Renderer4.ReservedMemory", 32, 512, 32));
        // reservation_size_histogram.Count(size / kMB);

        break;
      }
    }
  }
#endif // ENABLE_BASE_PREALLOC
#endif

#ifdef ENABLE_BLINK_UI
  printf("Init Partitions ...\n");
  // see
  // https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/exported/platform.cc#L119
#ifdef ENABLE_WTF
  WTF::Partitions::Initialize(nullptr); // TODO
#endif // ENABLE_WTF

#if defined(ENABLE_BLINK_UI) //&& defined(__TODO__)
    //base::Thread ui_thread("render");
    //blink::ThreadCreationParams params(blink::WebThreadType::kMainThread);

    // https://github.com/chromium/chromium/blob/a54556118f27685fc04547c939805de6acdccc26/third_party/blink/renderer/platform/testing/image_decode_bench.cc#L104
  printf("Init blink::Platform ...\n");
  main_browser_thread_.task_runner()->PostTask(
      FROM_HERE, base::Bind([](base::WaitableEvent* thread_event) {
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
          DCHECK(base::MessageLoopCurrent::Get());
#endif
          //if(!render_browser_window) {
          // TODO
            skiaUiDemo.initBlinkPlatform();

          //}
          printf("Main thread works...\n");
          thread_event->Signal();
      }, &main_thread_event_));
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
  main_thread_event_.Wait();
#endif
  main_thread_event_.Reset();
#else

#ifdef ENABLE_WTF
  printf("Init WTF ...\n");
  WTF::Initialize(nullptr); // TODO
#endif // ENABLE_WTF

#endif

#ifdef ENABLE_WTF
  printf("Testing WTF ...\n");
  {
    BindChecks bc;
    printf("BindChecks ... %d\n", bc.Run());
  }
  WTF::Bind([] {
    printf("WTF::Bind!\n");
  }).Run();
#endif // ENABLE_WTF

#endif

#if defined(ENABLE_THREAD_TESTS)

#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__)
  // TODO: causes skia/GL hang on WASM
  // #warning "TODO: port threads & support skia"
#elif defined(__EMSCRIPTEN__) // wasm without PTHREAD support
  // TODO: error undefined pthread_setschedparam
  // see https://github.com/emscripten-core/emscripten/pull/8301
  // TODO: port as in https://github.com/emscripten-core/emscripten/pull/8301/files#diff-3a4a6b777ac7df56ef826737ea093be8R37
  #warning "TODO: port threads to wasm without PTHREAD support"
#endif
  {
    printf("thread testing started\n");
    //base::OnceClosure* closure = nullptr;
    //base::OnceCallback<void()> binded = base::BindOnce(&MakeClosure, &closure);
    //::std::move(binded).Run();

    //PlatformThread::CurrentId()
    //base::Thread::ThreadMain().

    base::Thread thread("testing");

    thread.Start();
    //DCHECK(thread.task_runner());
    //thread.task_runner()->PostTask(FROM_HERE, base::BindOnce(&MakeClosure, &closure));
    //thread.Stop();
    DCHECK(thread.task_runner());
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
    thread.WaitUntilThreadStarted();
#endif

    base::WaitableEvent event(base::WaitableEvent::ResetPolicy::MANUAL,
      base::WaitableEvent::InitialState::NOT_SIGNALED);

    auto AsyncTaskCb = [](const int x) {
      //printf("AsyncTaskCb %d\n", x);
      ::std::cout << "AsyncTaskCb " << x << " " << base::Time::Now() << "\n";
    };

    //printf("thread testing PostDelayedTask...\n");
    ::std::cout << "thread testing PostTask 0..." << base::Time::Now() << "\n";

    // see https://habr.com/ru/post/256907/
    DCHECK(thread.task_runner());
    thread.task_runner()->PostDelayedTask(
      FROM_HERE,
      base::Bind(&SomeHardcoreAsyncTask,
                 &event,
                 base::Bind(AsyncTaskCb)),
      base::TimeDelta::FromMilliseconds(100));

    // ::std::cout << "thread testing PostTask 1..." << base::Time::Now() << "\n";

    DCHECK(thread.task_runner());
    thread.task_runner()->PostTask(
      FROM_HERE,
      base::BindOnce(
          [](base::RepeatingCallback<void()> cb) {
            printf("BindOncePostTask 1\n");
            cb.Run();
          },
          base::BindRepeating([]() {
            printf("BindOncePostTask 2\n");
          })));

    //::std::cout << "thread testing PostTask 2..." << base::Time::Now() << "\n";

    //DCHECK(thread.task_runner());
    //thread.task_runner()->PostTask(
    //  FROM_HERE,
    //  base::Bind(&SomeHardcoreAsyncTask,
    //             &event2,
    //             base::Bind(AsyncTaskCb)));
    //
    ////printf("thread testing Wait...\n");
    ::std::cout << "thread testing start Wait..." << base::Time::Now() << "\n";
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
    /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
    event.Wait();
#endif

    printf("thread.Stop()...\n");
    thread.Stop();

    ::std::cout << "thread testing ended..." << base::Time::Now() << "\n";
    //printf("thread testing ended\n");
  }
#endif // ENABLE_THREAD_TESTS

#ifdef ENABLE_WTF
  {
    WTF::NumberToStringBuffer buffer;
    WTF::NumberToFixedPrecisionString(0.000000123123123, 6, buffer);
    //EXPECT_STREQ("1.23123e-7", buffer);
    printf("EXPECT_EQ 1.23123e-7 %s...\n", buffer);

    // Up to 6 places before the decimal.
    WTF::NumberToFixedPrecisionString(123123.123, 6, buffer);
    //EXPECT_STREQ("123123", buffer);
    printf("EXPECT_EQ 123123 %s...\n", buffer);
  }

  {
    int16_t int_value = 1234;
    //EXPECT_EQ("1234", AtomicString::Number(int_value));
    printf("EXPECT_EQ 1234 %s...\n", AtomicString::Number(int_value).Ascii().data());
    int_value = -1234;
    //EXPECT_EQ("-1234", AtomicString::Number(int_value));
    printf("EXPECT_EQ -1234 %s...\n", AtomicString::Number(int_value).Ascii().data());
    uint16_t unsigned_value = 1234u;
    //EXPECT_EQ("1234", AtomicString::Number(unsigned_value));
    printf("EXPECT_EQ 1234 %s...\n", AtomicString::Number(unsigned_value).Ascii().data());
    int32_t long_value = 6553500;
    //EXPECT_EQ("6553500", AtomicString::Number(long_value));
    printf("EXPECT_EQ 6553500 %s...\n", AtomicString::Number(long_value).Ascii().data());
    long_value = -6553500;
    //EXPECT_EQ("-6553500", AtomicString::Number(long_value));
    printf("EXPECT_EQ -6553500 %s...\n", AtomicString::Number(long_value).Ascii().data());
    uint32_t unsigned_long_value = 4294967295u;
    //EXPECT_EQ("4294967295", AtomicString::Number(unsigned_long_value));
    printf("EXPECT_EQ 4294967295 %s...\n", AtomicString::Number(unsigned_long_value).Ascii().data());
    int64_t longlong_value = 9223372036854775807;
    //EXPECT_EQ("9223372036854775807", AtomicString::Number(longlong_value));
    printf("EXPECT_EQ 9223372036854775807 %s...\n", AtomicString::Number(longlong_value).Ascii().data());
    longlong_value = -9223372036854775807;
    //EXPECT_EQ("-9223372036854775807", AtomicString::Number(longlong_value));
    printf("EXPECT_EQ -9223372036854775807 %s...\n", AtomicString::Number(longlong_value).Ascii().data());
    uint64_t unsigned_long_long_value = 18446744073709551615u;
    //EXPECT_EQ("18446744073709551615",
    //          AtomicString::Number(unsigned_long_long_value));
    printf("EXPECT_EQ 18446744073709551615 %s...\n", AtomicString::Number(unsigned_long_long_value).Ascii().data());
    double double_value = 1234.56;
    //EXPECT_EQ("1234.56", AtomicString::Number(double_value));
    printf("EXPECT_EQ 1234.56 %s...\n", AtomicString::Number(double_value).Ascii().data());
    double_value = 1234.56789;
    //EXPECT_EQ("1234.56789", AtomicString::Number(double_value, 9));
    printf("EXPECT_EQ 1234.56789 %s...\n", AtomicString::Number(double_value, 9).Ascii().data());
  }

  {
    scoped_refptr<StringImpl> test_string_impl = StringImpl::Create("link");
    printf("EXPECT_TRUE Is8Bit %d...\n", test_string_impl->Is8Bit());
    //EXPECT_TRUE(test_string_impl->Is8Bit());
    printf("EXPECT_TRUE Is8Bit %d...\n", StringImpl::Create("a\xE1")->Is8Bit());
    //EXPECT_TRUE(StringImpl::Create("a\xE1")->Is8Bit());

    /*EXPECT_TRUE(Equal(test_string_impl.get(),
                      StringImpl::Create("link")->LowerASCII().get()));
    EXPECT_TRUE(Equal(test_string_impl.get(),
                      StringImpl::Create("LINK")->LowerASCII().get()));
    EXPECT_TRUE(Equal(test_string_impl.get(),
                      StringImpl::Create("lInk")->LowerASCII().get()));

    EXPECT_TRUE(Equal(StringImpl::Create("LINK")->LowerUnicode().get(),
                      StringImpl::Create("LINK")->LowerASCII().get()));
    EXPECT_TRUE(Equal(StringImpl::Create("lInk")->LowerUnicode().get(),
                      StringImpl::Create("lInk")->LowerASCII().get()));

    EXPECT_TRUE(Equal(StringImpl::Create("a\xE1").get(),
                      StringImpl::Create("A\xE1")->LowerASCII().get()));
    EXPECT_TRUE(Equal(StringImpl::Create("a\xC1").get(),
                      StringImpl::Create("A\xC1")->LowerASCII().get()));

    EXPECT_FALSE(Equal(StringImpl::Create("a\xE1").get(),
                       StringImpl::Create("a\xC1")->LowerASCII().get()));
    EXPECT_FALSE(Equal(StringImpl::Create("A\xE1").get(),
                       StringImpl::Create("A\xC1")->LowerASCII().get()));*/

    static const UChar kTest[5] = {0x006c, 0x0069, 0x006e, 0x006b, 0};  // link
    /*static const UChar kTestCapitalized[5] = {0x004c, 0x0049, 0x004e, 0x004b,
                                              0};  // LINK*/

    scoped_refptr<StringImpl> test_string_impl16 = StringImpl::Create(kTest, 4);
    //EXPECT_FALSE(test_string_impl16->Is8Bit());
    printf("EXPECT_FALSE Is8Bit %d...\n", test_string_impl16->Is8Bit());

    //EXPECT_TRUE(Equal(test_string_impl16.get(),
    //                  StringImpl::Create(kTest, 4)->LowerASCII().get()));
    //EXPECT_TRUE(
    //    Equal(test_string_impl16.get(),
    //          StringImpl::Create(kTestCapitalized, 4)->LowerASCII().get()));

    /*static const UChar kTestWithNonASCII[3] = {0x0061, 0x00e1, 0};  // a\xE1
    static const UChar kTestWithNonASCIIComparison[3] = {0x0061, 0x00c1,
                                                         0};  // a\xC1
    static const UChar kTestWithNonASCIICapitalized[3] = {0x0041, 0x00e1,
                                                          0};  // A\xE1*/

    // Make sure we support scoped_refptr<const StringImpl>.
    scoped_refptr<const StringImpl> const_ref = test_string_impl->IsolatedCopy();
    DCHECK(const_ref->HasOneRef());
    //EXPECT_TRUE(Equal(
    //    StringImpl::Create(kTestWithNonASCII, 2).get(),
    //    StringImpl::Create(kTestWithNonASCIICapitalized, 2)->LowerASCII().get()));
    //EXPECT_FALSE(Equal(
    //    StringImpl::Create(kTestWithNonASCII, 2).get(),
    //    StringImpl::Create(kTestWithNonASCIIComparison, 2)->LowerASCII().get()));
  }

  {
    WTF::String test_string = "1224";
    String string_from_literal("Explicit construction syntax");
    printf("strlen %zu = %d...\n", strlen("Explicit construction syntax"), string_from_literal.length());
    printf("Ascii().data() %s...\n", string_from_literal.Ascii().data());
    printf("Is8Bit %d...\n", string_from_literal.Is8Bit());
    /// TODO: FIXME ON WASM (EMSCRIPTEN)
    /// string_view.cc(19) Check failed: !impl_->HasOneRef() || impl_->IsStatic()
    // TODO
    // printf("EXPECT_EQ literal == %d...\n", string_from_literal == "Explicit construction syntax");
    printf("EXPECT_EQ String == %d...\n", String("Explicit construction syntax") == string_from_literal);
  }

  {
    WTF::String test_string = String::FromUTF8("r\xC3\xA9sum\xC3\xA9");
    printf("EXPECT_FALSE %d...\n", test_string.Is8Bit());
    test_string.Replace(UChar(0x00E9), "e");
    /// TODO: FIXME ON WASM (EMSCRIPTEN)
    /// string_view.cc(19) Check failed: !impl_->HasOneRef() || impl_->IsStatic()
    printf("EXPECT_STREQ resume = %s...\n", test_string.Utf8().data());
  }

  {
    WTF::Vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    printf("vec front is %d\n", vec.front());
    printf("vec.at(2) is %d\n", vec.at(2));
    printf("vec back is %d\n", vec.back());
  }

  {
      const UChar kTestBUChars[6] = {0x41, 0x95, 0xFFFF, 0x1080, 0x01, 0};
      const unsigned kTestBHash1 = 0xEA32B004;
      const unsigned kTestBHash2 = 0x93F0F71E;
      //const unsigned kTestBHash3 = 0x59EB1B2C;
      //const unsigned kTestBHash4 = 0xA7BCCC0A;
      //const unsigned kTestBHash5 = 0x79201649;
      WTF::StringHasher hasher;
      hasher.AddCharacter(kTestBUChars[0]);
      printf("EXPECT_EQ kTestBHash1 %d\n", kTestBHash1 == hasher.GetHash());
      //EXPECT_EQ(kTestBHash1, hasher.GetHash());
      printf("EXPECT_EQ kTestBHash1 & 0xFFFFFF %d\n", (kTestBHash1 & 0xFFFFFF) == hasher.HashWithTop8BitsMasked());
      //EXPECT_EQ(kTestBHash1 & 0xFFFFFF, hasher.HashWithTop8BitsMasked());
      hasher.AddCharacter(kTestBUChars[1]);
      printf("EXPECT_EQ kTestBHash2 %d\n", kTestBHash2 == hasher.GetHash());
      //EXPECT_EQ(kTestBHash2, hasher.GetHash());
      printf("EXPECT_EQ kTestBHash2 & 0xFFFFFF %d\n", (kTestBHash2 & 0xFFFFFF) == hasher.HashWithTop8BitsMasked());
      //EXPECT_EQ(kTestBHash2 & 0xFFFFFF, hasher.HashWithTop8BitsMasked());

      //
      //printf("EXPECT_EQ kTestBHash5 %d\n", kTestBHash5 == hasher.GetHash());
      //EXPECT_EQ(kTestBHash5, hasher.GetHash());
  }
#endif

#ifdef ENABLE_BASE
  {
    ::std::string s("destroy me");
    scoped_refptr<base::RefCountedMemory> mem = base::RefCountedString::TakeString(&s);

    //EXPECT_EQ(0U, s.size());
    printf("EXPECT_EQ %d\n", 0U == s.size());

    //ASSERT_EQ(10U, mem->size());
    printf("ASSERT_EQ %d\n", 10U == mem->size());
    //EXPECT_EQ('d', mem->front()[0]);
    printf("EXPECT_EQ 'd' %u\n", mem->front()[0]);
    //EXPECT_EQ('e', mem->front()[1]);
    printf("EXPECT_EQ 'e' %u\n", mem->front()[1]);
    //EXPECT_EQ('e', mem->front()[9]);
    printf("EXPECT_EQ 'e' %u\n", mem->front()[9]);
  }

  {
      base::small_map<::std::map<::std::string, ::std::string>> foo;
      foo.insert(::std::make_pair("foo", "bar"));
      foo.insert(::std::make_pair("bar", "bar"));
      foo.insert(::std::make_pair("foo1", "bar"));
      foo.insert(::std::make_pair("bar1", "bar"));
      foo.insert(::std::make_pair("foo", "bar"));
      foo.insert(::std::make_pair("bar", "bar"));
      auto found = foo.find("asdf");
      printf("1 Found == foo.end() %d\n", static_cast<int>(found == foo.end()));
      found = foo.find("foo");
      printf("2 Found == foo.end() %d\n", static_cast<int>(found == foo.end()));
      found = foo.find("bar");
      printf("3 Found == foo.end() %d\n", static_cast<int>(found == foo.end()));
      found = foo.find("asdfhf");
      printf("4 Found == foo.end() %d\n", static_cast<int>(found == foo.end()));
      found = foo.find("bar1");
      printf("5 Found == foo.end() %d\n", static_cast<int>(found == foo.end()));
  }
#endif

#if defined(OS_WIN)
  // Build UI thread message loop. This is used by platform
  // implementations for event polling & running background tasks.
  printf("Starting MessageLoopForUI...\n");
  base::ThreadPool::CreateAndStartWithDefaultParams("MainThreadPool");
  printf("Started MessageLoopForUI...\n");
#endif // OS_WIN

  printf("Starting ...\n");

#ifdef __EMSCRIPTEN__
#ifdef ENABLE_COBALT
  EM_LOG("EMSCRIPTEN DETECTED!\n");
#endif // ENABLE_COBALT

  //https://github.com/Becavalier/Book-DISO-WebAssembly/issues/10
  double dpr = emscripten_get_device_pixel_ratio();
  emscripten_set_canvas_element_size("#canvas", DRAW_SURFACE_WIDTH, DRAW_SURFACE_HEIGHT);
  emscripten_set_element_css_size("#canvas", DRAW_SURFACE_WIDTH * dpr, DRAW_SURFACE_HEIGHT * dpr);

  /// @note use EmscriptenWebGLContextAttributes, not SDL_GL
  /// @see https://github.com/emscripten-core/emscripten/issues/7684
  ///
  emscripten_webgl_init_context_attributes(&attr);

//#ifdef __TODO__
  /*
  * In order to be able to set explicitSwapControl==true,
  * support for it must explicitly be enabled either
  * 1) via adding the -s OFFSCREEN_FRAMEBUFFER=1 Emscripten linker flag,
  * and enabling renderViaOffscreenBackBuffer==1,
  * or
  * 2) via adding the the linker flag -s OFFSCREENCANVAS_SUPPORT=1,
  * and running in a browser that supports OffscreenCanvas.
  */
  // control of swapping is given to the user to manage, via the emscripten_webgl_commit_frame
  attr.explicitSwapControl = enableSwapControl;

  // If false, no extensions are enabled by default, and you need to manually call emscripten_webgl_enable_extension()
  attr.enableExtensionsByDefault = enableEmscriptenExtensionsByDefault;

  /*
   * If ``true``, an extra intermediate backbuffer (offscreen render target)
   * is allocated to the created WebGL context, and rendering occurs
   * to this backbuffer instead of directly onto the WebGL "default backbuffer".
   * This is required to be enabled if
   * 1) ``explicitSwapControl==true``
   * and the browser does not support OffscreenCanvas,
   * 2) when performing WebGL rendering in a worker thread
   * and the browser does not support OffscreenCanvas,
   * and
   * 3) when performing WebGL context accesses from multiple threads
   * simultaneously (independent of whether OffscreenCanvas is supported or not).
   *
   * Because supporting offscreen framebuffer adds some amount of
   * extra code to the compiled output, support for it must explicitly
   * be enabled via the -s OFFSCREEN_FRAMEBUFFER=1 Emscripten linker flag.
   * When building simultaneously with both -s OFFSCREEN_FRAMEBUFFER=1
   * and -s OFFSCREENCANVAS_SUPPORT=1 linker flags enabled,
   * offscreen backbuffer can be used as a polyfill-like compatibility
   * fallback to enable rendering WebGL from a pthread when the browser
   * does not support the OffscreenCanvas API.
   */
  attr.renderViaOffscreenBackBuffer = EM_FALSE;
  if( enableSwapControl && !emscripten_supports_offscreencanvas() )
  {
    printf( "WARNING: explicitSwapControl requires offscreen canvas support, trying fallback to renderViaOffscreenBackBuffer...\n");
    attr.renderViaOffscreenBackBuffer = EM_TRUE;
  }

  // EMSCRIPTEN_WEBGL_CONTEXT_PROXY_DISALLOW, if the WebGL context is being created on the main thread
  // @note by default WebGL contexts created on the main thread are not shareable between multiple threads
  // @see https://github.com/save7502/youkyoung/blob/master/Engine/Source/Runtime/OpenGLDrv/Private/HTML5/HTML5OpenGL.cpp#L291
  attr.proxyContextToMainThread = EMSCRIPTEN_WEBGL_CONTEXT_PROXY_DISALLOW;

  // blend the canvas rendering with the underlying web page contents.
  attr.alpha = EM_FALSE;

  //  If false, no depth buffer will be initialized
  attr.depth = EM_TRUE;

  // If false, no stencil buffer will be initialized
  attr.stencil = EM_TRUE;

  // If true, antialiasing will be initialized with a browser-specified algorithm and quality level
  attr.antialias = EM_FALSE;

  // If false, the alpha channel represents non-premultiplied alpha.
  attr.premultipliedAlpha = EM_TRUE;

  //  If false, color, depth and stencil are cleared at the beginning of each requestAnimationFrame
  attr.preserveDrawingBuffer = EM_FALSE;

  // how it should choose the use of available GPU resources
  // attr.powerPreference = EM_WEBGL_POWER_PREFERENCE_DEFAULT;

  // preferLowPowerToHighPerformance

  // abort if the browser is only able to create a context that does not give good hardware-accelerated performance
  attr.failIfMajorPerformanceCaveat = EM_FALSE;

#if defined(WEBGL2_SUPPORT)
  printf("creating WEBGL2 context\n");
  // majorVersion=2, minorVersion=0 to request a WebGL 2.0 context (-s USE_WEBGL2=1).
  attr.majorVersion = 2;
  attr.minorVersion = 0;
#else
  printf("creating WEBGL1 context\n");
  attr.majorVersion = 1;
  attr.minorVersion = 0;
#endif

//#endif // __TODO__

  //em_ctx = emscripten_webgl_create_context(/* target = */ nullptr, &attr);
  em_ctx = emscripten_webgl_create_context("#canvas", &attr);
  if (em_ctx == 0) {
    printf ("error: can't create EMSCRIPTEN_WEBGL_CONTEXT_HANDLE\n");
  }

  emscripten_set_webglcontextlost_callback("#canvas", 0, 0, context_lost);
  emscripten_set_webglcontextrestored_callback("#canvas", 0, 0, context_restored);

  // see https://github.com/emscripten-core/emscripten/issues/8307
  {
    EMSCRIPTEN_RESULT r = emscripten_webgl_make_context_current(em_ctx);
    if( r != EMSCRIPTEN_RESULT_SUCCESS )
    {
      printf( "Unable to make OffscreenCanvas instance the current context (code %d)\n", r );
    }
  }

  // see WebGL Extension Registry https://www.khronos.org/registry/webgl/extensions/
  if (!enableEmscriptenExtensionsByDefault) {
    /// @note see enableExtensionsByDefault
    if (!emscripten_webgl_enable_extension(em_ctx, "OES_vertex_array_object")) {
      printf("cannot run without browser support for OES_vertex_array_object.\n");
    }
  }

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  /// \note we don`t use SDL_WINDOW_OPENGL, see emscripten_webgl_create_context
  // see https://github.com/emscripten-ports/SDL2/issues
  // SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  // SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
  // SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
#endif

// __EMSCRIPTEN_PTHREADS__ can be used to detect whether Emscripten is currently targeting pthreads.
// At runtime, you can use the emscripten_has_threading_support()
// see https://emscripten.org/docs/porting/pthreads.html
#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__)
  // TODO
  // emscripten_pthread_attr_settransferredcanvases(&attr, "#canvas");
#endif

#else
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

  SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
  SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 0);
  SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, kStencilBits);

  SDL_GL_SetAttribute(SDL_GL_ACCELERATED_VISUAL, 1);

  if (kMsaaSampleCount > 0) {
    SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, 1);
    SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, kMsaaSampleCount);
  }
#endif

#if defined(__EMSCRIPTEN__) && !defined(ENABLE_HTML5_SDL) && !defined(ENABLE_NATIVE_HTML)
  // port SDL_PollEvent (emscripten_set_mousedown_callback, e.t.c.)
  // "see https://github.com/floooh/sokol/blob/master/sokol_app.h#L2403 for example"
  // "see https://github.com/hongkk/urho/blob/master/Source/Urho3D/Input/Input.cpp for example"
  // "see https://github.com/h-s-c/libKD/blob/master/source/kd.c#L2658 for example"

#if defined(ENABLE_EMSCRIPTEN_INPUT)
  emscripten_set_mousemove_callback("#canvas", 0, true, emsc_mouse_move_cb);
  emscripten_set_mousedown_callback("#canvas", 0, true, emsc_mouse_down_cb);
  emscripten_set_mouseup_callback("#canvas", 0, true, emsc_mouse_up_cb);
  emscripten_set_wheel_callback("#canvas", 0, true, emsc_mouse_wheel_cb);

#if defined(USE_DEPRECATED_FIND_EVENT_TARGET)
  emscripten_set_keydown_callback("#window", 0, true, emsc_keydown_cb);
  emscripten_set_keyup_callback("#window", 0, true, emsc_keyup_cb);
  emscripten_set_keypress_callback("#window", 0, true, emsc_keypress_cb);
  emscripten_set_resize_callback("#window", 0, false, emsc_resize_cb);
#else // USE_DEPRECATED_FIND_EVENT_TARGET
  emscripten_set_keydown_callback(EMSCRIPTEN_EVENT_TARGET_WINDOW, 0, true, emsc_keydown_cb);
  emscripten_set_keyup_callback(EMSCRIPTEN_EVENT_TARGET_WINDOW, 0, true, emsc_keyup_cb);
  emscripten_set_keypress_callback(EMSCRIPTEN_EVENT_TARGET_WINDOW, 0, true, emsc_keypress_cb);
  emscripten_set_resize_callback(EMSCRIPTEN_EVENT_TARGET_WINDOW, 0, false, emsc_resize_cb);
#endif // USE_DEPRECATED_FIND_EVENT_TARGET

#endif // ENABLE_EMSCRIPTEN_INPUT

#endif // defined(__EMSCRIPTEN__) && !defined(ENABLE_HTML5_SDL)

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  printf("SDL_Init ...\n");

  /// \note ignore printed 'Calling stub instead of sigaction()' from here,
  /// see https://github.com/emscripten-core/emscripten/issues/8567
  /// \note video subsystem automatically initializes the events subsystem
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS | SDL_INIT_TIMER) != 0) {
    printf("Unable to initialize SDL: %s\n", SDL_GetError());
    return 1;
  }

  printf("SDL_SetHint ...\n");

  if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
    printf("Warning: Linear texture filtering not enabled!\n");
  }

  printf("SDL_CreateWindow ...\n");

#if defined(__EMSCRIPTEN__)
  /// \note we don`t use SDL_WINDOW_OPENGL, see emscripten_webgl_create_context
  window = SDL_CreateWindow("skemgl", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, DRAW_SURFACE_WIDTH, DRAW_SURFACE_HEIGHT,
#if defined(ENABLE_OPENGL)
                            SDL_WINDOW_OPENGL); // TODO
#else // ENABLE_OPENGL
                            SDL_WINDOW_SHOWN); // TODO
#endif // ENABLE_OPENGL
#else
  window = SDL_CreateWindow("skemgl", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, DRAW_SURFACE_WIDTH, DRAW_SURFACE_HEIGHT,
#if defined(ENABLE_OPENGL)
                            SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE); // TODO
#else // ENABLE_OPENGL
                            SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE); // TODO
#endif // ENABLE_OPENGL
#endif

  if (!window) {
    printf("Unable to create window: %s\n", SDL_GetError());
    return 1;
  }

#if !defined(ENABLE_OPENGL)
    sdl_ren = SDL_CreateRenderer(window, -1,
      SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (sdl_ren == nullptr) {
        std::cout << "SDL_CreateRenderer Error" << SDL_GetError() << std::endl;
        return EXIT_FAILURE;
    }
#endif // ENABLE_OPENGL
#endif // ENABLE_HTML5_SDL

#if !defined(__EMSCRIPTEN__)
  printf("SDL_GL_CreateContext ...\n");

  glContext = SDL_GL_CreateContext(window);
  if (!glContext) {
    printf("Error while SDL_GL_CreateContext %s\n", SDL_GetError());
    SDL_ClearError();
    return 0;
  }
#endif // !defined(__EMSCRIPTEN__)

#if !defined(__EMSCRIPTEN__) && (defined(OS_WIN) || defined(OS_POSIX))
  /// \note You need to create a GL context. Try SDL_GL_CreateContext(window) before glewInit() call.
  GLenum glewError = glewInit();
  if (GLEW_OK != glewError)
  {
    /* Problem: glewInit failed, something is seriously wrong. */
    fprintf(stderr, "Error initializing GLEW: %s\n", glewGetErrorString(glewError));
  }
#endif

#if !defined(__EMSCRIPTEN__)
  printf("SDL_GL_MakeCurrent ...\n");

  int success = SDL_GL_MakeCurrent(window, glContext);
  if (success != 0) {
    printf("Error while SDL_GL_MakeCurrent %s\n", SDL_GetError());
    SDL_ClearError();
    return success;
  }
#endif // !defined(__EMSCRIPTEN__)

#if defined(ENABLE_OPENGL)
/// \todo WEBGL1_SUPPORT
#if defined(PRINT_GL_EXT) && (defined(WEBGL2_SUPPORT) || !defined(__EMSCRIPTEN__))
  int numExtensions = 0;
  // see https://github.com/emscripten-core/emscripten/issues/3472
  GL_CHECK( glGetIntegerv(GL_NUM_EXTENSIONS, &numExtensions) );
  for(int i = 0; i < numExtensions; ++i)
  {
    const char *ext = (const char *)glGetStringi(GL_EXTENSIONS, i);
    GL_CHECK_WITH_MESSAGE("glGetStringi");
    printf("has GL extension %d: %s\n", i, ext);
  }
#endif

  GL_CHECK( glDisable(GL_DEPTH_TEST) );
  GL_CHECK( glViewport(0, 0, static_cast<int>(DRAW_SURFACE_WIDTH),
      static_cast<int>(DRAW_SURFACE_HEIGHT)));
  //GL_CHECK( glClearColor(redClrTintAnim, 1.0f, 1.0f, 1.0f) );
  GL_CHECK( glClearColor(1.0f, 1.0f, 1.0f, 1.0f) );
  GL_CHECK( glClearStencil(0) );
  GL_CHECK( glClear(GL_COLOR_BUFFER_BIT | GL_STENCIL_BUFFER_BIT) );

  /**
   * @note (emscripten)
   * Native builds require a call to SDL_GL_SetSwapInterval(1)
   * to enable vertical sync.
   * But with Emscripten, SDL_GL_SetSwapInterval
   * is just a wrapper for emscripten_set_main_loop_timing,
   * which will complain when called outside of the main loop:
   * emscripten_set_main_loop_timing:
   * Cannot set timing mode for main loop since a main loop does not exist!
   * Call emscripten_set_main_loop first to set one up.
   * @see http://tristanpenman.com/blog/posts/2018/01/08/porting-an-asteroids-clone-to-javascript/
   **/
#ifndef __EMSCRIPTEN__
  printf("SDL_GL_SetSwapInterval ...\n");

  // Use Vsync
  if (SDL_GL_SetSwapInterval(1) < 0) {
    printf("Warning: Unable to set VSync! SDL Error: %s\n", SDL_GetError());
  }

  SDL_StartTextInput(); // see https://stackoverflow.com/a/41575856/10904212
#endif

  /*// Initialize PNG loading
  int imgFlags = IMG_INIT_PNG;
  if (!(IMG_Init(imgFlags) & imgFlags)) {
    printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
  }*/

  /*printf("Initializing ttf...\n");

  // Initialize SDL_ttf
  if (TTF_Init() == -1) {
    printf("SDL_ttf could not initialize! SDL_ttf Error: %s\n", TTF_GetError());
  }

  ttfFont = TTF_OpenFont("./resources/fonts/FreeSans.ttf", 30);
  if (ttfFont == nullptr) {
    printf("Failed to load lazy font! SDL_ttf Error: %s\n", TTF_GetError());
  }*/

  printf("Initializing opengl subsystem...\n");

  InitGL();
#endif // ENABLE_OPENGL

  onResize(DRAW_SURFACE_WIDTH, DRAW_SURFACE_HEIGHT);

  printf("creating tests thread...\n");
#ifdef ENABLE_BASE
  printf("tests thread started...\n");
  main_browser_thread_.task_runner()->PostTask(
      FROM_HERE, base::Bind([](base::WaitableEvent* thread_event) {
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
            DCHECK(base::MessageLoopCurrent::Get());
#endif
          printf("Main thread works...\n");
          thread_event->Signal();
      }, &main_thread_event_));
  printf("Waiting for tests thread...\n");
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
  main_thread_event_.Wait();
#endif
  main_thread_event_.Reset();
#endif // ENABLE_BASE

if(!render_browser_window) {
  #if defined(ENABLE_SKIA)
    printf("Starting SKIA tests...\n");

    std::cout << std::endl; // flush

    #ifdef ENABLE_BASE
    base::WaitableEvent ui_sync_event(base::WaitableEvent::ResetPolicy::MANUAL,
                              base::WaitableEvent::InitialState::NOT_SIGNALED);
    #endif // ENABLE_BASE

    #if defined(ENABLE_BLINK_UI) //&& defined(__TODO__)

    #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
      //base::Thread ui_thread("render");
            //blink::ThreadCreationParams params(blink::WebThreadType::kMainThread);

    //#if DCHECK_IS_ON() && defined(ENABLE_WTF)
    //  WTF::WillCreateThread();
    //#endif

          //params.thread_priority = base::ThreadPriority::DISPLAY;
    /// TODO: UpdateThreadTLSAndWait
    //blink::Thread::CreateAndSetCompositorThread();
        //std::unique_ptr<blink::Thread> ui_thread = blink::Thread::CreateThread(params);
    //blink::Thread* ui_thread = blink::Thread::CompositorThread();


    //base::Thread::Options ui_thread_options;
    //options.message_loop_type = base::MessageLoop::TYPE_IO;
    //ui_thread.StartWithOptions(ui_thread_options);
    //ui_thread->Start();

    //base::SingleThreadTaskRunner*
    //scoped_refptr<base::SingleThreadTaskRunner> task_runner =
    //    //ui_thread->GetTaskRunner().get();
    //    blink::Thread::MainThread()->GetTaskRunner();
    //DCHECK(task_runner);
    //DCHECK(ui_thread.task_runner());
  #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
    //ui_thread.WaitUntilThreadStarted();
  #endif
    /// \note StaticBitmapImage::Create & SkImage::MakeFromBitmap require parent thread (TLS)
    //ui_thread.task_runner()
    //blink::Thread* uithread = ui_thread.get();
    //task_runner->PostTask(

  #if defined(SEPARATE_UI_THREAD)
    DCHECK(ui_draw_thread_.IsRunning());
    ui_draw_thread_.task_runner()->PostTask(
    //main_browser_thread_.task_runner()->PostTask(
  #else
    DCHECK(main_browser_thread_.IsRunning());
    main_browser_thread_.task_runner()->PostTask(
  #endif // SEPARATE_UI_THREAD
        FROM_HERE,
        base::BindOnce(
            [](base::WaitableEvent* thread_event) {

                //printf("rendering Draw 1\n");
                //std::cout << std::endl; // flush
  #endif // !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))

  #if defined(SEPARATE_UI_THREAD)
                /*blink::ThreadCreationParams params(blink::WebThreadType::kUnspecifiedWorkerThread);
                std::unique_ptr<blink::Thread> toBlinkThread =
                  blink::Thread::CreateThread(params);*/
                //blink::Thread::CreateAndSetCompositorThread();
#if defined(ENABLE_BLINK_PLATFORM)
                blink::ThreadState::AttachCurrentThread();
#endif // ENABLE_BLINK_PLATFORM

  #endif // SEPARATE_UI_THREAD

                //if(!render_browser_window) {
                  skiaUiDemo.loadUIAssets();
                //}

                // blink::ThreadState::DetachCurrentThread(); // <<< TODO

  #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS)) && defined(ENABLE_BASE)
                thread_event->Signal();
            }, &ui_sync_event));
      ::std::cout << "thread rendering start Wait 1..." << base::Time::Now() << "\n";
      ::std::cout << std::endl; // flush
  #endif
  #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS)) && defined(ENABLE_BASE)
      /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
      ui_sync_event.Wait();
      ui_sync_event.Reset();
  #endif

      ::std::cout << "thread rendering start Wait 2..." << base::Time::Now() << "\n";
      ::std::cout << std::endl; // flush
      //ui_thread->Scheduler()->Shutdown();
      //ui_thread.Stop();
      // blink::Thread's destructor blocks until all the tasks are processed.
      ///ui_thread.reset();

  #endif // ENABLE_UI

  #ifdef ENABLE_CUSTOM_FONTS
    printf("Reading fonts...\n");

    /*char* fileData1 = nullptr;
    long int fsize1;
    int readRes = read_file(fontPath, fileData1, fsize1, true);
    if (readRes != 0) {
      printf("can`t read font %s\n", fontPath);
    }*/

    printf("Initializing fonts...\n");

    /// \note SkData::MakeFromFileName don`t support wasm pthreads,
    /// so we use MakeFromMalloc
    //sk_sp<SkData> data = SkData::MakeFromMalloc(fileData1, fsize1);
    /*sk_sp<SkData> data = SkData::MakeFromFileName(fontPath);
    if (!data) {
      printf("failed SkData::MakeFromMalloc for font %s\n", fontPath);
    }*/

    // TODO: Initialize font data in thread
    /// \note SkTypeface sharable between threads
    printf("Initializing font data...\n");

    // TODO >>>
  //#ifdef ENABLE_COBALT
  //  sk_sp<SkTypeface> fallbackTypeface
  //    = cobalt::renderer::rasterizer::skia::Font::getDefaultTypeface();
  //  DCHECK(fallbackTypeface);
  //  DCHECK(fallbackTypeface->getBounds().isFinite());
  //#endif // ENABLE_COBALT

    printf("Creating fonts...\n");
    //if(!render_browser_window) {
      skiaUiDemo.prepareUIFonts();
    //}

    /// \note SkTypeface::MakeFromFile don`t support wasm pthreads,
    /// so we use MakeFromData
    //const int index = 0;
    //sk_sp<SkTypeface> sktp = SkTypeface::MakeFromFile("./resources/fonts/FreeSans.ttf");

  //#ifdef ENABLE_HARFBUZZ
    //sktp = SkTypeface::MakeFromData(data, index);
    //if(!sktpUIThread) {
    //  sktpUIThread = SkTypeface::MakeFromData(data, index);
    //}
  /*#else
    /// \note use ::std::move only if data will not be used any more
    sktp = SkTypeface::MakeFromData(::std::move(data), index);
    sktpUIThread = SkTypeface::MakeFromData(::std::move(data), index);
  #endif*/

    //sk_sp<SkTypeface> sktp = SkTypeface::MakeFromStream(new SkMemoryStream(data), index);

    /*DCHECK(sktp);
    skFont1 =
        new SkFont(sktp, FONT_SIZE_F, 1.0f, 0.0f);
    skFont1->setEdging(SkFont::Edging::kAntiAlias);
    DCHECK(sktp);
    skFont2 =
        new SkFont(sktp, 30.0f, 1.5f, 0.0f);
    skFont2->setEdging(SkFont::Edging::kAntiAlias);*/

    //delete[] fileData1;

  #endif // ENABLE_CUSTOM_FONTS

    printf("Initializing skia...\n");

    #ifdef ENABLE_BASE
    #if defined(SEPARATE_UI_THREAD)
      DCHECK(ui_draw_thread_.IsRunning());
      ui_draw_thread_.task_runner()->PostTask(
    #else
      DCHECK(main_browser_thread_.IsRunning());
      main_browser_thread_.task_runner()->PostTask(
    #endif // SEPARATE_UI_THREAD
          FROM_HERE, base::Bind([](base::WaitableEvent* thread_event) {
            //if(!render_browser_window) {
              skiaUiDemo.initUISkiaSurface(DRAW_SURFACE_WIDTH, DRAW_SURFACE_HEIGHT);
            //}

            thread_event->Signal();

          }, &ui_sync_event));
    #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS)) && defined(ENABLE_BASE)
        /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
        ui_sync_event.Wait();
        ui_sync_event.Reset();
    #endif
    #else // ENABLE_BASE
      //if(!render_browser_window) {
        skiaUiDemo.initUISkiaSurface(DRAW_SURFACE_WIDTH, DRAW_SURFACE_HEIGHT);
      //}
    #endif // ENABLE_BASE

  #endif // ENABLE_SKIA
} // render_browser_window

// __EMSCRIPTEN_PTHREADS__ can be used to detect whether Emscripten is currently targeting pthreads.
// At runtime, you can use the emscripten_has_threading_support()
// see https://emscripten.org/docs/porting/pthreads.html
#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__)
  if (!emscripten_has_threading_support()) {
    printf("warning: !emscripten_has_threading_support\n");
  } else {
    printf("emscripten threading has %d cores\n", emscripten_num_logical_cores());
  }
#endif

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  printf("emscripten in singlethreaded mode\n");
#endif

#ifdef ENABLE_COBALT
  printf("Initializing COBALT tests...\n");
  /// \see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/base/init_cobalt.cc
  cobalt::InitCobalt(argc, argv, nullptr);

  printf("Starting COBALT tests...\n");

#ifdef HAS_ICU
  printf("Starting ICU tests...\n");
    //icu::BreakIterator::getAvailableLocales(); // init

    int32_t locales_count;
    const icu::Locale* locales =
        icu::Locale::getAvailableLocales(locales_count);
        //icu::BreakIterator::getAvailableLocales(locales_count);

    printf("locales_count %d\n", locales_count);
    /// \see http://userguide.icu-project.org/locale/examples
    for (int32_t locale = 0; locale < locales_count; locale++) {
      printf("getLanguage %s getName %s getScript %s\n",
        locales[locale].getLanguage(),
        locales[locale].getName(),
        locales[locale].getScript());
    }

    // TODO
    /**/
    listWordBoundaries(
      icu::UnicodeString(u8"string asd asd 1"));
#endif // HAS_ICU

#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS)) \
    && defined(ENABLE_COBALT)//&& defined(__TODO__)
  // Make sure the thread started.

    printf("Creating g_cobaltTester (MT)...\n");
    /// __TODO__
    //g_cobaltTester = std::make_unique<CobaltTester>();

  /// \note we can use PostBlockingTask here only
  /// if parent thread is not browser (WASM) event loop,
  /// but better - use async logic
  //main_browser_thread_.task_runner()->PostBlockingTask(
  main_browser_thread_.task_runner()->PostTask(
      FROM_HERE, base::Bind([](){
          DCHECK(base::MessageLoopCurrent::Get());
          printf("Starting g_cobaltTester 1...\n");
          /// __TODO__
          createCobaltTester();
          printf("Starting g_cobaltTester 2...\n");
          createLayoutManager();
          //g_cobaltTester->run();
          printf("Finishing g_cobaltTester...\n");
          //main_thread_event_->Signal();
      }));

#endif // #if !(OS_EMSCRIPTEN && DISABLE_PTHREADS) && ENABLE_COBALT

// TODO >>>>>>>>>>>>>>>>>>
//    DCHECK(g_cobaltTester);
//    DCHECK_EQ(base::MessageLoopCurrent::Get().task_runner(), g_cobaltTester->self_task_runner_);
//    DCHECK(g_cobaltTester->thread_checker_.CalledOnValidThread());

  //printf("Waiting COBALT tests...\n");
  //// \NOTE: DON`T BLOCK MAIN WASM THREAD
  /// WAITING FOR INFINITE THREAD!
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
  //main_thread_event_.Wait();
#endif // !(OS_EMSCRIPTEN && DISABLE_PTHREADS) && ENABLE_COBALT
  //main_thread_event_.Reset();
#endif // ENABLE_COBALT

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_COBALT) && defined(ENABLE_SKIA)
    using cobalt::renderer::rasterizer::egl::setUpdateWASMPixmapAndFreeDataCb;
    setUpdateWASMPixmapAndFreeDataCb((void*)(updateWASMPixmapAndFreeData));
#endif // OS_EMSCRIPTEN

/// \note emscripten_set_main_loop async, so
/// don`t declare vars above it (or them will be lost)!
/// Use member/static variables!
#ifdef __EMSCRIPTEN__
  printf("running with __EMSCRIPTEN__\n");
  // If using own main loop, must use explicit context swapping (explicitSwapControl and OFFSCREENCANVAS_SUPPORT)
  //emscripten_set_main_loop(mainLockFreeLoop, 60, 1);
  /// \note You should use 0 for the frame rate in emscripten_set_main_loop
  /// in order to use requestAnimationFrame, as that can greatly
  /// improve your frame rates!
  emscripten_set_main_loop(mainLockFreeLoop, 0, 1);
#else
#if defined(ENABLE_OPENGL)
  printf("running with opengl\n");
#else
  printf("running without GL\n");
#endif // ENABLE_OPENGL
  DCHECK(quitApp == false);
  while (!quitApp) {
    mainLockFreeLoop();
  }
  printf("running quit...\n");
#endif

  printf("Running cleanup...\n");

#if defined(ENABLE_SKIA)
  {
#if defined(SEPARATE_UI_THREAD)
    //ui_draw_thread_.task_runner()->WaitForFence();
    ui_draw_thread_.Stop();
#endif // SEPARATE_UI_THREAD
    /// \note stop ui_draw_thread before skia_ui cleanup
    //if(!render_browser_window) {
      skiaUiDemo.cleanup_skia_ui();
    //}
  }

  //if(!render_browser_window) {
    skiaUiDemo.cleanup_gl();
  //}

#endif // ENABLE_SKIA

#if defined(ENABLE_OPENGL)
  GL_CHECK( glDeleteVertexArrays(1, &vertexArrayObject) );

  GL_CHECK( glDeleteBuffers(1, &vertexPosObject) );
#endif // ENABLE_OPENGL

#ifdef __EMSCRIPTEN__
  {
    EMSCRIPTEN_RESULT r = emscripten_webgl_make_context_current(0);
    if( r != EMSCRIPTEN_RESULT_SUCCESS )
    {
      printf( "Unable to make OffscreenCanvas instance the current context (code %d)\n", r );
    }
  }
  {
    EMSCRIPTEN_RESULT r = emscripten_webgl_destroy_context(em_ctx);
    if( r != EMSCRIPTEN_RESULT_SUCCESS )
    {
      printf( "Unable to emscripten_webgl_destroy_context (code %d)\n", r );
    }
  }
#else
#if defined(ENABLE_OPENGL)
  if (glContext) {
    SDL_GL_DeleteContext(glContext);
  }
#endif // ENABLE_OPENGL
#endif

  /*if (ttfFont) {
    TTF_CloseFont(ttfFont);
    ttfFont = nullptr;
  }*/

#if defined(ENABLE_SKIA)
  //if(!render_browser_window) {
    skiaUiDemo.resetAssets();
  //}
#endif

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  //Disable text input
  SDL_StopTextInput();

#if !defined(ENABLE_OPENGL)
  SDL_DestroyRenderer(sdl_ren);
#endif // ENABLE_OPENGL
  SDL_DestroyWindow(window);
  window = nullptr;
#endif

#if defined(ENABLE_SKIA) && defined(ENABLE_CUSTOM_FONTS)
  /*delete skFont1;
  delete skFont2;*/
#endif

  // Quit SDL subsystems
  //TTF_Quit();

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  SDL_Quit();
#endif

  return EXIT_SUCCESS;
}
