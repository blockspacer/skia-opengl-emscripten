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

#ifndef EventInit_h
#define EventInit_h

#include <string>

#include "base/optional.h"
#include "cobalt/script/array_buffer.h"
#include "cobalt/script/array_buffer_view.h"
#include "cobalt/script/script_value.h"
#include "cobalt/script/sequence.h"
#include "cobalt/script/typed_arrays.h"
#include "cobalt/script/value_handle.h"


namespace cobalt {
namespace dom {

class EventInit {
 public:
  EventInit() {
    bubbles_ = false;
    cancelable_ = false;
    time_stamp_ = 0;
  }

  EventInit(const EventInit& other) {
    bubbles_ = other.bubbles_;
    cancelable_ = other.cancelable_;
    time_stamp_ = other.time_stamp_;
  }

  EventInit& operator=(const EventInit& other) {
    bubbles_ = other.bubbles_;
    cancelable_ = other.cancelable_;
    time_stamp_ = other.time_stamp_;
    return *this;
  }

  bool has_bubbles() const {
    return true;
  }
  bool bubbles() const {
    return bubbles_;
  }
  void set_bubbles(bool value) {
    bubbles_ = value;
  }

  bool has_cancelable() const {
    return true;
  }
  bool cancelable() const {
    return cancelable_;
  }
  void set_cancelable(bool value) {
    cancelable_ = value;
  }

  bool has_time_stamp() const {
    return true;
  }
  const uint64_t& time_stamp() const {
    return time_stamp_;
  }
  void set_time_stamp(const uint64_t& value) {
    time_stamp_ = value;
  }


 private:
  bool bubbles_;
  bool cancelable_;
  uint64_t time_stamp_;
};

// This ostream override is necessary for MOCK_METHODs commonly used
// in idl test code
inline std::ostream& operator<<(
    std::ostream& stream, const cobalt::dom::EventInit& in) {
  SB_UNREFERENCED_PARAMETER(in);
  stream << "[EventInit]";
  return stream;
}

}  // namespace cobalt
}  // namespace dom

#endif  // EventInit_h
