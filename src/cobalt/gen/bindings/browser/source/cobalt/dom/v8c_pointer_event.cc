

// Copyright 2019 The Cobalt Authors. All Rights Reserved.
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

// clang-format off

// This file has been auto-generated by bindings/code_generator_cobalt.py. DO NOT MODIFY!
// Auto-generated from template: bindings/v8c/templates/interface.cc.template

#include "cobalt/bindings/shared/idl_conditional_macros.h"

#include "cobalt/dom/v8c_pointer_event.h"

#include "base/trace_event/trace_event.h"
#include "cobalt/base/polymorphic_downcast.h"
#include "cobalt/script/global_environment.h"
#include "cobalt/script/script_value.h"
#include "cobalt/script/value_handle.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/v8c_mouse_event.h"

#include "v8c_gen_type_conversion.h"

#include "cobalt/script/callback_interface_traits.h"
#include "cobalt/script/v8c/v8c_array_buffer.h"
#include "cobalt/script/v8c/v8c_array_buffer_view.h"
#include "cobalt/script/v8c/callback_function_conversion.h"
#include "cobalt/script/v8c/conversion_helpers.h"
#include "cobalt/script/v8c/entry_scope.h"
#include "cobalt/script/v8c/helpers.h"
#include "cobalt/script/v8c/native_promise.h"
#include "cobalt/script/v8c/type_traits.h"
#include "cobalt/script/v8c/v8c_typed_arrays.h"
#include "cobalt/script/v8c/v8c_data_view.h"
#include "cobalt/script/v8c/v8c_callback_function.h"
#include "cobalt/script/v8c/v8c_callback_interface_holder.h"
#include "cobalt/script/v8c/v8c_engine.h"
#include "cobalt/script/v8c/v8c_exception_state.h"
#include "cobalt/script/v8c/v8c_global_environment.h"
#include "cobalt/script/v8c/v8c_property_enumerator.h"
#include "cobalt/script/v8c/v8c_value_handle.h"
#include "cobalt/script/v8c/wrapper_private.h"
#include "cobalt/script/v8c/common_v8c_bindings_code.h"
#include "v8/include/v8.h"


namespace {
using cobalt::dom::PointerEvent;
using cobalt::dom::V8cPointerEvent;
using cobalt::dom::MouseEvent;
using cobalt::dom::PointerEventInit;
using cobalt::dom::V8cMouseEvent;
using cobalt::script::CallbackInterfaceTraits;
using cobalt::script::GlobalEnvironment;
using cobalt::script::ScriptValue;
using cobalt::script::ValueHandle;
using cobalt::script::ValueHandle;
using cobalt::script::ValueHandleHolder;
using cobalt::script::Wrappable;

using cobalt::script::v8c::EntryScope;
using cobalt::script::v8c::EscapableEntryScope;
using cobalt::script::v8c::FromJSValue;
using cobalt::script::v8c::kConversionFlagClamped;
using cobalt::script::v8c::kConversionFlagNullable;
using cobalt::script::v8c::kConversionFlagObjectOnly;
using cobalt::script::v8c::kConversionFlagRestricted;
using cobalt::script::v8c::kConversionFlagTreatNullAsEmptyString;
using cobalt::script::v8c::kConversionFlagTreatUndefinedAsEmptyString;
using cobalt::script::v8c::kNoConversionFlags;
using cobalt::script::v8c::NewInternalString;
using cobalt::script::v8c::ToJSValue;
using cobalt::script::v8c::TypeTraits;
using cobalt::script::v8c::V8cExceptionState;
using cobalt::script::v8c::V8cGlobalEnvironment;
using cobalt::script::v8c::V8cPropertyEnumerator;
using cobalt::script::v8c::WrapperFactory;
using cobalt::script::v8c::WrapperPrivate;
}  // namespace

