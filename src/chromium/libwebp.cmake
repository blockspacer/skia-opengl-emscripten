### --- libwebp ---###

set(libwebp_DIR
  ${CHROMIUM_DIR}/third_party/libwebp/)

list(APPEND libwebp_SOURCES
  #
  # source_set("libwebp_webp")
  #
  #${libwebp_DIR}src/webp/decode.h",
  #${libwebp_DIR}src/webp/demux.h",
  #${libwebp_DIR}src/webp/encode.h",
  #${libwebp_DIR}src/webp/format_constants.h",
  #${libwebp_DIR}src/webp/mux.h",
  #${libwebp_DIR}src/webp/mux_types.h",
  #${libwebp_DIR}src/webp/types.h",
  #
  # static_library("libwebp_dec")
  #
  ${libwebp_DIR}src/dec/alpha_dec.c
  #${libwebp_DIR}src/dec/alphai_dec.h",
  ${libwebp_DIR}src/dec/buffer_dec.c
  #${libwebp_DIR}src/dec/common_dec.h",
  ${libwebp_DIR}src/dec/frame_dec.c
  ${libwebp_DIR}src/dec/idec_dec.c
  ${libwebp_DIR}src/dec/io_dec.c
  ${libwebp_DIR}src/dec/quant_dec.c
  ${libwebp_DIR}src/dec/tree_dec.c
  ${libwebp_DIR}src/dec/vp8_dec.c
  #${libwebp_DIR}src/dec/vp8_dec.h",
  #${libwebp_DIR}src/dec/vp8i_dec.h",
  ${libwebp_DIR}src/dec/vp8l_dec.c
  #${libwebp_DIR}src/dec/vp8li_dec.h",
  ${libwebp_DIR}src/dec/webp_dec.c
  #${libwebp_DIR}src/dec/webpi_dec.h",
  #
  # static_library("libwebp_demux")
  #
  ${libwebp_DIR}src/demux/demux.c
  #
  # static_library("libwebp_mux")
  #
  ${libwebp_DIR}src/mux/anim_encode.c
  #${libwebp_DIR}src/mux/animi.h
  ${libwebp_DIR}src/mux/muxedit.c
  #${libwebp_DIR}src/mux/muxi.h
  ${libwebp_DIR}src/mux/muxinternal.c
  ${libwebp_DIR}src/mux/muxread.c
  #
  # static_library("libwebp_dsp")
  #
  ${libwebp_DIR}src/dsp/alpha_processing.c
  ## TODO ## ${libwebp_DIR}src/dsp/alpha_processing_mips_dsp_r2.c
  ${libwebp_DIR}src/dsp/cost.c
  ## TODO ## ${libwebp_DIR}src/dsp/cost_mips32.c
  ## TODO ## ${libwebp_DIR}src/dsp/cost_mips_dsp_r2.c
  ${libwebp_DIR}src/dsp/cpu.c
  ${libwebp_DIR}src/dsp/dec.c
  ${libwebp_DIR}src/dsp/dec_clip_tables.c
  ## TODO ## ${libwebp_DIR}src/dsp/dec_mips32.c
  ## TODO ## ${libwebp_DIR}src/dsp/dec_mips_dsp_r2.c
  ## TODO ##  ${libwebp_DIR}src/dsp/dec_msa.c
  #${libwebp_DIR}src/dsp/dsp.h
  ${libwebp_DIR}src/dsp/enc.c
  ## TODO ## ${libwebp_DIR}src/dsp/enc_mips32.c
  ## TODO ## ${libwebp_DIR}src/dsp/enc_mips_dsp_r2.c
  ## TODO ## ${libwebp_DIR}src/dsp/enc_msa.c
  ${libwebp_DIR}src/dsp/filters.c
  ## TODO ## ${libwebp_DIR}src/dsp/filters_mips_dsp_r2.c
  ## TODO ## ${libwebp_DIR}src/dsp/filters_msa.c
  ${libwebp_DIR}src/dsp/lossless.c
  #${libwebp_DIR}src/dsp/lossless.h
  #${libwebp_DIR}src/dsp/lossless_common.h
  ${libwebp_DIR}src/dsp/lossless_enc.c
  ## TODO ## ${libwebp_DIR}src/dsp/lossless_enc_mips32.c
  ## TODO ## ${libwebp_DIR}src/dsp/lossless_enc_mips_dsp_r2.c
  ## TODO ## ${libwebp_DIR}src/dsp/lossless_enc_msa.c
  ## TODO ## ${libwebp_DIR}src/dsp/lossless_mips_dsp_r2.c
  ## TODO ## ${libwebp_DIR}src/dsp/lossless_msa.c
  #${libwebp_DIR}src/dsp/mips_macro.h
  #${libwebp_DIR}src/dsp/msa_macro.h
  #${libwebp_DIR}src/dsp/neon.h
  #${libwebp_DIR}src/dsp/quant.h
  ${libwebp_DIR}src/dsp/rescaler.c
  ## TODO ## ${libwebp_DIR}src/dsp/rescaler_mips32.c
  ## TODO ## ${libwebp_DIR}src/dsp/rescaler_mips_dsp_r2.c
  ## TODO ## ${libwebp_DIR}src/dsp/rescaler_msa.c
  ${libwebp_DIR}src/dsp/ssim.c
  ${libwebp_DIR}src/dsp/upsampling.c
  ## TODO ## ${libwebp_DIR}src/dsp/upsampling_mips_dsp_r2.c
  ## TODO ## ${libwebp_DIR}src/dsp/upsampling_msa.c
  ${libwebp_DIR}src/dsp/yuv.c
  #${libwebp_DIR}src/dsp/yuv.h
  ## TODO ## ${libwebp_DIR}src/dsp/yuv_mips32.c
  ## TODO ## ${libwebp_DIR}src/dsp/yuv_mips_dsp_r2.c
  #
  # static_library("libwebp_dsp_sse41")
  #
  # ${libwebp_DIR}src/dsp/alpha_processing_sse41.c
  # ${libwebp_DIR}src/dsp/common_sse41.h",
  # ${libwebp_DIR}src/dsp/dec_sse41.c
  # ${libwebp_DIR}src/dsp/enc_sse41.c
  # ${libwebp_DIR}src/dsp/lossless_enc_sse41.c
  # ${libwebp_DIR}src/dsp/upsampling_sse41.c
  # ${libwebp_DIR}src/dsp/yuv_sse41.c
  #
)

