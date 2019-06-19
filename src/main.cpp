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

#if defined(ENABLE_SKIA)
// high quality: anialias, e.t.c.
#define ENABLE_SKIA_HQ 1
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
#define ENABLE_GFX_GEOMETRY 1
#endif

#if defined(ENABLE_GFX_GEOMETRY) && !defined(ENABLE_BASE)
#warning "ENABLE_GFX_GEOMETRY requires BASE"
#undef ENABLE_GFX_GEOMETRY
#endif

#define ENABLE_THREAD_TESTS 1
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

// see https://github.com/save7502/youkyoung/blob/master/Engine/Source/Runtime/OpenGLDrv/Private/HTML5/HTML5OpenGL.cpp#L5
// see https://github.com/emscripten-core/emscripten/issues/6009
#define ENABLE_HTML5_SDL 1

// see https://github.com/emscripten-core/emscripten/pull/8430#issuecomment-486635898
// #define SKIA_GR_CONTEXT 1

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

#define ENABLE_CUSTOM_FONTS 1
#if defined(ENABLE_CUSTOM_FONTS) && !defined(ENABLE_SKIA)
#warning "ENABLE_CUSTOM_FONTS requires SKIA"
#undef ENABLE_CUSTOM_FONTS
#endif
//
/// \note defined by CMAKE
//#define ENABLE_HARFBUZZ 1
#if defined(ENABLE_HARFBUZZ) && !defined(ENABLE_CUSTOM_FONTS)
#warning "ENABLE_HARFBUZZ requires CUSTOM_FONTS"
#undef ENABLE_HARFBUZZ
#endif
//
#define HARFBUZZ_UNICODE 1
#if defined(HARFBUZZ_UNICODE) && !defined(ENABLE_HARFBUZZ)
#warning "HARFBUZZ_UNICODE requires HARFBUZZ"
#undef HARFBUZZ_UNICODE
#endif
//
#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__) \
  && defined(ENABLE_CUSTOM_FONTS)
#warning "TODO: PORT SKIA FONTS & PTHREADS"
#endif

#define ENABLE_SK_EFFECTS 1 // requires ENABLE_CUSTOM_FONTS
#if defined(ENABLE_SK_EFFECTS) && (!defined(ENABLE_SKIA) || !defined(ENABLE_CUSTOM_FONTS))
#warning "ENABLE_SK_EFFECTS requires SKIA and CUSTOM_FONTS"
#undef ENABLE_SK_EFFECTS
#endif

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

/// \note place before glext.h
/// \note defined by CMAKE
// #define GL_GLEXT_PROTOTYPES
//#undef GL_GLEXT_PROTOTYPES

#ifdef __EMSCRIPTEN__

/// \todo WEBGL1_SUPPORT

/// \note defined by CMAKE
//#define WEBGL2_SUPPORT 1
//#undef WEBGL2_SUPPORT

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
//#include <SDL.h>
//#include <SDL_opengles2.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengles2.h>
//#include <SDL2/SDL_thread.h>
//#include <SDL2/SDL_syswm.h>
#include <SDL2/SDL_video.h>
//#include "SDL_opengles2.h"
//#include <SDL_opengles2_gl2.h>
//#include <SDL_opengles2_gl2ext.h>
#endif

#if defined(WEBGL2_SUPPORT)
#include <GLES3/gl3.h>
#else
#include <GLES2/gl2.h>
#endif

#include <emscripten.h>
#include <emscripten/html5.h>
// TODO
//#define GL_RGBA8 0x8058
#include <EGL/egl.h>
#include <GL/gl.h>
//#include <OpenGL/gl.h>
//#include <SDL/SDL_ttf.h>
//#include <SDL2/SDL_image.h>
#include <GL/gl.h>
#include <GL/glext.h>
#else
#include "SDL2/SDL.h"
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <SDL_opengl_glext.h>
#endif

// __EMSCRIPTEN_PTHREADS__ can be used to detect whether Emscripten is currently targeting pthreads.
// At runtime, you can use the emscripten_has_threading_support()
// see https://emscripten.org/docs/porting/pthreads.html
#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__)
#include <emscripten/threading.h>
#endif // __EMSCRIPTEN__

// see https://lyceum-allotments.github.io/2016/06/emscripten-and-sdl-2-tutorial-part-1/
//#include <SDL2/SDL_ttf.h>

#ifdef ENABLE_SKIA
#include <skia/include/core/SkCanvas.h>
#include <skia/include/core/SkFont.h>
#include <skia/include/core/SkGraphics.h>
#include <skia/include/core/SkPictureRecorder.h>
#include <skia/include/core/SkStream.h>
#include <skia/include/core/SkSurface.h>
#include <skia/modules/skottie/include/Skottie.h>
#include <skia/modules/skottie/utils/SkottieUtils.h>
#include <skia/src/core/SkMakeUnique.h>

#include <skia/include/effects/SkGradientShader.h>

#include <skia/src/core/SkOSFile.h>
#include <skia/src/utils/SkOSPath.h>

#include <skia/include/core/SkMaskFilter.h>
#include <skia/include/core/SkTextBlob.h>

#include <skia/include/gpu/gl/GrGLAssembleInterface.h>
#include <skia/include/gpu/gl/GrGLInterface.h>
#include <skia/src/gpu/gl/GrGLUtil.h>

#include <skia/include/core/SkTypeface.h>
#include <skia/include/core/SkTextBlob.h>
#include <skia/include/core/SkStream.h>
#include <skia/include/core/SkDocument.h>

//#include <SkCanvas.h>
//#include <SkColorFilter.h>
//#include <SkColorMatrixFilter.h>
//#include <SkColorPriv.h>
//#include <SkData.h>
//#include <SkDocument.h>
//#include <SkGraphics.h>
//#include <SkImage.h>
//#include <SkImageEncoder.h>
//#include <SkMallocPixelRef.h>
//#include <SkMatrix.h>
//#include <SkPaint.h>
//#include <SkPath.h>
//#include <SkStream.h>
//#include <SkSurface.h>
//#include <SkTypeface.h>
//#include <SkFont.h>
//
//#include "SkBitmap.h"
//#include "SkPixelRef.h"
//#include "SkImageEncoder.h"
//#include "SkImageInfo.h"
//#include "SkColor.h"
//#include "SkColorPriv.h"
//#include "SkColorSpace.h"
//#include "SkHalf.h"
//#include "SkMatrix44.h"
//#include "SkUnPreMultiply.h"
//#include "SkStream.h"
//
#include "skia/include/gpu/GrContext.h"
//
#include "skia/include/gpu/GrTypes.h"
//#include "skia/include/gpu/GrTypesPriv.h"
#include "skia/include/core/SkRefCnt.h"
//
//#include "GrContextPriv.h"
#include "skia/src/gpu/GrGpu.h"
////#include "src/gpu/GrDirectContext.h"
#include "skia/src/gpu/gl/GrGLGpu.h"
//
//#include "GrAHardwareBufferUtils.h"
//#include "GrBackendSurface.h"
//#include "GrCaps.h"
#include "skia/src/gpu/GrContextPriv.h"
#include "skia/src/gpu/GrContextThreadSafeProxyPriv.h"
//#include "GrRecordingContext.h"
//#include "GrRecordingContextPriv.h"
//#include "GrRenderTarget.h"
//#include "GrRenderTargetContextPriv.h"
//#include "GrRenderTargetProxyPriv.h"
//#include "GrTexture.h"
//#include "SkCanvas.h"
//#include "SkDeferredDisplayList.h"
//#include "SkGpuDevice.h"
//#include "SkImagePriv.h"
//#include "SkImage_Base.h"
//#include "SkImage_Gpu.h"
//#include "SkSurfaceCharacterization.h"
//#include "SkSurface_Base.h"
//#include "SkSurface_Gpu.h"
//
//#include "gl/GrGLConfig.h"
//#include "gl/GrGLInterface.h"
//#include "gl/GrGLUtil.h"
//
//#include "src/gpu/gl/GrGLDefines.h"
//
//#include "GrBackendSurface.h"
//#include "GrContext.h"
//#include "GrRenderTargetContext.h"
//#include "SkCanvas.h"
//#include "SkGraphics.h"
//#include "SkRandom.h"
//#include "SkSurface.h"
//#include "SkSurface_Gpu.h"

#endif // ENABLE_SKIA

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
#include <limits>
#include <stdint.h>
#include <utility>
#include <memory>
#include <utility>

#ifdef ENABLE_GFX_GEOMETRY
#include "ui/gfx/geometry/rect.h"
#endif

#ifdef ENABLE_BASE

//#include "base/task/sequence_manager/thread_controller_with_message_pump_impl.h"
#include "base/bind.h"
#include "base/bind_helpers.h"
#include "base/memory/scoped_refptr.h"
#include "base/single_thread_task_runner.h"
#include "base/threading/thread_task_runner_handle.h"

#include "base/numerics/checked_math.h"
#include "base/numerics/clamped_math.h"
#include "base/numerics/safe_conversions.h"

#include "base/stl_util.h"
#include "base/base_switches.h"
#include "base/command_line.h"
#include "base/containers/small_map.h"
#include "base/i18n/icu_util.h"
#include "base/i18n/rtl.h"
#include "base/allocator/partition_allocator/page_allocator.h"

#include "base/memory/scoped_refptr.h"

#include "base/memory/ref_counted_memory.h"
#include "base/memory/read_only_shared_memory_region.h"
#include "base/stl_util.h"
#include "base/bind.h"
#include "base/memory/weak_ptr.h"
//#include "base/test/gtest_util.h"
#include "base/threading/thread.h"

#include "base/synchronization/waitable_event.h"

//#include "base/task/sequence_manager/sequence_manager.h"
#endif

#ifdef ENABLE_WTF
#include "third_party/blink/renderer/platform/wtf/wtf.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/math_extras.h"
#include "third_party/blink/renderer/platform/wtf/text/cstring.h"

#include "third_party/blink/renderer/platform/wtf/text/string_impl.h"


/// @note init allocator before executing any code.
#include "third_party/blink/renderer/platform/wtf/allocator/partitions.h"
//#include "testing/gmock/include/gmock/gmock.h"
//#include "testing/gtest/include/gtest/gtest.h"

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"

#include "third_party/blink/renderer/platform/wtf/dtoa/dtoa.h"

#include "third_party/blink/renderer/platform/wtf/functional.h"
//#include "testing/gtest/include/gtest/gtest.h"
#include "third_party/blink/renderer/platform/wtf/allocator.h"
#include "third_party/blink/renderer/platform/wtf/leak_annotations.h"
#include "third_party/blink/renderer/platform/wtf/ref_counted.h"
//#include "third_party/blink/renderer/platform/wtf/wtf_test_helper.h"

#endif // ENABLE_WTF

#if defined(ENABLE_SKIA) && defined(ENABLE_BLINK)
#define ENABLE_UI 1
#endif

#ifdef ENABLE_UI
#include "base/stl_util.h"
#include "base/strings/utf_string_conversions.h"
#include "ui/gfx/canvas.h"
#include "ui/gfx/font_list.h"
//#include "ui/views/border.h"
//#include "ui/views/controls/button/checkbox.h"
//#include "ui/views/controls/combobox/combobox.h"
//#include "ui/views/controls/label.h"
//#include "ui/views/examples/example_combobox_model.h"
//#include "ui/views/layout/grid_layout.h"
//#include "ui/views/view.h"
#include "base/logging.h"
//#include "ui/compositor/layer.h"
//#include "ui/compositor/layer_delegate.h"
//#include "ui/compositor/layer_owner.h"
//#include "ui/compositor/paint_recorder.h"
#include "ui/gfx/canvas.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/insets_f.h"
#include "ui/gfx/geometry/rect_f.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/nine_image_painter.h"
#include "ui/gfx/scoped_canvas.h"
//#include "ui/views/view.h"
#include "ui/gfx/paint_vector_icon.h"
#include "ui/gfx/scoped_canvas.h"
#include "ui/gfx/vector_icon_types.h"
//static gfx::Canvas gfx_canvas;
#include "third_party/icu/source/common/unicode/uscript.h"
#include "ui/gfx/canvas.h"
#include "ui/gfx/font_list.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/safe_integer_conversions.h"
#include "ui/gfx/geometry/vector2d.h"
#include "ui/gfx/render_text.h"
#include "ui/gfx/shadow_value.h"
#include "ui/gfx/text_elider.h"

#include "ui/gfx/codec/jpeg_codec.h"
#include "ui/gfx/codec/png_codec.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/image/image_skia.h"
#include "ui/gfx/image/image_skia_operations.h"
#include "ui/gfx/image/image_util.h"

#include "base/macros.h"
#include "base/strings/stringprintf.h"
#include "base/strings/utf_string_conversions.h"
#include "cc/paint/paint_flags.h"
#include "ui/gfx/canvas.h"
#include "ui/gfx/color_utils.h"
#include "ui/gfx/skia_paint_util.h"
//#include "ui/views/background.h"
//#include "ui/views/controls/button/label_button.h"
//#include "ui/views/controls/button/radio_button.h"
//#include "ui/views/layout/grid_layout.h"
//#include "ui/views/view.h"

#include "cc/animation/transform_operations.h"

#include <stddef.h>

#include <limits>
#include <vector>

#include "ui/gfx/animation/tween.h"
#include "ui/gfx/geometry/box_f.h"
#include "ui/gfx/geometry/rect_conversions.h"
#include "ui/gfx/geometry/vector3d_f.h"

#include "base/memory/ptr_util.h"
#include "cc/animation/animation_host.h"
#include "cc/animation/animation_id_provider.h"
#include "cc/animation/element_animations.h"
#include "cc/animation/keyframe_effect.h"
#include "cc/animation/keyframed_animation_curve.h"
#include "cc/animation/scroll_offset_animation_curve.h"
#include "cc/animation/single_keyframe_effect_animation.h"
#include "cc/animation/timing_function.h"
#include "cc/animation/transform_operations.h"
#include "cc/base/time_util.h"
#include "cc/layers/layer.h"
//#include "cc/layers/layer_impl.h"

using cc::KeyframeModel;
using cc::AnimationCurve;
using cc::FloatKeyframe;
using cc::KeyframedFloatAnimationCurve;
using cc::KeyframedTransformAnimationCurve;
using cc::TimingFunction;
using cc::TransformKeyframe;

//
//#include "ui/base/l10n/l10n_util.h"
//#include "ui/base/layout.h"
//#include "ui/base/resource/resource_bundle.h"
//#include "ui/gfx/canvas.h"
//#include "ui/gfx/font_list.h"
//#include "ui/gfx/image/image.h"
//#include "ui/gfx/image/image_skia_source.h"
//#include "ui/gfx/scoped_canvas.h"
//#include "ui/gfx/skia_util.h"
//#include "ui/gfx/text_utils.h"
//#include "ui/views/accessibility/view_accessibility.h"
//#include "ui/views/background.h"
//#include "ui/views/controls/button/image_button.h"
//#include "ui/views/controls/button/label_button.h"
//#include "ui/views/controls/button/menu_button.h"
//#include "ui/views/controls/label.h"
//#include "ui/views/controls/menu/menu_config.h"
//#include "ui/views/controls/menu/menu_item_view.h"
//#include "ui/views/controls/menu/menu_model_adapter.h"
//#include "ui/views/controls/menu/menu_runner.h"
//#include "ui/views/controls/menu/menu_scroll_view_container.h"
//#include "ui/views/controls/menu/submenu_view.h"
//#include "ui/views/widget/widget.h"

static ::std::unique_ptr<gfx::ImageSkia> gfxImageSkia;
static sk_sp<SkImage> skImageSp;
#endif // ENABLE_UI

//#if defined(ENABLE_SKIA)
//#define ENABLE_BLINK_PLATFORM 1
//#endif

#ifdef ENABLE_BLINK_PLATFORM

#include <third_party/blink/renderer/platform/runtime_enabled_features.h>

#include "third_party/blink/renderer/platform/graphics/graphics_context.h"