namespace cobalt {
namespace dom {


namespace {

const int kInterfaceUniqueId = 183;









void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  V8cExceptionState exception_state(isolate);
  const size_t kMinArguments = 1;
  if (info.Length() < kMinArguments) {
    exception_state.SetSimpleException(script::kInvalidNumberOfArguments);
    return;
  }
  // Non-optional arguments
  TypeTraits<std::string >::ConversionType type;
  // Optional arguments
  TypeTraits<PointerEventInit >::ConversionType eventInitDict;
  DCHECK_LT(0, info.Length());
  v8::Local<v8::Value> non_optional_value0 = info[0];
  FromJSValue(isolate,
              non_optional_value0,
              kNoConversionFlags,
              &exception_state, &type);
  if (exception_state.is_exception_set()) {
    return;
  }
  size_t num_set_arguments = 1;
  if (info.Length() > 1) {
    v8::Local<v8::Value> optional_value0 = info[1];
    {
      FromJSValue(isolate,
                  optional_value0,
                  kNoConversionFlags,
                  &exception_state,
                  &eventInitDict);
    }
    if (exception_state.is_exception_set()) {
      return;
    }
    ++num_set_arguments;
  }
  switch (num_set_arguments) {
    case 1:
      {  if (!info.IsConstructCall()) {
            exception_state.SetSimpleException(script::kTypeError, "Illegal constructor");
            return;
          }
        
          scoped_refptr<PointerEvent> new_object =
              new PointerEvent(type);
          v8::Local<v8::Value> result_value;
          ToJSValue(isolate, new_object, &result_value);
          DCHECK(result_value->IsObject());
          info.GetReturnValue().Set(result_value);
      }
      break;
    case 2:
      {  if (!info.IsConstructCall()) {
            exception_state.SetSimpleException(script::kTypeError, "Illegal constructor");
            return;
          }
        
          scoped_refptr<PointerEvent> new_object =
              new PointerEvent(type, eventInitDict);
          v8::Local<v8::Value> result_value;
          ToJSValue(isolate, new_object, &result_value);
          DCHECK(result_value->IsObject());
          info.GetReturnValue().Set(result_value);
      }
      break;
    default:
      NOTREACHED();
      return;
  }
}



void pointerIdAttributeGetter(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  script::v8c::shared_bindings::AttributeGetterImpl<PointerEvent,
                                                    V8cPointerEvent>(
                    info,
                    false,
                    false,
                    [](v8::Isolate* isolate, PointerEvent* impl,
                       cobalt::script::ExceptionState& exception_state,
                       v8::Local<v8::Value>& result_value) {
  
      ToJSValue(isolate,
              impl->pointer_id(),
              &result_value);

  });
}



void widthAttributeGetter(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  script::v8c::shared_bindings::AttributeGetterImpl<PointerEvent,
                                                    V8cPointerEvent>(
                    info,
                    false,
                    false,
                    [](v8::Isolate* isolate, PointerEvent* impl,
                       cobalt::script::ExceptionState& exception_state,
                       v8::Local<v8::Value>& result_value) {
  
      ToJSValue(isolate,
              impl->width(),
              &result_value);

  });
}



void heightAttributeGetter(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  script::v8c::shared_bindings::AttributeGetterImpl<PointerEvent,
                                                    V8cPointerEvent>(
                    info,
                    false,
                    false,
                    [](v8::Isolate* isolate, PointerEvent* impl,
                       cobalt::script::ExceptionState& exception_state,
                       v8::Local<v8::Value>& result_value) {
  
      ToJSValue(isolate,
              impl->height(),
              &result_value);

  });
}



void pressureAttributeGetter(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  script::v8c::shared_bindings::AttributeGetterImpl<PointerEvent,
                                                    V8cPointerEvent>(
                    info,
                    false,
                    false,
                    [](v8::Isolate* isolate, PointerEvent* impl,
                       cobalt::script::ExceptionState& exception_state,
                       v8::Local<v8::Value>& result_value) {
  
      ToJSValue(isolate,
              impl->pressure(),
              &result_value);

  });
}



void tiltXAttributeGetter(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  script::v8c::shared_bindings::AttributeGetterImpl<PointerEvent,
                                                    V8cPointerEvent>(
                    info,
                    false,
                    false,
                    [](v8::Isolate* isolate, PointerEvent* impl,
                       cobalt::script::ExceptionState& exception_state,
                       v8::Local<v8::Value>& result_value) {
  
      ToJSValue(isolate,
              impl->tilt_x(),
              &result_value);

  });
}



void tiltYAttributeGetter(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  script::v8c::shared_bindings::AttributeGetterImpl<PointerEvent,
                                                    V8cPointerEvent>(
                    info,
                    false,
                    false,
                    [](v8::Isolate* isolate, PointerEvent* impl,
                       cobalt::script::ExceptionState& exception_state,
                       v8::Local<v8::Value>& result_value) {
  
      ToJSValue(isolate,
              impl->tilt_y(),
              &result_value);

  });
}



void pointerTypeAttributeGetter(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  script::v8c::shared_bindings::AttributeGetterImpl<PointerEvent,
                                                    V8cPointerEvent>(
                    info,
                    false,
                    false,
                    [](v8::Isolate* isolate, PointerEvent* impl,
                       cobalt::script::ExceptionState& exception_state,
                       v8::Local<v8::Value>& result_value) {
  
      ToJSValue(isolate,
              impl->pointer_type(),
              &result_value);

  });
}



void isPrimaryAttributeGetter(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  script::v8c::shared_bindings::AttributeGetterImpl<PointerEvent,
                                                    V8cPointerEvent>(
                    info,
                    false,
                    false,
                    [](v8::Isolate* isolate, PointerEvent* impl,
                       cobalt::script::ExceptionState& exception_state,
                       v8::Local<v8::Value>& result_value) {
  
      ToJSValue(isolate,
              impl->is_primary(),
              &result_value);

  });
}




void InitializeTemplate(v8::Isolate* isolate) {
  // https://heycam.github.io/webidl/#interface-object
  // 3.6.1. Interface object
  //
  // The interface object for a given interface is a built-in function object.
  // It has properties that correspond to the constants and static operations
  // defined on that interface, as described in sections 3.6.6 Constants and
  // 3.6.8 Operations.
  //
  // If the interface is declared with a [Constructor] extended attribute,
  // then the interface object can be called as a constructor to create an
  // object that implements that interface. Calling that interface as a
  // function will throw an exception.
  //
  // Interface objects whose interfaces are not declared with a [Constructor]
  // extended attribute will throw when called, both as a function and as a
  // constructor.
  //
  // An interface object for a non-callback interface has an associated object
  // called the interface prototype object. This object has properties that
  // correspond to the regular attributes and regular operations defined on
  // the interface, and is described in more detail in 3.6.3 Interface
  // prototype object.
  v8::Local<v8::FunctionTemplate> function_template =
      v8::FunctionTemplate::New(
          isolate,
          Constructor,
          v8::Local<v8::Value>(),
          v8::Local<v8::Signature>(),
          1);
  function_template->SetLength(1);
  function_template->SetClassName(NewInternalString(isolate, "PointerEvent"));
  function_template->ReadOnlyPrototype();

  v8::Local<v8::ObjectTemplate> prototype_template = function_template->PrototypeTemplate();
  v8::Local<v8::ObjectTemplate> instance_template = function_template->InstanceTemplate();
  instance_template->SetInternalFieldCount(WrapperPrivate::kInternalFieldCount);

  V8cGlobalEnvironment* global_environment = V8cGlobalEnvironment::GetFromIsolate(isolate);
  global_environment->AddInterfaceData(kInterfaceUniqueId, function_template);

  {
    // An interface can be defined to inherit from another interface. If the
    // identifier of the interface is followed by a U+003A COLON (":") character
    // and an identifier, then that identifier identifies the inherited
    // interface. An object that implements an interface that inherits from
    // another also implements that inherited interface. The object therefore
    // will also have members that correspond to the interface members from the
    // inherited interface.
    v8::Local<v8::FunctionTemplate> parent_template = V8cMouseEvent::GetTemplate(isolate);
    function_template->Inherit(parent_template);
    static_assert(
        std::is_base_of<MouseEvent, PointerEvent>::value,
        "Expected PointerEvent to have C++ parent class "
        "MouseEvent, because that is its WebIDL parent.");
  }

  // https://heycam.github.io/webidl/#es-constants
  // 3.6.6. Constants
  //
  // For each exposed constant defined on an interface A, there must be a
  // corresponding property. The property has the following characteristics:

  // https://heycam.github.io/webidl/#es-attributes
  // 3.6.7. Attributes
  //
  // For each exposed attribute of the interface there must exist a
  // corresponding property. The characteristics of this property are as
  // follows:
  {

    script::v8c::shared_bindings::set_property_for_nonconstructor_attribute(
                  isolate,
    // The property has attributes { [[Get]]: G, [[Set]]: S, [[Enumerable]]:
    // true, [[Configurable]]: configurable }, where: configurable is false if
    // the attribute was declared with the [Unforgeable] extended attribute and
    // true otherwise;
                  true,
                  false,
                  false,
                  false,
                  function_template,
                  instance_template,
                  prototype_template,
                  "pointerId"
                  ,pointerIdAttributeGetter
                  );

  }
  {

    script::v8c::shared_bindings::set_property_for_nonconstructor_attribute(
                  isolate,
    // The property has attributes { [[Get]]: G, [[Set]]: S, [[Enumerable]]:
    // true, [[Configurable]]: configurable }, where: configurable is false if
    // the attribute was declared with the [Unforgeable] extended attribute and
    // true otherwise;
                  true,
                  false,
                  false,
                  false,
                  function_template,
                  instance_template,
                  prototype_template,
                  "width"
                  ,widthAttributeGetter
                  );

  }
  {

    script::v8c::shared_bindings::set_property_for_nonconstructor_attribute(
                  isolate,
    // The property has attributes { [[Get]]: G, [[Set]]: S, [[Enumerable]]:
    // true, [[Configurable]]: configurable }, where: configurable is false if
    // the attribute was declared with the [Unforgeable] extended attribute and
    // true otherwise;
                  true,
                  false,
                  false,
                  false,
                  function_template,
                  instance_template,
                  prototype_template,
                  "height"
                  ,heightAttributeGetter
                  );

  }
  {

    script::v8c::shared_bindings::set_property_for_nonconstructor_attribute(
                  isolate,
    // The property has attributes { [[Get]]: G, [[Set]]: S, [[Enumerable]]:
    // true, [[Configurable]]: configurable }, where: configurable is false if
    // the attribute was declared with the [Unforgeable] extended attribute and
    // true otherwise;
                  true,
                  false,
                  false,
                  false,
                  function_template,
                  instance_template,
                  prototype_template,
                  "pressure"
                  ,pressureAttributeGetter
                  );

  }
  {

    script::v8c::shared_bindings::set_property_for_nonconstructor_attribute(
                  isolate,
    // The property has attributes { [[Get]]: G, [[Set]]: S, [[Enumerable]]:
    // true, [[Configurable]]: configurable }, where: configurable is false if
    // the attribute was declared with the [Unforgeable] extended attribute and
    // true otherwise;
                  true,
                  false,
                  false,
                  false,
                  function_template,
                  instance_template,
                  prototype_template,
                  "tiltX"
                  ,tiltXAttributeGetter
                  );

  }
  {

    script::v8c::shared_bindings::set_property_for_nonconstructor_attribute(
                  isolate,
    // The property has attributes { [[Get]]: G, [[Set]]: S, [[Enumerable]]:
    // true, [[Configurable]]: configurable }, where: configurable is false if
    // the attribute was declared with the [Unforgeable] extended attribute and
    // true otherwise;
                  true,
                  false,
                  false,
                  false,
                  function_template,
                  instance_template,
                  prototype_template,
                  "tiltY"
                  ,tiltYAttributeGetter
                  );

  }
  {

    script::v8c::shared_bindings::set_property_for_nonconstructor_attribute(
                  isolate,
    // The property has attributes { [[Get]]: G, [[Set]]: S, [[Enumerable]]:
    // true, [[Configurable]]: configurable }, where: configurable is false if
    // the attribute was declared with the [Unforgeable] extended attribute and
    // true otherwise;
                  true,
                  false,
                  false,
                  false,
                  function_template,
                  instance_template,
                  prototype_template,
                  "pointerType"
                  ,pointerTypeAttributeGetter
                  );

  }
  {

    script::v8c::shared_bindings::set_property_for_nonconstructor_attribute(
                  isolate,
    // The property has attributes { [[Get]]: G, [[Set]]: S, [[Enumerable]]:
    // true, [[Configurable]]: configurable }, where: configurable is false if
    // the attribute was declared with the [Unforgeable] extended attribute and
    // true otherwise;
                  true,
                  false,
                  false,
                  false,
                  function_template,
                  instance_template,
                  prototype_template,
                  "isPrimary"
                  ,isPrimaryAttributeGetter
                  );

  }

  // https://heycam.github.io/webidl/#es-operations
  // 3.6.8. Operations
  //
  // For each unique identifier of an exposed operation defined on the
  // interface, there must exist a corresponding property, unless the effective
  // overload set for that identifier and operation and with an argument count
  // of 0 has no entries.
  //
  // The characteristics of this property are as follows:

  // https://heycam.github.io/webidl/#es-stringifier
  // 3.6.8.2. Stringifiers
  prototype_template->Set(
      v8::Symbol::GetToStringTag(isolate),
      NewInternalString(isolate, "PointerEvent"),
      static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontEnum));





}

}  // namespace


