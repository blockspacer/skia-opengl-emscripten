
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
// Auto-generated from template: bindings/v8c/templates/enumeration-conversion.cc.template

#include "cobalt/media_capture/media_device_kind.h"

#include "v8c_gen_type_conversion.h"
#include "base/logging.h"
#include "cobalt/script/exception_state.h"
#include "cobalt/script/v8c/helpers.h"
#include "v8/include/v8.h"

using cobalt::media_capture::MediaDeviceKind;

namespace cobalt {
namespace script {
namespace v8c {

void ToJSValue(
    v8::Isolate* isolate,
    MediaDeviceKind in_enum,
    v8::Local<v8::Value>* out_value) {
  switch (in_enum) {
    case cobalt::media_capture::kMediaDeviceKindAudioinput:
      ToJSValue(isolate, std::string("audioinput"), out_value);
      return;
    case cobalt::media_capture::kMediaDeviceKindAudiooutput:
      ToJSValue(isolate, std::string("audiooutput"), out_value);
      return;
    case cobalt::media_capture::kMediaDeviceKindVideoinput:
      ToJSValue(isolate, std::string("videoinput"), out_value);
      return;
    default:
      NOTREACHED();
      *out_value = v8::Null(isolate);
  }
}

void FromJSValue(v8::Isolate* isolate, v8::Local<v8::Value> value,
                 int conversion_flags, ExceptionState* exception_state,
                 MediaDeviceKind* out_enum) {
  DCHECK_EQ(0, conversion_flags) << "Unexpected conversion flags.";
  // JSValue -> IDL enum algorithm described here:
  // http://heycam.github.io/webidl/#es-enumeration
  // 1. Let S be the result of calling ToString(V).
  v8::MaybeLocal<v8::String> maybe_string = value->ToString(isolate->GetCurrentContext());
  v8::Local<v8::String> string;
  if (!maybe_string.ToLocal(&string)) {
    exception_state->SetSimpleException(cobalt::script::kConvertToEnumFailed);
    return;
  }

  bool match = false;
// 3. Return the enumeration value of type E that is equal to S.
 if (
      NewInternalString(isolate, "audioinput")->Equals(value))
  {
    *out_enum = cobalt::media_capture::kMediaDeviceKindAudioinput;
  }
 else  if (
      NewInternalString(isolate, "audiooutput")->Equals(value))
  {
    *out_enum = cobalt::media_capture::kMediaDeviceKindAudiooutput;
  }
 else  if (
      NewInternalString(isolate, "videoinput")->Equals(value))
  {
    *out_enum = cobalt::media_capture::kMediaDeviceKindVideoinput;
  }
  else {
    // 2. If S is not one of E's enumeration values, then throw a TypeError.
    exception_state->SetSimpleException(cobalt::script::kConvertToEnumFailed);
    return;
  }
}

}  // namespace v8c
}  // namespace script
}  // namespace cobalt
