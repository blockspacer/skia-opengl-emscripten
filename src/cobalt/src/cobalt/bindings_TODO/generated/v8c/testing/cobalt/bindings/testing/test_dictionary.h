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

#ifndef TestDictionary_h
#define TestDictionary_h

#include <string>

#include "base/optional.h"
#include "cobalt/script/array_buffer.h"
#include "cobalt/script/array_buffer_view.h"
#include "cobalt/script/script_value.h"
#include "cobalt/script/sequence.h"
#include "cobalt/script/typed_arrays.h"
#include "cobalt/script/value_handle.h"
#include "cobalt/bindings/testing/arbitrary_interface.h"

using cobalt::bindings::testing::ArbitraryInterface;

namespace cobalt {
namespace bindings {
namespace testing {

class TestDictionary {
 public:
  TestDictionary() {
    has_boolean_member_ = false;
    boolean_member_ = bool();
    has_short_clamp_member_ = false;
    short_clamp_member_ = int16_t();
    has_long_member_ = false;
    long_member_ = int32_t();
    has_double_member_ = false;
    double_member_ = double();
    has_string_member_ = false;
    string_member_ = std::string();
    has_interface_member_ = false;
    interface_member_ = scoped_refptr<ArbitraryInterface>();
    member_with_default_ = 5;
    has_non_default_member_ = false;
    non_default_member_ = int32_t();
    has_any_member_ = false;
  }

  TestDictionary(const TestDictionary& other) {
    has_boolean_member_ = other.has_boolean_member_;
    boolean_member_ = other.boolean_member_;
    has_short_clamp_member_ = other.has_short_clamp_member_;
    short_clamp_member_ = other.short_clamp_member_;
    has_long_member_ = other.has_long_member_;
    long_member_ = other.long_member_;
    has_double_member_ = other.has_double_member_;
    double_member_ = other.double_member_;
    has_string_member_ = other.has_string_member_;
    string_member_ = other.string_member_;
    has_interface_member_ = other.has_interface_member_;
    interface_member_ = other.interface_member_;
    member_with_default_ = other.member_with_default_;
    has_non_default_member_ = other.has_non_default_member_;
    non_default_member_ = other.non_default_member_;
    if (other.any_member_with_default_) {
      any_member_with_default_.reset(
          new script::Handle<::cobalt::script::ValueHandle>(
              *other.any_member_with_default_));
    }
    has_any_member_ = other.has_any_member_;
    if (other.any_member_) {
      any_member_.reset(
          new script::Handle<::cobalt::script::ValueHandle>(
              *other.any_member_));
    }
  }

  TestDictionary& operator=(const TestDictionary& other) {
    has_boolean_member_ = other.has_boolean_member_;
    boolean_member_ = other.boolean_member_;
    has_short_clamp_member_ = other.has_short_clamp_member_;
    short_clamp_member_ = other.short_clamp_member_;
    has_long_member_ = other.has_long_member_;
    long_member_ = other.long_member_;
    has_double_member_ = other.has_double_member_;
    double_member_ = other.double_member_;
    has_string_member_ = other.has_string_member_;
    string_member_ = other.string_member_;
    has_interface_member_ = other.has_interface_member_;
    interface_member_ = other.interface_member_;
    member_with_default_ = other.member_with_default_;
    has_non_default_member_ = other.has_non_default_member_;
    non_default_member_ = other.non_default_member_;
    if (other.any_member_with_default_) {
      any_member_with_default_.reset(
          new script::Handle<::cobalt::script::ValueHandle>(
              *other.any_member_with_default_));
    } else {
      any_member_with_default_.reset();
    }
    has_any_member_ = other.has_any_member_;
    if (other.any_member_) {
      any_member_.reset(
          new script::Handle<::cobalt::script::ValueHandle>(
              *other.any_member_));
    } else {
      any_member_.reset();
    }
    return *this;
  }

  bool has_boolean_member() const {
    return has_boolean_member_;
  }
  bool boolean_member() const {
    DCHECK(has_boolean_member_);
    return boolean_member_;
  }
  void set_boolean_member(bool value) {
    has_boolean_member_ = true;
    boolean_member_ = value;
  }

