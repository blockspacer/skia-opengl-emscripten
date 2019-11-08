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

using namespace cobalt::dom::customizer;

bool Element::DispatchEvent(const scoped_refptr<Event> &event)
{
  /*if(event->type() == "click"
     || event->type() == "mouseup"
     || event->type() == "mousedown"
     || event->type() == "pointerup"
     || event->type() == "pointerdown")
  printf("Element DispatchEvent %s inner_html %s\n",
    event->type().c_str(),
    inner_html().c_str());*/

  return Node::DispatchEvent(event) ;//&& HandleCustomEvent(event);
}

/// \todo remove that func and move custom handlers
/// for attribute parser into separate files
void Element::add_event_cb(const std::string &custom_token,
  EventCallback cb)
{
  if(!cb
     || custom_token.length()
        <= customizer::Customizer::custom_event_prefix.length()) {
    return;
  }

  const std::string custom_token_prefix
    = custom_token.substr(0, customizer::Customizer::custom_event_prefix.length());
  if(custom_token_prefix != customizer::Customizer::custom_event_prefix) {
    return;
  }

  /// \todo create eventListener only once or properly free resources
  const std::string to_event_name
    = custom_token.substr(customizer::Customizer::custom_event_prefix.length(),
        custom_token.length());
  eventCallbacks_[to_event_name] = cb;

  //std::unique_ptr<GenericEventHandlerReference> listener_reference(
  //    new GenericEventHandlerReference(this, listener));
  //AddEventListener(to_event_name, eventCallbacks_,
  //  false /* true -executed in the capturing phase
  //           false- Default. executed in the bubbling phase */);

  eventListeners_[to_event_name] =
      CustomEventListener::Create(const_cast<Element*>(this));

#if 0
  AddEventListener("click",
    //EventListenerScriptValue::Reference(this, *utterance->onboundary())
    //      .referenced_value(),
    CustomScriptValue<EventListener>(eventListeners_[to_event_name].get()),
    false /* true - executed in the capturing phase
             false - Default. executed in the bubbling phase */);

  AddEventListener(to_event_name,
    //EventListenerScriptValue::Reference(this, *utterance->onboundary())
    //      .referenced_value(),
    CustomScriptValue<EventListener>(eventListeners_[to_event_name].get()),
    true /* true - executed in the capturing phase
             false - Default. executed in the bubbling phase */);
#endif // 0

  printf("add_event_cb (AddEventListener) for %s\n", to_event_name.c_str());

  AddEventListener(to_event_name,
    //EventListenerScriptValue::Reference(this, *utterance->onboundary())
    //      .referenced_value(),
    CustomScriptValue<EventListener>(
      eventListeners_[to_event_name].get()),
    false /* true - executed in the capturing phase.
               the event is first captured by
               the outermost element and propagated to the inner elements.
             false - Default. executed in the bubbling phase.
               the event is first captured and handled by
               the innermost element and then propagated
               to outer elements. */);

  //printf("added event callback for %s into %s (text_content = %s)\n", to_event_name.c_str(), tag_name().c_str(), text_content().value_or("").c_str());
}

base::Optional<EventCallback> Element::get_event_cb(const std::string &key)
{
  const std::string text_contents =
    (tag_name() == "BODY" || tag_name() == "HTML")
    ? "(BODY/HTML)" : text_content().value_or("").c_str();
  //printf("get_event_cb %s into %s (text_contents = %s)\n", key.c_str(), tag_name().c_str(), text_contents.c_str());
  auto it = eventCallbacks_.find(key);
  if (it == eventCallbacks_.end()) {
    //printf("get_event_cb not found %s into %s\n", key.c_str(), tag_name().c_str());
    return base::nullopt;
  }
  return it->second;
}

void Element::AddNewCustomElementToken(
  std::shared_ptr<CustomElementToken> elementAttribute)
{
  customizer::AddNewCustomElementToken(const_cast<Element*>(this), elementAttribute);
}

