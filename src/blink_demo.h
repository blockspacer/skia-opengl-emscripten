#pragma once

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

//#include "third_party/blink/renderer/core/dom/document.h"
//#include "third_party/blink/renderer/core/frame/local_frame_view.h"
//#include "third_party/blink/renderer/core/html/canvas/html_canvas_element.h"
//#include "third_party/blink/renderer/core/html/canvas/image_data.h"
//#include "third_party/blink/renderer/core/html/html_image_element.h"
//#include "third_party/blink/renderer/core/html/media/html_video_element.h"
//#include "third_party/blink/renderer/core/loader/resource/image_resource_content.h"


//#include "third_party/blink/renderer/platform/graphics/color_correction_test_utils.h"
#include "third_party/blink/renderer/platform/graphics/gpu/shared_gpu_context.h"
#include "third_party/blink/renderer/platform/graphics/skia/skia_utils.h"
//#include "third_party/blink/renderer/platform/graphics/test/fake_gles2_interface.h"
//#include "third_party/blink/renderer/platform/graphics/test/fake_web_graphics_context_3d_provider.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/heap/heap.h"
//#include "third_party/blink/renderer/platform/loader/fetch/memory_cache.h"
//#include "third_party/blink/renderer/platform/loader/fetch/resource_request.h"

#include "third_party/blink/renderer/platform/geometry/float_rect.h"
#include "third_party/blink/renderer/platform/geometry/int_rect.h"
#include "third_party/blink/renderer/platform/geometry/layout_point.h"
#include "third_party/blink/renderer/platform/geometry/layout_rect.h"
#include "third_party/blink/renderer/platform/wtf/allocator.h"
#include "third_party/blink/renderer/platform/wtf/forward.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"
#include "third_party/blink/renderer/platform/heap/thread_state.h"
//#include "third_party/blink/renderer/platform/scheduler/public/thread_scheduler.h"
#include "third_party/blink/public/platform/platform.h"
#include "third_party/blink/renderer/platform/shared_buffer.h"

#if defined(ENABLE_IMAGES)
#include "third_party/blink/renderer/platform/graphics/accelerated_static_bitmap_image.h"
#include "third_party/blink/renderer/platform/graphics/static_bitmap_image.h"
//#include "third_party/blink/renderer/core/imagebitmap/image_bitmap.h"
#include "third_party/blink/renderer/platform/image-decoders/image_decoder.h"
//#include "third_party/blink/renderer/platform/image-decoders/image_decoder.h"

#endif // ENABLE_IMAGES

#endif // ENABLE_BLINK_PLATFORM

#ifdef ENABLE_BLINK_UI
#include "skiafy_icons.h"

#include "ui/gfx/canvas.h"
#include "ui/gfx/font_list.h"
#include "ui/gfx/font.h"
#include "ui/gfx/font_render_params.h"
#include "ui/gfx/skia_font_delegate.h"
#include "ui/gfx/text_utils.h"
#include "ui/gfx/paint_vector_icon.h"
#include "ui/gfx/vector_icon_types.h"
#include "ui/gfx/platform_font_skia.h"
//#include "ui/views/border.h"
//#include "ui/views/controls/button/checkbox.h"
//#include "ui/views/controls/combobox/combobox.h"
//#include "ui/views/controls/label.h"
//#include "ui/views/examples/example_combobox_model.h"
//#include "ui/views/layout/grid_layout.h"
//#include "ui/views/view.h"
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
#ifdef HAS_ICU
#include "third_party/icu/source/common/unicode/uscript.h"
#endif
#include "ui/gfx/canvas.h"
#include "ui/gfx/font_list.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/safe_integer_conversions.h"
#include "ui/gfx/geometry/vector2d.h"
#include "ui/gfx/render_text.h"
#include "ui/gfx/shadow_value.h"
#include "ui/gfx/text_elider.h"

#include "ui/gfx/image/image_skia_source.h"
#include "ui/gfx/codec/jpeg_codec.h"
#include "ui/gfx/codec/png_codec.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/image/image_skia.h"
#include "ui/gfx/image/image_skia_operations.h"
#include "ui/gfx/image/image_util.h"

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
#endif // ENABLE_UI


#ifdef ENABLE_GFX_GEOMETRY
#include "ui/gfx/geometry/rect.h"
#endif
