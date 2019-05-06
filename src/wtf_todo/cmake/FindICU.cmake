# Finds the International Components for Unicode (ICU) Library
#
#  ICU_FOUND          - True if ICU found.
#  ICU_I18N_FOUND     - True if ICU's internationalization library found.
#  ICU_LIBRARIES      - Libraries to link against for the common ICU

# Look for the library.
FIND_LIBRARY(
  ICU_LIBRARY
  NAMES icucore icuuc cygicuuc cygicuuc32
  PATHS
  /usr/lib64
  /usr/lib
  /usr/local/lib64
  /usr/local/lib
  /sw/lib
  /opt/local/lib
  /lib
  /usr/lib/x86_64-linux-gnu
  DOC "Libraries to link against for the common parts of ICU")
MARK_AS_ADVANCED(ICU_LIBRARY)

# Copy the results to the output variables.
IF (ICU_LIBRARY)
  SET(ICU_FOUND 1)
  SET(ICU_LIBRARIES ${ICU_LIBRARY})

  # Look for the ICU internationalization libraries
  FIND_LIBRARY(
    ICU_I18N_LIBRARY
    NAMES icuin icui18n cygicuin cygicuin32
    DOC "Libraries to link against for ICU internationalization")
  MARK_AS_ADVANCED(ICU_I18N_LIBRARY)

  IF (ICU_I18N_LIBRARY)
    SET(ICU_I18N_FOUND 1)
    SET(ICU_I18N_LIBRARIES ${ICU_I18N_LIBRARY})
  ENDIF ()
ENDIF ()

IF (ICU_FOUND)
  IF (NOT ICU_FIND_QUIETLY)
    MESSAGE(STATUS "Found ICU libraries: ${ICU_LIBRARIES}")
  ENDIF ()
ENDIF ()