//#include "third_party/blink/renderer/platform/graphics/bitmap_image.h"
#include "third_party/blink/renderer/platform/graphics/paint/paint_canvas.h"
#include "third_party/blink/renderer/platform/graphics/paint/paint_controller.h"
#include "third_party/blink/renderer/platform/graphics/paint/paint_record.h"
#include "third_party/blink/renderer/platform/graphics/path.h"
//#include "third_party/blink/renderer/platform/testing/font_test_helpers.h"
//#include "third_party/blink/renderer/platform/testing/unit_test_helpers.h"
#include "third_party/blink/renderer/platform/text/text_run.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "third_party/skia/include/core/SkCanvas.h"
#include "third_party/skia/include/core/SkShader.h"

//#include "third_party/blink/renderer/core/dom/document.h"
//#include "third_party/blink/renderer/core/frame/local_frame_view.h"
//#include "third_party/blink/renderer/core/html/canvas/html_canvas_element.h"
//#include "third_party/blink/renderer/core/html/canvas/image_data.h"
//#include "third_party/blink/renderer/core/html/html_image_element.h"
//#include "third_party/blink/renderer/core/html/media/html_video_element.h"
//#include "third_party/blink/renderer/core/loader/resource/image_resource_content.h"

//#include "third_party/blink/renderer/core/imagebitmap/image_bitmap.h"

#include "third_party/blink/renderer/platform/graphics/accelerated_static_bitmap_image.h"
//#include "third_party/blink/renderer/platform/graphics/color_correction_test_utils.h"
#include "third_party/blink/renderer/platform/graphics/gpu/shared_gpu_context.h"
#include "third_party/blink/renderer/platform/graphics/skia/skia_utils.h"
#include "third_party/blink/renderer/platform/graphics/static_bitmap_image.h"
//#include "third_party/blink/renderer/platform/graphics/test/fake_gles2_interface.h"
//#include "third_party/blink/renderer/platform/graphics/test/fake_web_graphics_context_3d_provider.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/heap/heap.h"
//#include "third_party/blink/renderer/platform/image-decoders/image_decoder.h"
//#include "third_party/blink/renderer/platform/loader/fetch/memory_cache.h"
//#include "third_party/blink/renderer/platform/loader/fetch/resource_request.h"

#include "third_party/blink/renderer/platform/geometry/float_rect.h"
#include "third_party/blink/renderer/platform/geometry/int_rect.h"
#include "third_party/blink/renderer/platform/geometry/layout_point.h"
#include "third_party/blink/renderer/platform/geometry/layout_rect.h"
#include "third_party/blink/renderer/platform/wtf/allocator.h"
#include "third_party/blink/renderer/platform/wtf/forward.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

#endif // ENABLE_BLINK_PLATFORM

#ifdef ENABLE_HARFBUZZ
#include <hb-ot.h>
#endif // ENABLE_HARFBUZZ

#include "third_party/icu/source/common/unicode/uchar.h"
#include "third_party/icu/source/i18n/unicode/datefmt.h"
#include "third_party/icu/source/i18n/unicode/dtfmtsym.h"
#include "third_party/icu/source/common/unicode/ubrk.h"
#include "third_party/icu/source/common/unicode/uchar.h"
#include "third_party/icu/source/common/unicode/ustring.h"
#include "third_party/icu/source/common/unicode/brkiter.h"

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

static void CheckOpenGLError(const char* stmt, const char* fname, int line)
{
    GLenum err = glGetError();
    if (err != GL_NO_ERROR)
    {
        printf("OpenGL error %08x, at %s:%i - for %s\n", err, fname, line, stmt);
    }
}

#ifndef NDEBUG
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

#include "include/gpu/gl/GrGLAssembleHelpers.h"
#include "include/gpu/gl/GrGLAssembleInterface.h"
#include "src/gpu/gl/GrGLUtil.h"

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

static bool render_browser_window = true;

// must be POT
static int width = 1920;//1024;//512;
// must be POT
static int height = 4096;//1080;//4096;//10000;//1200;//1024;//512;

static int browser_width = width;//1920;
static int browser_height = height;//10000;

/// \note defined by CMAKE
//#ifndef ENABLE_COBALT
//#define ENABLE_COBALT 1
//#endif
//#undef ENABLE_COBALT
#ifdef ENABLE_COBALT
#include "renderer_stub/rasterizer/skgl/software_rasterizer.h"

#include "render_tree_combiner.h"

#include "cobalt/base/message_queue.h"
#include "cobalt/base/event_dispatcher.h"
#include "starboard/event.h"

#include "cobalt/base/init_cobalt.h"

#include "cobalt/web_animations/animation.h"

#include "cobalt/cssom/selector_tree.h"

#include "cobalt/base/version_compatibility.h"
#include "cobalt/css_parser/parser.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/specificity.h"

#include "cobalt/cssom/css_rule_list.h"

#include "cobalt/cssom/css_font_face_rule.h"
#include "cobalt/cssom/css_media_rule.h"
#include "cobalt/cssom/css_rule_style_declaration.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/media_list.h"

#include "cobalt/src/cobalt/loader/decoder.h"

#include "cobalt/dom_parser/html_decoder.h"
#include "base/callback.h"
////#include "base/message_loop.h"
#include "cobalt/dom/attr.h"
#include "cobalt/dom/font_cache.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_stat_tracker.h"
#include "cobalt/dom/element.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/named_node_map.h"

//#include "cobalt/dom/testing/stub_css_parser.h"
//#include "cobalt/dom/testing/stub_script_runner.h"

#include "cobalt/dom/text.h"
#include "cobalt/dom_parser/parser.h"
//#include "cobalt/loader/fetcher_factory.h"

#include "cobalt/css_parser/parser.h"

#include <cmath>
#include <memory>
#include <string>
#include <vector>

#include "base/bind.h"
#include "base/strings/stringprintf.h"
#include "cobalt/cssom/active_pseudo_class.h"
#include "cobalt/cssom/after_pseudo_element.h"
#include "cobalt/cssom/attribute_selector.h"
#include "cobalt/cssom/before_pseudo_element.h"
#include "cobalt/cssom/child_combinator.h"
#include "cobalt/cssom/class_selector.h"
#include "cobalt/cssom/cobalt_ui_nav_focus_transform_function.h"
#include "cobalt/cssom/cobalt_ui_nav_spotlight_transform_function.h"
#include "cobalt/cssom/complex_selector.h"
#include "cobalt/cssom/compound_selector.h"
#include "cobalt/cssom/css_declared_style_data.h"
#include "cobalt/cssom/css_font_face_declaration_data.h"
#include "cobalt/cssom/css_font_face_rule.h"
#include "cobalt/cssom/css_keyframe_rule.h"
#include "cobalt/cssom/css_keyframes_rule.h"
#include "cobalt/cssom/css_rule_list.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/css_style_sheet.h"
#include "cobalt/cssom/descendant_combinator.h"
#include "cobalt/cssom/empty_pseudo_class.h"
#include "cobalt/cssom/filter_function_list_value.h"
#include "cobalt/cssom/focus_pseudo_class.h"
#include "cobalt/cssom/following_sibling_combinator.h"
#include "cobalt/cssom/font_style_value.h"
#include "cobalt/cssom/font_weight_value.h"
#include "cobalt/cssom/hover_pseudo_class.h"
#include "cobalt/cssom/id_selector.h"
#include "cobalt/cssom/integer_value.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/cssom/length_value.h"
#include "cobalt/cssom/linear_gradient_value.h"
#include "cobalt/cssom/local_src_value.h"
#include "cobalt/cssom/map_to_mesh_function.h"
#include "cobalt/cssom/matrix_function.h"
#include "cobalt/cssom/media_list.h"
#include "cobalt/cssom/media_query.h"
#include "cobalt/cssom/next_sibling_combinator.h"
#include "cobalt/cssom/not_pseudo_class.h"
#include "cobalt/cssom/number_value.h"
#include "cobalt/cssom/percentage_value.h"
#include "cobalt/cssom/property_definitions.h"
#include "cobalt/cssom/property_key_list_value.h"
#include "cobalt/cssom/property_list_value.h"
#include "cobalt/cssom/property_value_visitor.h"
#include "cobalt/cssom/radial_gradient_value.h"
#include "cobalt/cssom/rgba_color_value.h"
#include "cobalt/cssom/rotate_function.h"
#include "cobalt/cssom/scale_function.h"
#include "cobalt/cssom/shadow_value.h"
#include "cobalt/cssom/simple_selector.h"
#include "cobalt/cssom/string_value.h"
#include "cobalt/cssom/time_list_value.h"
#include "cobalt/cssom/timing_function.h"
#include "cobalt/cssom/timing_function_list_value.h"
#include "cobalt/cssom/transform_function_list_value.h"
#include "cobalt/cssom/translate_function.h"
#include "cobalt/cssom/type_selector.h"
#include "cobalt/cssom/unicode_range_value.h"
#include "cobalt/cssom/universal_selector.h"
#include "cobalt/cssom/url_src_value.h"
#include "cobalt/cssom/url_value.h"
#include "cobalt/cssom/viewport_size.h"

#include "base/bind.h"
#include "base/callback.h"
#include "base/command_line.h"
#include "base/logging.h"
#include "base/memory/weak_ptr.h"
#include "base/message_loop/message_loop.h"
#include "base/optional.h"
#include "base/strings/stringprintf.h"
#include "base/synchronization/waitable_event.h"
//#include "base/trace_event/trace_event.h"
#include "cobalt/base/c_val.h"
#include "cobalt/base/language.h"
#include "cobalt/base/startup_timer.h"
#include "cobalt/base/tokens.h"
#include "cobalt/base/type_id.h"
//#include "cobalt/browser/splash_screen_cache.h"
//#include "cobalt/browser/stack_size_constants.h"
//#include "cobalt/browser/switches.h"
//#include "cobalt/browser/web_module_stat_tracker.h"
#include "cobalt/css_parser/parser.h"
//#include "cobalt/debug/backend/debug_module.h"
#include "cobalt/dom/blob.h"
#include "cobalt/dom/csp_delegate_factory.h"
#include "cobalt/dom/element.h"
#include "cobalt/dom/event.h"
#include "cobalt/dom/global_stats.h"
#include "cobalt/dom/html_script_element.h"
#include "cobalt/dom/input_event.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/local_storage_database.h"
#include "cobalt/dom/mutation_observer_task_manager.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/storage.h"
#include "cobalt/dom/ui_event.h"
#include "cobalt/dom/url.h"
#include "cobalt/dom/wheel_event.h"
#include "cobalt/dom/window.h"
#include "cobalt/dom_parser/parser.h"
//#include "cobalt/h5vcc/h5vcc.h"
#include "cobalt/layout/topmost_event_target.h"
#include "cobalt/loader/image/animated_image_tracker.h"
//#include "cobalt/media_session/media_session_client.h"
#include "cobalt/page_visibility/visibility_state.h"
#include "cobalt/script/error_report.h"
#include "cobalt/script/javascript_engine.h"
//#include "cobalt/storage/storage_manager.h"
#include "starboard/accessibility.h"
#include "starboard/log.h"


#include <memory>
#include <string>
#include <vector>

#include "base/callback.h"
//#include "base/containers/hash_tables.h"
#include <map>

#include "base/files/file_path.h"
#include "base/message_loop/message_loop.h"
#include "base/synchronization/waitable_event.h"
#include "base/threading/thread.h"
#include "base/threading/thread_checker.h"
//#include "cobalt/accessibility/tts_engine.h"
#include "cobalt/base/address_sanitizer.h"
#include "cobalt/base/source_location.h"
///#include "cobalt/browser/lifecycle_observer.h"
//#include "cobalt/browser/screen_shot_writer.h"
///#include "cobalt/browser/splash_screen_cache.h"
#include "cobalt/css_parser/parser.h"
#include "cobalt/cssom/viewport_size.h"
#include "cobalt/dom/blob.h"
#include "cobalt/dom/csp_delegate.h"
#include "cobalt/dom/dom_settings.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/local_storage_database.h"
#include "cobalt/dom/media_source.h"
#include "cobalt/dom/on_screen_keyboard_bridge.h"
#include "cobalt/dom/pointer_event_init.h"
//#include "cobalt/dom/screenshot_manager.h"
#include "cobalt/dom/wheel_event_init.h"
#include "cobalt/dom/window.h"
#include "cobalt/dom_parser/parser.h"
#include "cobalt/layout/layout_manager.h"
#include "cobalt/loader/fetcher_factory.h"
#include "cobalt/math/size.h"
#include "cobalt/media/can_play_type_handler.h"
#include "cobalt/media/web_media_player_factory.h"
//#include "cobalt/network/network_module.h"
#include "cobalt/render_tree/node.h"
#include "cobalt/render_tree/resource_provider.h"

#include "cobalt/render_tree/brush.h"
#include "cobalt/render_tree/composition_node.h"
#include "cobalt/render_tree/dump_render_tree_to_string.h"
#include "cobalt/render_tree/rect_node.h"

#include "cobalt/script/global_environment.h"
#include "cobalt/script/javascript_engine.h"
#include "cobalt/script/script_runner.h"
#include "cobalt/ui_navigation/nav_item.h"
//#include "cobalt/webdriver/session_driver.h"
#include "url/gurl.h"

#include "base/observer_list.h"
#include "base/synchronization/lock.h"
#include "base/synchronization/waitable_event.h"
#include "base/threading/thread.h"
#include "base/timer/timer.h"
//#include "cobalt/account/account_manager.h"
#include "cobalt/base/accessibility_caption_settings_changed_event.h"
#include "cobalt/base/application_state.h"
//#include "cobalt/base/message_queue.h"
#include "cobalt/base/on_screen_keyboard_blurred_event.h"
#include "cobalt/base/on_screen_keyboard_focused_event.h"
#include "cobalt/base/on_screen_keyboard_hidden_event.h"
#include "cobalt/base/on_screen_keyboard_shown_event.h"
#include "cobalt/base/on_screen_keyboard_suggestions_updated_event.h"
//#include "cobalt/browser/lifecycle_observer.h"
//#include "cobalt/browser/memory_settings/auto_mem.h"
//#include "cobalt/browser/memory_settings/checker.h"
//#include "cobalt/browser/render_tree_combiner.h"
//#include "cobalt/browser/screen_shot_writer.h"
//#include "cobalt/browser/splash_screen.h"
//#include "cobalt/browser/suspend_fuzzer.h"
//#include "cobalt/browser/system_platform_error_handler.h"
//#include "cobalt/browser/url_handler.h"
//#include "cobalt/browser/web_module.h"
#include "cobalt/cssom/viewport_size.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/on_screen_keyboard_bridge.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/wheel_event_init.h"
#include "cobalt/input/input_device_manager.h"
#include "cobalt/layout/layout_manager.h"
#include "cobalt/media/can_play_type_handler.h"
#include "cobalt/media/media_module.h"
//#include "cobalt/network/network_module.h"
//#include "cobalt/overlay_info/qr_code_overlay.h"
#include "cobalt/render_tree/node.h"
#include "cobalt/render_tree/resource_provider.h"
#include "cobalt/render_tree/resource_provider_stub.h"
//#include "cobalt/renderer/renderer_module.h"
//#include "cobalt/script/array_buffer.h"
//#include "cobalt/storage/storage_manager.h"
#include "cobalt/system_window/system_window.h"
//#include "cobalt/webdriver/session_driver.h"
#include "starboard/configuration.h"
#include "starboard/window.h"
#include "url/gurl.h"

#include "cobalt/input/camera_3d.h"

#include "cobalt/dom/event.h"
#include "cobalt/dom/history.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/input_event.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/location.h"
#include "cobalt/dom/media_source.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/mutation_observer_task_manager.h"
#include "cobalt/dom/navigator.h"
#include "cobalt/dom/performance.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/screen.h"
#include "cobalt/dom/screenshot.h"
#include "cobalt/dom/screenshot_manager.h"
#include "cobalt/dom/storage.h"
#include "cobalt/dom/wheel_event.h"
#include "cobalt/dom/window_timers.h"
//#include "cobalt/media_session/media_session_client.h"
#include "cobalt/script/environment_settings.h"
#include "cobalt/script/javascript_engine.h"
//#include "cobalt/speech/speech_synthesis.h"
#include "starboard/file.h"

#include "renderer_stub/renderer_module.h"
#include "renderer_stub/pipeline.h"
#include "renderer_stub/submission.h"
#include "renderer_stub/backend/graphics_system.h"
#include "renderer_stub/backend/graphics_context.h"
#include "renderer_stub/backend/default_graphics_system.h"
#include "renderer_stub/backend/graphics_system_stub.h"

