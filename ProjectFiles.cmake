# Project local sources

# Include guard for commands module. Command:
# https://cmake.org/cmake/help/v3.11/command/include_guard.html
include_guard(GLOBAL)

list(APPEND PROJECT_SRC
  src/main.cpp
  src/skia_ui_demo.cc
  src/skia_ui_demo.h
  src/gl_helpers.cc
  src/gl_helpers.h
  src/utils.cc
  src/utils.h
  src/custom_atts.cpp
  src/custom_atts.h
  src/cobalt_common.h
  src/blink_demo.h
  src/components/custom_web_components.cc
  src/components/custom_web_components.h
  src/components/NavigationComponent.cc
  src/components/NavigationComponent.h
  src/custom_controllers.cc
  src/custom_controllers.h
  src/models/scrollbar/BodyModel.cc
  src/models/scrollbar/BodyModel.h
  src/models/scrollbar/ScrollBarModel.cc
  src/models/scrollbar/ScrollBarModel.h
  src/models/scrollbar/ScrollAreaModel.cc
  src/models/scrollbar/ScrollAreaModel.h
  generated/models/all_models.cc
  generated/models/all_models.h
)
#

if(ENABLE_COBALT)
  list(APPEND PROJECT_SRC
    src/render_tree_combiner.cc
    # TODO: group headers into IDE folder
    src/skiafy_icons.h
    # input_box src
    src/extended_html/input_box/block_level_input_box.cc
    src/extended_html/input_box/inline_level_input_box.cc
    src/extended_html/input_box/input_box.cc
    src/extended_html/input_box/input_node.cc
    src/extended_html/input_box/input_box_generator.cc
    src/extended_html/input_box/HTMLInputElement.cc
    src/extended_html/input_box/input_node_ContainerView.cc
    # input_box headers
    src/extended_html/input_box/block_level_input_box.h
    src/extended_html/input_box/inline_level_input_box.h
    src/extended_html/input_box/input_node.h
    src/extended_html/input_box/input_box.h
    src/extended_html/input_box/input_box_generator.h
    src/extended_html/input_box/HTMLInputElement.h
    src/extended_html/input_box/input_node_ContainerView.h
    src/extended_html/input_box/common.h
    # component src
    src/extended_html/component/block_level_component.cc
    src/extended_html/component/inline_level_component.cc
    src/extended_html/component/component.cc
    src/extended_html/component/component_node.cc
    src/extended_html/component/component_generator.cc
    src/extended_html/component/HTMLComponentElement.cc
    src/extended_html/component/component_node_ContainerView.cc
    # component headers
    src/extended_html/component/block_level_component.h
    src/extended_html/component/inline_level_component.h
    src/extended_html/component/component_node.h
    src/extended_html/component/component.h
    src/extended_html/component/component_generator.h
    src/extended_html/component/HTMLComponentElement.h
    src/extended_html/component/component_node_ContainerView.h
    src/extended_html/component/common.h
  )
endif(ENABLE_COBALT)

if(ENABLE_SKOTTIE)
  list(APPEND PROJECT_SRC
    # ${skottie_LIB}
    # https://github.com/klzgrad/naiveproxy/blob/master/src/third_party/skia/modules/skottie/BUILD.gn#L45
    ${SKIA_DIR}/modules/skottie/utils/SkottieUtils.cpp
  )
endif(ENABLE_SKOTTIE)

