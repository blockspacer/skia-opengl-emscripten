#pragma once

#include "build/build_config.h"

#if defined(OS_WIN) && !defined(ENABLE_OPENGL)
#error "OS_WIN requires ENABLE_OPENGL"
#endif

#if defined(OS_WIN)
#define GL_GLEXT_PROTOTYPES 1
#define GL_GLES_PROTOTYPES 1

#include "third_party/khronos/GLES2/gl2.h"
#include "third_party/khronos/GLES2/gl2ext.h"

#include "ui/gl/gl_bindings.h"

#include <windows.h>
//#include <GL/gl.h>
//#include <GL/glext.h>
#include <SDL2/SDL_opengl.h>
#include <SDL2/SDL_opengl_glext.h>
//#include <SDL_opengl.h>
//#include <SDL_opengl_glext.h>
#include <GL/glext.h>
#include <GL/wglext.h>

#endif // OS_WIN

#ifdef __EMSCRIPTEN__

/// \todo WEBGL1_SUPPORT

/// \note defined by CMAKE
//#define WEBGL2_SUPPORT 1
//#undef WEBGL2_SUPPORT

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
#include <SDL2/SDL.h>
#if defined(ENABLE_OPENGL)
#include <SDL2/SDL_opengles2.h>
#endif // ENABLE_OPENGL
#include <SDL2/SDL_video.h>
//#include <SDL.h>
//#include <SDL_opengles2.h>
//#include <SDL2/SDL_thread.h>
//#include <SDL2/SDL_syswm.h>
//#include "SDL_opengles2.h"
//#include <SDL_opengles2_gl2.h>
//#include <SDL_opengles2_gl2ext.h>
#endif

#if defined(ENABLE_OPENGL)
#if defined(WEBGL2_SUPPORT)
#include <GLES3/gl3.h>
#else
#include <GLES2/gl2.h>
#endif
#endif // ENABLE_OPENGL

#include <emscripten.h>
#include <emscripten/html5.h>
#include <emscripten/key_codes.h>

#if defined(ENABLE_OPENGL)
// TODO
//#define GL_RGBA8 0x8058
//#include <EGL/egl.h>
//#include <OpenGL/gl.h>
//#include <SDL/SDL_ttf.h>
//#include <SDL2/SDL_image.h>
#include <GL/gl.h>
#include <GL/glext.h>
#endif // ENABLE_OPENGL

#if !defined(EM_IS_MAIN_THREAD)
#define EM_IS_MAIN_THREAD() \
  (emscripten_has_threading_support() ? emscripten_is_main_runtime_thread() : true)
#endif // EM_IS_MAIN_THREAD

#else
#include "SDL2/SDL.h"
#if defined(ENABLE_OPENGL)
//#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>
#include <SDL2/SDL_opengl_glext.h>
#endif // ENABLE_OPENGL
#endif

// __EMSCRIPTEN_PTHREADS__ can be used to detect whether Emscripten is currently targeting pthreads.
// At runtime, you can use the emscripten_has_threading_support()
// see https://emscripten.org/docs/porting/pthreads.html
#if defined(__EMSCRIPTEN__) //&& defined(__EMSCRIPTEN_PTHREADS__)
#include <emscripten/threading.h>
#endif // __EMSCRIPTEN__

#if defined(ENABLE_OPENGL)

void CheckOpenGLError(const char* stmt, const char* fname, int line);

#ifndef NDEBUG
    #warning "CheckOpenGLError enabled"
    #define GL_CHECK_WITH_MESSAGE(msg) do { \
            CheckOpenGLError(msg, __FILE__, __LINE__); \
        } while (0)
    #define GL_CHECK(stmt) do { \
            stmt; \
            GL_CHECK_WITH_MESSAGE(#stmt); \
        } while (0)
#else
    #define GL_CHECK(stmt) stmt
    #define GL_CHECK_WITH_MESSAGE(stmt) (void)(0);
#endif

//int InitGL();

GLuint LoadShader(GLenum type, const char* shaderSrc);

void drawGLTexture(const int texWidth, const int texHeight, const void* texData, const GLuint texID);

#endif // ENABLE_OPENGL
