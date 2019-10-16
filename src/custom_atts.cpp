#include "custom_atts.h"
//#include "gl_helpers.h"

#include <map>
#include <string>

#include "cobalt/cssom/length_value.h"
#include "cobalt/cssom/number_value.h"
#include "cobalt/cssom/property_definitions.h"
#include "cobalt/cssom/rgba_color_value.h"
#include "cobalt/web_animations/keyframe_effect_read_only.h"
#include "cobalt/base/tokens.h"
#include "cobalt/cssom/css_declared_style_data.h"
#include "cobalt/cssom/css_keyframes_rule.h"
#include "cobalt/cssom/property_definitions.h"
#include "cobalt/cssom/timing_function_list_value.h"
#include "cobalt/dom/animation_event.h"
#include "cobalt/dom/dom_animatable.h"
#include "cobalt/dom/css_animations_adapter.h"
#include "cobalt/dom/css_transitions_adapter.h"
#include "cobalt/web_animations/keyframe.h"
#include "cobalt/web_animations/keyframe_effect_read_only.h"
#include "cobalt/web_animations/animation_effect_timing_read_only.h"

#include <map>
#include "base/containers/small_map.h"
#include "base/memory/weak_ptr.h"
#include "base/optional.h"
#include "base/strings/string_piece.h"

#include "cobalt/base/token.h"

#include "cobalt/cssom/style_sheet_list.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/node.h"
#include "cobalt/script/exception_state.h"
#include "cobalt/web_animations/animation_set.h"

#include "cobalt/dom/event_target.h"

#include "base/observer_list.h"
#include "base/observer_list_types.h"

