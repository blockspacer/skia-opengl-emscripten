#include "gl_helpers.h"

#include <string>
#if defined(ENABLE_OPENGL)

void CheckOpenGLError(const char* stmt, const char* fname, int line)
{
    GLenum err = glGetError();
    if (err != GL_NO_ERROR)
    {
        printf("OpenGL error %08x, at %s:%i - for %s\n", err, fname, line, stmt);
    }
}

GLuint LoadShader(GLenum type, const char* shaderSrc) {
  GLuint shader;
  GLint compiled;

  shader = glCreateShader(type);
  GL_CHECK_WITH_MESSAGE((::std::string("failed glCreateShader for") + shaderSrc).c_str());
  if (shader == 0) {
    printf("shader == 0 \n");
    return 0;
  }

  GL_CHECK( glShaderSource(shader, 1, &shaderSrc, nullptr) );
  GL_CHECK( glCompileShader(shader) );
  GL_CHECK( glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled) );
  if (!compiled) {
    GLint infoLen = 0;
    GL_CHECK( glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &infoLen) );
    if (infoLen > 1) {
      char* infoLog = static_cast<char*>(malloc(sizeof(char) * infoLen));
      GL_CHECK( glGetShaderInfoLog(shader, infoLen, nullptr, infoLog) );
      printf("Error compiling shader:\n%s\n", infoLog);
      free(infoLog);
    }
    GL_CHECK( glDeleteShader(shader) );
    return 0;
  }
  return shader;
}

void drawGLTexture(const int texWidth, const int texHeight, const void* texData, const GLuint texID) {
    GL_CHECK( glBindTexture(GL_TEXTURE_2D, texID) );
    GL_CHECK( glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE) );
    GL_CHECK( glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE) );
    GL_CHECK( glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR) );
    GL_CHECK( glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR) );
    GL_CHECK( glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texWidth, texHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, texData) );
}

#endif // ENABLE_OPENGL