std::shared_ptr<CustomElementToken> Element::GetCustomElementToken(
  const std::string& key) const
{
  std::shared_ptr<CustomElementToken> res
    = customizer::GetCustomElementToken(const_cast<Element*>(this), key);
  return res;
}

void Element::AppendToAttribute(const std::string& name, const std::string& value/*,
                                const bool needToMergeKeys*/) {
  //std::cout << "AppendToAttribute at " << name << " " << value << std::endl;

  if(name.empty() || value.empty()) {
    return;
  }

  base::Optional<std::string> old_value = GetAttribute(name);
  if(!old_value.has_value() || old_value.value().empty()) {
    SetAttribute(name, value);
    return;
  }

  std::string result;

  if(name == kStyleAttributeName) {
    scoped_refptr<cobalt::cssom::CSSDeclaredStyleData> declaration =
      node_document()->html_element_context()->css_parser()->ParseStyleDeclarationList(
         /// \note new data must be after old data (to override it)
         old_value.value() + ";" + value,
        base::SourceLocation("[Element::AppendToAttribute]", 1, 1));

    /// \note we parsed & serialized css to merge & unify inputs
    /// \note value may be synonym to current value,
    /// example (synonym): "color: rgb(0, 128, 0)" vs "color:green;" (also note space)
    /// example (one-to-many): "border-radius:40px;" vs
    ///  "border-bottom-left-radius: 40px;border-bottom-right-radius: 40px;..."
    result = declaration->SerializeCSSDeclarationBlock();

    /*printf("SerializeCSSDeclarationBlock old_value = %s ; value = %s\n",
      old_value.value().c_str(), value.c_str());
    printf("SerializeCSSDeclarationBlock result = %s\n",
      result.c_str());*/

  } else {
    NOTIMPLEMENTED();
    DCHECK(false);
  }

  SetAttribute(name, result);
}

void Element::AppendStyle(const std::string& value) {
  AppendToAttribute(kStyleAttributeName, value);
}

base::Optional<bool> Element::HandleCustomEvent(const scoped_refptr<dom::Event> &event)
{
  //printf("Element::HandleCustomEvent type %s on tag %s\n", event->type().c_str(), tag_name().c_str());

  std::string eventAttrKey;
  //eventToHandlerKey += custom_attr_prefix;
  eventAttrKey += customizer::Customizer::custom_event_prefix;
  eventAttrKey += event->type().c_str();
  //eventToHandlerKey += custom_attr_suffix;
  const std::string attrVal = GetAttribute(eventAttrKey.c_str()).value_or("");
  //printf("Element::HandleCustomEvent callback name = %s by %s\n", attrVal.c_str(), eventAttrKey.c_str());

  //if(!eventToCallbackName.empty()) {
  const base::Optional<EventCallback> cb = get_event_cb(event->type().c_str());
  base::Optional<bool> res = base::nullopt;
  if(cb.has_value()) {
    DCHECK(cb.value());
    res = cb.value()(event, this, attrVal);
  }
  //}

  /*
    from https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/dispatchEvent
    The return value is false if event is cancelable and
    at least one of the event handlers which handled this
    event called Event.preventDefault().
    Otherwise it returns true.
   */
  return res;
}

Element::Element(Document* document)
    : Node(document), animations_(new web_animations::AnimationSet()) {}

Element::Element(Document* document, base::Token local_name)
    : Node(document),
      local_name_(local_name),
      animations_(new web_animations::AnimationSet()) {}

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
    printf("new_text_content %s \n", new_text_content.c_str());
  }
  // 3. Replace all with node within the context object.
  ReplaceAll(new_node); // TODO: textContent
}

bool Element::HasAttributes() const { return !attribute_map_.empty(); }

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