namespace skemgl {

#if defined(ENABLE_COBALT)
static std::map<std::string, cobalt::dom::EventCallback> eventCallbacks;

// see https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/cobalt/src/cobalt/dom/css_animations_adapter.cc#L94
//static cobalt::web_animations::KeyframeEffectReadOnly::Data
static std::vector<cobalt::web_animations::Keyframe::Data>
  CreateKeyframeEffectWithTwoNumberKeyframes(
    //cobalt::cssom::PropertyKey target_property,
    double offset1,
    /*int widthStart,
    int heightStart,*/
    float opacityStart,
    double offset2,
    /*int widthEnd,
    int heightEnd,*/
    float opacityEnd)
{
  std::vector<cobalt::web_animations::Keyframe::Data> keyframes;

  cobalt::web_animations::Keyframe::Data frame1(offset1);

  frame1.AddPropertyValue(cobalt::cssom::kOpacityProperty,
    new cobalt::cssom::NumberValue(opacityStart));

  /*frame1.AddPropertyValue(cobalt::cssom::kHeightProperty,
    new cobalt::cssom::LengthValue(heightStart,
      cobalt::cssom::kPixelsUnit));

  frame1.AddPropertyValue(cobalt::cssom::kWidthProperty,
    new cobalt::cssom::LengthValue(widthStart,
      cobalt::cssom::kPixelsUnit));*/

  keyframes.push_back(frame1);

  cobalt::web_animations::Keyframe::Data frame2(offset2);

  frame2.AddPropertyValue(cobalt::cssom::kOpacityProperty,
    new cobalt::cssom::NumberValue(opacityEnd));

  /*frame2.AddPropertyValue(cobalt::cssom::kHeightProperty,
    new cobalt::cssom::LengthValue(heightEnd,
      cobalt::cssom::kPixelsUnit));

  frame2.AddPropertyValue(cobalt::cssom::kWidthProperty,
    new cobalt::cssom::LengthValue(widthEnd,
      cobalt::cssom::kPixelsUnit));*/

  keyframes.push_back(frame2);

  //set_easing

  return keyframes;

  //return cobalt::web_animations::KeyframeEffectReadOnly::Data(
  //    /*add_noise_keyframes ? AddNoiseKeyframes(keyframes) :*/ keyframes);
}

//static bool created_web_anim = false;

/// \todo hangle intermidate phases, not only finish
static void HandleAnimationEnterAfterPhase(
    cobalt::dom::HTMLElement* elementHTML,
    cobalt::dom::HTMLElement* ripple_effect_parent,
    cobalt::dom::HTMLElement* ripple_effect,
    cobalt::web_animations::AnimationEffectTimingReadOnly* timing_input,
    cobalt::web_animations::KeyframeEffectReadOnly* keyframe_effect,
    cobalt::web_animations::Animation* web_animation)
{
  std::cout << "custom_atts.cpp: HandleAnimationEnterAfterPhase" << std::endl;

  DCHECK(elementHTML);
  DCHECK(elementHTML->animations_adapter_.animatable_);
  DCHECK(elementHTML->animations_adapter_.animatable_->
    GetDefaultTimeline()->current_time());

  DCHECK(ripple_effect);
  DCHECK(ripple_effect->animations_adapter_.animatable_);
  DCHECK(ripple_effect->animations_adapter_.animatable_->
    GetDefaultTimeline()->current_time());

  base::TimeDelta current_time = base::TimeDelta::FromMillisecondsD(
      ripple_effect->animations_adapter_.animatable_->
        GetDefaultTimeline()->current_time().value_or(0));

  //animation_set->Update(
  //  current_time, *elementHTML->animations_adapter_.animatable_->GetComputedStyle(),
  //  elementHTML->animations_adapter_.animatable_->GetKeyframesMap());

  cobalt::web_animations::AnimationEffectTimingReadOnly::Data::
    IterationProgress progress
      = timing_input->data().ComputeIterationProgressFromLocalTime(
        current_time//base::Time::Now().ToDoubleT()
        );

  printf("timing_input->iterations %f\n", timing_input->iterations());
  printf("timing_input->duration %f\n", timing_input->duration());
  printf("current_time InSeconds %ld\n", current_time.InSeconds());
  printf("iteration_progress %f\n", progress.iteration_progress.value_or(0.0));
  printf("current_iteration %f\n", progress.current_iteration.value_or(0.0f));

  //elementHTML->SetStyleAttribute();

  const float kEpsilon = 0.01f;
  bool finalIteration
   = std::fabs(timing_input->iterations()
     - progress.current_iteration.value_or(0.0)) < kEpsilon;
  if(finalIteration) {
    // TODO: remove here
  }

  DCHECK(ripple_effect_parent->RemoveChild(ripple_effect));
}


///\todo just use set_transition_property, not addRippleAnimationOnce
// see OnAnimationStarted
// https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/cobalt/src/cobalt/dom/css_animations_adapter.cc#L157
static void addRippleAnimationOnce(
    const cobalt::math::Vector2dF& elementLocalPos,
    cobalt::dom::HTMLElement* elementHTML)
{
  std::cout << "addRippleAnimationOnce" << std::endl;

  DCHECK(elementHTML);
  CHECK(elementHTML->animations_adapter_.animatable_);

  scoped_refptr<cobalt::dom::HTMLElement> ripple_layer;
  scoped_refptr<cobalt::dom::HTMLCollection> found_ripple_layers
    = elementHTML->GetElementsByClassName("ripple-effect-layer");
  if(found_ripple_layers && found_ripple_layers->length()) {
    ripple_layer = found_ripple_layers->Item(0)->AsHTMLElement();
  } else {
    ripple_layer =
      elementHTML->AppendChild(
        new cobalt::dom::HTMLDivElement(
          elementHTML->node_document()))
          ->AsElement()
          ->AsHTMLElement();
    ripple_layer->set_class_name("ripple-effect-layer");
  }

  /// \note Always clear the matching state when an attribute changes.
  /// Any attribute changing can potentially impact the matching rules.
  elementHTML->ClearRuleMatchingState();

  DCHECK(ripple_layer);
  scoped_refptr<cobalt::dom::HTMLElement> ripple_effect =
    ripple_layer->AppendChild(
      new cobalt::dom::HTMLDivElement(
        elementHTML->node_document()))
        ->AsElement()
        ->AsHTMLElement();
  ripple_effect->set_class_name("ripple-effect");

  /// \note Always clear the matching state when an attribute changes.
  /// Any attribute changing can potentially impact the matching rules.
  elementHTML->ClearRuleMatchingState();
  ripple_layer->ClearRuleMatchingState();

  float maxSize = std::fmax(elementHTML->GetBoundingClientRect()->width(),
                            elementHTML->GetBoundingClientRect()->height());
  ripple_effect->style()->set_width(
      std::to_string(maxSize) + "px",
      nullptr);
  ripple_effect->style()->set_height(
      std::to_string(maxSize) + "px",
      nullptr);

  ripple_effect->style()->set_left(
    std::to_string(elementLocalPos.x()) + "px", nullptr);
  ripple_effect->style()->set_top(
    std::to_string(elementLocalPos.y()) + "px", nullptr);

  /// \note Always clear the matching state when an attribute changes.
  /// Any attribute changing can potentially impact the matching rules.
  elementHTML->ClearRuleMatchingState();
  ripple_layer->ClearRuleMatchingState();
  ripple_effect->ClearRuleMatchingState();

  scoped_refptr<cobalt::web_animations::AnimationEffectTimingReadOnly>
    timing_input;

  scoped_refptr<cobalt::web_animations::KeyframeEffectReadOnly>
    keyframe_effect;

  scoped_refptr<cobalt::web_animations::Animation>
    web_animation;

  std::unique_ptr<cobalt::web_animations::Animation::EventHandler>
    event_handler;

  DCHECK(!web_animation);
  //if(!web_animation)
  {
    //return; // TODO: used add once

    // Transfer the CSS Animation timing information into a Web Animations
    // AnimationEffectTimingReadOnly object.
    // https://drafts.csswg.org/date/2015-03-02/web-animations-css-integration/#web-animations-instantiation
    timing_input
      = new cobalt::web_animations::AnimationEffectTimingReadOnly(
            base::TimeDelta(), //css_animation.delay(),
            base::TimeDelta(), // end_delay
            cobalt::web_animations::
              AnimationEffectTimingReadOnly::kForwards, //CSSToWebFillMode(css_animation.fill_mode()),
            0.0, // iteration_start
            1.0, //std::numeric_limits<double>::infinity(), // css_animation.iteration_count(),
            base::TimeDelta::FromMilliseconds(800), //css_animation.duration(),
            cobalt::web_animations::AnimationEffectTimingReadOnly::
              kNormal, //CSSToWebDirection(css_animation.direction()),
            //cobalt::cssom::TimingFunction::GetLinear()
            cobalt::cssom::TimingFunction::GetEaseInOut()
        );

    // TODO elementHTML->set_ontransitionend();

    //static cobalt::web_animations::KeyframeEffectReadOnly::Data
    std::vector<cobalt::web_animations::Keyframe::Data>
      effectData =
        CreateKeyframeEffectWithTwoNumberKeyframes(
          0.0, // offset1
          0.9f, // opacityStart
          0.0, // offset2
          0.0f // opacityEnd
      );

    // Construct the web_animations keyframe data from the CSS Animations keyframe
    // data.
    DCHECK(timing_input);
    keyframe_effect =
      new cobalt::web_animations::KeyframeEffectReadOnly(
          timing_input,
          ripple_effect->animations_adapter_.animatable_, //animatable_,
          //keyframe_effect_checker
          effectData
          //ConvertCSSKeyframesToWebAnimationsKeyframes(
          //    *css_animation.keyframes(),
          //    css_animation.timing_function())
     );

    // Finally setup and play our animation.
    DCHECK(keyframe_effect);
    DCHECK(ripple_effect);
    web_animation =
      new cobalt::web_animations::Animation(
        keyframe_effect,
        ripple_effect->animations_adapter_.animatable_->
          GetDefaultTimeline()
      );//animatable_->GetDefaultTimeline()));

     //animation.set_effect(effect);
     //animation.set_timeline(elem->node_document()->timeline());

     /*web_animation->
      set_start_time(base::Time::Now().ToDoubleT());
      //Delta::FromSeconds(2));
     web_animation->
      set_playback_rate(1.0);*/

    //base::Bind(&MyFunc, 23);

    DCHECK(web_animation);
    ripple_effect->animations()->AddAnimation(web_animation.get());

    /// \todo free memory binded to handler via RetainedRef
    // RemoveEventHandler called when the EventHandler object is destructed, this "deregisters"
    // the event handler from the Animation's event handler set.
    //event_handler =
    //  web_animation->RemoveEventHandler(std::move(cb));

    // Setup an event handler on the animation so we can watch for when it enters
    // the after phase, allowing us to then trigger the animation events.
    DCHECK(timing_input);
    DCHECK(keyframe_effect);
    DCHECK(web_animation);
    base::Callback<void()> cb =
            // see https://chromium.googlesource.com/chromium/src.git/+/master/docs/callback.md
            base::Bind(&HandleAnimationEnterAfterPhase,
              /*base::Unretained(this),*/
              base::Unretained(elementHTML),
              base::Unretained(ripple_layer.get()),
              base::Unretained(ripple_effect.get()),
              base::Unretained(timing_input.get()),
              base::Unretained(keyframe_effect.get()),
              /// \note refcounted stored in animation_map_
              base::Unretained(web_animation.get())
            );

    DCHECK(cb);
    event_handler =
      web_animation->AttachEventHandler(std::move(cb));

    DCHECK(event_handler);
    DCHECK(ripple_effect);
    DCHECK(web_animation);
    ripple_effect->animations_adapter_.animation_map_.insert(
      std::make_pair(
        //std::string, AnimationWithEventHandler*
        cobalt::cssom::GetPropertyName(cobalt::cssom::kOpacityProperty),
        new cobalt::dom::CSSAnimationsAdapter::
          AnimationWithEventHandler(
            web_animation, std::move(event_handler))));

    web_animation->Play();

    printf("created custom animation!\n");
  }

#if 0
  /// \todo ugly HACK to repaint element
  DCHECK(elementHTML);
  //DCHECK(elementHTML->IsFocusable());
  if(elementHTML->IsDisplayed()) { /// \todo do we IsDisplayed here?
    if(elementHTML->node_document()->active_element() == elementHTML) {
      elementHTML->Blur();
      elementHTML->Focus();
    } else {
      elementHTML->Focus();
      elementHTML->Blur();
    }
  }

  /// \todo ugly HACK to repaint element
  DCHECK(ripple_layer);
  //DCHECK(ripple_layer->IsFocusable());
  if(ripple_layer->IsDisplayed()) { /// \todo do we IsDisplayed here?
    if(ripple_layer->node_document()->active_element() == ripple_layer) {
      ripple_layer->Blur();
      ripple_layer->Focus();
    } else {
      ripple_layer->Focus();
      ripple_layer->Blur();
    }
  }

  /// \todo ugly HACK to repaint element
  DCHECK(ripple_effect);
  //DCHECK(ripple_effect->IsFocusable());
  if(ripple_effect->IsDisplayed()) { /// \todo do we IsDisplayed here?
    if(ripple_effect->node_document()->active_element() == ripple_effect) {
      ripple_effect->Blur();
      ripple_effect->Focus();
    } else {
      ripple_effect->Focus();
      ripple_effect->Blur();
    }
  }

  /// \note Always clear the matching state when an attribute changes.
  /// Any attribute changing can potentially impact the matching rules.
  elementHTML->ClearRuleMatchingState();
  ripple_layer->ClearRuleMatchingState();
  ripple_effect->ClearRuleMatchingState();

  /*/// \todo ugly HACK to repaint element, works with event propagation
  elementHTML->style()->set_visibility("visible", nullptr); // <<<

  /// \todo ugly HACK to repaint element, works with event propagation
  ripple_layer->style()->set_visibility("visible", nullptr); // <<<

  /// \todo ugly HACK to repaint element, works with event propagation
  ripple_effect->style()->set_visibility("visible", nullptr); // <<<*/

  //ripple_effect->style()->set_width("100px", nullptr); // <<<
  //ripple_effect->style()->set_height("100px", nullptr); // <<<

  ripple_effect->SetAttribute("display", "none");
  ripple_layer->SetAttribute("display", "none");
  elementHTML->SetAttribute("display", "none");

  // calls ClearRuleMatchingState, SetDirectionality and SetTabIndex
  // Always clear the matching state when an attribute changes. Any attribute
  // changing can potentially impact the matching rules.
  /// \todo do we need it here?
  elementHTML->ClearRuleMatchingState();
  ripple_effect->ClearRuleMatchingState();

  /// \todo do we need it here?
  elementHTML->OnCSSMutation();

  /// \todo ugly HACK to repaint element
  /// calls HTMLElement::UpdateComputedStyleRecursively
  elementHTML->node_document()->SampleTimelineTime();
  elementHTML->node_document()->UpdateComputedStyles();

  /// \todo do we need it here?
  elementHTML->UpdateMatchingRules();
  ripple_effect->UpdateMatchingRules();

  ripple_effect->SetAttribute("display", "block");
  ripple_layer->SetAttribute("display", "block");
  elementHTML->SetAttribute("display", "block");

  // calls ClearRuleMatchingState, SetDirectionality and SetTabIndex
  // Always clear the matching state when an attribute changes. Any attribute
  // changing can potentially impact the matching rules.
  /// \todo do we need it here?
  elementHTML->ClearRuleMatchingState();
  ripple_effect->ClearRuleMatchingState();

  /// \todo do we need it here?
  elementHTML->OnCSSMutation();

  /// \todo ugly HACK to repaint element
  /// calls HTMLElement::UpdateComputedStyleRecursively
  elementHTML->node_document()->SampleTimelineTime();
  elementHTML->node_document()->UpdateComputedStyles();

  /// \todo do we need it here?
  elementHTML->UpdateMatchingRules();
  ripple_effect->UpdateMatchingRules();
#endif // 0
}

void addTestOnlyAttrCallbacks() {
    eventCallbacks["on-mousemove-event"]
      = [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal) {
        CHECK(elem);
        //const cobalt::dom::PointerEvent* pointerEvent;
        const cobalt::dom::MouseEvent* mouseEvent;
        /*if(event->type() == base::Tokens::povisibilitychange()) {
      pointerEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const cobalt::dom::PointerEvent*>(event.get());
    }*/
        mouseEvent =
            // TODO: base::polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
            base::polymorphic_downcast<const cobalt::dom::MouseEvent*>(
              event.get());
        CHECK(/*pointerEvent ||*/ mouseEvent);
        float x = /*pointerEvent ? pointerEvent->x() :*/ mouseEvent->x();
        float y = /*pointerEvent ? pointerEvent->y() :*/ mouseEvent->y();
        printf("mousemove at (%f;%f) event %s for tag: %s, "
               "attrVal: %s, text_content: %s\n",
               x,
               y,
               event->type().c_str(),
               elem->tag_name().c_str(),
               attrVal.c_str(),
               elem->text_content().value_or("").c_str());
        return base::nullopt;
    };

    {
        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers>
          newCustomToken
            = std::make_shared<
                cobalt::dom::customizer::CustomTokenToObservers>(
                  [](const std::string& custom_token,
                     const std::string& prev_attr_name_lower,
                     const std::string& prev_attr_val,
                     cobalt::dom::Element& elem)
            {
                printf("called addAttrCallback v-test-attr-name\n");
                return std::string("style");
            }, base::ToLowerASCII("v-test-attr-name"));

        cobalt::dom::customizer::create_attr(newCustomToken);
    }

    {
        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers>
          newCustomToken
            = std::make_shared<
                cobalt::dom::customizer::CustomTokenToObservers>(
                  [](const std::string& custom_token,
                    const std::string& prev_attr_name_lower,
                    const std::string& prev_attr_val,
                    cobalt::dom::Element& elem)
            {
                printf("called addAttrCallback x-px\n");
                return std::string("height:40px");
            }, base::ToLowerASCII("height-x-px"));

        cobalt::dom::customizer::create_attr(newCustomToken);
    }

    {
        cobalt::dom::customizer::create_attr("width-x-px", "width:40px");
    }

    {
        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers>
          newCustomToken
            = std::make_shared<
                cobalt::dom::customizer::CustomTokenToObservers>(
                  [](const std::string& custom_token,
                     const std::string& prev_attr_name_lower,
                     const std::string& prev_attr_val,
                     cobalt::dom::Element& elem)
            {
                printf("called addAttrCallback test-y-scroll\n");
                //return std::string("transform: translateY(25px);border-radius:50px;width:50px;height:50px;");
                return std::string("transform: translateY(25px);");
            }, base::ToLowerASCII("test-y-scroll"));

        cobalt::dom::customizer::create_attr(newCustomToken);
    }

    {
        cobalt::dom::customizer::create_attr("wh", "width");
    }

    {
        cobalt::dom::customizer::
          create_attr("test-background", "background-color:#00bcd4;");
    }

    {
        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers>
          newCustomToken
            = std::make_shared<
                cobalt::dom::customizer::CustomTokenToObservers>(
              [](const std::string& custom_token,
                 const std::string& prev_attr_name_lower,
                 const std::string& prev_attr_val,
                 cobalt::dom::Element& elem)
            {
                printf("called addAttrCallback v-test-attr-val\n");

                return std::string("color:#CCC;");
            }, base::ToLowerASCII("v-test-attr-val"));

        cobalt::dom::customizer::create_attr(newCustomToken);
    }

    {
        auto mousemoveCb = [](const std::string& custom_token,
                              const std::string& prev_attr_name_lower,
                              const std::string& prev_attr_val,
                              cobalt::dom::Element& elem) {
            printf("called addAttrCallback mousemove %s %s %s\n",
                   custom_token.c_str(),
                   prev_attr_name_lower.c_str(),
                   prev_attr_val.c_str());

            {
                auto it = eventCallbacks.find(prev_attr_val);
                if(it != eventCallbacks.end()) {
                    cobalt::dom::EventCallback mousemove_cb = it->second;
                    // TODO: remove_event_cb ?
                    elem.add_event_cb(custom_token, mousemove_cb);
                } else {
                    DCHECK(false)
                      << "WARNING: can`t find callback for"
                      << prev_attr_val;
                }
            }

            return custom_token;
        };

        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers>
          mousemoveToken
            = std::make_shared<
                cobalt::dom::customizer::CustomTokenToObservers>(
                  mousemoveCb, base::ToLowerASCII("on-mousemove"));

        cobalt::dom::customizer::create_attr(mousemoveToken);
    }

    cobalt::dom::customizer::
      pair_event_to_attr("on-mouseleave",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            CHECK(elem);
            const cobalt::dom::MouseEvent* const mouseEvent
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                 = base::polymorphic_downcast<
                     const cobalt::dom::MouseEvent* const>(event.get());
            CHECK(mouseEvent);
            float x = mouseEvent->x();
            float y = mouseEvent->y();
            printf("mouseleave at (%f;%f) event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   x,
                   y,
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());
            return base::nullopt;
        });