if(TARGET_LINUX)
  list(APPEND libwebp_SOURCES
    # static_library("libwebp_dsp_sse2")
    #
    ${libwebp_DIR}src/dsp/alpha_processing_sse2.c
    #${libwebp_DIR}src/dsp/common_sse2.h
    ${libwebp_DIR}src/dsp/cost_sse2.c
    ${libwebp_DIR}src/dsp/dec_sse2.c
    ${libwebp_DIR}src/dsp/enc_sse2.c
    ${libwebp_DIR}src/dsp/filters_sse2.c
    ${libwebp_DIR}src/dsp/lossless_enc_sse2.c
    ${libwebp_DIR}src/dsp/lossless_sse2.c
    ${libwebp_DIR}src/dsp/rescaler_sse2.c
    ${libwebp_DIR}src/dsp/ssim_sse2.c
    ${libwebp_DIR}src/dsp/upsampling_sse2.c
    ${libwebp_DIR}src/dsp/yuv_sse2.c
  )
endif()

list(APPEND libwebp_SOURCES
  #
  # static_library("libwebp_dsp_neon")
  #
  #${libwebp_DIR}src/dsp/alpha_processing_neon.c
  #${libwebp_DIR}src/dsp/cost_neon.c
  #${libwebp_DIR}src/dsp/dec_neon.c
  #${libwebp_DIR}src/dsp/enc_neon.c
  #${libwebp_DIR}src/dsp/filters_neon.c
  #${libwebp_DIR}src/dsp/lossless_enc_neon.c
  #${libwebp_DIR}src/dsp/lossless_neon.c
  #${libwebp_DIR}src/dsp/rescaler_neon.c
  #${libwebp_DIR}src/dsp/upsampling_neon.c
  #${libwebp_DIR}src/dsp/yuv_neon.c
  #
  # static_library("libwebp_enc")
  #
  ${libwebp_DIR}src/enc/alpha_enc.c
  ${libwebp_DIR}src/enc/analysis_enc.c
  ${libwebp_DIR}src/enc/backward_references_cost_enc.c
  ${libwebp_DIR}src/enc/backward_references_enc.c
  #${libwebp_DIR}src/enc/backward_references_enc.h",
  ${libwebp_DIR}src/enc/config_enc.c
  ${libwebp_DIR}src/enc/cost_enc.c
  #${libwebp_DIR}src/enc/cost_enc.h",
  ${libwebp_DIR}src/enc/filter_enc.c
  ${libwebp_DIR}src/enc/frame_enc.c
  ${libwebp_DIR}src/enc/histogram_enc.c
  #${libwebp_DIR}src/enc/histogram_enc.h",
  ${libwebp_DIR}src/enc/iterator_enc.c
  ${libwebp_DIR}src/enc/near_lossless_enc.c
  ${libwebp_DIR}src/enc/picture_csp_enc.c
  ${libwebp_DIR}src/enc/picture_enc.c
  ${libwebp_DIR}src/enc/picture_psnr_enc.c
  ${libwebp_DIR}src/enc/picture_rescale_enc.c
  ${libwebp_DIR}src/enc/picture_tools_enc.c
  ${libwebp_DIR}src/enc/predictor_enc.c
  ${libwebp_DIR}src/enc/quant_enc.c
  ${libwebp_DIR}src/enc/syntax_enc.c
  ${libwebp_DIR}src/enc/token_enc.c
  ${libwebp_DIR}src/enc/tree_enc.c
  #${libwebp_DIR}src/enc/vp8i_enc.h",
  ${libwebp_DIR}src/enc/vp8l_enc.c
  #${libwebp_DIR}src/enc/vp8li_enc.h",
  ${libwebp_DIR}src/enc/webp_enc.c
  #
  # static_library("libwebp_utils")
  #
  #${libwebp_DIR}src/utils/bit_reader_inl_utils.h",
  ${libwebp_DIR}src/utils/bit_reader_utils.c
  #${libwebp_DIR}src/utils/bit_reader_utils.h",
  ${libwebp_DIR}src/utils/bit_writer_utils.c
  #${libwebp_DIR}src/utils/bit_writer_utils.h",
  ${libwebp_DIR}src/utils/color_cache_utils.c
  #${libwebp_DIR}src/utils/color_cache_utils.h",
  #${libwebp_DIR}src/utils/endian_inl_utils.h",
  ${libwebp_DIR}src/utils/filters_utils.c
  #${libwebp_DIR}src/utils/filters_utils.h",
  ${libwebp_DIR}src/utils/huffman_encode_utils.c
  #${libwebp_DIR}src/utils/huffman_encode_utils.h",
  ${libwebp_DIR}src/utils/huffman_utils.c
  #${libwebp_DIR}src/utils/huffman_utils.h",
  ${libwebp_DIR}src/utils/quant_levels_dec_utils.c
  #${libwebp_DIR}src/utils/quant_levels_dec_utils.h",
  ${libwebp_DIR}src/utils/quant_levels_utils.c
  #${libwebp_DIR}src/utils/quant_levels_utils.h",
  ${libwebp_DIR}src/utils/random_utils.c
  #${libwebp_DIR}src/utils/random_utils.h",
  ${libwebp_DIR}src/utils/rescaler_utils.c
  #${libwebp_DIR}src/utils/rescaler_utils.h",
  ${libwebp_DIR}src/utils/thread_utils.c
  #${libwebp_DIR}src/utils/thread_utils.h",
  ${libwebp_DIR}src/utils/utils.c
  #${libwebp_DIR}src/utils/utils.h",
)

