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

#ifndef UIEventInit_h
#define UIEventInit_h

#include <string>

#include "base/optional.h"
#include "cobalt/script/array_buffer.h"
#include "cobalt/script/array_buffer_view.h"
#include "cobalt/script/script_value.h"
#include "cobalt/script/sequence.h"
#include "cobalt/script/typed_arrays.h"
#include "cobalt/script/value_handle.h"
#include "cobalt/dom/event_init.h"
#include "cobalt/dom/window.h"

using cobalt::dom::EventInit;
using cobalt::dom::Window;

namespace cobalt {
namespace dom {

class UIEventInit : public cobalt::dom::EventInit {
 public:
  UIEventInit()
    : view_(NULL),
      detail_(0),
      which_(0) {
  }

  UIEventInit(const UIEventInit& other)
    : cobalt::dom::EventInit(other) {
    view_ = other.view_;
    detail_ = other.detail_;
    which_ = other.which_;
  }

  UIEventInit& operator=(const UIEventInit& other) {
    cobalt::dom::EventInit::operator=(other);
    view_ = other.view_;
    detail_ = other.detail_;
    which_ = other.which_;
    return *this;
  }

  bool has_view() const {
    return true;
  }
  const scoped_refptr<Window>& view() const {
    return view_;
  }
  void set_view(const scoped_refptr<Window>& value) {
    view_ = value;
  }

  bool has_detail() const {
    return true;
  }
  int32_t detail() const {
    return detail_;
  }
  void set_detail(int32_t value) {
    detail_ = value;
  }

  bool has_which() const {
    return true;
  }
  uint32_t which() const {
    return which_;
  }
  void set_which(uint32_t value) {
    which_ = value;
  }


 private:
  scoped_refptr<Window> view_;
  int32_t detail_;
  uint32_t which_;
};

// This ostream override is necessary for MOCK_METHODs commonly used
// in idl test code
inline std::ostream& operator<<(
    std::ostream& stream, const cobalt::dom::UIEventInit& in) {
  SB_UNREFERENCED_PARAMETER(in);
  stream << "[UIEventInit]";
  return stream;
}

}  // namespace cobalt
}  // namespace dom

#endif  // UIEventInit_h