typedef base::Callback<void(const cobalt::layout::LayoutManager::LayoutResults&)>
    OnRenderTreeProducedCallback;
#endif // ENABLE_COBALT

//#if defined(ENABLE_SKIA) && (defined(USE_LIBJPEG) || defined(USE_LIBJPEG_TURBO))
//static SkString fImagePath = SkString("./resources/images/JPEG_example.jpg");
//#elif defined(ENABLE_SKIA)
//static SkString fImagePath = SkString("./resources/images/image.png");
//#endif

static SkString fImagePath = SkString("./resources/images/image.png");

#if defined(ENABLE_SKIA) && defined(ENABLE_SKOTTIE)
static SkString fAnimPath = SkString("./resources/animations/data.json");
// static SkString                           fPath = SkString("./resources/fonts/FreeSans.ttf");
static sk_sp<skottie::Animation> fAnimation;
static skottie::Animation::Builder::Stats fAnimationStats;
static SkSize fWinSize = SkSize::Make(width, height);
static SkMSec fTimeBase = 0;
static bool fShowAnimationInval = false;
static bool fShowAnimationStats = false;
#endif // ENABLE_SKOTTIE

#if defined(ENABLE_SKIA) && defined(ENABLE_CUSTOM_FONTS)
static SkFont* skFont1 = nullptr;
static SkFont* skFont2 = nullptr;
static const float FONT_SIZE_F = 22.0f;
#endif

static base::Thread main_thread_("Main_Thread");
static base::WaitableEvent main_thread_event_;

#ifdef ENABLE_HARFBUZZ
// see https://github.com/sam8dec/skia/blob/master/tools/using_skia_and_harfbuzz.cpp#L140
// see https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/fonts/shaping/harfbuzz_face.cc#L68
struct HBFDel { void operator()(hb_face_t* f) { hb_face_destroy(f); } };
static ::std::unique_ptr<hb_face_t, HBFDel> fHarfBuzzFace;
struct HBFontDel {
    void operator()(hb_font_t* f) { hb_font_destroy(f); }
};
static ::std::unique_ptr<hb_font_t, HBFontDel> fHarfBuzzFont;
static const int FONT_SIZE_SCALE = 512;
//static SkPaint glyph_paint;

/// \note see SkShaper_harfbuzz.cpp if you want shaping in rectangle
/// \see https://github.com/skui-org/skia/blob/f577133e703ea6a81602426aea879857cfd0b2e1/experimental/canvaskit/canvaskit_bindings.cpp#L477
/// \see https://github.com/skui-org/skia/blob/f577133e703ea6a81602426aea879857cfd0b2e1/modules/skshaper/src/SkShaper_harfbuzz.cpp#L888
static bool DrawGlyphs(double current_x, double current_y,
                       SkPaint& glyph_paint, SkFont& sfont,
                       SkCanvas* canvas, hb_buffer_t *hb_buffer) {
    SkTextBlobBuilder textBlobBuilder;
    unsigned len = hb_buffer_get_length (hb_buffer);
    if (len == 0) {
        printf("empty hb_buffer_get_length \n");
        return true;
    }
    hb_glyph_info_t *info = hb_buffer_get_glyph_infos (hb_buffer, NULL);
    hb_glyph_position_t *pos = hb_buffer_get_glyph_positions (hb_buffer, NULL);
    const SkTextBlobBuilder::RunBuffer& runBuffer =
      textBlobBuilder.allocRunPos(sfont, len);

    double x = 0;
    double y = 0;
    for (unsigned int i = 0; i < len; i++)
    {
        runBuffer.glyphs[i] = info[i].codepoint;
        reinterpret_cast<SkPoint*>(runBuffer.pos)[i] = SkPoint::Make(
            x + pos[i].x_offset / FONT_SIZE_SCALE,
            y - pos[i].y_offset / FONT_SIZE_SCALE);
        x += pos[i].x_advance / FONT_SIZE_SCALE;
        y += pos[i].y_advance / FONT_SIZE_SCALE;
    }

    canvas->drawTextBlob(textBlobBuilder.make(), current_x, current_y, glyph_paint);
    return true;
} // end of DrawGlyphs

/*static SkScalar shape(SkTextBlobBuilder* builder,
                         const SkPaint& srcPaint,
                         const char* utf8text,
                         size_t textBytes,
                         SkPoint point) const {
    SkPaint paint(srcPaint);
    //paint.setTextEncoding(SkPaint::kGlyphID_TextEncoding);
    //paint.setTypeface(fTypeface);
    SkASSERT(builder);
    hb_buffer_t* buffer = fBuffer.get();
    hb_buffer_add_utf8(buffer, utf8text, -1, 0, -1);
    hb_buffer_guess_segment_properties(buffer);
    hb_shape(fHarfBuzzFont.get(), buffer, nullptr, 0);
    unsigned len = hb_buffer_get_length(buffer);
    if (len == 0) {
        hb_buffer_clear_contents(buffer);
        return 0;
    }
    hb_glyph_info_t* info = hb_buffer_get_glyph_infos(buffer, NULL);
    hb_glyph_position_t* pos =
        hb_buffer_get_glyph_positions(buffer, NULL);
    auto runBuffer = builder->allocRunTextPos(
        paint, SkToInt(len), SkToInt(textBytes), SkString());
    memcpy(runBuffer.utf8text, utf8text, textBytes);
    double x = point.x();
    double y = point.y();
    double textSizeY = paint.getTextSize() / (double)FONT_SIZE_SCALE;
    double textSizeX = textSizeY * paint.getTextScaleX();
    for (unsigned i = 0; i < len; i++) {
        runBuffer.glyphs[i] = info[i].codepoint;
        runBuffer.clusters[i] = info[i].cluster;
        reinterpret_cast<SkPoint*>(runBuffer.pos)[i] =
            SkPoint::Make(SkDoubleToScalar(x + pos[i].x_offset * textSizeX),
                          SkDoubleToScalar(y - pos[i].y_offset * textSizeY));
        x += pos[i].x_advance * textSizeX;
        y += pos[i].y_advance * textSizeY;
    }
    hb_buffer_clear_contents(buffer);
    return (SkScalar)x;
}*/
#endif // ENABLE_HARFBUZZ

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

#if defined(ENABLE_SKIA)

//static TTF_Font* ttfFont = nullptr;
static sk_sp<SkSurface> sRasterSurface;

class SkPainter;

static SkPainter* myView = nullptr;

static GLuint skia_texture = 0;

// TODO: https://github.com/flutter/engine/blob/master/shell/gpu/gpu_surface_gl.cc
// TODO: https://github.com/vsrinivas/fuchsia/blob/master/garnet/lib/vulkan/tests/vklatency/skia_gpu_painter.cc#L123
#ifdef SKIA_GR_CONTEXT
/// \note In OpenGL mode skia assumes that the correct OpenGL context
/// has been made current to the current thread when Skia calls are made.
/// \see https://skia.org/user/api/skcanvas_creation
// static sk_sp<GrContext> sContext = nullptr;
static GrContext* grContext = nullptr;
// static sk_sp<SkSurface> sSurface = nullptr;
static SkSurface* sSurface = nullptr;
#endif

#endif // ENABLE_SKIA

static GLint uniformTex;

//static GLint uniformRedClrTint;

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
static SDL_Window* window;
#endif

#ifdef __EMSCRIPTEN__
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
#endif

#ifdef __EMSCRIPTEN__
static EMSCRIPTEN_WEBGL_CONTEXT_HANDLE em_ctx;

// @see https://emscripten.org/docs/api_reference/html5.h.html?highlight=emscripten_webgl_create_context#c.EmscriptenWebGLContextAttributes
// @see https://github.com/emscripten-core/emscripten/blob/incoming/system/include/emscripten/html5.h#L440
static EmscriptenWebGLContextAttributes attr;

// @see explicitSwapControl
#if defined(HAVE_SWAP_CONTROL)
static EM_BOOL enableSwapControl = EM_TRUE;
#else
static EM_BOOL enableSwapControl = EM_FALSE;
#endif

// @see enableExtensionsByDefault
static EM_BOOL enableEmscriptenExtensionsByDefault = EM_TRUE;
#else
static SDL_GLContext glContext;
#endif

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
// Event handler
static SDL_Event e;
#endif

// Main loop flag
static bool quitApp = false;

static GLuint vertexPosObject;

static GLuint programObject;

static GLfloat const kVertexData[] = {1.0f, 1.0f,  1.0f, 0.0f, -1.0f, 1.0f,  0.0f, 0.0f,
                                      1.0f, -1.0f, 1.0f, 1.0f, -1.0f, -1.0f, 0.0f, 1.0f};

// TODO https://kapadia.github.io/emscripten/2013/09/13/emscripten-pointers-and-pointers.html
// TODO https://github.com/bakerstu/openmrn/blob/5f6bb8934fe13b2897d5f52ec6b358bd87dd886a/src/utils/FileUtils.cxx#L44
static int read_file(const char* fPath, char*& fileString, long int& fsize, const bool closeString)
{
    if(!strlen(fPath)){
        printf("failed to open file with empty path\n");
        return 1;
    }
    FILE* f = fopen(fPath, "rb");
    if (!f) {
      printf("failed to open file: %s\n", fPath);
      return 1;
    }
    fseek(f, 0, SEEK_END);
    fsize = ftell(f);
    fseek(f, 0, SEEK_SET); /* same as rewind(f); */
    fileString = new char[fsize + 1];
    fread(fileString, 1, fsize, f);
    fclose(f);
    if(closeString)
      fileString[fsize] = 0;
    return 0;
}

static int debugPeriodicCounter = 0;
static int debugPeriod = 1000;
static bool hasLayout = false;

static bool isDebugPeriodReached() {
  DCHECK(debugPeriodicCounter >=0
    && debugPeriodicCounter <= debugPeriod);
  return debugPeriodicCounter == debugPeriod;
  ///return true;
}

static bool incDebugPeriodicCounter() {
  debugPeriodicCounter++;
  if(debugPeriodicCounter >= debugPeriod) {
    debugPeriodicCounter = 0;
  }
}

#if defined(ENABLE_SKIA)
// see https://github.com/flutter/engine/blob/master/shell/gpu/gpu_surface_gl.cc#L125
static void initSkiaSurface(int w, int h) {
#ifdef SKIA_GR_CONTEXT
  {
    auto sInterface =
        emscripten_GrGLMakeNativeInterface(); // sk_sp<const
                                              // GrGLInterface>(GrGLCreateNativeInterface());
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

    printf("create GrContext...\n");

    GrContextOptions options;
    grContext = GrContext::MakeGL(::std::move(sInterface), options).release();
    if (!grContext) {
      printf("failed to create grContext.\n");
    }
    SkASSERT(grContext);

    printf("created GrContext...\n");

    GrGLint bufferID;
    // Wrap the frame buffer object attached to the screen in a Skia render target so Skia can
    // render to it
    GR_GL_GetIntegerv(sInterface.get(), GR_GL_FRAMEBUFFER_BINDING, &bufferID);
    GrGLFramebufferInfo info;
    info.fFBOID = (GrGLuint)bufferID;
    SkColorType colorType;

// TODO: we use em_ctx for now
//#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
//    printf("SDL_GetWindowPixelFormat...\n");
//
//    uint32_t windowFormat = SDL_GetWindowPixelFormat(window);
//    int contextType;
//
//    // TODO: use em_ctx
//    //em_ctx
//    SDL_GL_GetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, &contextType);
//
//    printf("get windowFormat...\n");
//
//    // SkDebugf("%s", SDL_GetPixelFormatName(windowFormat));
//    // TODO: the windowFormat is never any of these?
//    if (SDL_PIXELFORMAT_RGBA8888 == windowFormat) {
//      info.fFormat = GR_GL_RGBA8;
//      colorType = kRGBA_8888_SkColorType;
//    } else {
//      colorType = kBGRA_8888_SkColorType;
//      // TODO: use em_ctx
//      //em_ctx
//      if (SDL_GL_CONTEXT_PROFILE_ES == contextType) {
//        info.fFormat = GR_GL_BGRA8;
//      } else {
//        // We assume the internal format is RGBA8 on desktop GL
//        info.fFormat = GR_GL_RGBA8;
//      }
//    }
//#endif // ENABLE_HTML5_SDL || !__EMSCRIPTEN__

    // TODO: we use em_ctx for now
    info.fFormat = GR_GL_BGRA8; //  TODO
    colorType = kBGRA_8888_SkColorType;

    printf("create GrBackendRenderTarget...\n");

    GrBackendRenderTarget target(width, height, kMsaaSampleCount, kStencilBits, info);

    // setup SkSurface
    // To use distance field text, use commented out SkSurfaceProps instead
    // SkSurfaceProps props(SkSurfaceProps::kUseDeviceIndependentFonts_Flag,
    //                      SkSurfaceProps::kLegacyFontHost_InitType);
    SkSurfaceProps props(SkSurfaceProps::kLegacyFontHost_InitType);

    sk_sp<SkSurface> surface(SkSurface::MakeFromBackendRenderTarget(
        grContext, target, kBottomLeft_GrSurfaceOrigin, colorType, nullptr, &props));
    if (!surface) {
      printf("failed to create surface.\n");
    }
  }
#endif
  // see https://github.com/midasitdev/aliceui/blob/master/example/OpenGLExample/OpenGLExample/main.cpp#L391
  const SkImageInfo info = SkImageInfo::MakeN32(width, height, kPremul_SkAlphaType);
  sRasterSurface = SkSurface::MakeRaster(info);
  if (!sRasterSurface) {
    printf("failed to create raster surface\n");
  }
}

static void cleanup_skia() {
  if (sRasterSurface.get())
    delete sRasterSurface.release();
}

class SkPainter {
public:
  SkPoint m_pos = SkPoint::Make(100, 100);
  SkPoint m_prev = SkPoint::Make(110, 110);
  SkColor m_color = SK_ColorDKGRAY;
  SkScalar m_size = 200;