add_library(libwebp STATIC
  ${libwebp_SOURCES}
)

#if (NOT EMSCRIPTEN)
#  find_package(PNG REQUIRED) # PNG::PNG
#  set(libpng_LIB PNG::PNG)
#  #set(libpng_LIB GLIBPNG)
#endif()

target_link_libraries(libwebp PRIVATE
  #${libpng_LIB}
  # zlib
  ${libZLIB_LIB}
)

set_property(TARGET libwebp PROPERTY CXX_STANDARD 17)

target_include_directories(libwebp PRIVATE
  ${libwebp_DIR}
  ${libwebp_DIR}/imageio
)

target_include_directories(libwebp PUBLIC
  ${libwebp_DIR}/src
)

#target_include_directories(libwebp PUBLIC
#  ${libwebp_DIR}src
#  ${libwebp_DIR}src/include
#)

#target_compile_options(libwebp PRIVATE
#  -Wno-implicit-function-declaration)


if(TARGET_LINUX)
  list(APPEND EXTRA_DEFINES
    WEBP_HAVE_SSE2=1
  )
  list(APPEND EXTRA_OPTIONS
    -msse
    -msse2
    -msse3
  )
endif()

target_compile_definitions(libwebp PRIVATE
  WEBP_EXTERN=extern
  WEBP_NEAR_LOSSLESS=0
  WEBP_DISABLE_STATS=1
  WEBP_REDUCE_SIZE=1
  WEBP_REDUCE_CSP=1 # if (!is_ios)
  #
  # if (current_cpu == "x86" || current_cpu == "x64")
  #
  ${EXTRA_DEFINES}
  #WEBP_HAVE_SSE2=1
  #WEBP_HAVE_SSE41=1
  #-msse4.1 # libwebp_dsp_sse41
  #-msse2 # libwebp_dsp_sse2
  #
  # if (current_cpu == "arm")
  #
  #-mfpu=neon # use_dsp_neon
  #
  # if (current_cpu == "arm64")
  #
  #-frename-registers # use_dsp_neon
)

target_compile_options(libwebp PRIVATE
  -Wno-incompatible-pointer-types
)

target_compile_options(libwebp PUBLIC
  ${EXTRA_OPTIONS}
)
