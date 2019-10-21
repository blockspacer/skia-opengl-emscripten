#pragma once

#include <string>
#include <set>
#include <functional>

#include <map>
#include "base/containers/hash_tables.h"
#include "base/containers/small_map.h"
#include "base/memory/weak_ptr.h"
#include "base/optional.h"
#include "base/strings/string_piece.h"
#include "cobalt/base/token.h"
#include "cobalt/cssom/style_sheet_list.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/element_intersection_observer_module.h"
#include "cobalt/dom/intersection_observer.h"
#include "cobalt/dom/node.h"
#include "cobalt/script/exception_state.h"
#include "cobalt/web_animations/animation_set.h"

#include "cobalt/dom/event_target.h"

#include "base/observer_list.h"
#include "base/observer_list_types.h"

namespace cobalt {
namespace dom {

class DOMRect;
class DOMRectList;
class DOMTokenList;
class HTMLCollection;
class HTMLElement;
class HTMLElementContext;
class NamedNodeMap;
class Element;

// The EventListener interface represents a callable object that will be called
// when an event is fired.
//   https://www.w3.org/TR/2014/WD-dom-20140710/#eventtarget
class CustomEventListener : public EventListener {
 public:
  CustomEventListener(Element* elem);

  // Web API: EventListener
  //
  // Cobalt's implementation of callback interfaces requires the 'callback this'
  // to be explicitly passed in.
  base::Optional<bool> HandleEvent(
      const scoped_refptr<script::Wrappable>& callback_this,
      const scoped_refptr<cobalt::dom::Event>& event,
      bool* had_exception) const override;

  static std::unique_ptr<CustomEventListener> Create(Element* elem) {
    return std::unique_ptr<CustomEventListener>(
        new CustomEventListener(elem));
  }

  Element* elem_;
};

//typedef std::function<void(base::WeakPtr<cobalt::dom::HTMLElement> elem)> HoverCallback;

typedef std::function<base::Optional<bool>(const scoped_refptr<dom::Event> &event,
  scoped_refptr<cobalt::dom::Element>, const std::string& attrVal)> EventCallback;

namespace customizer {
  class CustomTokenToObservers;
  class CustomElementToken;

  class Customizer {
   public:
    static std::string custom_attr_prefix;
    static std::string custom_attr_suffix;
    static std::string custom_event_prefix;
  };

  typedef std::function<std::string(const std::string&, const std::string&,
    const std::string&, cobalt::dom::Element& elem)> AttrLoadedCallback;

  void AddNewCustomElementToken(Element* elem,
    std::shared_ptr<CustomElementToken> elementAttribute);

  std::shared_ptr<CustomElementToken> GetCustomElementToken(
    Element* elem, const std::string& key);

  std::pair<std::string, std::string> tryParseCustomToken(
    const std::string& attr);

  base::Optional<std::string> tryCustomizeAttrName(
    const std::string& prev_attr_name_lower,
    const std::string& prev_attr_val,
    cobalt::dom::Element& elem);

  base::Optional<std::string> tryCustomizeStyleAttrValue(
    const std::string& prev_attr_name_lower,
    const std::string& prev_attr_val,
    cobalt::dom::Element& elem);

  base::Optional<std::string> tryCustomizeAttrValue(
    const std::string& prev_attr_name_lower,
    const std::string& prev_attr_val,
    cobalt::dom::Element& elem);

  void pair_event_to_attr(const std::string& event_name, EventCallback cb);

  void pair_event_to_attr(const std::string &attr_name,
    const std::string &attr_event_name, EventCallback cb);

  void create_attr(
    std::shared_ptr<CustomTokenToObservers> customAttributeToObservers);

  void create_attr(const std::string& token,
    const std::string& initial_value);

  //std::map<std::string, std::shared_ptr<CustomAttributeToObservers>>::iterator getAttrWithCallbacks(const std::string& key);

  bool isCustomAttr(const std::string& attr_without_whitespace);

  base::Optional<std::string> tryCustomizeToken(const std::string& attr);

