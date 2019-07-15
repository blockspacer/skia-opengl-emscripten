// Copyright 2014 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cobalt/dom/element.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <functional>

#include "base/lazy_instance.h"
#include "base/strings/string_util.h"
#include "base/trace_event/trace_event.h"
#include "base/strings/string_split.h"
#include "base/strings/string_util.h"
#include "cobalt/base/tokens.h"
#include "cobalt/base/user_log.h"
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
#include "cobalt/dom/parser.h"
#include "cobalt/dom/pointer_state.h"
#include "cobalt/dom/serializer.h"
#include "cobalt/dom/text.h"
#include "cobalt/math/rect_f.h"
#include "nb/memory_scope.h"

namespace cobalt {
namespace dom {

namespace customizer {
  static std::string custom_attr_prefix = "EXT__";

  static std::string custom_attr_suffix = "__EXT";

  static std::map<std::string, std::shared_ptr<CustomTokenToObservers>> token_to_observers;

  void set_prefix(const std::string& val) {
    custom_attr_prefix = val;
  }

  void set_suffix(const std::string& val) {
    custom_attr_suffix = val;
  }

  bool set(const std::string& key, const std::string& val) {
    /// TODO: check thread safety for getAttrWithoutCallbacks e.t.c.
    std::shared_ptr<CustomTokenToObservers> attr =
      cobalt::dom::customizer::getCustomTokenToObservers(key);
    if(attr) {
      attr->SetCustomValue(val);
      return true;
    }
    return false;
  }

  base::Optional<std::string> get(const std::string& key) {
    /// TODO: check thread safety for getAttrWithoutCallbacks e.t.c.
    std::shared_ptr<CustomTokenToObservers> attr =
      cobalt::dom::customizer::getCustomTokenToObservers(key);
    if(attr) {
      return attr->processed_custom_token();
    }
    return base::nullopt;
  }

  void create(std::shared_ptr<CustomTokenToObservers> customTokenToObservers) {
    DCHECK(!customTokenToObservers->initial_custom_token().empty());
    DCHECK(getCustomTokenToObservers(customTokenToObservers->initial_custom_token()) == nullptr)
      << "custom attribute already created: " << customTokenToObservers->initial_custom_token();

    token_to_observers[customTokenToObservers->initial_custom_token()] = customTokenToObservers;
  }

