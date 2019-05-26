// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_FILE_ERROR_MOJOM_SHARED_H_
#define MOJO_PUBLIC_MOJOM_BASE_FILE_ERROR_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/mojom/base/file_error.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace mojo_base {
namespace mojom {


enum class FileError : int32_t {
  
  OK = 0,
  
  FAILED = -1,
  
  IN_USE = -2,
  
  EXISTS = -3,
  
  NOT_FOUND = -4,
  
  ACCESS_DENIED = -5,
  
  TOO_MANY_OPENED = -6,
  
  NO_MEMORY = -7,
  
  NO_SPACE = -8,
  
  NOT_A_DIRECTORY = -9,
  
  INVALID_OPERATION = -10,
  
  SECURITY = -11,
  
  ABORT = -12,
  
  NOT_A_FILE = -13,
  
  NOT_EMPTY = -14,
  
  INVALID_URL = -15,
  
  IO = -16,
  kMinValue = -16,
  kMaxValue = 0,
};

COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, FileError value);
inline bool IsKnownEnumValue(FileError value) {
  return internal::FileError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace mojo_base

namespace std {

template <>
struct hash<::mojo_base::mojom::FileError>
    : public mojo::internal::EnumHashImpl<::mojo_base::mojom::FileError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo_base::mojom::FileError, ::mojo_base::mojom::FileError> {
  static ::mojo_base::mojom::FileError ToMojom(::mojo_base::mojom::FileError input) { return input; }
  static bool FromMojom(::mojo_base::mojom::FileError input, ::mojo_base::mojom::FileError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::FileError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo_base::mojom::FileError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo_base::mojom::FileError>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo_base {
namespace mojom {


}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_FILE_ERROR_MOJOM_SHARED_H_