  std::shared_ptr<CustomTokenToObservers> getCustomTokenToObservers(
    const std::string& token);

  void set_attr_prefix(const std::string& val);

  void set_attr_suffix(const std::string& val);

  bool set_attr(const std::string& key, const std::string& val);

  base::Optional<std::string> get_attr(const std::string& key);

  class CustomTokenToObservers {
   public:
    class CustomTokenObserver : public base::CheckedObserver {
     public:
      virtual void OnMutation(const std::string& attr_val) = 0;

     protected:
      virtual ~CustomTokenObserver() {}
    };

    explicit CustomTokenToObservers(
        const AttrLoadedCallback& loaded_callback_,
        const std::string& initial_attr);

    std::string processed_custom_token() const {
      return processed_custom_token_;
    }

    std::string initial_custom_token() const {
      return initial_custom_token_;
    }

    AttrLoadedCallback on_added_to_elem_cb() const {
      return loaded_callback_;
    }

    void SetCustomValue(const std::string& value);

    void AddObserver(CustomTokenObserver* observer) { observer_list_.AddObserver(observer); }

    void RemoveObserver(CustomTokenObserver* observer) {
      observer_list_.RemoveObserver(observer);
    }

    bool HasObserver(CustomTokenObserver* observer) const {
      return observer_list_.HasObserver(observer);
    }

    void ClearObservers() { observer_list_.Clear(); }

   private:
    void RecordMutation();

    std::string initial_custom_token_;

    std::string processed_custom_token_;

    // TODO: check if need ObserverListThreadSafe here
    base::ObserverList<CustomTokenObserver> observer_list_;

    AttrLoadedCallback loaded_callback_;
  };

  class CustomElementToken : public CustomTokenToObservers::CustomTokenObserver {
   public:
    enum class CustomTokenType {
      NAME = 1,
      VAL,
      TOTAL
    };

    enum class CustomTokenAttrType {
      SINGLE = 1,
      // attribute that supports multiple values, like "style" attribute
      MULTI,
      TOTAL
    };

    CustomElementToken(const CustomTokenType& custom_token_type,
                       const CustomTokenAttrType& custom_token_attr_type,
                       const std::string& initial_custom_attribute_name_,
                       const std::string& initial_attr_name,
                       const std::string& initial_attr_val,
                       Element* elem);

    void OnMutation(const std::string& initial_attr_val) override;

    std::string initial_custom_attribute_name() const {
      return initial_custom_attribute_name_;
    }

    std::string initial_attr_name() const {
      return initial_attr_name_;
    }

    std::string initial_attr_val() const {
      return initial_attr_val_;
    }

    Element* element() const {
      return element_;
    }

    CustomTokenType custom_token_type() const {
      return custom_token_type_;
    }

    CustomTokenAttrType custom_token_attr_type() const {
      return custom_token_attr_type_;
    }

  private:
    CustomTokenType custom_token_type_;

    CustomTokenAttrType custom_token_attr_type_;

    const std::string initial_attr_name_;

    const std::string initial_attr_val_;

    std::string initial_custom_attribute_name_;

    Element* element_;
  };
}

template <class T>
class CustomScriptValue : public cobalt::script::ScriptValue<T> {
 public:
  typedef cobalt::script::ScriptValue<T> BaseClass;

  explicit CustomScriptValue(T* listener) : value_(listener) {}

  bool EqualTo(const BaseClass& other) const override {
    const CustomScriptValue* other_script_object =
        base::polymorphic_downcast<const CustomScriptValue*>(&other);
    return value_ == other_script_object->value_;
  }

  void RegisterOwner(script::Wrappable*) override {}
  void DeregisterOwner(script::Wrappable*) override {}
  void PreventGarbageCollection() override {}
  void AllowGarbageCollection() override {}
  T* GetValue() override { return value_; }
  const T* GetValue() const override { return value_; }
  std::unique_ptr<BaseClass> MakeCopy() const override {
    return std::unique_ptr<BaseClass>(new CustomScriptValue(value_));
  }

 private:
  T* value_;
};

}  // namespace dom
}  // namespace cobalt