v8::Local<v8::Object> V8cPointerEvent::CreateWrapper(
    v8::Isolate* isolate, const scoped_refptr<Wrappable>& wrappable) {
  EscapableEntryScope entry_scope(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  V8cGlobalEnvironment* global_environment = V8cGlobalEnvironment::GetFromIsolate(isolate);
  if (!global_environment->HasInterfaceData(kInterfaceUniqueId)) {
    InitializeTemplate(isolate);
  }
  v8::Local<v8::FunctionTemplate> function_template = global_environment->GetInterfaceData(kInterfaceUniqueId);

  DCHECK(function_template->InstanceTemplate()->InternalFieldCount() == WrapperPrivate::kInternalFieldCount);
  v8::Local<v8::Object> object = function_template->InstanceTemplate()->NewInstance(context).ToLocalChecked();
  DCHECK(object->InternalFieldCount() == WrapperPrivate::kInternalFieldCount);

  // This |WrapperPrivate|'s lifetime will be managed by V8.
  new WrapperPrivate(isolate, wrappable, object);
  return entry_scope.Escape(object);
}


v8::Local<v8::FunctionTemplate> V8cPointerEvent::GetTemplate(v8::Isolate* isolate) {
  V8cGlobalEnvironment* global_environment = V8cGlobalEnvironment::GetFromIsolate(isolate);
  if (!global_environment->HasInterfaceData(kInterfaceUniqueId)) {
    InitializeTemplate(isolate);
  }
  return global_environment->GetInterfaceData(kInterfaceUniqueId);
}


}  // namespace dom
}  // namespace cobalt


