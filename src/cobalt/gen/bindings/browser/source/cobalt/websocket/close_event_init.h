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
// Auto-generated from template: bindings/templates/dictionary.h.template

#ifndef CloseEventInit_h
#define CloseEventInit_h

#include <string>

#include "base/optional.h"
#include "cobalt/script/array_buffer.h"
#include "cobalt/script/array_buffer_view.h"
#include "cobalt/script/script_value.h"
#include "cobalt/script/sequence.h"
#include "cobalt/script/typed_arrays.h"
#include "cobalt/script/value_handle.h"
#include "cobalt/dom/event_init.h"

using cobalt::dom::EventInit;

namespace cobalt {
namespace websocket {

class CloseEventInit : public cobalt::dom::EventInit {
 public:
  CloseEventInit() {
    was_clean_ = false;
    code_ = 0;
    reason_ = "";
  }

  CloseEventInit(const CloseEventInit& other)
    : cobalt::dom::EventInit(other) {
    was_clean_ = other.was_clean_;
    code_ = other.code_;
    reason_ = other.reason_;
  }

  CloseEventInit& operator=(const CloseEventInit& other) {
    cobalt::dom::EventInit::operator=(other);
    was_clean_ = other.was_clean_;
    code_ = other.code_;
    reason_ = other.reason_;
    return *this;
  }

  bool has_was_clean() const {
    return true;
  }
  bool was_clean() const {
    return was_clean_;
  }
  void set_was_clean(bool value) {
    was_clean_ = value;
  }

  bool has_code() const {
    return true;
  }
  uint16_t code() const {
    return code_;
  }
  void set_code(uint16_t value) {
    code_ = value;
  }

  bool has_reason() const {
    return true;
  }
  const std::string& reason() const {
    return reason_;
  }
  void set_reason(const std::string& value) {
    reason_ = value;
  }


 private:
  bool was_clean_;
  uint16_t code_;
  std::string reason_;
};

// This ostream override is necessary for MOCK_METHODs commonly used
// in idl test code
inline std::ostream& operator<<(
    std::ostream& stream, const cobalt::websocket::CloseEventInit& in) {
  SB_UNREFERENCED_PARAMETER(in);
  stream << "[CloseEventInit]";
  return stream;
}

}  // namespace cobalt
}  // namespace websocket

#endif  // CloseEventInit_h