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

#ifndef PointerEventInit_h
#define PointerEventInit_h

#include <string>

#include "base/optional.h"
#include "cobalt/script/array_buffer.h"
#include "cobalt/script/array_buffer_view.h"
#include "cobalt/script/script_value.h"
#include "cobalt/script/sequence.h"
#include "cobalt/script/typed_arrays.h"
#include "cobalt/script/value_handle.h"
#include "cobalt/dom/mouse_event_init.h"

using cobalt::dom::MouseEventInit;

namespace cobalt {
namespace dom {

class PointerEventInit : public cobalt::dom::MouseEventInit {
 public:
  PointerEventInit() {
    pointer_id_ = 0;
    width_ = 0;
    height_ = 0;
    pressure_ = 0;
    tilt_x_ = 0;
    tilt_y_ = 0;
    pointer_type_ = "";
    is_primary_ = false;
  }

  PointerEventInit(const PointerEventInit& other)
    : cobalt::dom::MouseEventInit(other) {
    pointer_id_ = other.pointer_id_;
    width_ = other.width_;
    height_ = other.height_;
    pressure_ = other.pressure_;
    tilt_x_ = other.tilt_x_;
    tilt_y_ = other.tilt_y_;
    pointer_type_ = other.pointer_type_;
    is_primary_ = other.is_primary_;
  }

  PointerEventInit& operator=(const PointerEventInit& other) {
    cobalt::dom::MouseEventInit::operator=(other);
    pointer_id_ = other.pointer_id_;
    width_ = other.width_;
    height_ = other.height_;
    pressure_ = other.pressure_;
    tilt_x_ = other.tilt_x_;
    tilt_y_ = other.tilt_y_;
    pointer_type_ = other.pointer_type_;
    is_primary_ = other.is_primary_;
    return *this;
  }

  bool has_pointer_id() const {
    return true;
  }
  int32_t pointer_id() const {
    return pointer_id_;
  }
  void set_pointer_id(int32_t value) {
    pointer_id_ = value;
  }

  bool has_width() const {
    return true;
  }
  double width() const {
    return width_;
  }
  void set_width(double value) {
    width_ = value;
  }

  bool has_height() const {
    return true;
  }
  double height() const {
    return height_;
  }
  void set_height(double value) {
    height_ = value;
  }

  bool has_pressure() const {
    return true;
  }
  float pressure() const {
    return pressure_;
  }
  void set_pressure(float value) {
    pressure_ = value;
  }

  bool has_tilt_x() const {
    return true;
  }
  int32_t tilt_x() const {
    return tilt_x_;
  }
  void set_tilt_x(int32_t value) {
    tilt_x_ = value;
  }

  bool has_tilt_y() const {
    return true;
  }
  int32_t tilt_y() const {
    return tilt_y_;
  }
  void set_tilt_y(int32_t value) {
    tilt_y_ = value;
  }

  bool has_pointer_type() const {
    return true;
  }
  const std::string& pointer_type() const {
    return pointer_type_;
  }
  void set_pointer_type(const std::string& value) {
    pointer_type_ = value;
  }

  bool has_is_primary() const {
    return true;
  }
  bool is_primary() const {
    return is_primary_;
  }
  void set_is_primary(bool value) {
    is_primary_ = value;
  }


 private:
  int32_t pointer_id_;
  double width_;
  double height_;
  float pressure_;
  int32_t tilt_x_;
  int32_t tilt_y_;
  std::string pointer_type_;
  bool is_primary_;
};

// This ostream override is necessary for MOCK_METHODs commonly used
// in idl test code
inline std::ostream& operator<<(
    std::ostream& stream, const cobalt::dom::PointerEventInit& in) {
  SB_UNREFERENCED_PARAMETER(in);
  stream << "[PointerEventInit]";
  return stream;
}

}  // namespace cobalt
}  // namespace dom

#endif  // PointerEventInit_h