    cobalt::dom::customizer::
      pair_event_to_attr("on-wheel-print", "on-wheel",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            printf("on-wheel-print 1\n");
            CHECK(elem);
            const cobalt::dom::WheelEvent* const wheelEvent =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  const cobalt::dom::WheelEvent* const>(event.get());
            CHECK(wheelEvent);
            float x = static_cast<float>(wheelEvent->delta_x());
            float y = static_cast<float>(wheelEvent->delta_y());
            float z = static_cast<float>(wheelEvent->delta_z());
            printf("on-wheel-print at (%f;%f;%f) event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   x,
                   y,
                   z,
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());
            return base::nullopt;
        });

    cobalt::dom::customizer::
      pair_event_to_attr("on-click-print", "on-click",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            CHECK(elem);
            const cobalt::dom::MouseEvent* const mouseEvent =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  const cobalt::dom::MouseEvent* const>(event.get());
            CHECK(mouseEvent);
            float x = mouseEvent->x();
            float y = mouseEvent->y();
            printf("on-click-print at (%f;%f) attr_val=%s event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   x,
                   y,
                   elem->GetAttribute("on-click-print").value_or("").c_str(),
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());
            return base::nullopt;
        });

    cobalt::dom::customizer::
      pair_event_to_attr("on-click-update-ripple", "on-click",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            CHECK(elem);
            const cobalt::dom::MouseEvent* const mouseEvent =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  const cobalt::dom::MouseEvent* const>(event.get());
            CHECK(mouseEvent);

            DCHECK(event->current_target());
            cobalt::dom::HTMLElement* targetHTML =
              base::polymorphic_downcast<
                  cobalt::dom::HTMLElement*>(event->current_target().get());
            DCHECK(targetHTML);

            cobalt::dom::HTMLElement* elementHTML =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  cobalt::dom::HTMLElement*>(elem.get());
            CHECK(elementHTML);
            CHECK(elementHTML->animations_adapter_.animatable_);
            float x = mouseEvent->x();
            float y = mouseEvent->y();
            printf("on-click-update-ripple at (%f;%f) attr_val=%s event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   x,
                   y,
                   elem->GetAttribute("on-click-update-ripple").value_or("").c_str(),
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());

            float maxSize = std::fmax(targetHTML->offset_width(),
                                      targetHTML->offset_height());
            /// \note style with `position:absolute` relative to parent.
            cobalt::math::Vector2dF elementLocalPos{
                mouseEvent->client_x()
                - elementHTML->GetBoundingClientRect()->left() - maxSize / 2.0f,
                mouseEvent->client_y()
                - elementHTML->GetBoundingClientRect()->top() - maxSize / 2.0f
            };

            ///\todo
            /// just use set_transition_property,
            /// not addRippleAnimationOnce
            /// BUT HOW TO BIND CALLBACK to set_transition_property
            /// set_mutation_observer without ready detection!? https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/cobalt/src/cobalt/cssom/css_declared_style_declaration_test.cc#L1345
            ///
            ///initial_data->set_transform(KeywordValue::GetNone());
            ///initial_data->set_transition_delay(MakeTimeListWithSingleTime(0.0f));
            ///initial_data->set_transition_duration(MakeTimeListWithSingleTime(0.0f));
            ///initial_data->set_transition_property(
            ///    MakePropertyNameListWithSingleProperty(kAllProperty));
            ///initial_data->set_transition_timing_function(
            ///    MakeTimingFunctionWithSingleProperty(TimingFunction::GetLinear()));

            // see OnAnimationStarted
            // https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/cobalt/src/cobalt/dom/css_animations_adapter.cc#L157
            addRippleAnimationOnce(
              elementLocalPos,
              elementHTML);

            return base::nullopt;
        });

    cobalt::dom::customizer::
      pair_event_to_attr("on-test-mouseleave", "on-mouseleave",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            CHECK(elem);
            const cobalt::dom::MouseEvent* const mouseEvent =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  const cobalt::dom::MouseEvent* const>(event.get());
            CHECK(mouseEvent);
            float x = mouseEvent->x();
            float y = mouseEvent->y();
            printf("on-test-mouseleave at (%f;%f) event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   x,
                   y,
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());
            return base::nullopt;
        });

    cobalt::dom::customizer::
      pair_event_to_attr("on-mouseover-focus", "on-mouseover",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            CHECK(elem);
            const cobalt::dom::MouseEvent* const mouseEvent =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  const cobalt::dom::MouseEvent* const>(event.get());
            CHECK(mouseEvent);
            float x = mouseEvent->x();
            float y = mouseEvent->y();
            printf("on-test-mouseover at (%f;%f) event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   x,
                   y,
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());
            //event->target()
            cobalt::dom::HTMLElement* elementHTML =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  cobalt::dom::HTMLElement*>(elem.get());
            CHECK(elementHTML);
            //elementHTML->GetUiNavItem()->Focus();
            elementHTML->Focus();
            return base::nullopt;
        });

    cobalt::dom::customizer::
      pair_event_to_attr("on-mouseout-blur", "on-mouseout",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            CHECK(elem);
            cobalt::dom::Document* document = elem->node_document();
            CHECK(document);
            scoped_refptr<cobalt::dom::HTMLElement> indicated_element
              = document->indicated_element();
            CHECK(indicated_element);
            const cobalt::dom::MouseEvent* const mouseEvent =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  const cobalt::dom::MouseEvent* const>(event.get());
            CHECK(mouseEvent);
            float x = mouseEvent->x();
            float y = mouseEvent->y();
            printf("on-test-mouseout at (%f;%f) event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   x,
                   y,
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());
            cobalt::dom::HTMLElement* elementHTML =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  cobalt::dom::HTMLElement*>(elem.get());
            CHECK(elementHTML);
            elementHTML->Blur();
            /*//elementHTML->GetUiNavItem()->Blur();
if(indicated_element == elementHTML) {
printf("indicated_element == elementHTML\n");
//elementHTML->Blur();
} else {
//elementHTML->Blur();
}*/
            return base::nullopt;
        });

    cobalt::dom::customizer::
      pair_event_to_attr("on-keyup-print", "on-keyup",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            CHECK(elem);
            const cobalt::dom::KeyboardEvent* const keyboardEvent
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                = base::polymorphic_downcast<
                  const cobalt::dom::KeyboardEvent* const>(event.get());
            CHECK(keyboardEvent);
            printf("on-test-keyup key %s event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   keyboardEvent->key().c_str(),
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());
            printf("which %d\n", keyboardEvent->which());
            printf("keyup character %d\n", keyboardEvent->keysym());
            //printf("keyup str %s\n", keyboardEvent->keysym());

            /// \note allows to get localized text
            const wchar_t* wchar_src = new wchar_t[1] {
                keyboardEvent->keysym()
            };
            std::string utf8_str;
            if (base::WideToUTF8(wchar_src, 1, &utf8_str)
                && !utf8_str.empty())
            {
                printf("keyup normalized_str %s\n", utf8_str.c_str());
            }

            wprintf(L"keysym character, %s", keyboardEvent->keysym());
            printf("ctrl_key %d\n", keyboardEvent->ctrl_key());
            printf("shift_key %d\n", keyboardEvent->shift_key());
            printf("alt_key %d\n", keyboardEvent->alt_key());
            printf("meta_key %d\n", keyboardEvent->meta_key());
            printf("code %s\n", keyboardEvent->code().c_str());
            printf("key_identifier %s\n",
              keyboardEvent->key_identifier().c_str());
            printf("char_code %u\n", keyboardEvent->char_code());
            printf("key_code %u\n", keyboardEvent->key_code());
  #ifdef OS_EMSCRIPTEN
            printf("time_stamp %llu\n", keyboardEvent->time_stamp());
  #else
            printf("time_stamp %lu\n", keyboardEvent->time_stamp());
  #endif
            // base::ReadUnicodeCharacter
            const char* sbSystemGetLocaleId = SbSystemGetLocaleId();
            printf("SbSystemGetLocaleId %s\n", sbSystemGetLocaleId);

            cobalt::dom::HTMLElement* elementHTML =
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                base::polymorphic_downcast<
                  cobalt::dom::HTMLElement*>(elem.get());
            CHECK(elementHTML);
            return base::nullopt;
        });

    cobalt::dom::customizer::
      pair_event_to_attr("on-keypress-print", "on-keypress",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            CHECK(elem);
            const cobalt::dom::KeyboardEvent* const keyboardEvent
                // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                = base::polymorphic_downcast<
                  const cobalt::dom::KeyboardEvent* const>(event.get());
            CHECK(keyboardEvent);
            printf("on-test-keypress key %s event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   keyboardEvent->key().c_str(),
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());
            printf("which %d\n", keyboardEvent->which());
            printf("character %d\n", keyboardEvent->keysym());
            wprintf(L"wprintf character %s\n", keyboardEvent->keysym());

  /*
  #if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
            printf("printf character SDL_GetKeyName %s\n", SDL_GetKeyName(keyboardEvent->keysym()));
  #endif*/

            //printf("keypress str %s\n", keyboardEvent->keysym());

            /// \note allows to get localized text
            const wchar_t* wchar_src = new wchar_t[1] {
                keyboardEvent->keysym()
            };
            std::string utf8_str;
            if (base::WideToUTF8(wchar_src, 1, &utf8_str)
                && !utf8_str.empty()) {
                printf("keypress normalized_str %s\n", utf8_str.c_str());
            }

            wprintf(L"keysym character, %s", keyboardEvent->keysym());
            printf("ctrl_key %d\n", keyboardEvent->ctrl_key());
            printf("shift_key %d\n", keyboardEvent->shift_key());
            printf("alt_key %d\n", keyboardEvent->alt_key());
            printf("meta_key %d\n", keyboardEvent->meta_key());
            printf("code %s\n", keyboardEvent->code().c_str());
            printf("key_identifier %s\n",
              keyboardEvent->key_identifier().c_str());
            printf("char_code %u\n", keyboardEvent->char_code());
            printf("key_code %u\n", keyboardEvent->key_code());
  #ifdef OS_EMSCRIPTEN
            printf("time_stamp %llu\n", keyboardEvent->time_stamp());
  #else
            printf("time_stamp %lu\n", keyboardEvent->time_stamp());
  #endif
            // base::ReadUnicodeCharacter
            const char* sbSystemGetLocaleId = SbSystemGetLocaleId();
            printf("SbSystemGetLocaleId %s\n", sbSystemGetLocaleId);

            cobalt::dom::HTMLElement* elementHTML =
              // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
              base::polymorphic_downcast<
                cobalt::dom::HTMLElement*>(elem.get());
            CHECK(elementHTML);
            return base::nullopt;
        });

    cobalt::dom::customizer::
      pair_event_to_attr("on-keydown-print", "on-keydown",
        [](const scoped_refptr<cobalt::dom::Event> &event,
           scoped_refptr<cobalt::dom::Element> elem,
           const std::string& attrVal)
        {
            CHECK(elem);
            /*const cobalt::dom::PointerEvent* const pointerEvent =
  // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
  static_cast<const cobalt::dom::PointerEvent* const>(event.get());*/
            const cobalt::dom::KeyboardEvent* const keyboardEvent
              // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
              = base::polymorphic_downcast<
                const cobalt::dom::KeyboardEvent* const>(event.get());
            CHECK(keyboardEvent);
            printf("on-test-keydown key %s event %s for tag: %s, "
                   "attrVal: %s, text_content: %s\n",
                   keyboardEvent->key().c_str(),
                   event->type().c_str(),
                   elem->tag_name().c_str(),
                   attrVal.c_str(),
                   elem->text_content().value_or("").c_str());
            //event->target()
            cobalt::dom::HTMLElement* elementHTML =
              // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
              base::polymorphic_downcast<
                cobalt::dom::HTMLElement*>(elem.get());
            CHECK(elementHTML);
            return base::nullopt;
        });
}
#endif // ENABLE_COBALT

} // namespace skemgl
