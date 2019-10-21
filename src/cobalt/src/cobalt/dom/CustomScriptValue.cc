#include "cobalt/dom/element.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <functional>

#include "base/strings/string_split.h"
#include "base/strings/string_util.h"
#include "cobalt/base/user_log.h"

#include "cobalt/dom/node.h"
#include "cobalt/dom/rule_matching.h"

#include "base/lazy_instance.h"
#include "base/strings/string_util.h"
#include "base/trace_event/trace_event.h"
#include "cobalt/base/tokens.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/selector.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/dom_rect.h"
#include "cobalt/dom/dom_rect_list.h"
#include "cobalt/dom/dom_token_list.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/mutation_reporter.h"
#include "cobalt/dom/named_node_map.h"
#include "cobalt/dom/node.h"
#include "cobalt/dom/parser.h"
#include "cobalt/dom/pointer_state.h"
#include "cobalt/dom/rule_matching.h"
#include "cobalt/dom/serializer.h"
#include "cobalt/dom/text.h"
#include "cobalt/math/rect_f.h"
#include "nb/memory_scope.h"

namespace {

const char kStyleAttributeName[] = "style";

}  // namespace

namespace cobalt {
namespace dom {

namespace customizer {

std::string Customizer::custom_attr_prefix = "I_";

std::string Customizer::custom_attr_suffix = "_I";

std::string Customizer::custom_event_prefix = "on-";

static std::map<std::string, std::shared_ptr<CustomTokenToObservers>>
  token_to_observers;

void AddNewCustomElementToken(Element* elem,
  std::shared_ptr<CustomElementToken> elementAttribute)
{
  DCHECK(elem);

  DCHECK(elementAttribute);
  //printf("AddNewCustomElementAttribute %s\n", elementAttribute->initial_custom_attribute_name().c_str());
  DCHECK(!elementAttribute->initial_custom_attribute_name().empty());
  CHECK(base::ToLowerASCII(elementAttribute->initial_custom_attribute_name()) == elementAttribute->initial_custom_attribute_name())
    << "custom attribute must be lowercase: " << elementAttribute->initial_custom_attribute_name();

  DCHECK(elem->custom_attributes().find(elementAttribute->initial_custom_attribute_name()) == elem->custom_attributes().end());
  elem->custom_attributes()[elementAttribute->initial_custom_attribute_name()] = elementAttribute;
}

std::shared_ptr<CustomElementToken> GetCustomElementToken(
  Element* elem, const std::string& key)
{
  DCHECK(elem);

  CHECK(base::ToLowerASCII(key) == key)
    << "custom attribute must be lowercase: " << key;

  std::shared_ptr<CustomElementToken> res = nullptr;

  auto it = elem->custom_attributes().find(key);
  if(it != elem->custom_attributes().end()) {
    res = it->second;
  }
  return res;
}

void set_attr_prefix(const std::string& val) {
  Customizer::custom_attr_prefix = val;
}

void set_attr_suffix(const std::string& val) {
  Customizer::custom_attr_suffix = val;
}

bool set_attr(const std::string& key, const std::string& val) {
  /// TODO: check thread safety for getAttrWithoutCallbacks e.t.c.
  std::shared_ptr<CustomTokenToObservers> attr =
    cobalt::dom::customizer::getCustomTokenToObservers(key);
  if(attr) {
    attr->SetCustomValue(val);
    return true;
  }
  return false;
}

base::Optional<std::string> get_attr(const std::string& key) {
  /// TODO: check thread safety for getAttrWithoutCallbacks e.t.c.
  std::shared_ptr<CustomTokenToObservers> attr =
    cobalt::dom::customizer::getCustomTokenToObservers(key);
  if(attr) {
    return attr->processed_custom_token();
  }
  return base::nullopt;
}

void create_attr(std::shared_ptr<CustomTokenToObservers> customTokenToObservers) {
  DCHECK(!customTokenToObservers->initial_custom_token().empty());
  DCHECK(getCustomTokenToObservers(customTokenToObservers->initial_custom_token()) == nullptr)
    << "custom attribute already exists: " << customTokenToObservers->initial_custom_token();

  token_to_observers[customTokenToObservers->initial_custom_token()] = customTokenToObservers;
}

void create_attr(const std::string& token, const std::string& initial_value) {
  DCHECK(!token.empty());
  CHECK(base::ToLowerASCII(token) == token)
    << "custom attribute must be lowercase: " << token;
  DCHECK(getCustomTokenToObservers(token) == nullptr)
    << "custom attribute already exists: " << token;

  std::shared_ptr<CustomTokenToObservers> newCustomToken =
    std::make_shared<CustomTokenToObservers>([initial_value](const std::string& custom_token,
                                     const std::string& prev_attr_name_lower,
                                     const std::string& prev_attr_val,
                                     cobalt::dom::Element& elem) {
    //printf("called addAttrCallback %s\n", custom_token.c_str());
    return initial_value;
  }, token);

  cobalt::dom::customizer::create_attr(newCustomToken);
}

