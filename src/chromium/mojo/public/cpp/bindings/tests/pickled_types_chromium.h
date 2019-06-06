// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_CPP_BINDINGS_TESTS_PICKLED_TYPES_CHROMIUM_H_
#define MOJO_PUBLIC_CPP_BINDINGS_TESTS_PICKLED_TYPES_CHROMIUM_H_

#include <stddef.h>

#include <string>

#include "base/macros.h"
#if defined(ENABLE_GIPC)
#include "ipc/ipc_message_macros.h"
#include "ipc/ipc_param_traits.h"
#endif // ENABLE_GIPC

namespace base {
class Pickle;
class PickleIterator;
}

namespace mojo {
namespace test {

// Implementation of types with IPC::ParamTraits for consumers in the greater
// Chromium tree.

enum class PickledEnumChromium { VALUE_0, VALUE_1, VALUE_2 };

class PickledStructChromium {
 public:
  PickledStructChromium();
  PickledStructChromium(int foo, int bar);
  PickledStructChromium(PickledStructChromium&& other) = default;
  ~PickledStructChromium();

  PickledStructChromium& operator=(PickledStructChromium&& other) = default;

  int foo() const { return foo_; }
  void set_foo(int foo) { foo_ = foo; }

  int bar() const { return bar_; }
  void set_bar(int bar) { bar_ = bar; }

  // The |baz| field should never be serialized.
  int baz() const { return baz_; }
  void set_baz(int baz) { baz_ = baz; }

 private:
  int foo_ = 0;
  int bar_ = 0;
  int baz_ = 0;

  DISALLOW_COPY_AND_ASSIGN(PickledStructChromium);
};

bool operator==(const PickledStructChromium& a, const PickledStructChromium& b);

}  // namespace test
}  // namespace mojo

#if defined(ENABLE_GIPC)
namespace IPC {

template <>
struct ParamTraits<mojo::test::PickledStructChromium> {
  using param_type = mojo::test::PickledStructChromium;

  static void Write(base::Pickle* m, const param_type& p);
  static bool Read(const base::Pickle* m,
                   base::PickleIterator* iter,
                   param_type* r);
  static void Log(const param_type& p, std::string* l) {}
};

}  // namespace IPC

IPC_ENUM_TRAITS_MAX_VALUE(mojo::test::PickledEnumChromium,
                          mojo::test::PickledEnumChromium::VALUE_2)
#endif // ENABLE_GIPC

#endif  // MOJO_PUBLIC_CPP_BINDINGS_TESTS_PICKLED_TYPES_CHROMIUM_H_
