#include "SDL.h"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#include <emscripten/html5.h>
#include "SDL_opengles2.h"
#else
#include <GL/glew.h>
#include <SDL_opengl.h>
#endif

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

GLuint programObject;
int width = 1024;
int height = 768;

SDL_Window *window;
SDL_GLContext context;

//Main loop flag
bool quit = false;

//Event handler
SDL_Event e;

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

#ifdef __EMSCRIPTEN__
  emscripten_set_canvas_size(width, height); // using SDL_SetVideoMode
#endif

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

  Init();

#ifdef __EMSCRIPTEN__
  emscripten_set_main_loop(mainLoop, 0, 1);
#else
  while (!quit)
  {
    mainLoop();
  }
#endif

  SDL_DestroyWindow(window);
  window = NULL;

  //Quit SDL subsystems
  SDL_Quit();
  return 0;
}