bool Element::Matches(const std::string& selectors,
                             script::ExceptionState* exception_state) {
  TRACK_MEMORY_SCOPE("DOM");
  // Referenced from:
  // https://dom.spec.whatwg.org/#dom-element-matches

  // 1. Let s be the result of parse a selector from selectors.
  cssom::CSSParser* css_parser =
      this->node_document()->html_element_context()->css_parser();
  scoped_refptr<cssom::CSSRule> css_rule =
      css_parser->ParseRule(selectors + " {}", this->GetInlineSourceLocation());

  // 2. If s is failure, throw a "SyntaxError" DOMException.
  if (!css_rule) {
    DOMException::Raise(dom::DOMException::kSyntaxErr, exception_state);
    return false;
  }
  scoped_refptr<cssom::CSSStyleRule> css_style_rule =
      css_rule->AsCSSStyleRule();
  if (!css_style_rule) {
    DOMException::Raise(dom::DOMException::kSyntaxErr, exception_state);
    return false;
  }

  // 3. Return true if the result of match a selector against an element,
  //    using s, element, and :scope element context object, returns success,
  //    and false otherwise.
  return MatchRuleAndElement(css_style_rule.get(), this);
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
  std::string attr_name = name;
  if (document && !document->IsXMLDocument()) {
    attr_name = base::ToLowerASCII(attr_name);
  }

  // 2. Return the value of the attribute in element's attribute list whose
  //    namespace is namespace and local name is localName, if it has one, and
  //    null otherwise.
  switch (attr_name.size()) {
    case 5:
      if (attr_name == kStyleAttributeName) {
        return GetStyleAttribute();
      }
    // fall-through if not style attribute name
    default: {
      AttributeMap::const_iterator iter = attribute_map_.find(attr_name);
      if (iter != attribute_map_.end()) {
        return iter->second;
      }
    }
  }

  return base::nullopt;
}

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
void Element::emChangeAttrInBrowserThread(
  const std::string& attr_name, const std::string& attr_val
  , const bool addedOrRemoved)
{
  html_native::changeAttrInBrowserThread(getEmNodeGUID(),
    attr_name, attr_val, addedOrRemoved);
}

#if 0
void Element::changeEmcriptenAttr(emscripten::val& emscripten_node
  , const std::string& attr_name, const std::string& attr_val
  , const bool addedOrRemoved
  , Element* elem
  )
{
  if(emscripten_node.isNull() || emscripten_node.isUndefined()) {
    return;
  }

  auto taskCb
    = [em_node = &emscripten_node
      , name_arg = attr_name.c_str()
      , value_arg = attr_val.c_str()
      , inner_html = elem->inner_html()
      , &addedOrRemoved]
      (const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(!em_node->isNull()
             && !em_node->isUndefined());

      if(em_node)
      {

        // TODO
        //DCHECK(em_node->hasOwnProperty("localName"));
        if(em_node->hasOwnProperty("localName")
           && (*em_node)["localName"].as<std::string>() == "div") // TODO
        {
          //em_node->set("style", ";width: 50px;height: 50px;border-top-left-radius: 40px;border-top-right-radius: 40px;border-bottom-right-radius: 40px;border-bottom-left-radius: 40px;background-color: rgb(49, 95, 214);transform: translateY(402px)");
          //em_node->set("style", "background-color: rgb(49, 95, 214)");

          //em_node->set("style", "background-color: rgb(49, 95, 214)");

          //em_node->set("innerHTML",
          //  /// \note make sure that source files are UTF with BOM
          //  html_native::utf8_to_wstring(inner_html.c_str()));

          // TODO
          em_node->set(name_arg,
              //html_native::utf8_to_wstring(name_arg),
              /// \note make sure that source files are UTF with BOM
              html_native::utf8_to_wstring(value_arg));

#if 0
          (*em_node)["textContent"] = emscripten::val("Hello world.");

          emscripten::val body_elements
            = emscripten::val::global("document")
              .call<emscripten::val>(
                "getElementsByTagName", emscripten::val("body"));
          emscripten::val body_node
            = body_elements[0];
          DCHECK(!body_node.isNull()
                 && !body_node.isUndefined());
          //body_node.set("style", "background-color: rgb(49, 95, 214)");

          /// \todo make app_root_node configurable
          emscripten::val* app_root_node = &body_node;

          DCHECK(app_root_node
            && !app_root_node->isNull()
            && !app_root_node->isUndefined());
          app_root_node->call<void>("appendChild", *em_node);
#endif

            if(addedOrRemoved) {
              printf("Element::add_attr %s : %s\n", name_arg, value_arg);
            } else {
              printf("Element::remove_attr %s : %s\n", name_arg, value_arg);
            }
        }


      } else {
        NOTIMPLEMENTED_LOG_ONCE();
      }


    };

  html_native::NativeHTMLTaskCbParams cbParams{1,2};

  html_native::GlobalHTML5TaskQueue::getInstance()->
    scheduleTaskInMainThread(
      new html_native::NativeHTMLTaskParams{
        std::move(taskCb),
        std::move(cbParams)
      },
      true // async if threads enabled
    );
}
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#endif // 0

