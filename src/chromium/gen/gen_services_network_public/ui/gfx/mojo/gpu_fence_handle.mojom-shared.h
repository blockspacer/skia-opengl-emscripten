// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_SHARED_H_
#define UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/gpu_fence_handle.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class GpuFenceHandleDataView;



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gfx::mojom::GpuFenceHandleDataView> {
  using Data = ::gfx::mojom::internal::GpuFenceHandle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {


enum class GpuFenceHandleType : int32_t {
  
  kEmpty,
  
  kAndroidNativeFenceSync,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, GpuFenceHandleType value);
inline bool IsKnownEnumValue(GpuFenceHandleType value) {
  return internal::GpuFenceHandleType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class GpuFenceHandleDataView {
 public:
  GpuFenceHandleDataView() {}

  GpuFenceHandleDataView(
      internal::GpuFenceHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::gfx::mojom::GpuFenceHandleType>(
        data_value, output);
  }

  GpuFenceHandleType type() const {
    return static_cast<GpuFenceHandleType>(data_->type);
  }
  mojo::ScopedHandle TakeNativeFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->native_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::GpuFenceHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace std {

template <>
struct hash<::gfx::mojom::GpuFenceHandleType>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::GpuFenceHandleType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gfx::mojom::GpuFenceHandleType, ::gfx::mojom::GpuFenceHandleType> {
  static ::gfx::mojom::GpuFenceHandleType ToMojom(::gfx::mojom::GpuFenceHandleType input) { return input; }
  static bool FromMojom(::gfx::mojom::GpuFenceHandleType input, ::gfx::mojom::GpuFenceHandleType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::GpuFenceHandleType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::GpuFenceHandleType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::GpuFenceHandleType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::GpuFenceHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::GpuFenceHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::GpuFenceHandle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::gfx::mojom::GpuFenceHandleType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::native_fd(input)) in_native_fd = Traits::native_fd(input);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_native_fd, &(*output)->native_fd, context);
  }

  static bool Deserialize(::gfx::mojom::internal::GpuFenceHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::GpuFenceHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {




}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_SHARED_H_