  void onDraw(SkCanvas* sk_canvas) {
    // TODO: needs SKIA_GR_CONTEXT
    /*if (!canvas->getGrContext()) {
      return;
    }*/

    if (isDebugPeriodReached()) printf("onDraw() 1\n");

    SkPaint paint;

    // paint.setAlpha(255);
#ifdef ENABLE_SKIA_HQ
    paint.setAntiAlias(true);
    paint.setFilterQuality( SkFilterQuality::kMedium_SkFilterQuality );
#else
    paint.setAntiAlias(false);
    paint.setFilterQuality( SkFilterQuality::kNone_SkFilterQuality );
#endif
    paint.setColor(SK_ColorRED);
    /// paint.setColor(0xffeeeeee);
      //printf("onDraw() 2\n");

    paint.setColor(SK_ColorGREEN);
    /*sk_canvas->drawRect({ 1000, 1700, 50, 50 }, paint);

    paint.setColor(SK_ColorBLUE);
    sk_canvas->drawRect({ 500, 700, 300, 500 }, paint);

    paint.setColor(SK_ColorWHITE);
    sk_canvas->drawCircle(m_pos.x(), m_pos.y(), m_size, paint);
      //printf("onDraw() 2.1\n");*/

    //printf("ENABLE_UI 1\n");
#ifdef ENABLE_UI
    //printf("ENABLE_UI 2\n");
    cc::SkiaPaintCanvas paint_canvas(sk_canvas);
    gfx::Canvas gfx_canvas(&paint_canvas, 1.0f);
    /*{
      cc::PaintFlags flags;
      flags.setAntiAlias(true);
      paint.setColor(SK_ColorDKGRAY);
      paint.setStrokeWidth(2);
      gfx_canvas.DrawCircle(gfx::Point(200,200), 100, flags);
      paint.setColor(SK_ColorMAGENTA);
      gfx_canvas.DrawRoundRect(gfx::Rect(550, 550, 200, 200), 50, flags);
    }*/
    {
      // see https://github.com/codebyravi/electron/blob/master/atom/common/api/atom_api_native_image.cc#L115
      //gfx_canvas.DrawImageInt(*imageSkia.get(), 330, 330);
      gfx_canvas.DrawImageInt(gfx::ImageSkia(gfxImageSkia->GetRepresentation(10.0f)), 630, 30);
    }
    {
      cc::PaintFlags flags;
      flags.setShader(
          gfx::CreateGradientShader(0, 500, SK_ColorRED, SK_ColorGREEN));
      flags.setStyle(cc::PaintFlags::kFill_Style);
      flags.setAntiAlias(true);
      gfx_canvas.DrawRoundRect(gfx::Rect(350, 350, 200, 400), 50, flags);
    }
    {
      cc::TransformOperations operations_from;
      operations_from.AppendIdentity();
      cc::TransformOperations operations_to;
      operations_to.AppendIdentity();
      gfx::BoxF box(1.f, 2.f, 3.f);
      gfx::BoxF bounds;
      SkMScalar min_progress = 0.f;
      SkMScalar max_progress = 1.f;
      const bool bres = operations_to.BlendedBoundsForBox(
        box, operations_from, min_progress, max_progress, &bounds);
      // 1 box 0.000000,0.000000,0.000000 1.000000x2.000000x3.000000 bounds 0.000000,0.000000,0.000000 1.000000x2.000000x3.000000
      //printf("%i box %s bounds %s\n", bres, box.ToString().c_str(), bounds.ToString().c_str());
    }
#ifdef ENABLE_HARFBUZZ
    {
      // https://github.com/chromium/chromium/blob/422f901782f0a5f274a6065fbff3983279ef3c0b/chrome/browser/vr/elements/text.cc#L424
      ::std::unique_ptr<gfx::RenderText> render_text_ptr = gfx::RenderText::CreateHarfBuzzInstance();
      gfx::RenderText* render_text = render_text_ptr.get();
      WTF::String render_test_string = String::FromUTF8("r\xC3\xA9sum\xC3\xA9");
      render_text->SetText(render_test_string.Characters16());
      render_text->Draw(&gfx_canvas);
    }
#endif // ENABLE_HARFBUZZ
    {
      //views::Label* zoom_label_;
    }
#endif

#ifdef ENABLE_SK_EFFECTS
    {
      SkColor colors[4] = {SK_ColorCYAN, SK_ColorMAGENTA, SK_ColorYELLOW, SK_ColorCYAN};

      //printf("onDraw() 2.2\n");
      sk_sp<SkShader> shdr = SkGradientShader::MakeSweep(128.0f, 128.0f, colors, nullptr, 4, 0, nullptr);

      //printf("onDraw() 2.3\n");
      paint.setShader(shdr);
      //printf("onDraw() 2.4\n");
    }
#endif
      //printf("onDraw() 3\n");

    // canvas->drawLine(m_pos.x(), m_pos.y(), m_prev.x(), m_prev.y(), paint);

    paint.setColor(SK_ColorBLACK);
    paint.setStyle(SkPaint::kFill_Style);
      //printf("onDraw() 4\n");

#ifdef ENABLE_CUSTOM_FONTS
    // SkFont font;//(nullptr, 24);//SkFont::kA8_MaskType, flags);
    sk_canvas->drawString("1 Skia Test 1 Skia Test 1 Skia Test 1", 60, 32, *skFont1, paint);
    sk_canvas->drawString("2 Skia Test 2 Skia Test 2 Skia Test 2", 20, 97, *skFont2, paint);

// see https://github.com/google/skia/blob/master/modules/skshaper/src/SkShaper_harfbuzz.cpp#L1221
#ifdef ENABLE_HARFBUZZ
        paint.setColor(SK_ColorBLACK);
        paint.setStyle(SkPaint::kFill_Style);

        SkPaint glyph_paint(paint);

        //glyph_paint.setFlags(
        //    SkPaint::kAntiAlias_Flag |
        //    SkPaint::kSubpixelText_Flag);  // ... avoid waggly text when rotating.
        glyph_paint.setColor(SK_ColorBLACK);
        /*paint.setTextEncoding(SkPaint::kGlyphID_TextEncoding);
        paint.setTypeface(sk_ref_sp(font->currentTypeface()));
        glyph_paint.setTextSize(config.font_size->value);
        glyph_paint.setTypeface(face->fSkiaTypeface);
        glyph_paint.setTextEncoding(SkPaint::kGlyphID_TextEncoding);*/

        double current_x = 400.0;
        double current_y = 400.0;
        double line_spacing_ratio = 1.5f;
        double font_size = FONT_SIZE_F;

        auto WriteLine = [this, &current_x, &current_y, &line_spacing_ratio, &font_size, &glyph_paint, &sk_canvas](const char *text) {
            /* Create hb-buffer and populate. */
            hb_buffer_t *hb_buffer = hb_buffer_create ();

            hb_buffer_set_direction(hb_buffer, HB_DIRECTION_LTR);
#ifdef HARFBUZZ_UNICODE
            hb_buffer_set_script(hb_buffer, HB_SCRIPT_CYRILLIC);
            //hb_buffer_set_language(hb_buffer, hb_language_from_string("ru", 2));
            hb_buffer_set_language(hb_buffer, hb_language_from_string("en", 2));
#else
            hb_buffer_set_script(hb_buffer, HB_SCRIPT_LATIN);
            hb_buffer_set_language(hb_buffer, hb_language_from_string("en", 2));
#endif
            //hb_buffer_add_latin1(hb_buffer, text, -1, 0, -1);
            hb_buffer_add_utf8 (hb_buffer, text, -1, 0, -1);

            //hb_buffer_add_utf8 (hb_buffer, text, strlen(text), 0, -1);
            hb_buffer_guess_segment_properties (hb_buffer);
            /* Shape it! */
            hb_shape (fHarfBuzzFont.get(), hb_buffer, NULL, 0);
            unsigned len = hb_buffer_get_length(hb_buffer);
            if (len == 0) {
                printf("empty hb_buffer_get_length\n");
                return;
            }
            DrawGlyphs(current_x, current_y, glyph_paint, *skFont1, sk_canvas, hb_buffer);

            hb_buffer_destroy (hb_buffer);

            // Advance to the next line.
            current_y += line_spacing_ratio * font_size;
            /*if (current_y > config.page_height->value) {
            pdfDocument->endPage();
            NewPage();
        }*/
        };

#ifdef HARFBUZZ_UNICODE
        const char *textLine1 = "harfbuzz_skia_ex1 РУССКИЙ ТЕКСТ";
        const char *textLine2 = "2 РУССКИЙ ТЕКСТ";
        const char *textLine3 = "2 РУССКИЙ ТЕКСТ";
#else
        const char *textLine1 = "harfbuzz_skia_ex1 ENGLISH TEXT";
        const char *textLine2 = "2 ENGLISH TEXT";
        const char *textLine3 = "3 ENGLISH TEXT";
#endif

        WriteLine(textLine1);
        WriteLine(textLine2);
        WriteLine(textLine3);

        // test again without hb
        auto blob3 = SkTextBlob::MakeFromString("blob3blob3blob3", *skFont2);
        sk_canvas->drawTextBlob(blob3.get(), 500, 500, glyph_paint);
#endif // ENABLE_HARFBUZZ

#ifdef ENABLE_SK_EFFECTS
    // see https://skia.org/user/api/skpaint_overview
    {
      const SkScalar sigma = 1.65f;
      const SkScalar xDrop = 2.0f;
      const SkScalar yDrop = 2.0f;
      const SkScalar x = 8.0f;
      const SkScalar y = 52.0f;
      const SkScalar textSize = 48.0f;
      const uint8_t blurAlpha = 127;
      auto blob1 = SkTextBlob::MakeFromString("?123Skia! skFont1", *skFont1);
      auto blob2 = SkTextBlob::MakeFromString("skFont2 !!! skFont2", *skFont2);
      SkPaint blur(paint);
      blur.setAlpha(blurAlpha);
      blur.setMaskFilter(SkMaskFilter::MakeBlur(kNormal_SkBlurStyle, sigma, 0));
      // canvas->drawColor(SK_ColorWHITE);
      sk_canvas->drawTextBlob(blob1.get(), x + xDrop, y + yDrop, blur);
      sk_canvas->drawTextBlob(blob1.get(), x, y, paint);

      sk_canvas->drawTextBlob(blob2.get(), x + xDrop, 50 + y + yDrop, blur);

      SkPaint strokePaint(paint);
      strokePaint.setStyle(SkPaint::kStroke_Style);
      strokePaint.setStrokeWidth(3.0f);
      sk_canvas->drawTextBlob(blob2.get(), x, 80 + y, strokePaint);
    }
#endif // ENABLE_SK_EFFECTS
#endif // ENABLE_CUSTOM_FONTS

      //printf("onDraw() 5\n");

#ifdef ENABLE_SKOTTIE
      //printf("onDraw() 6\n");

    if (fAnimation) {
      //printf("SkAutoCanvasRestore...\n");
      SkAutoCanvasRestore acr(sk_canvas, true);
#ifdef ENABLE_SKIA_HQ
      paint.setAntiAlias(true);
      paint.setFilterQuality( SkFilterQuality::kMedium_SkFilterQuality );
#else
      paint.setAntiAlias(false);
      paint.setFilterQuality( SkFilterQuality::kNone_SkFilterQuality );
#endif
      //printf("SkRect::MakeSize...\n");
      const auto dstR = SkRect::MakeSize(fWinSize);
      //printf("fAnimation->render...\n");
      fAnimation->render(sk_canvas, &dstR);
      //printf("fAnimation->rendered\n");
      /*if (fShowAnimationStats) {
          draw_stats_box(canvas, fAnimationStats);
      }*/
    }
#endif // ENABLE_SKOTTIE

#ifdef ENABLE_BLINK_PLATFORM
  // see https://chromium.googlesource.com/chromium/src/+/master/third_party/blink/renderer/platform/graphics/paint/README.md
  // see https://blog.csdn.net/tornmy/article/details/82593718
  // see https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/graphics/graphics_context_test.cc
  auto paint_controller = ::std::make_unique<blink::PaintController>();
  blink::GraphicsContext context(*paint_controller);
  //
  blink::PaintFlags flags;
  //
  //
#ifdef ENABLE_SKIA_HQ
    flags.setAntiAlias(true);
    flags.setFilterQuality(SkFilterQuality::kMedium_SkFilterQuality);
    context.SetShouldAntialias(true);
    context.SetImageInterpolationQuality(blink::InterpolationQuality::kInterpolationMedium);
#else
    flags.setAntiAlias(false);
    flags.setFilterQuality(SkFilterQuality::kNone_SkFilterQuality);
    context.SetShouldAntialias(false);
    // SetImageInterpolationQuality calls setFilterQuality
    context.SetImageInterpolationQuality(blink::InterpolationQuality::kInterpolationNone);
#endif
  //context.SetMiterLimit(1);
  context.SetStrokeThickness(5);
  context.SetLineCap(blink::kSquareCap);
  context.SetStrokeStyle(blink::kSolidStroke);
  //
  context.BeginRecording(blink::FloatRect(blink::LayoutRect::InfiniteIntRect()));
  //
  //printf("FillRect 1\n");
  context.FillRect(blink::FloatRect(0, 0, 50, 50),
    blink::Color(1.0f, 1.0f, 0.0f, 0.5f),
    SkBlendMode::kSrcOver);
  //printf("FillRect 2\n");
  context.FillRect(blink::FloatRect(40, 40, 150, 550),
    blink::Color(0.0f, 1.0f, 1.0f, 0.5f),
    SkBlendMode::kSrcOver);
  //printf("FillRect 3\n");
  context.DrawOval(blink::FloatRect(40, 40, 150, 550),
    flags);
  //
  //printf("FillRect 4\n");
  // Clip to the left edge of the opaque area.
  context.Clip(blink::IntRect(100, 80, 500, 400));
  //
  // Draw a path that gets clipped. This should destroy the opaque area, but
  // only inside the clip.
  //printf("FillRect 5\n");
  blink::Path path;
  path.MoveTo(blink::FloatPoint(10, 10));
  path.AddLineTo(blink::FloatPoint(40, 40));
  flags.setColor(blink::Color(0.0f, 1.0f, 0.0f, 0.5f).Rgb());
  flags.setBlendMode(SkBlendMode::kSrcOver);
  context.DrawPath(path.GetSkPath(), flags);

  //printf("FillRect 6\n");
  // Make skia unable to compute fast bounds for our paths.
  DashArray dash_array;
  dash_array.push_back(1);
  dash_array.push_back(0);
  context.SetLineDash(dash_array, 0);

  //printf("FillRect 7\n");
  // Make the device opaque in 10,10 40x40.
  context.FillRoundedRect(blink::FloatRoundedRect(400, 400, 600, 600),
    blink::Color(0.0f, 1.0f, 0.5f, 0.5f));

  //printf("FillRect 8\n");
  // The inset shadow case.
  blink::GraphicsContext::Edges clipped_edges = blink::GraphicsContext::kNoEdge;
  context.DrawInnerShadow(blink::FloatRoundedRect(510, 510, 640, 640),
    blink::Color(0.0f, 1.0f, 0.5f, 0.5f),
    blink::FloatSize(10, 10),
    5.0f,
    5.0f,
    clipped_edges);
  //printf("FillRect 9\n");

  base::WeakPtr<blink::WebGraphicsContext3DProviderWrapper> wptr = nullptr;
  scoped_refptr<blink::StaticBitmapImage> bitmap =
      blink::StaticBitmapImage::Create(skImageSp, ::std::move(wptr));
  if (!bitmap || bitmap->IsNull() || !bitmap->IsValid()) {
    printf("Invalid StaticBitmapImage\n");
  }

  //blink::Image* img = blink::ImageBitmap::cr;
  //  CreatePaintImageBuilder()
  //        .set_image(::std::move(image), cc::PaintImage::GetNextContentId())
  //blink::ImageBitmap image_bitmap_no_crop();
  //
  //blink::Image img = gfx::ImageSkia(imageSkia->GetRepresentation(10.0f));

  //printf("FillRect 70\n");

  context.DrawImageTiled(bitmap.get(),
    blink::FloatRect(0, 0, 400, 400),
    blink::FloatRect(0, 0, 1000, 1000),
    blink::FloatSize(1, 1),
    blink::FloatPoint{1.0, 1.0},
    blink::FloatSize(0.0, 0.0),
    SkBlendMode::kSrcOver);

  //printf("FillRect 71\n");
  auto rr = context.EndRecording();
  //printf("FillRect 81\n");
  paint_canvas.drawPicture(rr);

  // Must be called when a painting is finished. Updates the current paint
  // artifact with the new paintings.
  paint_controller->CommitNewDisplayItems();

  //printf("FillRect 91\n");
#endif // ENABLE_BLINK_PLATFORM

      //printf("onDraw() 7\n");
  }

  SkPainter(SkColor color, SkScalar size) : m_color(color), m_size(size) {}
};

#endif // ENABLE_SKIA

static GLuint LoadShader(GLenum type, const char* shaderSrc) {
  GLuint shader;
  GLint compiled;

  shader = glCreateShader(type);
  GL_CHECK_WITH_MESSAGE((::std::string("failed glCreateShader for") + shaderSrc).c_str());
  if (shader == 0) {
    printf("shader == 0 \n");
    return 0;
  }

  GL_CHECK( glShaderSource(shader, 1, &shaderSrc, NULL) );
  GL_CHECK( glCompileShader(shader) );
  GL_CHECK( glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled) );
  if (!compiled) {
    GLint infoLen = 0;
    GL_CHECK( glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &infoLen) );
    if (infoLen > 1) {
      char* infoLog = static_cast<char*>(malloc(sizeof(char) * infoLen));
      GL_CHECK( glGetShaderInfoLog(shader, infoLen, NULL, infoLog) );
      printf("Error compiling shader:\n%s\n", infoLog);
      free(infoLog);
    }
    GL_CHECK( glDeleteShader(shader) );
    return 0;
  }
  return shader;
}