  /// TODO: check thread safety for getAttrWithoutCallbacks e.t.c.
std::shared_ptr<CustomTokenToObservers> getCustomTokenToObservers(const std::string& token) {
  CHECK(base::ToLowerASCII(token) == token) << "custom attribute must be lowercase: " << token;
  std::map<std::string, std::shared_ptr<CustomTokenToObservers>>::iterator attr_callback =
    token_to_observers.find(token);
  if (/*extendedKV.second == "@"
      &&*/ attr_callback != token_to_observers.end()) {
    return attr_callback->second;
  }
  return nullptr;
}

static base::Optional<std::string> LoadNewCustomToken(
  const CustomElementToken::CustomTokenType& token_type,
  const CustomElementToken::CustomTokenAttrType& custom_token_attr_type,
  const std::string& custom_token,
  const std::string& prev_attr_name_lower,
  const std::string& prev_attr_val,
  cobalt::dom::Element& elem)
{
  CHECK(base::ToLowerASCII(custom_token) == custom_token) << "custom token must be lowercase: " << custom_token;
  CHECK(base::ToLowerASCII(prev_attr_name_lower) == prev_attr_name_lower) << "attribute must be lowercase: " << prev_attr_name_lower;

  std::shared_ptr<CustomTokenToObservers> custom_token_to_observers =
    customizer::getCustomTokenToObservers(custom_token);

  /*printf("1 try callAttrCallback %s of %lu\n",
    custom_token.c_str(), token_to_observers.size());*/

  if (/*extendedKV.second == "@"
      &&*/ custom_token_to_observers) {
    DCHECK(custom_token_to_observers->initial_custom_token() == custom_token);

    std::shared_ptr<CustomElementToken> elementToken
      = elem.GetCustomElementToken(custom_token);

    /*if(elementToken) {
      printf("GetCustomElementToken 1 after %s %s %s\n",
          elementToken->initial_custom_attribute_name().c_str(),
          elementToken->initial_attr_name().c_str(),
          elementToken->initial_attr_val().c_str()
      );
    }*/

    if(!elementToken) {
      elementToken = std::make_shared<CustomElementToken>(
        token_type, custom_token_attr_type, custom_token,
        prev_attr_name_lower, prev_attr_val, &elem);

      /*printf("GetCustomElementToken 2 after %s %s %s\n",
          elementToken->initial_custom_attribute_name().c_str(),
          elementToken->initial_attr_name().c_str(),
          elementToken->initial_attr_val().c_str()
      );*/

      elem.AddNewCustomElementToken(elementToken);

      // attr_callback->first->SetValue(callback_result);

      /// \todo RemoveObserver
      custom_token_to_observers->AddObserver(elementToken.get());
    }

    DCHECK(elementToken);
    DCHECK(!elementToken->initial_custom_attribute_name().empty());
    DCHECK(!elementToken->initial_attr_name().empty());

    const std::string callback_result =
      custom_token_to_observers->on_added_to_elem_cb()(
        elementToken->initial_custom_attribute_name(),
        elementToken->initial_attr_name(),
        elementToken->initial_attr_val(),
        elem);

    /*printf("added observer for tag %s with key %s and initial value %s\n",
      elem.tag_name().c_str(), custom_token.c_str(), callback_result.c_str());*/

    //printf("callAttrCallback callback_result: %s\n", callback_result.c_str());

    return std::move(callback_result);
  }
  return base::nullopt;
}

// TODO: use base::StartsWith
/*static bool startsWith(const std::string& s, const std::string& prefix) {
    return s.size() >= prefix.size()
      &&
      //base::CompareCaseInsensitiveASCII(
      //  base::StringPiece(s.begin(), s.begin() + prefix.length()),
      //  base::StringPiece(prefix.begin(), prefix.begin() + prefix.length()));
      s.compare(0, prefix.length(), prefix) == 0;
}

static bool endsWith(const std::string& s, const std::string& suffix) {
  return s.size() >= suffix.size()
    && s.compare(s.length() - suffix.length(), suffix.length(), suffix) == 0;
}*/

bool isCustomAttr(const std::string& attr_without_whitespace) {
  if (attr_without_whitespace.length()
      <= Customizer::custom_attr_prefix.length() + Customizer::custom_attr_suffix.length()) {
    return false;
  }
  #if DCHECK_IS_ON()
    if(attr_without_whitespace.length() > 512) {
      printf("WARNING in isCustomdAttr: base::StartsWith/EndsWith uses substr (will copy data), "
          "prefer string_view or std::string.compare() for large strings");
    }
  #endif
  if (!base::StartsWith(attr_without_whitespace,
        Customizer::custom_attr_prefix, base::CompareCase::INSENSITIVE_ASCII)
      || !base::EndsWith(attr_without_whitespace,
            Customizer::custom_attr_suffix, base::CompareCase::INSENSITIVE_ASCII)) {
    return false;
  }

  return true;
}

base::Optional<std::string> tryCustomizeToken(const std::string& attr) {
  //printf("toCustomAttr: %s\n", attr.c_str());

  std::string attr_cleaned = attr;
  // remove whitespace
  attr_cleaned.erase(
    std::remove(attr_cleaned.begin(), attr_cleaned.end(), ' '), attr_cleaned.end());
  if (!isCustomAttr(attr_cleaned)) {
    return base::nullopt;
  }

  // remove special prefix and suffix
  //printf("attr_cleaned: before %s\n", attr_cleaned.c_str());
  attr_cleaned.erase(0, Customizer::custom_attr_prefix.length());
  attr_cleaned.erase(attr_cleaned.length() - Customizer::custom_attr_prefix.length(), attr_cleaned.length());
  //printf("attr_cleaned: after %s\n", attr_cleaned.c_str());

  return std::move(attr_cleaned);
}

std::pair<std::string, std::string> tryParseCustomToken(
  const std::string& attr)
{
  const std::string split_delimiter = ":";
  size_t split_pos = 0;
  std::string token_model_key;
  std::string token_model_val;
  if ((split_pos = attr.find(split_delimiter)) != std::string::npos) {
    token_model_key = split_delimiter.substr(0, split_pos);
    token_model_val = split_delimiter.substr(split_pos - 1, split_delimiter.length());
  } else {
    token_model_key = "once";
    token_model_val = attr;
  }
  return std::pair<std::string, std::string>(token_model_key, token_model_val);
}

// not in spec
base::Optional<std::string> tryCustomizeAttrName(const std::string& prev_attr_name_lower,
                                           const std::string& prev_attr_val,
                                           cobalt::dom::Element& elem) {
  //printf("tryCustomizeAttrName for: %s %s\n", prev_attr_name_lower.c_str(), prev_attr_val.c_str());

  base::Optional<std::string> customizedToken = tryCustomizeToken(prev_attr_name_lower);
  if (!customizedToken.has_value()) {
    return base::nullopt;
  }

  std::pair<std::string, std::string> parsedCustomToken = tryParseCustomToken(customizedToken.value());

  //printf("tryCustomizeAttrName token_model_key: %s\n", parsedCustomToken.first.c_str());
  //printf("tryCustomizeAttrName token_model_val: %s\n", parsedCustomToken.second.c_str());

  // TODO: support custom token in multiple attrs and remove
  // observers when token removed
  /*std::shared_ptr<CustomTokenToObservers> custom_token_to_observers =
    customizer::getCustomTokenToObservers(parsedCustomToken.second);

  custom_token_to_observers->ClearObserversForElemAttr(elem, prev_attr_val);*/

  base::Optional<std::string> res =
    LoadNewCustomToken(CustomElementToken::CustomTokenType::NAME,
      CustomElementToken::CustomTokenAttrType::SINGLE,
      parsedCustomToken.second, prev_attr_name_lower, prev_attr_val, elem);

  //printf("extendAttrName callback_result: %s\n", res.value_or("nothing").c_str());

  return res;
}

// not in spec
base::Optional<std::string> tryCustomizeAttrValue(const std::string& prev_attr_name_lower,
                                            const std::string& prev_attr_val,
                                            cobalt::dom::Element& elem) {
  //printf("tryCustomizeAttrValue for: %s %s\n", prev_attr_name_lower.c_str(), prev_attr_val.c_str());

  base::Optional<std::string> customizedToken = tryCustomizeToken(prev_attr_val);
  if (!customizedToken.has_value()) {
    return base::nullopt;
  }

  std::pair<std::string, std::string> parsedCustomToken = tryParseCustomToken(customizedToken.value());

  //printf("tryCustomizeAttrValue token_model_key: %s\n", parsedCustomToken.first.c_str());
  //printf("tryCustomizeAttrValue token_model_val: %s\n", parsedCustomToken.second.c_str());

  // TODO: support custom token in multiple attrs and remove
  // observers when token removed
  /*std::shared_ptr<CustomTokenToObservers> custom_token_to_observers =
    customizer::getCustomTokenToObservers(parsedCustomToken.second);

  custom_token_to_observers->ClearObserversForElemAttr(elem, prev_attr_val);*/

  base::Optional<std::string> res =
    LoadNewCustomToken(CustomElementToken::CustomTokenType::VAL,
      CustomElementToken::CustomTokenAttrType::SINGLE,
      parsedCustomToken.second, prev_attr_name_lower, prev_attr_val, elem);

  //printf("extendAttrValue callback_result: %s\n", res.value_or("nothing").c_str());

  return res;
}

// not in spec
base::Optional<std::string> tryCustomizeStyleAttrValue(const std::string& prev_attr_name_lower,
                                            const std::string& prev_attr_val,
                                            cobalt::dom::Element& elem) {
  //printf("tryCustomizeStyleAttrValue for: %s %s\n", prev_attr_name_lower.c_str(), prev_attr_val.c_str());

  std::vector<std::string> cssTokens = SplitStringUsingSubstr(
    prev_attr_val,
    ";",
    base::WhitespaceHandling::TRIM_WHITESPACE,
    base::SplitResult::SPLIT_WANT_ALL);

  base::Optional<std::string> res = base::nullopt;

  for(size_t i = 0; i < cssTokens.size(); i++) {
    if(cssTokens.at(i).empty()) {
      continue;
    }

    //printf("tryCustomizeStyleAttrValue token: %s\n", cssTokens.at(i).c_str());

    base::Optional<std::string> customizedToken = tryCustomizeToken(cssTokens.at(i));
    if (customizedToken.has_value()) {
      std::pair<std::string, std::string> parsedCustomToken = tryParseCustomToken(customizedToken.value());

      //printf("tryCustomizeStyleAttrValue token_model_key: %s\n", parsedCustomToken.first.c_str());
      //printf("tryCustomizeStyleAttrValue token_model_val: %s\n", parsedCustomToken.second.c_str());

      // TODO: support custom token in multiple attrs and remove
      // observers when token removed
      /*std::shared_ptr<CustomTokenToObservers> custom_token_to_observers =
        customizer::getCustomTokenToObservers(parsedCustomToken.second);

      custom_token_to_observers->ClearObserversForElemAttr(elem, cssTokens.at(i));*/

      base::Optional<std::string> resAppendant = LoadNewCustomToken(
        CustomElementToken::CustomTokenType::VAL,
        CustomElementToken::CustomTokenAttrType::MULTI,
        parsedCustomToken.second,
        prev_attr_name_lower,
        //cssTokens.at(i),
        prev_attr_val,
        elem);

      if(resAppendant.has_value()) {
        res = res.value_or("") + ";" + resAppendant.value_or("");
      }
    } else {
      if(!cssTokens.at(i).empty()) {
        res = res.value_or("") + ";" + cssTokens.at(i);
      }
    }

    //printf("tryCustomizeStyleAttrValue callback_result: %s\n", res.value_or("nothing").c_str());
  }

  return res;
}

void pair_event_to_attr(const std::string &attr_name,
  const std::string &attr_event_name, EventCallback cb)
{
  auto wrapperCb = [cb, attr_event_name](const std::string& custom_token_cleaned_original,
                                     const std::string& prev_attr_name_lower,
                                     const std::string& prev_attr_val,
                                     cobalt::dom::Element& elem) {
    //printf("called pair_event_to_attr %s %s %s\n",
    //  custom_token_cleaned_original.c_str(), prev_attr_name_lower.c_str(), prev_attr_val.c_str());

    DCHECK(cb);
    /// \todo support multiple event callbacks (for each attribute)
    elem.add_event_cb(attr_event_name, cb);

    return attr_event_name;
  };

  CHECK(base::ToLowerASCII(attr_name) == attr_name)
    << "custom attribute must be lowercase: " << attr_name;

  CHECK(base::ToLowerASCII(attr_event_name) == attr_event_name)
    << "custom event must be lowercase: " << attr_event_name;

  std::shared_ptr<CustomTokenToObservers> token =
    std::make_shared<CustomTokenToObservers>(wrapperCb, attr_name);

  cobalt::dom::customizer::create_attr(token);
}

void pair_event_to_attr(const std::string &event_name, EventCallback cb)
{
  pair_event_to_attr(event_name, event_name, cb);
}

} // namespace customizer

using namespace cobalt::dom::customizer;

CustomTokenToObservers::CustomTokenToObservers(
      const AttrLoadedCallback& loaded_callback,
      const std::string& initial_attr)
    : initial_custom_token_(initial_attr), processed_custom_token_(""), loaded_callback_(loaded_callback) {
  DLOG(INFO) << __FUNCTION__
             << ": initial custom token=" << initial_custom_token_
             << ": processed custom token_=" << processed_custom_token_;
}

void CustomTokenToObservers::RecordMutation() {
  TRACE_EVENT0("cobalt::dom", "CustomTokenToObservers::RecordMutation()");

  //printf("RecordMutation %s for %s\n", processed_custom_token_.c_str(), initial_custom_token_.c_str());

  FOR_EACH_OBSERVER(CustomTokenObserver, observer_list_, OnMutation(processed_custom_token_));
}

void CustomTokenToObservers::SetCustomValue(const std::string& value) {
  if (processed_custom_token_ == value) {
    return;
  }

  //printf("SetCustomValue %s for %s\n", processed_custom_token_.c_str(), initial_custom_token_.c_str());

  processed_custom_token_ = value;

  RecordMutation();
}

CustomElementToken::CustomElementToken(const CustomTokenType& custom_token_type,
                   const CustomTokenAttrType& custom_token_attr_type,
                   const std::string& initial_custom_attribute_name,
                   const std::string& initial_attr_name,
                   const std::string& initial_attr_val, Element* elem)
                   : custom_token_type_(custom_token_type),
                     custom_token_attr_type_(custom_token_attr_type),
                     initial_attr_name_(initial_attr_name),
                     initial_attr_val_(initial_attr_val),
                     initial_custom_attribute_name_(initial_custom_attribute_name)
{
  DCHECK(elem);
  DCHECK(!initial_attr_name_.empty());
  DCHECK(!initial_custom_attribute_name_.empty());
  element_ = elem;
}

/*static void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
         // In case 'to' contains 'from', like replacing 'x' with 'yx'
        start_pos += to.length();
    }
}*/

void CustomElementToken::OnMutation(const std::string& attr_val)
{
  DCHECK(element_);

  if(custom_token_type() == CustomTokenType::VAL
     && custom_token_attr_type() == CustomTokenAttrType::MULTI) {
    /*printf("OnMutation 1 name %s val %s\n", initial_attr_name_.c_str(), attr_val.c_str());
    base::Optional<std::string> old_value = element_->GetAttribute(initial_attr_name_.c_str());
    printf("OnMutation old_value %s \n", old_value.value_or("").c_str());
    if(!old_value) {
      element_->SetAttribute(initial_attr_name_, attr_val);
      return;
    }

    std::string multi_replaces = old_value.value_or("");
    /// \note may not contain custom name at all
    replaceAll(multi_replaces, initial_custom_attribute_name_, attr_val);
    printf("OnMutation 3 name %s multi_replaces %s\n", initial_attr_name_.c_str(), multi_replaces.c_str());
    /// \note overrides old value by appending data at the end
    multi_replaces += attr_val;
    element_->SetAttribute(initial_attr_name_, multi_replaces);*/

    /// \note overrides old value by appending data at the end
    element_->AppendToAttribute(initial_attr_name_, attr_val);
  } else {
    //printf("OnMutation 2 name %s val %s\n", initial_attr_name_.c_str(), attr_val.c_str());
    element_->SetAttribute(initial_attr_name_, attr_val);
  }

  /*printf("OnMutation 1 name %s val %s\n", initial_attr_name_.c_str(), attr_val.c_str());
  base::Optional<std::string> curAttr = element_->GetAttribute(initial_attr_name_);
  printf("OnMutation 2 name %s curAttr %s\n", initial_attr_name_.c_str(), curAttr.value_or("").c_str());

  element_->RemoveAttribute(initial_attr_name_);
  element_->SetAttribute(initial_attr_name_, curAttr.value_or(""));

  //base::Optional<std::string> old_value = element_->GetAttribute(initial_attr_name_.c_str());
  //MutationReporter mutation_reporter(element_, element_->GatherInclusiveAncestorsObservers());
  //mutation_reporter.ReportAttributesMutation(initial_attr_name_.c_str(), old_value);

  //element_->SetAttribute(initial_attr_name_, attr_val);
*/
}

CustomEventListener::CustomEventListener(Element *elem) {
  elem_ = elem;
}

base::Optional<bool> CustomEventListener::HandleEvent(
    const scoped_refptr<script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  printf("CustomEventListener::HandleEvent \n");
  /*const base::Optional<EventCallback> cb = get_event_cb(event->type().c_str());
  bool res = true;
  if(cb.has_value()) {
    DCHECK(cb.value());
    res = cb.value()(event, this, attrVal);
  }*/
  DCHECK(elem_);
  DCHECK(callback_this);
  /// \todo return elem_->HandleCustomEvent(callback_this, event, had_exception)
  return elem_->HandleCustomEvent(event);
  ;
}

}  // namespace dom
}  // namespace cobalt