# TODO - not only EMSCRIPTEN
if(EMSCRIPTEN AND ENABLE_SKIA AND ENABLE_SKIA_UTILS)
  list(APPEND PROJECT_SRC
    # skia effects
    #${SKIA_DIR}/src/c/sk_effects.cpp
    #${SKIA_DIR}/src/effects/Sk1DPathEffect.cpp
    #${SKIA_DIR}/src/effects/Sk2DPathEffect.cpp
    #${SKIA_DIR}/src/effects/SkColorMatrix.cpp
    #${SKIA_DIR}/src/effects/SkColorMatrixFilter.cpp
    #${SKIA_DIR}/src/effects/SkCornerPathEffect.cpp
    #${SKIA_DIR}/src/effects/SkDashPathEffect.cpp
    #${SKIA_DIR}/src/effects/SkDiscretePathEffect.cpp
    #${SKIA_DIR}/src/effects/SkEmbossMask.cpp
    #${SKIA_DIR}/src/effects/SkEmbossMaskFilter.cpp
    #${SKIA_DIR}/src/effects/SkHighContrastFilter.cpp
    #${SKIA_DIR}/src/effects/SkLayerDrawLooper.cpp
    #${SKIA_DIR}/src/effects/SkLumaColorFilter.cpp
    #${SKIA_DIR}/src/effects/SkOpPathEffect.cpp
    #${SKIA_DIR}/src/effects/SkOverdrawColorFilter.cpp
    #${SKIA_DIR}/src/effects/SkPackBits.cpp
    #${SKIA_DIR}/src/effects/SkShaderMaskFilter.cpp
    #${SKIA_DIR}/src/effects/SkTableColorFilter.cpp
    #${SKIA_DIR}/src/effects/SkTableMaskFilter.cpp
    #${SKIA_DIR}/src/effects/SkTrimPathEffect.cpp
    #${SKIA_DIR}/src/shaders/SkPerlinNoiseShader.cpp
    #${SKIA_DIR}/src/shaders/gradients/Sk4fGradientBase.cpp
    #${SKIA_DIR}/src/shaders/gradients/Sk4fLinearGradient.cpp
    #${SKIA_DIR}/src/shaders/gradients/SkGradientShader.cpp
    #${SKIA_DIR}/src/shaders/gradients/SkLinearGradient.cpp
    #${SKIA_DIR}/src/shaders/gradients/SkRadialGradient.cpp
    #${SKIA_DIR}/src/shaders/gradients/SkTwoPointConicalGradient.cpp
    #${SKIA_DIR}/src/shaders/gradients/SkSweepGradient.cpp
    # skia utils (utils.gni)
    ${SKIA_DIR}/src/utils/Sk3D.cpp
    ${SKIA_DIR}/src/utils/SkBase64.cpp
    ${SKIA_DIR}/src/utils/SkFrontBufferedStream.cpp
    ${SKIA_DIR}/src/utils/SkCamera.cpp
    ${SKIA_DIR}/src/utils/SkCanvasStack.cpp
    ${SKIA_DIR}/src/utils/SkCanvasStateUtils.cpp
    ${SKIA_DIR}/src/utils/SkDashPath.cpp
    ${SKIA_DIR}/src/utils/SkEventTracer.cpp
    ${SKIA_DIR}/src/utils/SkFloatToDecimal.cpp
    ${SKIA_DIR}/src/utils/SkInterpolator.cpp
    ${SKIA_DIR}/src/utils/SkJSON.cpp
    ${SKIA_DIR}/src/utils/SkJSONWriter.cpp
    ${SKIA_DIR}/src/utils/SkMatrix22.cpp
    ${SKIA_DIR}/src/utils/SkMultiPictureDocument.cpp
    ${SKIA_DIR}/src/utils/SkNWayCanvas.cpp
    ${SKIA_DIR}/src/utils/SkNullCanvas.cpp
    ${SKIA_DIR}/src/utils/SkOSPath.cpp
    ${SKIA_DIR}/src/utils/SkPaintFilterCanvas.cpp
    ${SKIA_DIR}/src/utils/SkParse.cpp
    ${SKIA_DIR}/src/utils/SkParseColor.cpp
    ${SKIA_DIR}/src/utils/SkParsePath.cpp
    ${SKIA_DIR}/src/utils/SkPatchUtils.cpp
    ${SKIA_DIR}/src/utils/SkPolyUtils.cpp
    ${SKIA_DIR}/src/utils/SkShadowTessellator.cpp
    ${SKIA_DIR}/src/utils/SkShadowUtils.cpp
    ${SKIA_DIR}/src/utils/SkThreadUtils_pthread.cpp
    ${SKIA_DIR}/src/utils/SkThreadUtils_win.cpp
    ${SKIA_DIR}/src/utils/SkWhitelistTypefaces.cpp
    #mac
    #"$_src/utils/mac/SkCreateCGImageRef.cpp",
    #windows
    #"$_src/utils/win/SkAutoCoInitialize.h",
    #"$_src/utils/win/SkAutoCoInitialize.cpp",
    #"$_src/utils/win/SkDWrite.h",
    #"$_src/utils/win/SkDWrite.cpp",
    #"$_src/utils/win/SkDWriteFontFileStream.cpp",
    #"$_src/utils/win/SkDWriteFontFileStream.h",
    #"$_src/utils/win/SkDWriteGeometrySink.cpp",
    #"$_src/utils/win/SkDWriteGeometrySink.h",
    #"$_src/utils/win/SkDWriteNTDDI_VERSION.h",
    #"$_src/utils/win/SkHRESULT.h",
    #"$_src/utils/win/SkHRESULT.cpp",
    #"$_src/utils/win/SkIStream.h",
    #"$_src/utils/win/SkIStream.cpp",
    #"$_src/utils/win/SkTScopedComPtr.h",
    #"$_src/utils/win/SkWGL.h",
    #"$_src/utils/win/SkWGL_win.cpp",
    # effects_imagefilters (effects_imagefilters.gni)
    # https://chromium.googlesource.com/skia/+/master/gn/effects_imagefilters.gni
    #${SKIA_DIR}/src/effects/imagefilters/SkAlphaThresholdFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkArithmeticImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkBlurImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkColorFilterImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkComposeImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkDisplacementMapEffect.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkDropShadowImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkImageSource.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkLightingImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkMagnifierImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkMatrixConvolutionImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkMergeImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkMorphologyImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkOffsetImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkPaintImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkPictureImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkTileImageFilter.cpp
    #${SKIA_DIR}/src/effects/imagefilters/SkXfermodeImageFilter.cpp
  )
endif()