#ifdef ENABLE_COBALT
using namespace cobalt;
using namespace cobalt::dom_parser;
using namespace cobalt::loader;
using namespace cobalt::cssom;
using namespace cobalt::css_parser;
using namespace cobalt::layout;
using namespace cobalt::loader;
using namespace cobalt::dom;
using namespace cobalt::script;
using namespace cobalt::network;
using namespace cobalt::media;
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
    void listWordBoundaries(const icu::UnicodeString& s);


  //private:
  public:
    bool isLoadComplete_ = false;
    cobalt::web_animations::Animation::Data animation;
    base::Optional<base::TimeDelta> local_time;
    scoped_refptr<cobalt::cssom::CSSRuleList> rule_list;
    scoped_refptr<cobalt::cssom::CSSMediaRule> rule;
    cobalt::cssom::SelectorTree selector_tree;
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
  //std::unique_ptr<cobalt::dom_parser::HTMLDecoder> html_decoder_;

  std::unique_ptr<loader::FetcherFactory> fetcher_factory_;

  std::unique_ptr<loader::LoaderFactory> loader_factory_;

  std::unique_ptr<cobalt::dom_parser::Parser> dom_parser_;

  std::unique_ptr<cobalt::css_parser::Parser> css_parser_;

  //dom::testing::StubCSSParser stub_css_parser_;
  //dom::testing::StubScriptRunner stub_script_runner_;
  std::unique_ptr<cobalt::dom::DomStatTracker> dom_stat_tracker_;

  scoped_refptr<render_tree::Node> render_tree_root_;

  scoped_refptr<HTMLElement> html_element_;

  std::unique_ptr<cobalt::dom::HTMLElementContext> html_element_context_;
  //scoped_refptr<cobalt::dom::Document> document_;
  //std::unique_ptr<cobalt::dom::Element> root_;
  //scoped_refptr<cobalt::dom::Element> root_;
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

  // MeshCache that is used to manage mesh cache logic.
  std::unique_ptr<loader::mesh::MeshCache> mesh_cache_;

  // Interface between LocalStorage and the Storage Manager.
  std::unique_ptr<dom::LocalStorageDatabase> local_storage_database_;

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

  // Object to register and retrieve MediaSource object with a string key.
  std::unique_ptr<dom::MediaSource::Registry> media_source_registry_;

  // Object to register and retrieve Blob objects with a string key.
  std::unique_ptr<dom::Blob::Registry> blob_registry_;

  // The Window object wraps all DOM-related components.
  scoped_refptr<dom::Window> window_;
  //dom::Window* window_ = nullptr;

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

  scoped_refptr<cobalt::dom::captions::SystemCaptionSettings>
      system_caption_settings_;

  scoped_refptr<cobalt::input::Camera3D> camera_3d_;

  scoped_refptr<ui_navigation::NavItem> ui_nav_root_;


  // Allows checking if particular media type can be played.
  std::unique_ptr<cobalt::media::CanPlayTypeHandler> can_play_type_handler_;

  dom::DOMSettings::Options dom_settings_options;

  layout::LayoutManager::LayoutTrigger layout_trigger;

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


void CobaltTester::OnWindowClose(base::TimeDelta close_time) {
    printf("OnWindowClose\n");
/*#if defined(ENABLE_DEBUGGER)
    if (input_device_manager_fuzzer_) {
        return;
    }
#endif

    SbSystemRequestStop(0);*/
}

void CobaltTester::OnWindowMinimize() {
    printf("OnWindowMinimize\n");
/*#if defined(ENABLE_DEBUGGER)
    if (input_device_manager_fuzzer_) {
        return;
    }
#endif

    SbSystemRequestSuspend();*/
}

void CobaltTester::OnLoadComplete(const base::Optional<std::string>& error) {
    printf("OnLoadComplete %s\n", error.value_or("no errors").c_str());
    isLoadComplete_ = true;
    //if (error) error_callback_.Run(window_->location()->url(), *error);
}

void CobaltTester::OnCspPolicyChanged() {
    printf("OnCspPolicyChanged\n");

}

// Called by |layout_mananger_| after it runs the animation frame callbacks.
void CobaltTester::OnRanAnimationFrameCallbacks() {
    printf("OnRanAnimationFrameCallbacks\n");

}

// Called by the Renderer on the Renderer thread when it rasterizes a render
// tree with this callback attached. It includes the time the render tree was
// produced.
void CobaltTester::OnRenderTreeRasterized(
    scoped_refptr<base::SingleThreadTaskRunner> web_module_message_loop,
    const base::TimeTicks& produced_time) {
    //printf("OnRenderTreeRasterized\n");


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
    TRACE_EVENT0("cobalt::browser",
                 "BrowserModule::ProcessRenderTreeSubmissionQueue()");
    //DCHECK_EQ(base::MessageLoop::current(), self_message_loop_);
    printf("BrowserProcessRenderTreeSubmissionQueue 1\n");

    render_tree_submission_queue_.ProcessAll();
    printf("BrowserProcessRenderTreeSubmissionQueue 2\n");
}

renderer::Submission CobaltTester::CreateSubmissionFromLayoutResults(
    const cobalt::layout::LayoutManager::LayoutResults& layout_results) {
        printf("CreateSubmissionFromLayoutResults 1\n");
    renderer::Submission renderer_submission(layout_results.render_tree,
                                             layout_results.layout_time);
    if (!layout_results.on_rasterized_callback.is_null()) {
        renderer_submission.on_rasterized_callbacks.push_back(
            layout_results.on_rasterized_callback);
    }
    return renderer_submission;
}

void CobaltTester::OnRendererSubmissionRasterized() {
        //printf("OnRendererSubmissionRasterized 1\n");
    TRACE_EVENT0("cobalt::browser",
                 "BrowserModule::OnRendererSubmissionRasterized()");
    //if (!is_rendered_) {
    //    // Hide the system splash screen when the first render has completed.
    //    is_rendered_ = true;
    //    SbSystemHideSplashScreen();
    //}
}

static render_tree::animations::AnimateNode::AnimateResults animateResults;

void CobaltTester::SubmitCurrentRenderTreeToRenderer() {
    //printf("SubmitCurrentRenderTreeToRenderer 1\n");
    if (!renderer_module_) {
        return;
    }
    //printf("SubmitCurrentRenderTreeToRenderer 2\n");

    base::Optional<renderer::Submission> submission =
        render_tree_combiner_.GetCurrentSubmission();
    if (submission) {
        //printf("SubmitCurrentRenderTreeToRenderer 2.1\n");

        renderer_module_->pipeline()->Submit(*submission);
        {
            /// __TODO__
            printf("SubmitCurrentRenderTreeToRenderer OnDumpCurrentRenderTree\n");
            renderer_module_->pipeline()->OnDumpCurrentRenderTree("");
        }
        //printf("SubmitCurrentRenderTreeToRenderer 2.2\n");
    }
    //printf("SubmitCurrentRenderTreeToRenderer 2\n");
}

void CobaltTester::OnBrowserRenderTreeProduced(
    int main_web_module_generation,
    //const browser::WebModule::LayoutResults& layout_results) {
    const cobalt::layout::LayoutManager::LayoutResults& layout_results) {
    printf("OnBrowserRenderTreeProduced 1\n");

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

    renderer_submission.on_rasterized_callbacks.push_back(base::Bind(
        &CobaltTester::OnRendererSubmissionRasterized,
        base::Unretained(this)));

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
        printf("QueueOnRenderTreeProduced 1\n");
    TRACE_EVENT0("cobalt::browser", "BrowserModule::QueueOnRenderTreeProduced()");
    render_tree_submission_queue_.AddMessage(
        base::Bind(&CobaltTester::OnBrowserRenderTreeProduced,
                   base::Unretained(this),
                   main_web_module_generation, layout_results));
    //self_message_loop_->task_runner()->PostTask(

    base::MessageLoopCurrent::Get()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&CobaltTester::BrowserProcessRenderTreeSubmissionQueue,
                   base::Unretained(this)));
    //base::Bind BrowserProcessRenderTreeSubmissionQueue();
}

