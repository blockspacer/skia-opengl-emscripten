
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

#include "cobalt/dom/captions/caption_font_size_percentage.h"

#include "v8c_gen_type_conversion.h"
#include "base/logging.h"
#include "cobalt/script/exception_state.h"
#include "cobalt/script/v8c/helpers.h"
#include "v8/include/v8.h"

using cobalt::dom::captions::CaptionFontSizePercentage;

namespace cobalt {
namespace script {
namespace v8c {

void ToJSValue(
    v8::Isolate* isolate,
    CaptionFontSizePercentage in_enum,
    v8::Local<v8::Value>* out_value) {
  switch (in_enum) {
    case cobalt::dom::captions::kCaptionFontSizePercentage25:
      ToJSValue(isolate, std::string("25"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage50:
      ToJSValue(isolate, std::string("50"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage75:
      ToJSValue(isolate, std::string("75"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage100:
      ToJSValue(isolate, std::string("100"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage125:
      ToJSValue(isolate, std::string("125"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage150:
      ToJSValue(isolate, std::string("150"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage175:
      ToJSValue(isolate, std::string("175"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage200:
      ToJSValue(isolate, std::string("200"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage225:
      ToJSValue(isolate, std::string("225"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage250:
      ToJSValue(isolate, std::string("250"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage275:
      ToJSValue(isolate, std::string("275"), out_value);
      return;
    case cobalt::dom::captions::kCaptionFontSizePercentage300:
      ToJSValue(isolate, std::string("300"), out_value);
      return;
    default:
      NOTREACHED();
      *out_value = v8::Null(isolate);
  }
}

void FromJSValue(v8::Isolate* isolate, v8::Local<v8::Value> value,
                 int conversion_flags, ExceptionState* exception_state,
                 CaptionFontSizePercentage* out_enum) {
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
      NewInternalString(isolate, "25")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage25;
  }
 else  if (
      NewInternalString(isolate, "50")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage50;
  }
 else  if (
      NewInternalString(isolate, "75")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage75;
  }
 else  if (
      NewInternalString(isolate, "100")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage100;
  }
 else  if (
      NewInternalString(isolate, "125")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage125;
  }
 else  if (
      NewInternalString(isolate, "150")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage150;
  }
 else  if (
      NewInternalString(isolate, "175")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage175;
  }
 else  if (
      NewInternalString(isolate, "200")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage200;
  }
 else  if (
      NewInternalString(isolate, "225")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage225;
  }
 else  if (
      NewInternalString(isolate, "250")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage250;
  }
 else  if (
      NewInternalString(isolate, "275")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage275;
  }
 else  if (
      NewInternalString(isolate, "300")->Equals(value))
  {
    *out_enum = cobalt::dom::captions::kCaptionFontSizePercentage300;
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