  bool has_short_clamp_member() const {
    return has_short_clamp_member_;
  }
  int16_t short_clamp_member() const {
    DCHECK(has_short_clamp_member_);
    return short_clamp_member_;
  }
  void set_short_clamp_member(int16_t value) {
    has_short_clamp_member_ = true;
    short_clamp_member_ = value;
  }

  bool has_long_member() const {
    return has_long_member_;
  }
  int32_t long_member() const {
    DCHECK(has_long_member_);
    return long_member_;
  }
  void set_long_member(int32_t value) {
    has_long_member_ = true;
    long_member_ = value;
  }

  bool has_double_member() const {
    return has_double_member_;
  }
  double double_member() const {
    DCHECK(has_double_member_);
    return double_member_;
  }
  void set_double_member(double value) {
    has_double_member_ = true;
    double_member_ = value;
  }

  bool has_string_member() const {
    return has_string_member_;
  }
  const std::string& string_member() const {
    DCHECK(has_string_member_);
    return string_member_;
  }
  void set_string_member(const std::string& value) {
    has_string_member_ = true;
    string_member_ = value;
  }

  bool has_interface_member() const {
    return has_interface_member_;
  }
  const scoped_refptr<ArbitraryInterface>& interface_member() const {
    DCHECK(has_interface_member_);
    return interface_member_;
  }
  void set_interface_member(const scoped_refptr<ArbitraryInterface>& value) {
    has_interface_member_ = true;
    interface_member_ = value;
  }

  bool has_member_with_default() const {
    return true;
  }
  int32_t member_with_default() const {
    return member_with_default_;
  }
  void set_member_with_default(int32_t value) {
    member_with_default_ = value;
  }

  bool has_non_default_member() const {
    return has_non_default_member_;
  }
  int32_t non_default_member() const {
    DCHECK(has_non_default_member_);
    return non_default_member_;
  }
  void set_non_default_member(int32_t value) {
    has_non_default_member_ = true;
    non_default_member_ = value;
  }

  bool has_any_member_with_default() const {
    return true;
  }
  const ::cobalt::script::ScriptValue<::cobalt::script::ValueHandle>* any_member_with_default() const {
    if (!any_member_with_default_) {
      return NULL;
    }
    return (any_member_with_default_->GetScriptValue());
  }
  void set_any_member_with_default(const ::cobalt::script::ScriptValue<::cobalt::script::ValueHandle>* value) {
    if (value) {
      any_member_with_default_.reset(
          new script::Handle<::cobalt::script::ValueHandle>(*value));
    } else {
      any_member_with_default_.reset();
    }
  }

  bool has_any_member() const {
    return has_any_member_;
  }
  const ::cobalt::script::ScriptValue<::cobalt::script::ValueHandle>* any_member() const {
    DCHECK(has_any_member_);
    if (!any_member_) {
      return NULL;
    }
    return (any_member_->GetScriptValue());
  }
  void set_any_member(const ::cobalt::script::ScriptValue<::cobalt::script::ValueHandle>* value) {
    has_any_member_ = true;
    if (value) {
      any_member_.reset(
          new script::Handle<::cobalt::script::ValueHandle>(*value));
    } else {
      any_member_.reset();
    }
  }


 private:
  bool has_boolean_member_;
  bool boolean_member_;
  bool has_short_clamp_member_;
  int16_t short_clamp_member_;
  bool has_long_member_;
  int32_t long_member_;
  bool has_double_member_;
  double double_member_;
  bool has_string_member_;
  std::string string_member_;
  bool has_interface_member_;
  scoped_refptr<ArbitraryInterface> interface_member_;
  int32_t member_with_default_;
  bool has_non_default_member_;
  int32_t non_default_member_;
  std::unique_ptr<script::Handle<::cobalt::script::ValueHandle>> any_member_with_default_;
  bool has_any_member_;
  std::unique_ptr<script::Handle<::cobalt::script::ValueHandle>> any_member_;
};

// This ostream override is necessary for MOCK_METHODs commonly used
// in idl test code
inline std::ostream& operator<<(
    std::ostream& stream, const cobalt::bindings::testing::TestDictionary& in) {
  SB_UNREFERENCED_PARAMETER(in);
  stream << "[TestDictionary]";
  return stream;
}

}  // namespace cobalt
}  // namespace bindings
}  // namespace testing

#endif  // TestDictionary_h