// Called by |layout_mananger_| when it produces a render tree. May modify
// the render tree (e.g. to add a debug overlay), then runs the callback
// specified in the constructor, |render_tree_produced_callback_|.
void CobaltTester::OnRenderTreeProduced(const cobalt::layout::LayoutManager::LayoutResults& layout_results) {
    printf("OnRenderTreeProduced\n");
    /// \see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/browser/browser_module.cc#L736
    auto last_render_tree_produced_time_ = base::TimeTicks::Now();
    cobalt::layout::LayoutManager::LayoutResults layout_results_with_callback(
        layout_results.render_tree, layout_results.layout_time,
        base::Bind(&CobaltTester::OnRenderTreeRasterized,
                   base::Unretained(this),
                   base::MessageLoopCurrent::Get()->task_runner(),
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
    printf("OnStartDispatchEvent %s\n", event->type().c_str());
    /*if (!on_start_dispatch_event_callback_.is_null()) {
        on_start_dispatch_event_callback_.Run(event);
    }*/
}

void CobaltTester::OnStopDispatchEvent(const scoped_refptr<dom::Event>& event) {
    printf("OnStopDispatchEvent %s\n", event->type().c_str());
    /*if (!on_stop_dispatch_event_callback_.is_null()) {
        on_stop_dispatch_event_callback_.Run(event);
    }*/
}

void CobaltTester::HandlePointerEvents() {
    //printf("HandlePointerEvents\n");
}

// Called when the WebModule's Window.onload event is fired.
void CobaltTester::OnLoad() {
    printf("HandlePointerEvents\n");

    // see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/browser/browser_module.cc#L625
}

static const icu::Locale *t_icu_locale;

// __TODO__
static void listWordBoundaries(const icu::UnicodeString& s) {
        printf("listWordBoundaries 1\n");
        printf("icu::Locale::getUS() %s, %s\n", icu::Locale::getUS().getLanguage(), icu::Locale::getUS().getName());

        printf("listWordBoundaries 2\n");

    /*if(!t_icu_locale) {
      const char* lang = "C";//;"en_US";
      t_icu_locale = new icu::Locale(lang, NULL, NULL, NULL);
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

CobaltTester::CobaltTester()
//network_module_(&storage_manager_, event_dispatcher_,
//        options_.network_module_options),
//    splash_screen_cache_(new SplashScreenCache()),
//loader_factory_
//  (&fetcher_factory_, NULL ,
//                    base::ThreadPriority::NORMAL),
{
  // see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/browser/browser_module.cc#L578
  // see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/browser/web_module.cc

  //camera_3d_ = new Camera3D(camera_3d_); // TODO: CreatedDefaultCamera3D
///#if defined(ENABLE_COBALT_RENDERER_STUB)
///#else
///  resource_provider_ = new render_tree::ResourceProviderStub();
///#endif

  //graphics_system_ = backend::CreateDefaultGraphicsSystem();
  //graphics_context_ = graphics_system_->CreateGraphicsContext();

  //std::unique_ptr<GraphicsSystem> gs(new GraphicsSystemStub());
  //auto gc = gs->CreateGraphicsContext();
  //gc->

  // Create the rasterizer using the platform default RenderModule options.
  RendererModule::Options render_module_options;
  render_module_options.enable_fps_stdout = false;
  render_module_options.enable_fps_overlay = false;
#if !(defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__))
  render_module_options.submit_even_if_render_tree_is_unchanged = true;
#else
  /// __TODO__
  ///render_module_options.submit_even_if_render_tree_is_unchanged = false;
  render_module_options.submit_even_if_render_tree_is_unchanged = true;
#endif

  /// \todo https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/renderer/renderer_module_default_options.cc
  //render_module_options.create_rasterizer_function = ;

  //rasterizer_ = render_module_options.create_rasterizer_function.Run(
  //    graphics_context_.get(), render_module_options);

  base::Optional<math::Size> maybe_size;
  /*if (options_.requested_viewport_size) {
      maybe_size = options_.requested_viewport_size->width_height();
  }*/
  maybe_size = math::Size(browser_width, browser_height);
  system_window_.reset(
      new system_window::SystemWindow(&event_dispatcher_, maybe_size));

  // Create the main web module layer.
  main_web_module_layer_ =
      render_tree_combiner_.CreateLayer(kMainWebModuleZIndex);

  // see RendererModuleWithCameraOptions
  render_module_options.get_camera_transform = base::Bind(
      &input::Camera3D::GetCameraTransformAndUpdateOrientation, camera_3d_);

  DCHECK(system_window_);

  printf("main system_window_->GetWindowSize().ToString().c_str() %s\n",
    system_window_->GetWindowSize().ToString().c_str());

  renderer_module_.reset(new renderer::RendererModule(
      system_window_.get(),
      render_module_options));
      /*RendererModuleWithCameraOptions(render_module_options,
                                      //input_device_manager_->camera_3d()
                                      camera_3d_
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

      return NULL;
    }

    return renderer_module_->resource_provider();
   */
  DCHECK(resource_provider_);

  loaded_callbacks.push_back(
      //base::Bind(&BrowserModule::OnLoad, base::Unretained(this)));
      base::Bind(&CobaltTester::OnLoad,
                 base::Unretained(this)));

   dom::OnScreenKeyboardBridge* on_screen_keyboard_bridge = NULL;

  //CSSParserObserver parser_observer_;
  cobalt::css_parser::Parser::SupportsMapToMeshFlag supports_map_to_mesh =
    cobalt::css_parser::Parser::SupportsMapToMeshFlag::kDoesNotSupportMapToMesh;
  /*cobalt::css_parser::Parser parser_(base::Bind(&CSSParserObserver::OnWarning,
                         base::Unretained(&parser_observer_)),
              base::Bind(&CSSParserObserver::OnError,
                         base::Unretained(&parser_observer_)),
              cobalt::css_parser::Parser::MessageVerbosity::kShort, supports_map_to_mesh);
  */
  css_parser_ = cobalt::css_parser::Parser::Create(supports_map_to_mesh);

  dom_parser_.reset(new cobalt::dom_parser::Parser());
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
    base::FilePath(R"raw()raw"),//base::FilePath("resources/html"), // extra_web_file_dir
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


  /*std::unique_ptr<CanPlayTypeHandler> can_play_type_handler_ = cobalt::media::MediaModule::CreateCanPlayTypeHandler();*/

  can_play_type_handler_ = cobalt::media::MediaModule::CreateCanPlayTypeHandler();

  media_source_registry_.reset(new dom::MediaSource::Registry);

  animated_image_tracker_.reset(new loader::image::AnimatedImageTracker(
      base::ThreadPriority::BACKGROUND));

  /*source_location_.reset(
  new base::SourceLocation("[object HTMLDecoderTest]", 1, 1));*/

  loader_factory_.reset(
      new loader::LoaderFactory(fetcher_factory_.get(), resource_provider_,
                                /*data.options.loader_thread_priority*/ base::ThreadPriority::NORMAL));

  //DCHECK_LE(0, data.options.image_cache_capacity);
  image_cache_ = loader::image::CreateImageCache(
      base::StringPrintf("%s.ImageCache", "name_.c_str()"),
      static_cast<uint32>(32 * 1024 * 1024),
      loader_factory_.get());
  DCHECK(image_cache_);

  reduced_image_cache_capacity_manager_.reset(
      new loader::image::ReducedCacheCapacityManager(
          image_cache_.get(),
          1.0f));

  //DCHECK_LE(0, data.options.remote_typeface_cache_capacity);
  remote_typeface_cache_ = loader::font::CreateRemoteTypefaceCache(
      base::StringPrintf("%s.RemoteTypefaceCache", "name_.c_str()"),
      static_cast<uint32>(4 * 1024 * 1024/*data.options.remote_typeface_cache_capacity*/),
      loader_factory_.get());
  DCHECK(remote_typeface_cache_);

  ///remote_typeface_cache_.get()->CreateCachedResource()

  //DCHECK_LE(0, data.options.mesh_cache_capacity);
  mesh_cache_ = loader::mesh::CreateMeshCache(
      base::StringPrintf("%s.MeshCache", "name_.c_str()"),
      static_cast<uint32>(1024/*data.options.mesh_cache_capacity*/),
      loader_factory_.get());
  DCHECK(mesh_cache_);

  /*
      loader::FetcherFactory* fetcher_factory,
      loader::LoaderFactory* loader_factory, cssom::CSSParser* css_parser,
      Parser* dom_parser, media::CanPlayTypeHandler* can_play_type_handler,
      media::WebMediaPlayerFactory* web_media_player_factory,
      script::ScriptRunner* script_runner,
      script::ScriptValueFactory* script_value_factory,
      MediaSourceRegistry* media_source_registry,
      render_tree::ResourceProvider** resource_provider,
      loader::image::AnimatedImageTracker* animated_image_tracker,
      loader::image::ImageCache* image_cache,
      loader::image::ReducedCacheCapacityManager*
          reduced_image_cache_capacity_manager,
      loader::font::RemoteTypefaceCache* remote_typeface_cache,
      loader::mesh::MeshCache* mesh_cache, DomStatTracker* dom_stat_tracker,
      const std::string& font_language_script,
      base::ApplicationState initial_application_state,
      base::WaitableEvent* synchronous_loader_interrupt,
      float video_playback_rate_multiplier = 1.0);
   */
   P_LOG("Create html_element_context_...\n");
   html_element_context_.reset(new cobalt::dom::HTMLElementContext(
        //&fetcher_factory_, &loader_factory_, &stub_css_parser_,
        fetcher_factory_.get(), loader_factory_.get(), css_parser_.get(),
        dom_parser_.get(), can_play_type_handler_.get() ,
        //NULL , &stub_script_runner_,
        NULL , script_runner_.get(),
        NULL , media_source_registry_.get(), &resource_provider_,
        animated_image_tracker_.get(), image_cache_.get(),
        reduced_image_cache_capacity_manager_.get(), remote_typeface_cache_.get(),
        mesh_cache_.get(), dom_stat_tracker_.get(),
        "en_US", //"font_language_script",
        base::kApplicationStateStarted,
        &synchronous_loader_interrupt_));

  local_storage_database_.reset(
      //new dom::LocalStorageDatabase(data.network_module->storage_manager()));
      new dom::LocalStorageDatabase(nullptr));
  DCHECK(local_storage_database_);

  /*web_module_stat_tracker_.reset(
      new browser::WebModuleStatTracker(name_, data.options.track_event_stats));
  DCHECK(web_module_stat_tracker_);*/

  //media_session_client_ = media_session::MediaSessionClient::Create();

  system_caption_settings_ = new cobalt::dom::captions::SystemCaptionSettings();

  dom::Window::CacheCallback splash_screen_cache_callback;// =
      //CacheUrlContentCallback(data.options.splash_screen_cache);

  // These members will reference other |Traceable|s, however are not
  // accessible from |Window|, so we must explicitly add them as roots.
  global_environment_->AddRoot(&mutation_observer_task_manager_);
  global_environment_->AddRoot(media_source_registry_.get());
  global_environment_->AddRoot(blob_registry_.get());

  P_LOG("Create ui_nav_root_...\n");

  ui_nav_root_ = (new cobalt::ui_navigation::NavItem(
      cobalt::ui_navigation::kNativeItemTypeContainer,
      // Currently, events do not need to be processed for the root item.
      base::Closure(), base::Closure(), base::Closure()));


  P_LOG("Create dom::Window...\n");

  window_ = new cobalt::dom::Window(
      cssom::ViewportSize(browser_width, browser_height), //data.window_dimensions,
      1.0,//data.video_pixel_ratio,
      base::ApplicationState::kApplicationStateStarted,//data.initial_application_state,
      css_parser_.get(),
      dom_parser_.get(),
      fetcher_factory_.get(),
      loader_factory_.get(),
      &resource_provider_,
      animated_image_tracker_.get(),
      image_cache_.get(),
      reduced_image_cache_capacity_manager_.get(),
      remote_typeface_cache_.get(),
      mesh_cache_.get(),
      local_storage_database_.get(),
      can_play_type_handler_.get(),//data.can_play_type_handler,
      nullptr,//data.web_media_player_factory,
      execution_state_.get(),
      script_runner_.get(),
      global_environment_->script_value_factory(),
      media_source_registry_.get(),
      dom_stat_tracker_.get(),//nullptr,//web_module_stat_tracker_->dom_stat_tracker(),
      GURL(R"raw(file:///resources/html/index.html)raw"),//data.initial_url,
      "data.network_module->GetUserAgent()",
      "data.network_module->preferred_language()",
      "en_US", // font_language_script
      //ata.options.font_language_script_override.empty()
      //   ? base::GetSystemLanguageScript()
      //   : data.options.font_language_script_override,
      base::Bind(&CobaltTester::CobaltTester::navigationCallback, base::Unretained(this)),
      //base::Bind(&navigationCallback, base::Unretained(this)),//data.options.navigation_callback, // const base::Callback<void(const GURL&)>
      //base::Bind(&OnLoadComplete, base::Unretained(this)),
      // load_complete_callback
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
      camera_3d_, //new Camera3D(),//data.options.camera_3d,
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
#if defined(ENABLE_TEST_RUNNER)
      data.options.layout_trigger == layout::LayoutManager::kTestRunnerMode
          ? dom::Window::kClockTypeTestRunner
          : (data.options.limit_performance_timer_resolution
                 ? dom::Window::kClockTypeResolutionLimitedSystemTime
                 : dom::Window::kClockTypeSystemTime),
#else
      dom::Window::kClockTypeResolutionLimitedSystemTime,
#endif
      splash_screen_cache_callback,
      system_caption_settings_,
      false//log_tts
      );
  DCHECK(window_);

//#ifdef __TODO__
  P_LOG("Create window_weak_...\n");

  window_weak_ = base::AsWeakPtr(window_.get());
  ///window_weak_ = base::AsWeakPtr(window_);
  DCHECK(window_weak_);

  DCHECK(window_);
  DCHECK(window_->document());

  /*P_LOG("Create document_...\n");
  Document::Options document_options_;
  document_options_.window = nullptr;//window_.get();
  document_ = (new cobalt::dom::Document(html_element_context_.get(),document_options_));
  document_->SetViewport(cssom::ViewportSize(browser_width, browser_height));//kViewSize);
  document_->set_window(window_->window().get());*/

  //if (!data.options.loaded_callbacks.empty()) {
  if (!loaded_callbacks.empty()) {
      document_load_observer_.reset(
          new DocumentLoadedObserver(loaded_callbacks));
      //
      //DCHECK(document_);
      DCHECK(window_->document());
      //document_->AddObserver(document_load_observer_.get());
      window_->document()->AddObserver(document_load_observer_.get());
  }

  window_->document()->set_window(window_);

  window_->document()->SetViewport(
    cssom::ViewportSize(browser_width, browser_height));//kViewSize);

  printf("document_->set_window...\n");

  /*document_->set_window(window_->window().get());
   * */

  environment_settings_.reset(new cobalt::dom::DOMSettings(
      99,//kDOMMaxElementDepth,
      fetcher_factory_.get(),
      nullptr,//data.network_module,
      window_,
      media_source_registry_.get(),
      blob_registry_.get(),
      can_play_type_handler_.get(),//data.can_play_type_handler,
      javascript_engine_.get(),
      global_environment_.get(),
      &mutation_observer_task_manager_,
      //data.options.dom_settings_options
      dom_settings_options
      ));
  DCHECK(environment_settings_);

  window_->SetEnvironmentSettings(environment_settings_.get());
  //environment_settings_->set_window()
  //global_environment_->CreateGlobalObject(window_, environment_settings_.get());
  //global_environment_->CreateGlobalObject(window_, nullptr);

  //render_tree_produced_callback_ = data.render_tree_produced_callback;
  //DCHECK(!render_tree_produced_callback_.is_null());

  //error_callback_ = data.error_callback;
  //DCHECK(!error_callback_.is_null());

  /*layout_trigger == layout::LayoutManager::kTestRunnerMode
      ? dom::Window::kClockTypeTestRunner
      : (data.options.limit_performance_timer_resolution
             ? dom::Window::kClockTypeResolutionLimitedSystemTime
             : dom::Window::kClockTypeSystemTime),*/
  //layout_trigger = dom::Window::kClockTypeSystemTime;

  DCHECK(window_);

/*#if !defined(COBALT_FORCE_CSP)
    if (data.options.csp_enforcement_mode == dom::kCspEnforcementDisable) {
        // If CSP is disabled, enable eval(). Otherwise, it will be enabled by
        // a CSP directive.
        global_environment_->EnableEval();
    }
#endif*/

    //global_environment_->SetReportEvalCallback(
    //    base::Bind(&dom::CspDelegate::ReportEval,
    //               base::Unretained(window_->document()->csp_delegate())));
    //
    //global_environment_->SetReportErrorCallback(
    //    base::Bind(&WebModule::Impl::ReportScriptError, base::Unretained(this)));
    //
    //InjectCustomWindowAttributes(data.options.injected_window_attributes);

//#endif

    /// __TODO__
    ///printf("document_->GetFontCache()->TryGetRemoteFont...\n");
    ///FontListFont::State font_load_state = FontListFont::State::kUnrequestedState;
    ///DCHECK(document_->GetFontCache());
    ///document_->GetFontCache()->TryGetRemoteFont(GURL("file:///resources/fonts/FreeSans.ttf"), 22, &font_load_state);
}

void CobaltTester::run() {
  printf("main Testing COBALT web_animations...\n");

  animation.set_start_time(base::TimeDelta::FromSeconds(2));
  local_time =
      animation.ComputeLocalTimeFromTimelineTime(
          base::TimeDelta::FromMilliseconds(3000));
  // EXPECT_EQ(1.0, local_time->InSecondsF());
  printf("main local_time->InSecondsF() %f\n", local_time->InSecondsF());

  printf("main Testing COBALT cssom...\n");

  rule_list = new cobalt::cssom::CSSRuleList();
  rule =
      new cobalt::cssom::CSSMediaRule(
        new cobalt::cssom::MediaList(),
        new cobalt::cssom::CSSRuleList()
      );
  rule_list->AppendCSSRule(rule);

  printf("main 1 = rule_list->length() = %d\n", rule_list->length());
  printf("main CSSRule::kMediaRule = %i\n", cobalt::cssom::CSSRule::kMediaRule == rule_list->Item(0)->type());

  printf("main Testing COBALT selectors...\n");

  //// Selector Tree:
  //// root
  ////   kDescendantCombinator -> node_1("div")
  //std::unique_ptr<cobalt::cssom::css_parser::Parser> css_parser =
  //  cobalt::cssom::css_parser::Parser::Create();
  //scoped_refptr<cobalt::cssom::CSSStyleRule> css_style_rule_1 =
  //    cobalt::cssom::css_parser->ParseRule("div {}",
  //    base::SourceLocation("[object SelectorTreeTest]", 1, 1))
  //        ->AsCSSStyleRule();
  //selector_tree.AppendRule(css_style_rule_1);
  //
  //// Verify that ValidateVersionCompatibility does not report a usage error
  //// when the minimum compatibility version is 1.
  //base::VersionCompatibility::GetInstance()->SetMinimumVersion(1);
  //EXPECT_TRUE(selector_tree.ValidateVersionCompatibility());
  //
  //ASSERT_EQ(0,
  //          selector_tree.children(selector_tree.root_node(), cobalt::cssom::kChildCombinator)
  //              .size());
  //ASSERT_EQ(1, selector_tree
  //                 .children(selector_tree.root_node(), cobalt::cssom::kDescendantCombinator)
  //                 .size());
  //ASSERT_EQ(0, selector_tree
  //                 .children(selector_tree.root_node(), cobalt::cssom::kNextSiblingCombinator)
  //                 .size());
  //ASSERT_EQ(
  //    0, selector_tree
  //           .children(selector_tree.root_node(), cobalt::cssom::kFollowingSiblingCombinator)
  //           .size());
  //
  //const cobalt::cssom::SelectorTree::Node* node_1 =
  //    selector_tree.children(selector_tree.root_node(), cobalt::cssom::kDescendantCombinator)
  //        .begin()
  //        ->second;
  //ASSERT_EQ(1, node_1->rules().size());
  //EXPECT_EQ(css_style_rule_1, node_1->rules()[0]);
  //EXPECT_EQ(cobalt::cssom::Specificity(0, 0, 1), node_1->cumulative_specificity());

  printf("main Testing COBALT dom...\n");

  const int kDOMMaxElementDepth = 32;

// typedef base::Callback<void(const base::Optional<std::string>&)>
//     OnCompleteFunction;

  /*Decoder::OnCompleteFunction fc = base::Bind([](const base::Optional<std::string>& a){
    printf("Decoder::OnCompleteFunction\n");
  });*/

// const base::Optional<std::string>&
  DCHECK(window_);
  DCHECK(window_->document());
  /*html_decoder_.reset(new HTMLDecoder(
      document_.get(), document_.get(),
      ///window_->document().get(), window_->document().get(),
      NULL, kDOMMaxElementDepth,
      base::SourceLocation("[object HTMLDecoderTest]", 1, 1),//source_location_.get(),
      base::Bind([](const base::Optional<std::string>& a){
        printf("main Decoder::OnCompleteFunction\n");
      }),
      true
#if defined(ENABLE_COBALT_CSP)
      , csp::kCSPOptional
#endif
      ));
  printf("main COBALT dom DecodeChunk...\n");
  html_decoder_->DecodeChunk(input.c_str(), input.length());
  printf("main COBALT dom html_decoder_->Finish...\n");
  html_decoder_->Finish();
  printf("main COBALT get dom first_element_child...\n");
  root_ = (new cobalt::dom::Element(document_.get(),
                                    //window_->document().get(),
                                    base::CobToken("element")));
  ///root_ = (window_->document()->first_element_child());
  root_ = (document_->first_element_child());

  //ASSERT_TRUE(root_);
  //EXPECT_EQ("html", root_->tag_name());

  printf("main root_->tag_name() %s\n", root_->tag_name().c_str());
  printf("main root_->text_content() %s\n", root_->text_content().value_or("empty root_").c_str());

  //EXPECT_EQ(1, root_->children()->length());

  dom::Element* head = root_->first_element_child();

  //ASSERT_TRUE(head);
  //EXPECT_EQ("head", head->tag_name());

  printf("main head->tag_name() %s\n", head->tag_name().c_str());
  printf("main head->text_content() %s\n", head->text_content().value_or("empty head").c_str());

  printf("main Testing COBALT css_parser...\n");
  scoped_refptr<cssom::CSSStyleSheet> style_sheet = css_parser_->ParseStyleSheet(
      "body {} div {}", base::SourceLocation("[object HTMLDecoderTest]", 1, 1));
  //ASSERT_TRUE(style_sheet);
  //EXPECT_EQ(2, style_sheet->css_rules_same_origin()->length());
  printf("main style_sheet->css_rules_same_origin()->length() = %d == 2\n",  style_sheet->css_rules_same_origin()->length());
  style =
    css_parser_->ParseStyleDeclarationList(
        "background-size: auto 20%;"
        "background: no-repeat rgba(0, 0, 0, .8);", base::SourceLocation("[object HTMLDecoderTest]", 1, 1));
  //style->se
  if(style->IsDeclared(cssom::kBackgroundSizeProperty)) {
    scoped_refptr<cssom::PropertyListValue> background_size_list =
          dynamic_cast<cssom::PropertyListValue*>(
              style->GetPropertyValue(cssom::kBackgroundSizeProperty).get());
    if(background_size_list->value().size() == 2) {
      printf("main background_size_list = %s %s\n",
       background_size_list->value()[0].get()->ToString().c_str(),
       background_size_list->value()[1].get()->ToString().c_str()
      );
    }
    scoped_refptr<cssom::RGBAColorValue> background_color =
    dynamic_cast<cssom::RGBAColorValue*>(
        style->GetPropertyValue(cssom::kBackgroundColorProperty).get());
    if(background_color) {
      printf("main background_color = %s\n", background_color.get()->ToString().c_str());
    }
  }
*/

  /// printf("main html_element_...\n");
  /// html_element_ =
  ///     document_->CreateElement("div")->AsHTMLElement();
  /// document_->AppendChild(html_element_);
  /// html_element_->set_tab_index(-1);
  /// html_element_->Focus();
  /// html_element_->Blur();
  /// printf("main AsHTMLElement()->text_content %s\n", document_->active_element()->AsHTMLElement()->text_content()->c_str());
  /// //SetElementStyle(style, html_element);
  /// html_element_->SetAttribute("style", style->SerializeCSSDeclarationBlock());
  /// printf("main html_element_->GetAttribute(style) %s\n", html_element_->GetAttribute("style")->c_str());
  /// //window_->SetApplicationState(base::ApplicationState::kApplicationStateStarted);
  ///
  /// printf("main DoSynchronousLayoutAndGetRenderTree()...\n");
  /// render_tree_root_ =
  ///     document_->DoSynchronousLayoutAndGetRenderTree();

  printf("main synchronous_loader_interrupt_.Reset()...\n");
  ///synchronous_loader_interrupt_.Reset();
  ///if (resource_provider_) {
  ///    base::TypeId resource_provider_type_id = resource_provider_->GetTypeId();
  ///    // Check for if the resource provider type id has changed. If it has, then
  ///    // anything contained within the caches is invalid and must be purged.
  ///    /*if (resource_provider_type_id_ != resource_provider_type_id) {
  ///        //PurgeResourceCaches(false);
  ///    }
  ///    resource_provider_type_id_ = resource_provider_type_id;*/
  ///
  ///    loader_factory_->Resume(resource_provider_);
  ///
  ///}
  // Permit render trees to be generated again.  Layout will have been
  // invalidated with the call to Suspend(), so the layout manager's first
  // task will be to perform a full re-layout.
  ///printf("main layout_manager_->Resume...\n");
  ///layout_manager_->Resume();

  //window_->RequestAnimationFrame();

  //RunAnimationFrameCallbacks
  //HasPendingAnimationFrameCallbacks

  //layout_manager_->DoLayoutAndProduceRenderTree();

  /*script::Handle<ScreenshotManager::InterfacePromise> promise =
      html_element_context_
          ->script_value_factory()
          ->CreateInterfacePromise<dom::Screenshot>();

  std::unique_ptr<ScreenshotManager::InterfacePromiseValue::Reference>
      promise_reference(new ScreenshotManager::InterfacePromiseValue::Reference(
          nullptr, promise));

  screenshot_manager_ = std::make_unique<ScreenshotManager>(provide_screenshot_function);
  screenshot_manager_->Screenshot(
      loader::image::EncodedStaticImage::ImageFormat::kPNG, render_tree_root,
      std::move(promise_reference));*/
}

static std::unique_ptr<CobaltTester> g_cobaltTester;
//bool createdCobaltTester = false;
#endif // ENABLE_COBALT

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
                      "    colour.rgba = colour.rgba;\n"
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
  GL_CHECK( glGenTextures(1, &skia_texture) );
#endif // ENABLE_SKIA

  // No clientside arrays, so do this in a webgl-friendly manner
  GL_CHECK( glGenBuffers(1, &vertexPosObject) );
  GL_CHECK( glBindBuffer(GL_ARRAY_BUFFER, vertexPosObject) );
  GL_CHECK( glBufferData(GL_ARRAY_BUFFER, sizeof(kVertexData), kVertexData, GL_STATIC_DRAW) );
  GL_CHECK( glBindBuffer(GL_ARRAY_BUFFER, 0) );

  GL_CHECK( glClearColor(0.0f, 0.0f, 0.0f, 0.0f) );

  return GL_TRUE;
}

static void createCobaltTester() {
  printf("Starting g_cobaltTester...\n");
  /// __TODO__
  g_cobaltTester = std::make_unique<CobaltTester>();
  /// __TODO__
  {
    //g_cobaltTester->run();
  }
  printf("Finishing g_cobaltTester...\n");
  //main_thread_event_->Signal();
  ///} else if (!g_cobaltTester->isLoadComplete_) {
  ///  /// wait
  ///  //if (isDebugPeriodReached())
  ///  printf("!g_cobaltTester->isLoadComplete_\n");
}

static void createLayoutManager() {
  printf("layout_manager_.reset...\n");
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
      1.0,//data.layout_refresh_rate,
      "en_US", //"data.network_module->preferred_language()",
      false, //data.options.enable_image_animations,
      g_cobaltTester->layout_stat_tracker_.get(),//web_module_stat_tracker_->layout_stat_tracker(),
      false//data.options.clear_window_with_background_color
    ));
    DCHECK(g_cobaltTester->layout_manager_);
}