// Algorithm for SetAttribute:
//   https://www.w3.org/TR/2014/WD-dom-20140710/#dom-element-setattribute
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
      //printf("extended attr to %s\n", attr_name_ext.c_str());
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
            //printf("extended val to %s\n", extended_value.c_str());
          }
        }

        base::Optional<std::string> old_value = GetAttribute(attr_name_ext);
        MutationReporter mutation_reporter(this, GatherInclusiveAncestorsObservers());
        mutation_reporter.ReportAttributesMutation(attr_name_ext, old_value);

        SetStyleAttribute(extended_value);
        if (named_node_map_) {
          named_node_map_->SetAttributeInternal(attr_name_ext, extended_value);
        }
        //printf("OnSetAttribute 0 at %s\n", attr_name_ext.c_str());
        OnSetAttribute(/* not lowercase name */ attr_name_ext, extended_value);
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#if 0
        changeEmcriptenAttr(em_node_
          , attr_name_ext
          , extended_value
          , true
          , const_cast<Element*>(this)
        );
#endif // 0
        emChangeAttrInBrowserThread(
          attr_name_ext
          , extended_value
          , true
        );
#endif
        //RegenAttrPairs(attr_name_ext, extended_value);
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
          //printf("extended val to %s\n", extended_value.c_str());
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
        id_attribute_ = base::Token(extended_value);
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

  //printf("OnSetAttribute 1 at %s\n", attr_name_ext.c_str());
  OnSetAttribute(/* not lowercase name */ attr_name_ext, extended_value);
  //RegenAttrPairs(attr_name_ext, extended_value);
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#if 0
  changeEmcriptenAttr(em_node_
    , attr_name_ext
    , extended_value
    , true
    , const_cast<Element*>(this)
  );
#endif // 0
  emChangeAttrInBrowserThread(
    attr_name_ext
    , extended_value
    , true
  );
#endif
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
        id_attribute_ = base::Token("");
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
  OnRemoveAttribute(attr_name);

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#if 0
  changeEmcriptenAttr(em_node_
    , attr_name
    , ""
    , false
    , const_cast<Element*>(this)
  );
#endif // 0
  emChangeAttrInBrowserThread(
    attr_name
    , ""
    , false
  );
#endif
}

// Algorithm for tag_name:
//   https://www.w3.org/TR/dom/#dom-element-tagname
base::Token Element::tag_name() const {
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
  return base::Token(qualified_name);
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

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#if 0
  changeEmcriptenAttr(em_node_
    , "innerHTML"
    , inner_html
    , true
    , const_cast<Element*>(this)
  );
#endif // 0
  emChangeAttrInBrowserThread(
    "innerHTML"
    , inner_html
    , true
  );
#endif
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

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#if 0
  changeEmcriptenAttr(em_node_
    , "outerHTML"
    , outer_html
    , true
    , const_cast<Element*>(this)
  );
#endif // 0
  emChangeAttrInBrowserThread(
    "outerHTML"
    , outer_html
    , true
  );
#endif
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
  return document ? (document->active_element() == this) : false;
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

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#if 0
  changeEmcriptenAttr(em_node_
    , "style"
    , value
    , true
    , const_cast<Element*>(this)
  );
#endif // 0
  emChangeAttrInBrowserThread(
    "style"
    , value
    , true
  );
#endif
}

