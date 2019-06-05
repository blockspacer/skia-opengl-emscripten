### --- harfbuzz ---###

# see https://github.com/google/skia/blob/81abc43e6f0b1a789e1bf116820c8ede68d778ab/third_party/harfbuzz/BUILD.gn
set(harfbuzz_SOURCES
 ${harfbuzz_FULL_DIR}src/hb-aat-fdsc-table.hh
 ${harfbuzz_FULL_DIR}src/hb-aat-layout-ankr-table.hh
 ${harfbuzz_FULL_DIR}src/hb-aat-layout-bsln-table.hh
 ${harfbuzz_FULL_DIR}src/hb-aat-layout-feat-table.hh
 ${harfbuzz_FULL_DIR}src/hb-aat-layout-kerx-table.hh
 ${harfbuzz_FULL_DIR}src/hb-aat-layout-morx-table.hh
 ${harfbuzz_FULL_DIR}src/hb-aat-layout-trak-table.hh
 ${harfbuzz_FULL_DIR}src/hb-aat-layout.cc
 ${harfbuzz_FULL_DIR}src/hb-aat-ltag-table.hh
 ${harfbuzz_FULL_DIR}src/hb-aat-map.cc
 ${harfbuzz_FULL_DIR}src/hb-aat-map.hh
 ${harfbuzz_FULL_DIR}src/hb-array.hh
 ${harfbuzz_FULL_DIR}src/hb-atomic.hh
 ${harfbuzz_FULL_DIR}src/hb-blob.cc
 ${harfbuzz_FULL_DIR}src/hb-blob.h
 ${harfbuzz_FULL_DIR}src/hb-blob.hh
 ${harfbuzz_FULL_DIR}src/hb-buffer-deserialize-json.hh
 ${harfbuzz_FULL_DIR}src/hb-buffer-deserialize-text.hh
 ${harfbuzz_FULL_DIR}src/hb-buffer-serialize.cc
 ${harfbuzz_FULL_DIR}src/hb-buffer.cc
 ${harfbuzz_FULL_DIR}src/hb-buffer.h
 ${harfbuzz_FULL_DIR}src/hb-buffer.hh
 ${harfbuzz_FULL_DIR}src/hb-cache.hh
 ${harfbuzz_FULL_DIR}src/hb-cff-interp-common.hh
 ${harfbuzz_FULL_DIR}src/hb-cff-interp-cs-common.hh
 ${harfbuzz_FULL_DIR}src/hb-cff-interp-dict-common.hh
 ${harfbuzz_FULL_DIR}src/hb-cff1-interp-cs.hh
 ${harfbuzz_FULL_DIR}src/hb-cff2-interp-cs.hh
 ${harfbuzz_FULL_DIR}src/hb-common.cc
 ${harfbuzz_FULL_DIR}src/hb-common.h
 ${harfbuzz_FULL_DIR}src/hb-debug.hh
 ${harfbuzz_FULL_DIR}src/hb-deprecated.h
 ${harfbuzz_FULL_DIR}src/hb-dsalgs.hh
 ${harfbuzz_FULL_DIR}src/hb-face.cc
 ${harfbuzz_FULL_DIR}src/hb-face.h
 ${harfbuzz_FULL_DIR}src/hb-face.hh
 ${harfbuzz_FULL_DIR}src/hb-font.cc
 ${harfbuzz_FULL_DIR}src/hb-font.h
 ${harfbuzz_FULL_DIR}src/hb-font.hh
 ${harfbuzz_FULL_DIR}src/hb-icu.cc
 ${harfbuzz_FULL_DIR}src/hb-icu.h
 ${harfbuzz_FULL_DIR}src/hb-map.cc
 ${harfbuzz_FULL_DIR}src/hb-mutex.hh
 ${harfbuzz_FULL_DIR}src/hb-object.hh
 ${harfbuzz_FULL_DIR}src/hb-open-file.hh
 ${harfbuzz_FULL_DIR}src/hb-open-type.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-cff-common.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-cff1-table.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-cff1-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-cff2-table.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-cff2-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-color-cbdt-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-color-colr-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-color-cpal-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-deprecated.h
 ${harfbuzz_FULL_DIR}src/hb-ot-face.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-face.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-font.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-font.h
 ${harfbuzz_FULL_DIR}src/hb-ot-gasp-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-hdmx-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-head-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-hhea-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-hmtx-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-kern-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-layout-base-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-layout-common.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-layout-gdef-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-layout-gpos-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-layout-gsub-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-layout-gsubgpos.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-layout.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-layout.h
 ${harfbuzz_FULL_DIR}src/hb-ot-layout.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-map.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-map.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-math-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-math.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-math.h
 ${harfbuzz_FULL_DIR}src/hb-ot-maxp-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-name-language.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-name-language.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-name-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-name.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-os2-unicode-ranges.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-post-macroman.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-arabic-fallback.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-arabic-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-arabic.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-arabic.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-default.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-hangul.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-hebrew.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-indic-machine.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-indic-table.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-indic.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-indic.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-khmer-machine.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-khmer.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-khmer.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-myanmar-machine.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-myanmar.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-myanmar.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-thai.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-use-machine.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-use-table.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-use.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-use.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-vowel-constraints.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex-vowel-constraints.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-complex.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-fallback.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-fallback.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-normalize.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape-normalize.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-shape.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-shape.h
 ${harfbuzz_FULL_DIR}src/hb-ot-shape.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-tag.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-var-avar-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-var-fvar-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-var-hvar-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-var-mvar-table.hh
 ${harfbuzz_FULL_DIR}src/hb-ot-var.cc
 ${harfbuzz_FULL_DIR}src/hb-ot-var.h
 ${harfbuzz_FULL_DIR}src/hb-ot.h
 ${harfbuzz_FULL_DIR}src/hb-set-digest.hh
 ${harfbuzz_FULL_DIR}src/hb-set.cc
 ${harfbuzz_FULL_DIR}src/hb-set.h
 ${harfbuzz_FULL_DIR}src/hb-set.hh
 ${harfbuzz_FULL_DIR}src/hb-shape-plan.cc
 ${harfbuzz_FULL_DIR}src/hb-shape-plan.h
 ${harfbuzz_FULL_DIR}src/hb-shape-plan.hh
 ${harfbuzz_FULL_DIR}src/hb-shape.cc
 ${harfbuzz_FULL_DIR}src/hb-shape.h
 ${harfbuzz_FULL_DIR}src/hb-shaper-impl.hh
 ${harfbuzz_FULL_DIR}src/hb-shaper-list.hh
 ${harfbuzz_FULL_DIR}src/hb-shaper.cc
 ${harfbuzz_FULL_DIR}src/hb-shaper.hh
 ${harfbuzz_FULL_DIR}src/hb-static.cc
 ${harfbuzz_FULL_DIR}src/hb-string-array.hh
 ${harfbuzz_FULL_DIR}src/hb-subset-cff-common.cc
 ${harfbuzz_FULL_DIR}src/hb-subset-cff-common.hh
 ${harfbuzz_FULL_DIR}src/hb-subset-cff1.cc
 ${harfbuzz_FULL_DIR}src/hb-subset-cff2.cc
 ${harfbuzz_FULL_DIR}src/hb-subset-glyf.cc
 ${harfbuzz_FULL_DIR}src/hb-subset-glyf.hh
 ${harfbuzz_FULL_DIR}src/hb-subset-input.cc
 ${harfbuzz_FULL_DIR}src/hb-subset-plan.cc
 ${harfbuzz_FULL_DIR}src/hb-subset-plan.hh
 ${harfbuzz_FULL_DIR}src/hb-subset.cc
 ${harfbuzz_FULL_DIR}src/hb-subset.h
 ${harfbuzz_FULL_DIR}src/hb-subset.hh
 ${harfbuzz_FULL_DIR}src/hb-unicode-emoji-table.hh
 ${harfbuzz_FULL_DIR}src/hb-unicode.cc
 ${harfbuzz_FULL_DIR}src/hb-unicode.h
 ${harfbuzz_FULL_DIR}src/hb-unicode.hh
 ${harfbuzz_FULL_DIR}src/hb-utf.hh
 ${harfbuzz_FULL_DIR}src/hb-version.h
 ${harfbuzz_FULL_DIR}src/hb-warning.cc
 ${harfbuzz_FULL_DIR}src/hb.h
 ${harfbuzz_FULL_DIR}src/hb.hh
 #
 #if (is_mac) {
 #  sources += [ "../externals/harfbuzz/src/hb-coretext.cc" ]
 #  defines += [ "HAVE_CORETEXT" ]
 #}
)

add_library(harfbuzz STATIC
  ${harfbuzz_SOURCES}
)

set_property(TARGET harfbuzz PROPERTY CXX_STANDARD 17)

# In your source, include files from base/ like normal.
# So if you want to use the string printf API, do:
# #include <base/stringprintf.h>
target_include_directories(harfbuzz PUBLIC
  ${harfbuzz_FULL_DIR}
  ${harfbuzz_FULL_DIR}src
)

target_include_directories(harfbuzz PRIVATE
)

target_link_libraries(harfbuzz PUBLIC
  ${CUSTOM_ICU_LIB}
)

# http://userguide.harfbuzz-project.org/howtouseharfbuzz#TOC-C-With-Your-Own-Build-System
list(APPEND harfbuzz_PUBLIC_DEFINES
  HAVE_ICU=1
  HAVE_ICU_BUILTIN=1
  HAVE_OT=1
)

list(APPEND harfbuzz_PRIVATE_DEFINES
)

target_compile_definitions(harfbuzz PUBLIC
  ${harfbuzz_PUBLIC_DEFINES}
)

target_compile_definitions(harfbuzz PRIVATE
  ${harfbuzz_PRIVATE_DEFINES}
)

target_compile_options(harfbuzz PRIVATE
  -Wno-error
)