static void animate() {
        if (isDebugPeriodReached()) printf("animate start\n");

  //redClrTintAnim += 0.01f;
  //if (redClrTintAnim > 360.0f) {
  //  redClrTintAnim = 0.0f;
  //}

#if defined(ENABLE_SKIA) && defined(ENABLE_SKOTTIE)

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  if (fTimeBase == 0) {
    // Reset the animation time.
    fTimeBase = SDL_GetTicks();
  }
  if (fAnimation) {
    const auto t = SDL_GetTicks() - fTimeBase;
    const auto d = fAnimation->duration() * 1000;
    fAnimation->seek(::std::fmod(t, d) / d);
  }
#else
#error "TODO: port SDL_GetTicks without SDL"
#endif

      /// \note: (only wasm ST - wasm without pthreads)
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  /// \todo posts new task every frame
  //if (!createdCobaltTester)
  {
    /// \note g_cobaltTester created from separate thread, so
    /// we use extra variable: don`t call "if (!g_cobaltTester)" here
    //createdCobaltTester = true;
    printf("Creating g_cobaltTester...\n");
      if (!g_cobaltTester) {
        createCobaltTester();
      } else if (
        !g_cobaltTester->layout_manager_
        ///&& g_cobaltTester->isLoadComplete_
        ) {
        createLayoutManager();
      }
      /// __TODO__
      /// \note: (only wasm ST - wasm without pthreads)
      /// don`t batch a lot of work to browser
      /// or browser will crash/hang/loose webgl context
      /// you MUST split work between main loop iterations
      else if(!g_cobaltTester->window_->isDocumentStartedLoading()) {
        printf("g_cobaltTester TryForceStartDocumentLoad 1\n");
        DCHECK(g_cobaltTester);
        DCHECK(g_cobaltTester->window_);
        const bool res = g_cobaltTester->window_->TryForceStartDocumentLoad();
        DCHECK(res);
        printf("g_cobaltTester TryForceStartDocumentLoad 2\n");
      } else if(!g_cobaltTester->window_->isStartedDocumentLoader()) {
        printf("g_cobaltTester ForceStartDocumentLoader 1\n");
        g_cobaltTester->window_->ForceStartDocumentLoader();
        printf("g_cobaltTester ForceStartDocumentLoader 1\n");
      } else if (render_browser_window) {
        if(g_cobaltTester
           && g_cobaltTester->window_->isStartedDocumentLoader()
           && g_cobaltTester->window_->isDocumentStartedLoading())
        {
          //if (isDebugPeriodReached() || !hasLayout)
          {
            //if (isDebugPeriodReached())
            printf("g_cobaltTester DoSynchronousLayoutAndGetRenderTree\n");
            DCHECK(g_cobaltTester);
            DCHECK(g_cobaltTester->window_);
            DCHECK(g_cobaltTester->window_->document());
            DCHECK(g_cobaltTester->window_);
            DCHECK(g_cobaltTester->window_->isDocumentStartedLoading());
            DCHECK(g_cobaltTester->window_->isStartedDocumentLoader());
            DCHECK(g_cobaltTester);
            DCHECK(g_cobaltTester->layout_manager_);
            g_cobaltTester->window_->document()->DoSynchronousLayoutAndGetRenderTree();
            g_cobaltTester->layout_manager_->ForceReLayout();
            hasLayout = true;
            //
            //if (isDebugPeriodReached())
            //printf("g_cobaltTester->run\n");
          }
#ifdef __TODO__
          DCHECK(g_cobaltTester);
          g_cobaltTester->run();
#endif
        }
      }
  } // if (!createdCobaltTester)
#endif

#endif // ENABLE_SKOTTIE
        if (isDebugPeriodReached()) printf("animate end\n");
}

///
// Draw a triangle using the shader pair created in Init()
//
static void Draw() {
      //if (isDebugPeriodReached())
      if (isDebugPeriodReached()) printf("Draw() 1\n");
  GL_CHECK( glViewport(0, 0, width, height) );
  GL_CHECK( glClear(GL_COLOR_BUFFER_BIT) );

  if (isDebugPeriodReached()) printf("animate...\n");

  animate();

  GL_CHECK( glUseProgram(programObject) );
  GL_CHECK( glActiveTexture(GL_TEXTURE0) );
      if (isDebugPeriodReached()) printf("Draw() 2\n");

#if defined(ENABLE_SKIA)
  //using cobalt::renderer::rasterizer::egl::getRasterizerSkSurface;
  using cobalt::renderer::rasterizer::egl::getRasterizerSkImage;

  {

    sk_sp<SkImage> pImage = nullptr;
    if (render_browser_window//)
        && g_cobaltTester
        && g_cobaltTester->window_->isDocumentStartedLoading()
        && g_cobaltTester->window_->isStartedDocumentLoader())
    {
        if (isDebugPeriodReached()) printf("Draw() 6.0\n");
       pImage = getRasterizerSkImage();
        if (isDebugPeriodReached()) printf("Draw() 6.1\n");
    } else {
      // Draw to the surface via its SkCanvas.
      // We don't manage this pointer's lifetime.
      SkCanvas* canvas =
        //  getRasterizerSkSurface()->getCanvas();
        sRasterSurface->getCanvas();

      canvas->clear(SkColorSetARGB(255, 255, 255, 255));
        if (isDebugPeriodReached()) printf("Draw() 3\n");

      myView->onDraw(canvas);
        //if (isDebugPeriodReached()) printf("Draw() 4\n");

      sRasterSurface->flush();
        //if (isDebugPeriodReached()) printf("Draw() 5\n");

      pImage = sRasterSurface->makeImageSnapshot();
      //const sk_sp<SkImage> pImage = getRasterizerSkSurface()->makeImageSnapshot();
    }

    if (nullptr == pImage) {
      if (isDebugPeriodReached()) printf("can`t get pImage\n");
    }

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
    if(pImage/* && !pImage->isAlphaOnly()
      && pImage->width() > 0 && pImage->height() > 0*/) {
      if (isDebugPeriodReached()) printf("Draw() 7\n");
      SkPixmap pixmap;
      if (!pImage->peekPixels(&pixmap)) {
        if (isDebugPeriodReached()) printf("can`t peekPixels\n");
      }
      DCHECK(!pixmap.bounds().isEmpty());
      if (isDebugPeriodReached()) printf("Draw() 7.1\n");

      GL_CHECK( glBindTexture(GL_TEXTURE_2D, skia_texture) );
      GL_CHECK( glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE) );
      GL_CHECK( glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE) );
      GL_CHECK( glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR) );
      GL_CHECK( glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR) );
      GL_CHECK( glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, pixmap.width(), pixmap.height(), 0, GL_RGBA,
                   GL_UNSIGNED_BYTE, pixmap.addr()) );
    }
      //if (isDebugPeriodReached()) printf("Draw() 8\n");
  }

#endif // ENABLE_SKIA
      //if (isDebugPeriodReached()) printf("Draw() 9\n");

  GL_CHECK( glUniform1i(uniformTex, 0) );

  //if (isDebugPeriodReached()) printf("redClrTintAnim %f\n", redClrTintAnim);
  //GL_CHECK( glUniform1f(uniformRedClrTint, (sin(redClrTintAnim) / 2.0f + 0.5f)) );

  GL_CHECK( glBindBuffer(GL_ARRAY_BUFFER, vertexPosObject) );
  //
  GL_CHECK( glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat), NULL) );
  GL_CHECK( glEnableVertexAttribArray(0) );
  //
  GL_CHECK( glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat),
                        (GLvoid*)(2 * sizeof(GLfloat))) );
  GL_CHECK( glEnableVertexAttribArray(1) );

      //if (isDebugPeriodReached()) printf("Draw() 10\n");

  int w, h, fs;
#ifdef __EMSCRIPTEN__
  // see
  // https://github.com/floooh/oryol/blob/master/code/Modules/Gfx/private/emsc/emscDisplayMgr.cc#L174
  emscripten_get_canvas_element_size("#canvas", &w, &h); //, &fs); // width, height, isFullscreen
#else
  w = width;
  h = height;
#endif
  float xs = (float)h / w;
  float ys = 1.0f;
  float mat[] = {xs, 0, 0, 0, 0, ys, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};

  GL_CHECK( glBindBuffer(GL_ARRAY_BUFFER, 0) );

  GL_CHECK( glDrawArrays(GL_TRIANGLE_STRIP, 0, 4) );

  GL_CHECK( glDisableVertexAttribArray(0) );
  GL_CHECK( glDisableVertexAttribArray(1) );

      if (isDebugPeriodReached()) printf("Draw() 11\n");
}