void Element::RemoveStyleAttribute() {
  attribute_map_.erase(kStyleAttributeName);

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#if 0
  changeEmcriptenAttr(em_node_
    , "style"
    , ""
    , false
    , const_cast<Element*>(this)
  );
#endif // 0
  emChangeAttrInBrowserThread(
    "style"
    , ""
    , false
  );
#endif
}

void Element::CollectStyleSheetsOfElementAndDescendants(
    cssom::StyleSheetVector* style_sheets) const {
  CollectStyleSheet(style_sheets);

  for (Element* child = first_element_child(); child;
       child = child->next_element_sibling()) {
    child->CollectStyleSheetsOfElementAndDescendants(style_sheets);
  }
}

void Element::RegisterIntersectionObserverRoot(IntersectionObserver* observer) {
  EnsureIntersectionObserverModuleInitialized();
  element_intersection_observer_module_->RegisterIntersectionObserverForRoot(
      observer);
}

void Element::UnregisterIntersectionObserverRoot(
    IntersectionObserver* observer) {
  if (element_intersection_observer_module_) {
    element_intersection_observer_module_
        ->UnregisterIntersectionObserverForRoot(observer);
  }
}

void Element::RegisterIntersectionObserverTarget(
    IntersectionObserver* observer) {
  EnsureIntersectionObserverModuleInitialized();
  element_intersection_observer_module_->RegisterIntersectionObserverForTarget(
      observer);
}

void Element::UnregisterIntersectionObserverTarget(
    IntersectionObserver* observer) {
  if (element_intersection_observer_module_) {
    element_intersection_observer_module_
        ->UnregisterIntersectionObserverForTarget(observer);
  }
}

ElementIntersectionObserverModule::LayoutIntersectionObserverRootVector
Element::GetLayoutIntersectionObserverRoots() {
  ElementIntersectionObserverModule::LayoutIntersectionObserverRootVector
      layout_roots;
  if (element_intersection_observer_module_) {
    layout_roots = element_intersection_observer_module_
                       ->GetLayoutIntersectionObserverRootsForElement();
  }
  return layout_roots;
}

ElementIntersectionObserverModule::LayoutIntersectionObserverTargetVector
Element::GetLayoutIntersectionObserverTargets() {
  ElementIntersectionObserverModule::LayoutIntersectionObserverTargetVector
      layout_targets;
  if (element_intersection_observer_module_) {
    layout_targets = element_intersection_observer_module_
                         ->GetLayoutIntersectionObserverTargetsForElement();
  }
  return layout_targets;
}

scoped_refptr<HTMLElement> Element::AsHTMLElement() { return NULL; }

// Explicitly defined because DOMTokenList is forward declared and held by
// scoped_refptr in Element's header.
Element::~Element() {
  // Reset the ElementIntersectionObserverModule so that functions such as
  // UnregisterIntersectionRoot/Target will not be called on deleted objects.
  element_intersection_observer_module_.reset();
}

void Element::TraceMembers(script::Tracer* tracer) {
  Node::TraceMembers(tracer);

  tracer->Trace(named_node_map_);
  tracer->Trace(class_list_);
  tracer->Trace(element_intersection_observer_module_);
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
#if defined(ENABLE_NATIVE_HTML)
  // TODO
#endif // ENABLE_NATIVE_HTML
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

void Element::EnsureIntersectionObserverModuleInitialized() {
  if (!element_intersection_observer_module_) {
    element_intersection_observer_module_ =
        std::unique_ptr<ElementIntersectionObserverModule>(
            new ElementIntersectionObserverModule(this));
  }
}

}  // namespace dom
}  // namespace cobalt
