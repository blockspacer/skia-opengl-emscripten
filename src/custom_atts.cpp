#include "custom_atts.h"
//#include "gl_helpers.h"

#include <map>
#include <string>

namespace skemgl {

#if defined(ENABLE_COBALT)
static std::map<std::string, cobalt::dom::EventCallback> eventCallbacks;

void addTestOnlyAttrCallbacks() {
    eventCallbacks["on-mousemove-event"] = [](const scoped_refptr<cobalt::dom::Event> &event,
                                              scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
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
            base::polymorphic_downcast<const cobalt::dom::MouseEvent*>(event.get());
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
        return true;
    };

    {
        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers> newCustomToken =
            std::make_shared<cobalt::dom::customizer::CustomTokenToObservers>([](const std::string& custom_token,
                                                        const std::string& prev_attr_name_lower,
                                                        const std::string& prev_attr_val,
                                                        cobalt::dom::Element& elem) {
                printf("called addAttrCallback v-test-attr-name\n");
                return std::string("style");
            }, base::ToLowerASCII("v-test-attr-name"));

        cobalt::dom::customizer::create_attr(newCustomToken);
    }

    {
        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers> newCustomToken =
            std::make_shared<cobalt::dom::customizer::CustomTokenToObservers>([](const std::string& custom_token,
                                                        const std::string& prev_attr_name_lower,
                                                        const std::string& prev_attr_val,
                                                        cobalt::dom::Element& elem) {
                printf("called addAttrCallback x-px\n");
                return std::string("height:40px");
            }, base::ToLowerASCII("height-x-px"));

        cobalt::dom::customizer::create_attr(newCustomToken);
    }

    {
        cobalt::dom::customizer::create_attr("width-x-px", "width:40px");
    }

    {
        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers> newCustomToken =
            std::make_shared<cobalt::dom::customizer::CustomTokenToObservers>([](const std::string& custom_token,
                                                        const std::string& prev_attr_name_lower,
                                                        const std::string& prev_attr_val,
                                                        cobalt::dom::Element& elem) {
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
        cobalt::dom::customizer::create_attr("test-background", "background-color:#00bcd4;");
    }

    {
        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers> newCustomToken =
            std::make_shared<cobalt::dom::customizer::CustomTokenToObservers>([](const std::string& custom_token,
                                                        const std::string& prev_attr_name_lower,
                                                        const std::string& prev_attr_val,
                                                        cobalt::dom::Element& elem) {
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
                   custom_token.c_str(), prev_attr_name_lower.c_str(), prev_attr_val.c_str());

            {
                auto it = eventCallbacks.find(prev_attr_val);
                if(it != eventCallbacks.end()) {
                    cobalt::dom::EventCallback mousemove_cb = it->second;
                    // TODO: remove_event_cb ?
                    elem.add_event_cb(custom_token, mousemove_cb);
                } else {
                    DCHECK(false) << "WARNING: can`t find callback for" << prev_attr_val;
                }
            }

            return custom_token;
        };

        std::shared_ptr<cobalt::dom::customizer::CustomTokenToObservers> mousemoveToken =
            std::make_shared<cobalt::dom::customizer::CustomTokenToObservers>(mousemoveCb, base::ToLowerASCII("on-mousemove"));

        cobalt::dom::customizer::create_attr(mousemoveToken);
    }

    cobalt::dom::customizer::pair_event_to_attr("on-mouseleave",
                                                [](const scoped_refptr<cobalt::dom::Event> &event,
                                                   scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
                                                    CHECK(elem);
                                                    const cobalt::dom::MouseEvent* const mouseEvent =
                                                        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                                                        base::polymorphic_downcast<const cobalt::dom::MouseEvent* const>(event.get());
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
                                                    return true;
                                                });

    cobalt::dom::customizer::pair_event_to_attr("on-wheel-print", "on-wheel",
                                                [](const scoped_refptr<cobalt::dom::Event> &event,
                                                   scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
                                                    printf("on-wheel-print 1\n");
                                                    CHECK(elem);
                                                    const cobalt::dom::WheelEvent* const wheelEvent =
                                                        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                                                        base::polymorphic_downcast<const cobalt::dom::WheelEvent* const>(event.get());
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
                                                    return true;
                                                });

    cobalt::dom::customizer::pair_event_to_attr("on-click-print", "on-click",
                                                [](const scoped_refptr<cobalt::dom::Event> &event,
                                                   scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
                                                    CHECK(elem);
                                                    const cobalt::dom::MouseEvent* const mouseEvent =
                                                        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                                                        base::polymorphic_downcast<const cobalt::dom::MouseEvent* const>(event.get());
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
                                                    return true;
                                                });

    cobalt::dom::customizer::pair_event_to_attr("on-test-mouseleave", "on-mouseleave",
                                                [](const scoped_refptr<cobalt::dom::Event> &event,
                                                   scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
                                                    CHECK(elem);
                                                    const cobalt::dom::MouseEvent* const mouseEvent =
                                                        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                                                        base::polymorphic_downcast<const cobalt::dom::MouseEvent* const>(event.get());
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
                                                    return true;
                                                });

    cobalt::dom::customizer::pair_event_to_attr("on-mouseover-focus", "on-mouseover",
                                                [](const scoped_refptr<cobalt::dom::Event> &event,
                                                   scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
                                                    CHECK(elem);
                                                    const cobalt::dom::MouseEvent* const mouseEvent =
                                                        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                                                        base::polymorphic_downcast<const cobalt::dom::MouseEvent* const>(event.get());
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
                                                        base::polymorphic_downcast<cobalt::dom::HTMLElement*>(elem.get());
                                                    CHECK(elementHTML);
                                                    //elementHTML->GetUiNavItem()->Focus();
                                                    elementHTML->Focus();
                                                    return true;
                                                });

    cobalt::dom::customizer::pair_event_to_attr("on-mouseout-blur", "on-mouseout",
                                                [](const scoped_refptr<cobalt::dom::Event> &event,
                                                   scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
                                                    CHECK(elem);
                                                    cobalt::dom::Document* document = elem->node_document();
                                                    CHECK(document);
                                                    scoped_refptr<cobalt::dom::HTMLElement> indicated_element = document->indicated_element();
                                                    CHECK(indicated_element);
                                                    const cobalt::dom::MouseEvent* const mouseEvent =
                                                        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                                                        base::polymorphic_downcast<const cobalt::dom::MouseEvent* const>(event.get());
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
                                                        base::polymorphic_downcast<cobalt::dom::HTMLElement*>(elem.get());
                                                    CHECK(elementHTML);
                                                    elementHTML->Blur();
                                                    /*//elementHTML->GetUiNavItem()->Blur();
      if(indicated_element == elementHTML) {
        printf("indicated_element == elementHTML\n");
        //elementHTML->Blur();
      } else {
        //elementHTML->Blur();
      }*/
                                                    return true;
                                                });

    cobalt::dom::customizer::pair_event_to_attr("on-keyup-print", "on-keyup",
                                                [](const scoped_refptr<cobalt::dom::Event> &event,
                                                   scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
                                                    CHECK(elem);
                                                    const cobalt::dom::KeyboardEvent* const keyboardEvent =
                                                        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                                                        base::polymorphic_downcast<const cobalt::dom::KeyboardEvent* const>(event.get());
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
                                                    if (base::WideToUTF8(wchar_src, 1, &utf8_str) && !utf8_str.empty()) {
                                                        printf("keyup normalized_str %s\n", utf8_str.c_str());
                                                    }

                                                    wprintf(L"keysym character, %s", keyboardEvent->keysym());
                                                    printf("ctrl_key %d\n", keyboardEvent->ctrl_key());
                                                    printf("shift_key %d\n", keyboardEvent->shift_key());
                                                    printf("alt_key %d\n", keyboardEvent->alt_key());
                                                    printf("meta_key %d\n", keyboardEvent->meta_key());
                                                    printf("code %s\n", keyboardEvent->code().c_str());
                                                    printf("key_identifier %s\n", keyboardEvent->key_identifier().c_str());
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
                                                        base::polymorphic_downcast<cobalt::dom::HTMLElement*>(elem.get());
                                                    CHECK(elementHTML);
                                                    return true;
                                                });

    cobalt::dom::customizer::pair_event_to_attr("on-keypress-print", "on-keypress",
                                                [](const scoped_refptr<cobalt::dom::Event> &event,
                                                   scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
                                                    CHECK(elem);
                                                    const cobalt::dom::KeyboardEvent* const keyboardEvent =
                                                        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                                                        base::polymorphic_downcast<const cobalt::dom::KeyboardEvent* const>(event.get());
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
                                                    if (base::WideToUTF8(wchar_src, 1, &utf8_str) && !utf8_str.empty()) {
                                                        printf("keypress normalized_str %s\n", utf8_str.c_str());
                                                    }

                                                    wprintf(L"keysym character, %s", keyboardEvent->keysym());
                                                    printf("ctrl_key %d\n", keyboardEvent->ctrl_key());
                                                    printf("shift_key %d\n", keyboardEvent->shift_key());
                                                    printf("alt_key %d\n", keyboardEvent->alt_key());
                                                    printf("meta_key %d\n", keyboardEvent->meta_key());
                                                    printf("code %s\n", keyboardEvent->code().c_str());
                                                    printf("key_identifier %s\n", keyboardEvent->key_identifier().c_str());
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
                                                        base::polymorphic_downcast<cobalt::dom::HTMLElement*>(elem.get());
                                                    CHECK(elementHTML);
                                                    return true;
                                                });

    cobalt::dom::customizer::pair_event_to_attr("on-keydown-print", "on-keydown",
                                                [](const scoped_refptr<cobalt::dom::Event> &event,
                                                   scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
                                                    CHECK(elem);
                                                    /*const cobalt::dom::PointerEvent* const pointerEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        static_cast<const cobalt::dom::PointerEvent* const>(event.get());*/
                                                    const cobalt::dom::KeyboardEvent* const keyboardEvent =
                                                        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
                                                        base::polymorphic_downcast<const cobalt::dom::KeyboardEvent* const>(event.get());
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
                                                        base::polymorphic_downcast<cobalt::dom::HTMLElement*>(elem.get());
                                                    CHECK(elementHTML);
                                                    return true;
                                                });
}
#endif // ENABLE_COBALT

} // namespace skemgl