static void mainLoop() {


#ifdef __EMSCRIPTEN__

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

  if (isDebugPeriodReached()) printf("animate...\n");
  //
  //animate();

// __EMSCRIPTEN_PTHREADS__ can be used to detect whether Emscripten is currently targeting pthreads.
// At runtime, you can use the emscripten_has_threading_support()
// see https://emscripten.org/docs/porting/pthreads.html
#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__)
  // TODO
  // printf("emscripten_current_thread_process_queued_calls...\n");
  // emscripten_current_thread_process_queued_calls();
#endif

  //if (isDebugPeriodReached())
  if (isDebugPeriodReached()) printf("draw...\n");

  // Render
  Draw();

        if (isDebugPeriodReached()) printf("mainLoop 3\n");

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

        if (isDebugPeriodReached()) printf("mainLoop 4\n");

  // Update screen
  SDL_GL_SwapWindow(window);

        if (isDebugPeriodReached()) printf("mainLoop 5\n");
#endif

        if (isDebugPeriodReached()) printf("mainLoop 6\n");

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  while (SDL_PollEvent(&e) != 0) {
    switch (e.type) {
#if !defined(__EMSCRIPTEN__)
      case SDL_QUIT: {
        printf("recieved quit signal 1\n");
        quitApp = true;
        printf("recieved quit signal 2\n");
      }
#endif
    }
  }
#elif defined(__EMSCRIPTEN__)
  #warning "TODO: port SDL_PollEvent (emscripten_set_mousedown_callback, e.t.c.)"
  #warning "see https://github.com/floooh/sokol/blob/master/sokol_app.h#L2403 for example"
  #warning "see https://github.com/hongkk/urho/blob/master/Source/Urho3D/Input/Input.cpp for example"
  #warning "see https://github.com/h-s-c/libKD/blob/master/source/kd.c#L2658 for example"
#else
  #error "TODO: port SDL_PollEvent"
#endif

#ifdef __EMSCRIPTEN__
  DCHECK(quitApp == false); /// __TODO__
  if (quitApp) {
    printf("quitting main loop 1\n");
    emscripten_cancel_main_loop();
    printf("quitting main loop 2\n");
  }
#endif
  if (isDebugPeriodReached()) printf("mainLoop 7\n");

  incDebugPeriodicCounter();
  if (isDebugPeriodReached()) printf("mainLoop 8\n");
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

static void MakeClosure(base::OnceClosure** closure_out) {
  *closure_out = new base::OnceClosure(WTF::Bind([] {
    printf("OnceClosure!\n");
  }));
  LEAK_SANITIZER_IGNORE_OBJECT(*closure_out);
}


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
int main(int argc, char** argv) {
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

#ifdef ENABLE_BLINK_PLATFORM
  printf("Init RuntimeEnabledFeatures ...\n");
  // Disable all runtime enabled features
  blink::RuntimeEnabledFeatures::SetStableFeaturesEnabled(false);
  blink::RuntimeEnabledFeatures::SetExperimentalFeaturesEnabled(false);
  blink::RuntimeEnabledFeatures::SetTestFeaturesEnabled(false);
#endif // ENABLE_BLINK_PLATFORM

#ifdef ENABLE_BASE
  printf("Init AtExitManager ...\n");
  base::AtExitManager at_exit;
  printf("Init CommandLine ...\n");

  base::CommandLine::Init(0, nullptr);
  base::CommandLine::ForCurrentProcess()->InitFromArgv(argc, argv);

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
  // TODO
//#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//          DCHECK(base::MessageLoopCurrent::Get());
//#endif
  //base::MessageLoopCurrent::Get()->SetTaskRunner(main_thread->task_runner());
  */

#if defined(ENABLE_UI) && defined(ENABLE_SKIA) && defined(ENABLE_BLINK)
  printf("Init FontList ...\n");
  // Use a single default font as the default font list.
  gfx::FontList::SetDefaultFontDescription(::std::string());
#endif

#if defined(OS_WIN)
  base::RouteStdioToConsole(false);
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
  bool icu_initialized = base::i18n::InitializeICU();
#if defined(OS_EMSCRIPTEN)
  if(!icu_initialized) {
    DCHECK(false);
  }
#endif
#endif

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

  printf("Init alloc ...\n");
  // see
  // https://cs.chromium.org/chromium/src/third_party/blink/renderer/controller/blink_initializer.cc?sq=package:chromium&dr=C&g=0&l=88
  {
    /// @TODO don`t reserve much memory on WASM/EMSCRIPTEN platform
    // Try to reserve as much address space as we reasonably can.
    const size_t kMB = 1024 * 1024;
    for (size_t size = 512 * kMB; size >= 32 * kMB; size -= 16 * kMB) {
    // for (size_t size = 128 * kMB; size >= 32 * kMB; size -= 16 * kMB) {
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
#endif

#ifdef ENABLE_WTF
  printf("Init Partitions ...\n");
  // see
  // https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/exported/platform.cc#L119
  WTF::Partitions::Initialize(nullptr); // TODO

  printf("Init WTF ...\n");
  WTF::Initialize(nullptr); // TODO
  printf("Testing ...\n");

  {
    BindChecks bc;
    printf("BindChecks ... %d\n", bc.Run());
  }

  WTF::Bind([] {
    printf("WTF::Bind!\n");
  }).Run();
#endif

#if defined(ENABLE_THREAD_TESTS)

#if defined(__EMSCRIPTEN__) && defined(__EMSCRIPTEN_PTHREADS__)
  // TODO: causes skia/GL hang on WASM
  #warning "TODO: port threads & support skia"
#elif defined(__EMSCRIPTEN__) // wasm without PTHREAD support
  // TODO: error undefined pthread_setschedparam
  // see https://github.com/emscripten-core/emscripten/pull/8301
  // TODO: port as in https://github.com/emscripten-core/emscripten/pull/8301/files#diff-3a4a6b777ac7df56ef826737ea093be8R37
  #warning "TODO: port threads to wasm without PTHREAD support"
#endif
  {
    printf("thread testing started\n");
    base::OnceClosure* closure = nullptr;
    //base::OnceCallback<void()> binded = base::BindOnce(&MakeClosure, &closure);
    //::std::move(binded).Run();

    //PlatformThread::CurrentId()
    //base::Thread::ThreadMain().

    base::Thread thread("testing");

    thread.Start();
    //DCHECK(thread.task_runner());
    //thread.task_runner()->PostTask(FROM_HERE, base::BindOnce(&MakeClosure, &closure));
    //thread.Stop();

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
      base::TimeDelta::FromSeconds(3));

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
    static const UChar kTestCapitalized[5] = {0x004c, 0x0049, 0x004e, 0x004b,
                                              0};  // LINK

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
      printf("1 Found == foo.end() %d\n", (int)(found == foo.end()));
      found = foo.find("foo");
      printf("2 Found == foo.end() %d\n", (int)(found == foo.end()));
      found = foo.find("bar");
      printf("3 Found == foo.end() %d\n", (int)(found == foo.end()));
      found = foo.find("asdfhf");
      printf("4 Found == foo.end() %d\n", (int)(found == foo.end()));
      found = foo.find("bar1");
      printf("5 Found == foo.end() %d\n", (int)(found == foo.end()));
  }
#endif

  printf("Starting ...\n");

#ifdef __EMSCRIPTEN__
  //https://github.com/Becavalier/Book-DISO-WebAssembly/issues/10
  double dpr = emscripten_get_device_pixel_ratio();
  emscripten_set_element_css_size("#canvas", width / dpr, height / dpr);
  emscripten_set_canvas_element_size("#canvas", width, height);

  /// @note use EmscriptenWebGLContextAttributes, not SDL_GL
  /// @see https://github.com/emscripten-core/emscripten/issues/7684
  ///
  emscripten_webgl_init_context_attributes(&attr);

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
  window = SDL_CreateWindow("skemgl", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width,
                            // height, SDL_WINDOW_SHOWN); // TODO
                            height, SDL_WINDOW_OPENGL); // TODO
#else
  window = SDL_CreateWindow("skemgl", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width,
                            height, SDL_WINDOW_OPENGL);
#endif

  if (!window) {
    printf("Unable to create window: %s\n", SDL_GetError());
    return 1;
  }
#endif // ENABLE_HTML5_SDL

#ifndef __EMSCRIPTEN__
  printf("SDL_GL_CreateContext ...\n");

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

  printf("SDL_GL_MakeCurrent ...\n");

  int success = SDL_GL_MakeCurrent(window, glContext);
  if (success != 0) {
    printf("Error while SDL_GL_MakeCurrent %s\n", SDL_GetError());
    SDL_ClearError();
    return success;
  }
#endif

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
  GL_CHECK( glViewport(0, 0, (int)width, (int)height) );
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

  printf("creating tests thread...\n");
  base::Thread::Options options;
  //options.message_loop_type = base::MessageLoop::TYPE_IO;
  main_thread_.StartWithOptions(options);
  printf("tests thread started...\n");
  main_thread_.task_runner()->PostTask(
      FROM_HERE, base::Bind([](base::WaitableEvent* main_thread_event_) {
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
            DCHECK(base::MessageLoopCurrent::Get());
#endif
          printf("Main thread works...\n");
          main_thread_event_->Signal();
      }, &main_thread_event_));

  printf("Waiting for tests thread...\n");
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
  main_thread_event_.Wait();
#endif
  main_thread_event_.Reset();

#ifdef ENABLE_COBALT
  printf("Initializing COBALT tests...\n");
  /// \see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/base/init_cobalt.cc
  cobalt::InitCobalt(argc, argv, NULL);
  printf("Starting ICU tests...\n");

  printf("Starting COBALT tests...\n");

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

#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  printf("createCobaltTester task 0\n");
    main_thread_.task_runner()->PostTask(
      FROM_HERE, base::Bind([](base::WaitableEvent* main_thread_event_) {
              // start postTask
  printf("createCobaltTester task 1\n");
  #if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
      DCHECK(base::MessageLoopCurrent::Get());
  #endif
      if (!g_cobaltTester) {
  printf("createCobaltTester task 1.1\n");
        createCobaltTester();
        createLayoutManager();
      }
  printf("createCobaltTester task 2\n");
              // end postTask
    }, &main_thread_event_));
  printf("createCobaltTester task 3\n");
#endif

  printf("Waiting COBALT tests...\n");
  //// \NOTE: DON`T BLOCK MAIN WASM THREAD
  /// WAITING FOR INFINITE THREAD!
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  /// \todo Reactor your code so that the waiting happens on another thread instead of the main thread
  //main_thread_event_.Wait();
#endif
  //main_thread_event_.Reset();
#endif // ENABLE_COBALT

#if defined(ENABLE_SKIA)
  printf("Starting SKIA tests...\n");

#if defined(ENABLE_UI)
  {
    SkImageInfo skImageInfo = SkImageInfo::Make(
      100,
      100,
      SkColorType::kRGBA_8888_SkColorType,
      SkAlphaType::kPremul_SkAlphaType, // alpha type can also be opaque if there is no alpha information
      SkColorSpace::MakeSRGBLinear()
    );
    //SkBitmap::Config config = SkImageInfoToBitmapConfig(info, &isOpaque);
    //SkBitmap fetched_bitmap;
    void* pixels = nullptr;
    char* fileData = nullptr;
    long int fsize;
    //size_t fsize;
    int readRes = read_file(fImagePath.c_str(), fileData, fsize, true);
    if (readRes != 0) {
      printf("can`t read file %s\n", fImagePath.c_str());
      return 1;
    }
    DCHECK(fileData != nullptr);
    ::std::unique_ptr<SkBitmap> decoded(new SkBitmap());
    /*
  static bool Decode(const unsigned char* input, size_t input_size,
                     ColorFormat format, ::std::vector<unsigned char>* output,
                     int* w, int* h);
  static bool Decode(const unsigned char* input, size_t input_size,
                     SkBitmap* bitmap);
     */
    const unsigned char* data =
      reinterpret_cast<const unsigned char*>(fileData);
    if (!gfx::PNGCodec::Decode(data, static_cast<size_t>(fsize), decoded.get())) {
      printf("can`t decode png file %s\n", fImagePath.c_str());
      decoded = gfx::JPEGCodec::Decode(data, static_cast<size_t>(fsize));
      if (!decoded) {
        printf("can`t decode JPEG file %s\n", fImagePath.c_str());
        return 1;
      }
    }
    //fetched_bitmap.setPixels(pixels);
    //fetched_bitmap.setIsOpaque(isOpaque);
    //gfx::ImageSkia imageSkia(gfx::ImageSkiaRep(*decoded, /*scale=*/1.0));
    gfx::ImageSkiaRep rep = gfx::ImageSkiaRep(*decoded, /*scale=*/1.0);
    gfxImageSkia = ::std::make_unique<gfx::ImageSkia>(rep);
    if (!gfxImageSkia || gfxImageSkia->isNull()) {
      printf("can`t get gfxImageSkia\n");
      return 1;
    }
    //skImageSp = SkImage::MakeFromBitmap(
    //  gfxImageSkia->GetRepresentation(/*scale=*/1.0).GetBitmap());
    skImageSp = SkImage::MakeFromBitmap(rep.GetBitmap());
    if (!skImageSp || !skImageSp->isValid(nullptr)) {
      printf("can`t get skImageSp\n");
      return 1;
    }
  }
#endif // ENABLE_UI

#ifdef ENABLE_CUSTOM_FONTS
  printf("Reading fonts...\n");

  const char* fontPath = "./resources/fonts/FreeSans.ttf";

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
  sk_sp<SkData> data = SkData::MakeFromFileName(fontPath);
  if (!data) {
    printf("failed SkData::MakeFromMalloc for font %s\n", fontPath);
  }

  printf("Initializing font data...\n");

  /// \note SkTypeface::MakeFromFile don`t support wasm pthreads,
  /// so we use MakeFromData
  const int index = 0;
  //sk_sp<SkTypeface> sktp = SkTypeface::MakeFromFile("./resources/fonts/FreeSans.ttf");

#ifdef ENABLE_HARFBUZZ
  sk_sp<SkTypeface> sktp = SkTypeface::MakeFromData(data, index);
#else
  /// \note use ::std::move only if data will not be used any more
  sk_sp<SkTypeface> sktp = SkTypeface::MakeFromData(::std::move(data), index);
#endif

  //sk_sp<SkTypeface> sktp = SkTypeface::MakeFromStream(new SkMemoryStream(data), index);

  printf("Creating harfbuzz fonts...\n");

#ifdef ENABLE_HARFBUZZ
  auto destroy = [](void *d) { static_cast<SkData*>(d)->unref(); };
  const char* bytes = (const char*)data->data();
  unsigned int size = (unsigned int)data->size();
  hb_blob_t* blob = hb_blob_create(bytes,
                                   size,
                                   HB_MEMORY_MODE_READONLY,
                                   data.release(),
                                   destroy);
  assert(blob);
  hb_blob_make_immutable(blob);
  hb_face_t* face = hb_face_create(blob, (unsigned)index);
  hb_blob_destroy(blob);
  //assert(face);
  if (!face) {
      printf("Can`t create harfbuzz face...\n");
      sktp.reset();
      return 1;
  }
  hb_face_set_index(face, (unsigned)index);
  hb_face_set_upem(face, sktp->getUnitsPerEm());
  fHarfBuzzFace.reset(face);

  // see https://chromium.googlesource.com/skia/+/chrome/m56/tools/SkShaper_harfbuzz.cpp
  fHarfBuzzFont.reset(hb_font_create(fHarfBuzzFace.get()));
  if (!fHarfBuzzFont.get()) {
      printf("Can`t create harfbuzz font...\n");
      sktp.reset();
      return 1;
  }

  // see https://github.com/aam/skiaex/blob/master/app/main.cpp#L177
  // see https://github.com/harfbuzz/harfbuzz-tutorial/blob/master/hello-harfbuzz-opentype.c#L31
  hb_font_set_scale(fHarfBuzzFont.get(), FONT_SIZE_SCALE * FONT_SIZE_F, FONT_SIZE_SCALE * FONT_SIZE_F);
  hb_ot_font_set_funcs(fHarfBuzzFont.get());
#endif // ENABLE_HARFBUZZ

  printf("Creating fonts...\n");

  skFont1 =
      new SkFont(sktp, FONT_SIZE_F, 1.0f, 0.0f);

  skFont2 =
      new SkFont(sktp, 30.0f, 1.5f, 0.0f);

  //delete[] fileData1;

#endif // ENABLE_CUSTOM_FONTS

  printf("Initializing skia...\n");

  initSkiaSurface(width, height);

  printf("Initializing skia view...\n");

  myView = new SkPainter(SK_ColorRED, 200);

#ifdef ENABLE_SKOTTIE
  {
    printf("Initializing skottie animations...\n");

    //
    // sk_sp<skottie_utils::FileResourceProvider> frp
    //  = skottie_utils::FileResourceProvider::Make(SkOSPath::Dirname(fPath.c_str()));
    // frp->load(fPath.c_str(), "data.json");
    //

    skottie::Animation::Builder builder;
    /*fAnimation      = builder
              //.setLogger(logger)
              .setResourceProvider(
                  skottie_utils::FileResourceProvider::Make(SkOSPath::Dirname(fPath.c_str())))
              .makeFromFile(fPath.c_str());*/
    /*
    defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
    SDL_RWops* fileHandle = SDL_RWFromFile(fPath.c_str(), "r");
    if (fileHandle == nullptr) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Can't find the file!\n");
    }*/

    printf("Reading skottie animations...\n");

    char* fileString = nullptr;
    long int fsize;
    int readRes = read_file(fAnimPath.c_str(), fileString, fsize, true);
    if (readRes != 0) {
      printf("can`t read skottie anim %s\n", fAnimPath.c_str());
      return 1;
    }
    DCHECK(fileString != nullptr);

    /*FILE* f = fopen(fPath.c_str(), "rb");
    if (!f) {
      printf("failed to open file: %s\n", fPath.c_str());
      return 1;
    }
    fseek(f, 0, SEEK_END);
    long int fsize = ftell(f);
    fseek(f, 0, SEEK_SET);
    char* fileString = new char[fsize + 1];
    fread(fileString, 1, fsize, f);
    fclose(f);
    fileString[fsize] = 0;*/

    printf("Building skottie animations...\n");

    // see https://github.com/google/skia/blob/master/modules/skottie/src/Skottie.cpp#L459
    fAnimation = builder.make(fileString, fsize);
    printf("Built skottie animations...\n");

    printf("Get skottie stats...\n");
    fAnimationStats = builder.getStats();
    fTimeBase = 0; // force a time reset
    if (fAnimation) {
      fAnimation->setShowInval(fShowAnimationInval);
      printf("Loaded Bodymovin animation v: %s, size: [%f %f]\n", fAnimation->version().c_str(),
             fAnimation->size().width(), fAnimation->size().height());
    } else {
      printf("failed to load Bodymovin animation: %s\n", fAnimPath.c_str());
      return 1;
    }
    printf("Got skottie stats...\n");

    delete[] fileString; // TODO
    printf("skottie animations are ready...\n");
  }
#endif // ENABLE_SKOTTIE

#endif // ENABLE_SKIA

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

/// \note emscripten_set_main_loop async, so
/// don`t declare vars above it (or them will be lost)!
/// Use member/static variables!
#ifdef __EMSCRIPTEN__
  printf("running with __EMSCRIPTEN__\n");
  // If using own main loop, must use explicit context swapping (explicitSwapControl and OFFSCREENCANVAS_SUPPORT)
  emscripten_set_main_loop(mainLoop, 0, 1);
#else
  printf("running with glew\n");
  DCHECK(quitApp == false);
  while (!quitApp) {
    mainLoop();
  }
#endif

  printf("Running cleanup...\n");

#if defined(ENABLE_SKIA)
  cleanup_skia();

  GL_CHECK( glDeleteTextures(1, &skia_texture) );
#endif // ENABLE_SKIA

  GL_CHECK( glDeleteBuffers(1, &vertexPosObject) );

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
  if (glContext) {
    SDL_GL_DeleteContext(glContext);
  }
#endif

  /*if (ttfFont) {
    TTF_CloseFont(ttfFont);
    ttfFont = nullptr;
  }*/

#if defined(ENABLE_SKIA) && defined(ENABLE_SKOTTIE)
  fAnimation.reset();
#endif

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  SDL_DestroyWindow(window);
  window = nullptr;
#endif

#if defined(ENABLE_SKIA) && defined(ENABLE_CUSTOM_FONTS)
  delete skFont1;
  delete skFont2;
#endif

  // Quit SDL subsystems
  //TTF_Quit();

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  SDL_Quit();
#endif

  return 0;
}
