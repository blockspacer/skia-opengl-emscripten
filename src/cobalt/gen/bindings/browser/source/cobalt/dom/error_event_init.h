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

#ifndef ErrorEventInit_h
#define ErrorEventInit_h

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
namespace dom {

class ErrorEventInit : public cobalt::dom::EventInit {
 public:
  ErrorEventInit() {
    message_ = "";
    filename_ = "";
    lineno_ = 0;
    colno_ = 0;
  }

  ErrorEventInit(const ErrorEventInit& other)
    : cobalt::dom::EventInit(other) {
    message_ = other.message_;
    filename_ = other.filename_;
    lineno_ = other.lineno_;
    colno_ = other.colno_;
    if (other.error_) {
      error_.reset(
          new script::Handle<::cobalt::script::ValueHandle>(
              *other.error_));
    }
  }

  ErrorEventInit& operator=(const ErrorEventInit& other) {
    cobalt::dom::EventInit::operator=(other);
    message_ = other.message_;
    filename_ = other.filename_;
    lineno_ = other.lineno_;
    colno_ = other.colno_;
    if (other.error_) {
      error_.reset(
          new script::Handle<::cobalt::script::ValueHandle>(
              *other.error_));
    } else {
      error_.reset();
    }
    return *this;
  }

  bool has_message() const {
    return true;
  }
  const std::string& message() const {
    return message_;
  }
  void set_message(const std::string& value) {
    message_ = value;
  }

  bool has_filename() const {
    return true;
  }
  const std::string& filename() const {
    return filename_;
  }
  void set_filename(const std::string& value) {
    filename_ = value;
  }

  bool has_lineno() const {
    return true;
  }
  uint32_t lineno() const {
    return lineno_;
  }
  void set_lineno(uint32_t value) {
    lineno_ = value;
  }

  bool has_colno() const {
    return true;
  }
  uint32_t colno() const {
    return colno_;
  }
  void set_colno(uint32_t value) {
    colno_ = value;
  }

  bool has_error() const {
    return true;
  }
  const ::cobalt::script::ScriptValue<::cobalt::script::ValueHandle>* error() const {
    if (!error_) {
      return NULL;
    }
    return (error_->GetScriptValue());
  }
  void set_error(const ::cobalt::script::ScriptValue<::cobalt::script::ValueHandle>* value) {
    if (value) {
      error_.reset(
          new script::Handle<::cobalt::script::ValueHandle>(*value));
    } else {
      error_.reset();
    }
  }


 private:
  std::string message_;
  std::string filename_;
  uint32_t lineno_;
  uint32_t colno_;
  std::unique_ptr<script::Handle<::cobalt::script::ValueHandle>> error_;
};

// This ostream override is necessary for MOCK_METHODs commonly used
// in idl test code
inline std::ostream& operator<<(
    std::ostream& stream, const cobalt::dom::ErrorEventInit& in) {
  SB_UNREFERENCED_PARAMETER(in);
  stream << "[ErrorEventInit]";
  return stream;
}

}  // namespace cobalt
}  // namespace dom

#endif  // ErrorEventInit_h