  void create(const std::string& token, const std::string& initial_value) {
    DCHECK(!token.empty());
    CHECK(base::ToLowerASCII(token) == token)
      << "custom attribute must be lowercase: " << token;
    DCHECK(getCustomTokenToObservers(token) == nullptr)
      << "custom attribute already created: " << token;

    std::shared_ptr<CustomTokenToObservers> newCustomToken =
      std::make_shared<CustomTokenToObservers>([initial_value](const std::string& custom_token,
                                       const std::string& prev_attr_name_lower,
                                       const std::string& prev_attr_val,
                                       cobalt::dom::Element& elem) {
      printf("called addAttrCallback %s\n", custom_token.c_str());
      return initial_value;
    }, token);

    cobalt::dom::customizer::create(newCustomToken);
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

    printf("1 try callAttrCallback %s of %lu\n",
      custom_token.c_str(), token_to_observers.size());

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

      printf("added observer for tag %s with key %s and initial value %s\n",
        elem.tag_name().c_str(), custom_token.c_str(), callback_result.c_str());

      printf("callAttrCallback callback_result: %s\n", callback_result.c_str());

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

  static bool isCustomAttr(const std::string& attr_without_whitespace) {
    if (attr_without_whitespace.length() <= custom_attr_prefix.length() + custom_attr_suffix.length()) {
      return false;
    }
    #if DCHECK_IS_ON()
      if(attr_without_whitespace.length() > 512) {
        printf("WARNING in isCustomdAttr: base::StartsWith/EndsWith uses substr (will copy data), "
            "prefer string_view or std::string.compare() for large strings");
      }
    #endif
    if (!base::StartsWith(attr_without_whitespace, custom_attr_prefix, base::CompareCase::INSENSITIVE_ASCII)
        || !base::EndsWith(attr_without_whitespace, custom_attr_suffix, base::CompareCase::INSENSITIVE_ASCII)) {
      return false;
    }

    return true;
  }

  static base::Optional<std::string> tryCustomizeToken(const std::string& attr) {
    printf("toCustomAttr: %s\n", attr.c_str());

    std::string attr_cleaned = attr;
    // remove whitespace
    attr_cleaned.erase(
      std::remove(attr_cleaned.begin(), attr_cleaned.end(), ' '), attr_cleaned.end());
    if (!isCustomAttr(attr_cleaned)) {
      return base::nullopt;
    }

    // remove special prefix and suffix
    printf("attr_cleaned: before %s\n", attr_cleaned.c_str());
    attr_cleaned.erase(0, custom_attr_prefix.length());
    attr_cleaned.erase(attr_cleaned.length() - custom_attr_prefix.length(), attr_cleaned.length());
    printf("attr_cleaned: after %s\n", attr_cleaned.c_str());

    return std::move(attr_cleaned);
  }

  static std::pair<std::string, std::string> tryParseCustomToken(const std::string& attr) {
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
  static base::Optional<std::string> tryCustomizeAttrName(const std::string& prev_attr_name_lower,
                                             const std::string& prev_attr_val,
                                             cobalt::dom::Element& elem) {
    printf("tryCustomizeAttrName for: %s %s\n", prev_attr_name_lower.c_str(), prev_attr_val.c_str());

    base::Optional<std::string> customizedToken = tryCustomizeToken(prev_attr_name_lower);
    if (!customizedToken.has_value()) {
      return base::nullopt;
    }

    std::pair<std::string, std::string> parsedCustomToken = tryParseCustomToken(customizedToken.value());

    printf("tryCustomizeAttrName token_model_key: %s\n", parsedCustomToken.first.c_str());
    printf("tryCustomizeAttrName token_model_val: %s\n", parsedCustomToken.second.c_str());

    // TODO: support custom token in multiple attrs and remove
    // observers when token removed
    /*std::shared_ptr<CustomTokenToObservers> custom_token_to_observers =
      customizer::getCustomTokenToObservers(parsedCustomToken.second);

    custom_token_to_observers->ClearObserversForElemAttr(elem, prev_attr_val);*/

    base::Optional<std::string> res =
      LoadNewCustomToken(CustomElementToken::CustomTokenType::NAME,
        CustomElementToken::CustomTokenAttrType::SINGLE,
        parsedCustomToken.second, prev_attr_name_lower, prev_attr_val, elem);

    printf("extendAttrName callback_result: %s\n", res.value_or("nothing").c_str());

    return res;
  }

  // not in spec
  base::Optional<std::string> tryCustomizeAttrValue(const std::string& prev_attr_name_lower,
                                              const std::string& prev_attr_val,
                                              cobalt::dom::Element& elem) {
    printf("tryCustomizeAttrValue for: %s %s\n", prev_attr_name_lower.c_str(), prev_attr_val.c_str());

    base::Optional<std::string> customizedToken = tryCustomizeToken(prev_attr_val);
    if (!customizedToken.has_value()) {
      return base::nullopt;
    }

    std::pair<std::string, std::string> parsedCustomToken = tryParseCustomToken(customizedToken.value());

    printf("tryCustomizeAttrValue token_model_key: %s\n", parsedCustomToken.first.c_str());
    printf("tryCustomizeAttrValue token_model_val: %s\n", parsedCustomToken.second.c_str());

    // TODO: support custom token in multiple attrs and remove
    // observers when token removed
    /*std::shared_ptr<CustomTokenToObservers> custom_token_to_observers =
      customizer::getCustomTokenToObservers(parsedCustomToken.second);

    custom_token_to_observers->ClearObserversForElemAttr(elem, prev_attr_val);*/

    base::Optional<std::string> res =
      LoadNewCustomToken(CustomElementToken::CustomTokenType::VAL,
        CustomElementToken::CustomTokenAttrType::SINGLE,
        parsedCustomToken.second, prev_attr_name_lower, prev_attr_val, elem);

    printf("extendAttrValue callback_result: %s\n", res.value_or("nothing").c_str());

    return res;
  }

  // not in spec
  base::Optional<std::string> tryCustomizeStyleAttrValue(const std::string& prev_attr_name_lower,
                                              const std::string& prev_attr_val,
                                              cobalt::dom::Element& elem) {
    printf("tryCustomizeStyleAttrValue for: %s %s\n", prev_attr_name_lower.c_str(), prev_attr_val.c_str());

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

      printf("tryCustomizeStyleAttrValue token: %s\n", cssTokens.at(i).c_str());

      base::Optional<std::string> customizedToken = tryCustomizeToken(cssTokens.at(i));
      if (customizedToken.has_value()) {
        std::pair<std::string, std::string> parsedCustomToken = tryParseCustomToken(customizedToken.value());

        printf("tryCustomizeStyleAttrValue token_model_key: %s\n", parsedCustomToken.first.c_str());
        printf("tryCustomizeStyleAttrValue token_model_val: %s\n", parsedCustomToken.second.c_str());

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

      printf("tryCustomizeStyleAttrValue callback_result: %s\n", res.value_or("nothing").c_str());
    }

    return res;
  }
} // namespace customizer

using namespace cobalt::dom::customizer;

namespace {

const char kStyleAttributeName[] = "style";

// This struct manages the user log information for Node count.
struct ElementCountLog {
 public:
  ElementCountLog() : count(0) {
    base::UserLog::Register(base::UserLog::kElementCountIndex, "ElementCnt",
                            &count, sizeof(count));
  }
  ~ElementCountLog() {
    base::UserLog::Deregister(base::UserLog::kElementCountIndex);
  }

  int count;

 private:
  DISALLOW_COPY_AND_ASSIGN(ElementCountLog);
};

base::LazyInstance<ElementCountLog>::DestructorAtExit element_count_log =
    LAZY_INSTANCE_INITIALIZER;

}  // namespace

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

  printf("RecordMutation %s for %s\n", processed_custom_token_.c_str(), initial_custom_token_.c_str());

  FOR_EACH_OBSERVER(CustomTokenObserver, observer_list_, OnMutation(processed_custom_token_));
}

void CustomTokenToObservers::SetCustomValue(const std::string& value) {
  if (processed_custom_token_ == value) {
    return;
  }

  printf("SetCustomValue %s for %s\n", processed_custom_token_.c_str(), initial_custom_token_.c_str());

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

Element::Element(Document* document)
    : Node(document), animations_(new web_animations::AnimationSet()) {
  ++(element_count_log.Get().count);
}

Element::Element(Document* document, base::CobToken local_name)
    : Node(document),
      local_name_(local_name),
      animations_(new web_animations::AnimationSet()) {
  ++(element_count_log.Get().count);
}

Element::HoverCallback Element::get_hover_cb() const {
  return hover_cb_;
}

base::Optional<std::string> Element::text_content() const {
  TRACK_MEMORY_SCOPE("DOM");
  std::string content;

  const Node* child = first_child();
  while (child) {
    if (child->IsText() || child->IsElement()) {
      content.append(child->text_content().value());
    }
    child = child->next_sibling();
  }

  return content;
}

void Element::set_text_content(
    const base::Optional<std::string>& text_content) {
  TRACK_MEMORY_SCOPE("DOM");
  // https://www.w3.org/TR/dom/#dom-node-textcontent
  // 1. Let node be null.
  scoped_refptr<Node> new_node;

  // 2. If new value is not the empty string, set node to a new Text node whose
  //    data is new value.
  std::string new_text_content = text_content.value_or("");
  if (!new_text_content.empty()) {
    new_node = new Text(node_document(), new_text_content);
  }
  // 3. Replace all with node within the context object.
  ReplaceAll(new_node);
}

bool Element::HasAttributes() const { return !attribute_map_.empty(); }

void Element::AddNewCustomElementToken(std::shared_ptr<CustomElementToken> elementAttribute)
{
  DCHECK(elementAttribute);
  printf("AddNewCustomElementAttribute %s\n", elementAttribute->initial_custom_attribute_name().c_str());
  DCHECK(!elementAttribute->initial_custom_attribute_name().empty());
  CHECK(base::ToLowerASCII(elementAttribute->initial_custom_attribute_name()) == elementAttribute->initial_custom_attribute_name())
    << "custom attribute must be lowercase: " << elementAttribute->initial_custom_attribute_name();

  DCHECK(custom_attributes.find(elementAttribute->initial_custom_attribute_name()) == custom_attributes.end());
  custom_attributes[elementAttribute->initial_custom_attribute_name()] = elementAttribute;
}

std::shared_ptr<CustomElementToken> Element::GetCustomElementToken(const std::string& key) const
{
  CHECK(base::ToLowerASCII(key) == key)
    << "custom attribute must be lowercase: " << key;

  std::shared_ptr<CustomElementToken> res = nullptr;

  auto it = custom_attributes.find(key);
  if(it != custom_attributes.end()) {
    res = it->second;
  }
  return res;
}

base::Optional<std::string> Element::GetAttributeNS(
    const std::string& namespace_uri, const std::string& name) const {
  // TODO: Implement namespaces, if we actually need this.
  NOTIMPLEMENTED();
  SB_UNREFERENCED_PARAMETER(namespace_uri);
  return GetAttribute(name);
}

bool Element::HasAttributeNS(const std::string& namespace_uri,
                             const std::string& name) const {
  // TODO: Implement namespaces, if we actually need this.
  NOTIMPLEMENTED();
  SB_UNREFERENCED_PARAMETER(namespace_uri);
  return HasAttribute(name);
}

scoped_refptr<NamedNodeMap> Element::attributes() {
  TRACK_MEMORY_SCOPE("DOM");
  scoped_refptr<NamedNodeMap> named_node_map = named_node_map_.get();
  if (!named_node_map) {
    // Create a new instance and store a weak reference.
    named_node_map = new NamedNodeMap(this);
    named_node_map_ = named_node_map->AsWeakPtr();
  }
  return named_node_map;
}

const scoped_refptr<DOMTokenList>& Element::class_list() {
  TRACK_MEMORY_SCOPE("DOM");
  if (!class_list_) {
    // Create a new instance and store a reference to it. Because of the
    // negative performance impact of having to constantly recreate DomTokenList
    // objects, they are being kept in memory.
    class_list_ = new DOMTokenList(this, "class");
  }
  return class_list_;
}

// Algorithm for GetAttribute:
//   https://www.w3.org/TR/2014/WD-dom-20140710/#dom-element-getattribute
base::Optional<std::string> Element::GetAttribute(
    const std::string& name) const {
  TRACK_MEMORY_SCOPE("DOM");
  Document* document = node_document();

  // 1. If the context object is in the HTML namespace and its node document is
  //    an HTML document, let name be converted to ASCII lowercase.
  std::string attr_name_lower = name;
  if (document && !document->IsXMLDocument()) {
    attr_name_lower = base::ToLowerASCII(attr_name_lower);
  }

  // not in spec
  std::string attr_name_ext = attr_name_lower;
  /*{
    base::Optional<std::string> extName = extendAttrName(attr_name_lower, "", *this);
    if (extName.has_value()) {
      attr_name_ext = extName.value();
      printf("extended attr to %s\n", attr_name_ext.c_str());
    }
  }*/

  base::Optional<std::string> originalVal = base::nullopt;

  // 2. Return the value of the attribute in element's attribute list whose
  //    namespace is namespace and local name is localName, if it has one, and
  //    null otherwise.
  switch (attr_name_ext.size()) {
    case 5:
      if (attr_name_ext == kStyleAttributeName) {
        originalVal = GetStyleAttribute();
      }
    // fall-through if not style attribute name
    default: {
      AttributeMap::const_iterator iter = attribute_map_.find(attr_name_ext);
      if (iter != attribute_map_.end()) {
        originalVal = iter->second;
      }
    }
  }

  /*// not in spec
  base::Optional<std::string> extVal = base::nullopt;
  if (originalVal.has_value()) {
    extVal = extendAttrValue(attr_name_lower, originalVal.value(), *this);
    if (extVal.has_value()) {
      printf("extended val to %s\n", extVal.value().c_str());
      return extVal;
    }
  }*/

  return originalVal;
}

void Element::AppendToAttribute(const std::string& name, const std::string& value,
                                const bool needToMergeKeys) {
  //std::cout << "AppendToAttribute " << name << " " << value << std::endl;
  if(name.empty() || value.empty()) {
    return;
  }

  using StringPair = std::pair<std::string, std::string>;

  auto key_comp = [](StringPair lhs,
                     StringPair rhs) {
    return lhs.first < rhs.first;
  };

  /// \note sorted using lexical comparison,
  /// comparing only first elements to prevent key duplication
  using key_set = std::set<StringPair, decltype(key_comp)>;

  base::Optional<std::string> old_value = GetAttribute(name);
  if(!old_value.has_value() || old_value.value().empty()) {
    SetAttribute(name, value);
    return;
  }

  if(!needToMergeKeys) {
    DCHECK(old_value.has_value() && !old_value.value().empty());
    SetAttribute(name, old_value.value() + ";" + value);
    return;
  }

  base::StringPairs newCSSTokensUnsorted;
  base::SplitStringIntoKeyValuePairs(
    value,
    ':', // Key-value delimiter
    ';', // Key-value pair delimiter
    &newCSSTokensUnsorted);

  /*std::cout << "newCSSTokensUnsorted start " << std::endl;
  for (const StringPair& val : newCSSTokensUnsorted) {
    std::cout << " " << val.first + ":" + val.second + ";" << std::endl;;
  }
  std::cout << "newCSSTokensUnsorted end " << std::endl;*/

  base::StringPairs oldCSSTokensUnsorted;
  base::SplitStringIntoKeyValuePairs(
    old_value.value(),
    ':', // Key-value delimiter
    ';', // Key-value pair delimiter
    &oldCSSTokensUnsorted);

  /*std::cout << "oldCSSTokensUnsorted start " << std::endl;
  for (const StringPair& val : oldCSSTokensUnsorted) {
    std::cout << " " << val.first + ":" + val.second + ";" << std::endl;;
  }
  std::cout << "oldCSSTokensUnsorted end " << std::endl;*/

  // remove duplicate keys
  const key_set oldCSSTokens(oldCSSTokensUnsorted.begin(), oldCSSTokensUnsorted.end(), key_comp);

  /*std::cout << "oldCSSTokens start " << std::endl;
  for (const StringPair& val : oldCSSTokens) {
    std::cout << " " << val.first + ":" + val.second + ";" << std::endl;;
  }
  std::cout << "oldCSSTokens end " << std::endl;*/

  // remove duplicate keys
  const key_set newCSSTokens(newCSSTokensUnsorted.begin(), newCSSTokensUnsorted.end(), key_comp);

  /*std::cout << "newCSSTokens start " << std::endl;
  for (const StringPair& val : newCSSTokens) {
    std::cout << " " << val.first + ":" + val.second + ";" << std::endl;;
  }
  std::cout << "newCSSTokens end " << std::endl;*/

  //base::Optional<std::string> res = base::nullopt;

  // copy new values
  /// \note new values must be inserted before old values because
  /// of key-only comparison (key_set will not insert/replace data if key exists)
  key_set resultCSSTokens(newCSSTokens.begin(), newCSSTokens.end(), key_comp);

  /*std::cout << "resultCSSTokens 1 start " << std::endl;
  for (const StringPair& val : resultCSSTokens) {
    std::cout << " " << val.first + ":" + val.second + ";" << std::endl;;
  }
  std::cout << "resultCSSTokens 1 end " << std::endl;*/

  // merge old values with new values
  resultCSSTokens.insert(oldCSSTokens.begin(), oldCSSTokens.end());

  /*std::cout << "resultCSSTokens 2 start " << std::endl;
  for (const StringPair& val : resultCSSTokens) {
    std::cout << " " << val.first + ":" + val.second + ";" << std::endl;;
  }
  std::cout << "resultCSSTokens 2 end " << std::endl;*/

  // serialize
  std::string result;
  for (const StringPair& val : resultCSSTokens) {
    result += val.first + ":" + val.second + ";";
  }

  /*std::cout << "result start " << std::endl;
  std::cout << result << std::endl;
  std::cout << "result end " << std::endl;*/

  /*std::string multi_replaces = old_value.value_or("");
  /// \note may not contain custom name at all
  replaceAll(multi_replaces, initial_custom_attribute_name_, attr_val);
  printf("OnMutation 3 name %s multi_replaces %s\n", initial_attr_name_.c_str(), multi_replaces.c_str());
  /// \note overrides old value by appending data at the end
  multi_replaces += attr_val;
  element_->SetAttribute(initial_attr_name_, multi_replaces);*/

  // save old tokens with updated values
  /*for(size_t i = 0; i < oldCSSTokensUnsorted.size(); i++) {
    result += oldCSSTokensUnsorted.at(i).first + ":" + oldCSSTokensUnsorted.at(i).second + ";";
  }

  // append fresh tokens
  for(size_t i = 0; i < newCSSTokensIntesectedWithOld.size(); i++) {
    const std::string& newCSSTokenKey = newCSSTokensUnsorted.at(i).first;
    const std::string& newCSSTokenVal = newCSSTokensUnsorted.at(i).second;
    if(newCSSTokenKey.empty() || newCSSTokenVal.empty()) {
      continue;
    }
    const bool& flag = newCSSTokensIntesectedWithOld.at(i);
    if(!flag) {
      result += newCSSTokensUnsorted.at(i).first + ":" + newCSSTokensUnsorted.at(i).second + ";";
    }
  }*/

  SetAttribute(name, result);
}

void Element::AppendStyle(const std::string& value) {
  AppendToAttribute(kStyleAttributeName, value);
}

// Algorithm for SetAttribute:
//   https://www.w3.org/TR/2014/WD-dom-20140710/#dom-element-setattribute
void Element::SetAttribute(const std::string& name, const std::string& value) {
  TRACK_MEMORY_SCOPE("DOM");
  TRACE_EVENT2("cobalt::dom", "Element::SetAttribute",
               "name", name, "value", value);
  Document* document = node_document();

  // 1. Not needed by Cobalt.

  // 2. If the context object is in the HTML namespace and its node document is
  //    an HTML document, let name be converted to ASCII lowercase.
  std::string attr_name_lower = name;
  if (document && !document->IsXMLDocument()) {
    attr_name_lower = base::ToLowerASCII(attr_name_lower);
  }

  // not in spec
  std::string attr_name_ext = attr_name_lower;
  {
    base::Optional<std::string> extName = tryCustomizeAttrName(attr_name_lower, value, *this);
    if (extName.has_value()) {
      attr_name_ext = extName.value();
      printf("extended attr to %s\n", attr_name_ext.c_str());
    }
  }

  // 3. Let attribute be the first attribute in the context object's attribute
  //    list whose name is name, or null if there is no such attribute.
  // 4. If attribute is null, create an attribute whose local name is name and
  //    value is value, and then append this attribute to the context object and
  //    terminate these steps.
  // 5. Change attribute from context object to value.

  // not in spec
  std::string extended_value = value;

  switch (attr_name_ext.size()) {
    case 5:
      if (attr_name_ext == kStyleAttributeName) {
        // not in spec
        {
          base::Optional<std::string> extVal = tryCustomizeStyleAttrValue(attr_name_lower, value, *this);
          //base::Optional<std::string> extVal = tryCustomizeAttrValue(attr_name_lower, value, *this);
          if (extVal.has_value()) {
            extended_value = extVal.value();
            printf("extended val to %s\n", extended_value.c_str());
          }
        }

        base::Optional<std::string> old_value = GetAttribute(attr_name_ext);
        MutationReporter mutation_reporter(this, GatherInclusiveAncestorsObservers());
        mutation_reporter.ReportAttributesMutation(attr_name_ext, old_value);

        SetStyleAttribute(extended_value);
        if (named_node_map_) {
          named_node_map_->SetAttributeInternal(attr_name_ext, extended_value);
        }
        OnSetAttribute(/* not lowercase name */ attr_name_ext, extended_value);
        // Return now as SetStyleAttribute() will call OnDOMMutation() when
        // necessary.
        return;
      }
    // fall-through if not style attribute name
    default: {
      // not in spec
      {
        base::Optional<std::string> extVal = tryCustomizeAttrValue(attr_name_lower, value, *this);
        if (extVal.has_value()) {
          extended_value = extVal.value();
          printf("extended val to %s\n", extended_value.c_str());
        }
      }

      base::Optional<std::string> old_value = GetAttribute(attr_name_ext);
      MutationReporter mutation_reporter(this, GatherInclusiveAncestorsObservers());
      mutation_reporter.ReportAttributesMutation(attr_name_ext, old_value);

      AttributeMap::iterator attribute_iterator =
          attribute_map_.find(attr_name_ext);
      if (attribute_iterator != attribute_map_.end() &&
          attribute_iterator->second == extended_value) {
        // Attribute did not change.
        return;
      }
      attribute_map_[attr_name_ext] = extended_value;
      break;
    }
  }

  // Custom, not in any spec.
  // Check for specific attributes that require additional caching and update
  // logic.
  switch (attr_name_ext.size()) {
    case 2:
      if (attr_name_ext == "id") {
        id_attribute_ = base::CobToken(extended_value);
      }
      break;
    case 5:
      if (attr_name_ext == "class") {
        // Changing the class name may affect the contents of proxy objects.
        UpdateGenerationForNodeAndAncestors();
      }
      break;
  }
  if (named_node_map_) {
    named_node_map_->SetAttributeInternal(attr_name_ext, extended_value);
  }

  if (document && GetRootNode() == document) {
    document->OnDOMMutation();
  }
  OnSetAttribute(/* not lowercase name */ attr_name_ext, extended_value);
}

// Algorithm for RemoveAttribute:
//   https://www.w3.org/TR/2014/WD-dom-20140710/#dom-element-removeattribute
void Element::RemoveAttribute(const std::string& name) {
  TRACK_MEMORY_SCOPE("DOM");
  TRACE_EVENT1("cobalt::dom", "Element::RemoveAttribute", "name", name);
  Document* document = node_document();

  // 1. If the context object is in the HTML namespace and its node document is
  //    an HTML document, let name be converted to ASCII lowercase.
  std::string attr_name = name;
  if (document && !document->IsXMLDocument()) {
    attr_name = base::ToLowerASCII(attr_name);
  }

  base::Optional<std::string> old_value = GetAttribute(attr_name);
  if (old_value) {
    MutationReporter mutation_reporter(this,
                                       GatherInclusiveAncestorsObservers());
    mutation_reporter.ReportAttributesMutation(attr_name, old_value);
  }

  // 2. Remove the first attribute from the context object whose name is name,
  //    if any.
  switch (attr_name.size()) {
    case 5:
      if (attr_name == kStyleAttributeName) {
        RemoveStyleAttribute();
        break;
      }
    // fall-through if not style attribute name
    default: {
      attribute_map_.erase(attr_name);
      break;
    }
  }

  // Custom, not in any spec.
  // Check for specific attributes that require additional caching and update
  // logic.
  switch (attr_name.size()) {
    case 2:
      if (attr_name == "id") {
        id_attribute_ = base::CobToken("");
      }
      break;
    case 5:
      if (attr_name == "class") {
        // Changing the class name may affect the contents of proxy objects.
        UpdateGenerationForNodeAndAncestors();
      }
      break;
  }
  if (named_node_map_) {
    named_node_map_->RemoveAttributeInternal(attr_name);
  }

  if (document && GetRootNode() == document) {
    document->OnDOMMutation();
  }
  OnRemoveAttribute(name);
}

// Algorithm for tag_name:
//   https://www.w3.org/TR/dom/#dom-element-tagname
base::CobToken Element::tag_name() const {
  // 1. If context object's namespace prefix is not null, let qualified name be
  // its namespace prefix, followed by a ":" (U+003A), followed by its local
  // name. Otherwise, let qualified name be its local name.
  std::string qualified_name = local_name_.c_str();

  // 2. If the context object is in the HTML namespace and its node document is
  // an HTML document, let qualified name be converted to ASCII uppercase.
  Document* document = node_document();
  if (document && !document->IsXMLDocument()) {
    qualified_name = base::ToUpperASCII(qualified_name);
  }

  // 3. Return qualified name.
  return base::CobToken(qualified_name);
}

// Algorithm for HasAttribute:
//   https://www.w3.org/TR/2014/WD-dom-20140710/#dom-element-hasattribute
bool Element::HasAttribute(const std::string& name) const {
  TRACK_MEMORY_SCOPE("DOM");
  Document* document = node_document();

  // 1. If the context object is in the HTML namespace and its node document is
  //    an HTML document, let name be converted to ASCII lowercase.
  std::string attr_name = name;
  if (document && !document->IsXMLDocument()) {
    attr_name = base::ToLowerASCII(attr_name);
  }

  // 2. Return true if the context object has an attribute whose name is name,
  //    and false otherwise.
  AttributeMap::const_iterator iter = attribute_map_.find(attr_name);
  return iter != attribute_map_.end();
}

// Algorithm for GetElementsByTagName:
//   https://www.w3.org/TR/dom/#concept-getelementsbytagname
scoped_refptr<HTMLCollection> Element::GetElementsByTagName(
    const std::string& local_name) const {
  Document* document = node_document();
  // 2. If the document is not an HTML document, then return an HTML collection
  //    whose name is local name. If it is an HTML document, then return an,
  //    HTML collection whose name is local name converted to ASCII lowercase.
  if (document && document->IsXMLDocument()) {
    return HTMLCollection::CreateWithElementsByLocalName(this, local_name);
  } else {
    const std::string lower_local_name = base::ToLowerASCII(local_name);
    return HTMLCollection::CreateWithElementsByLocalName(this,
                                                         lower_local_name);
  }
}

scoped_refptr<HTMLCollection> Element::GetElementsByClassName(
    const std::string& class_name) const {
  return HTMLCollection::CreateWithElementsByClassName(this, class_name);
}

namespace {

// Returns the bounding rectangle of the given DOMrect. A DOMRect can have a
// negative width or height. This function ensures that the width and height of
// the returned rectangle are positive, allowing RectF::Union() to function
// correctly.
math::RectF GetBoundingRectangle(const scoped_refptr<DOMRect>& dom_rect) {
  math::RectF bounding_rectangle;
  // This handles the case where DOMRect::width() or DOMRect::height() can be
  // negative.
  float dom_rect_x2 = dom_rect->x() + dom_rect->width();
  float rect_x = std::min(dom_rect->x(), dom_rect_x2);
  bounding_rectangle.set_x(rect_x);
  bounding_rectangle.set_width(std::max(dom_rect->x(), dom_rect_x2) - rect_x);
  float dom_rect_y2 = dom_rect->y() + dom_rect->height();
  float rect_y = std::min(dom_rect->y(), dom_rect_y2);
  bounding_rectangle.set_y(rect_y);
  bounding_rectangle.set_height(std::max(dom_rect->y(), dom_rect_y2) - rect_y);
  return bounding_rectangle;
}

}  // namespace

// Algorithm for getBoundingClientRect:
//   https://www.w3.org/TR/2013/WD-cssom-view-20131217/#dom-element-getboundingclientrect
scoped_refptr<DOMRect> Element::GetBoundingClientRect() {
  TRACK_MEMORY_SCOPE("DOM");
  // 1. Let list be the result of invoking getClientRects() on the same element
  // this method was invoked on.
  scoped_refptr<DOMRectList> list = GetClientRects();
  // 2. If the list is empty return a DOMRect object whose x, y, width and
  // height members are zero.
  if (list->length() == 0) {
    return base::WrapRefCounted(new DOMRect());
  }
  // 3. Otherwise, return a DOMRect object describing the smallest rectangle
  // that includes the first rectangle in list and all of the remaining
  // rectangles of which the height or width is not zero.
  math::RectF bounding_rect = GetBoundingRectangle(list->Item(0));

  for (unsigned int item_number = 1; item_number < list->length();
       ++item_number) {
    const scoped_refptr<DOMRect>& box_rect = list->Item(item_number);
    if (box_rect->height() != 0.0f || box_rect->width() != 0.0f) {
      bounding_rect.Union(GetBoundingRectangle(box_rect));
    }
  }
  return base::WrapRefCounted(new DOMRect(bounding_rect));
}

// Algorithm for GetClientRects:
//   https://www.w3.org/TR/2013/WD-cssom-view-20131217/#dom-element-getclientrects
scoped_refptr<DOMRectList> Element::GetClientRects() {
  // 1. If the element on which it was invoked does not have an associated
  // layout box return an empty DOMRectList object and stop this algorithm.
  return base::WrapRefCounted(new DOMRectList());
}

// Algorithm for client_top:
//   https://www.w3.org/TR/2013/WD-cssom-view-20131217/#dom-element-clienttop
float Element::client_top() {
  // 1. If the element has no associated CSS layout box or if the CSS layout box
  // is inline, return zero.
  return 0.0f;
}

// Algorithm for client_left:
//   https://www.w3.org/TR/2013/WD-cssom-view-20131217/#dom-element-clientleft
float Element::client_left() {
  // 1. If the element has no associated CSS layout box or if the CSS layout box
  // is inline, return zero.
  return 0.0f;
}

// Algorithm for client_width:
//   https://www.w3.org/TR/2013/WD-cssom-view-20131217/#dom-element-clientwidth
float Element::client_width() {
  // 1. If the element has no associated CSS layout box or if the CSS layout box
  // is inline, return zero.
  return 0.0f;
}

// Algorithm for client_height:
//   https://www.w3.org/TR/2013/WD-cssom-view-20131217/#dom-element-clientheight
float Element::client_height() {
  // 1. If the element has no associated CSS layout box or if the CSS layout box
  // is inline, return zero.
  return 0.0f;
}

// Algorithm for inner_html:
//   https://www.w3.org/TR/DOM-Parsing/#widl-Element-innerHTML
std::string Element::inner_html() const {
  TRACK_MEMORY_SCOPE("DOM");
  std::ostringstream oss;
  Serializer serializer(&oss);
  serializer.SerializeDescendantsOnly(this);
  return oss.str();
}

// Algorithm for set_inner_html:
//   https://www.w3.org/TR/DOM-Parsing/#widl-Element-innerHTML
void Element::set_inner_html(const std::string& inner_html) {
  TRACK_MEMORY_SCOPE("DOM");
  // 1. Let fragment be the result of invoking the fragment parsing algorithm
  // with the new value as markup, and the context object as the context
  // element.
  // 2. Replace all with fragment within the context object.
  // Remove all children.
  scoped_refptr<Node> child = first_child();
  while (child) {
    scoped_refptr<Node> next_child = child->next_sibling();
    RemoveChild(child);
    child = next_child;
  }

  // Use the DOM parser to parse the HTML input and generate children nodes.
  Document* document = node_document();
  if (document) {
    document->html_element_context()->dom_parser()->ParseDocumentFragment(
        inner_html, document, this, NULL, GetInlineSourceLocation());
  }
}

// Algorithm for outer_html:
//   https://www.w3.org/TR/DOM-Parsing/#widl-Element-innerHTML
std::string Element::outer_html(
    script::ExceptionState* /*exception_state*/) const {
  TRACK_MEMORY_SCOPE("DOM");
  std::ostringstream oss;
  Serializer serializer(&oss);
  serializer.Serialize(this);
  return oss.str();
}

// Algorithm for set_outer_html:
//   https://www.w3.org/TR/DOM-Parsing/#widl-Element-outerHTML
void Element::set_outer_html(const std::string& outer_html,
                             script::ExceptionState* exception_state) {
  TRACK_MEMORY_SCOPE("DOM");

  // 1. Let parent be the context object's parent.
  scoped_refptr<Node> parent = parent_node();

  // 2. If parent is null, terminate these steps. There would be no way to
  // obtain a reference to the nodes created even if the remaining steps were
  // run.
  if (!parent) {
    return;
  }

  // 3. If parent is a Document, throw a DOMException with name
  // "NoModificationAllowedError" exception.
  if (parent->IsDocument()) {
    DOMException::Raise(dom::DOMException::kInvalidAccessErr, exception_state);
    return;
  }

  // 4. Not needed by Cobalt.

  // 5. Let fragment be the result of invoking the fragment parsing algorithm
  // with the new value as markup, and parent as the context element.
  // 6. Replace the context object with fragment within the context object's
  // parent.
  // Remove this node from its parent.
  scoped_refptr<Node> reference = next_sibling();

  // Make sure that this does not get cleaned up while it is being removed.
  scoped_refptr<Node> keep_this_alive = this;
  parent->RemoveChild(this);

  // Use the DOM parser to parse the HTML input and generate children nodes.
  // TODO: Replace "Element" in the source location with the name of actual
  // class, like "HTMLDivElement".
  Document* document = node_document();
  if (document) {
    document->html_element_context()->dom_parser()->ParseDocumentFragment(
        outer_html, document, parent, reference, GetInlineSourceLocation());
  }
}

void Element::SetPointerCapture(int pointer_id,
                                script::ExceptionState* exception_state) {
  Document* document = node_document();
  if (document) {
    document->pointer_state()->SetPointerCapture(pointer_id, this,
                                                 exception_state);
  }
}

void Element::ReleasePointerCapture(int pointer_id,
                                    script::ExceptionState* exception_state) {
  Document* document = node_document();
  if (document) {
    document->pointer_state()->ReleasePointerCapture(pointer_id, this,
                                                     exception_state);
  }
}

bool Element::HasPointerCapture(int pointer_id) {
  Document* document = node_document();
  if (document) {
    document->pointer_state()->HasPointerCapture(pointer_id, this);
  }
  return false;
}

void Element::Accept(NodeVisitor* visitor) { visitor->Visit(this); }

void Element::Accept(ConstNodeVisitor* visitor) const { visitor->Visit(this); }

scoped_refptr<Node> Element::Duplicate() const {
  TRACK_MEMORY_SCOPE("DOM");
  Element* new_element = new Element(node_document(), local_name_);
  new_element->CopyAttributes(*this);
  return new_element;
}

bool Element::IsEmpty() {
  scoped_refptr<Node> child = first_child();
  while (child) {
    if (!child->IsComment()) {
      return false;
    }
    child = child->next_sibling();
  }
  return true;
}

bool Element::HasFocus() {
  Document* document = node_document();
  return document ? (document->active_element().get() == this) : false;
}

base::Optional<std::string> Element::GetStyleAttribute() const {
  AttributeMap::const_iterator iter = attribute_map_.find(kStyleAttributeName);
  if (iter != attribute_map_.end()) {
    return iter->second;
  }
  return base::nullopt;
}

void Element::SetStyleAttribute(const std::string& value) {
  attribute_map_[kStyleAttributeName] = value;
}

void Element::RemoveStyleAttribute() {
  attribute_map_.erase(kStyleAttributeName);
}

void Element::CollectStyleSheetsOfElementAndDescendants(
    cssom::StyleSheetVector* style_sheets) const {
  CollectStyleSheet(style_sheets);

  for (Element* child = first_element_child(); child;
       child = child->next_element_sibling()) {
    child->CollectStyleSheetsOfElementAndDescendants(style_sheets);
  }
}

scoped_refptr<HTMLElement> Element::AsHTMLElement() { return NULL; }

Element::~Element() { --(element_count_log.Get().count); }

void Element::TraceMembers(script::Tracer* tracer) {
  Node::TraceMembers(tracer);

  tracer->Trace(named_node_map_);
  tracer->Trace(class_list_);
}

bool Element::GetBooleanAttribute(const std::string& name) const {
  return HasAttribute(name);
}

void Element::SetBooleanAttribute(const std::string& name, bool value) {
  if (value) {
    SetAttribute(name, "");
  } else {
    RemoveAttribute(name);
  }
}

void Element::CopyAttributes(const Element& other) {
  attribute_map_ = other.attribute_map_;
  id_attribute_ = other.id_attribute_;
}

HTMLElementContext* Element::html_element_context() {
  TRACK_MEMORY_SCOPE("DOM");
  Document* document = node_document();
  return document ? document->html_element_context() : NULL;
}

std::string Element::GetDebugName() {
  std::string name = local_name_.c_str();
  if (HasAttribute("id")) {
    name += "#";
    name += id_attribute_.c_str();
  }
  return name;
}

void Element::HTMLParseError(const std::string& error) {
  // TODO: Report line / column number.
  LOG(WARNING) << "Error when parsing inner HTML or outer HTML: " << error;
}

}  // namespace dom
}  // namespace cobalt
