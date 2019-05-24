// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_GAMMA_RAMP_RGB_ENTRY_MOJOM_SHARED_H_
#define UI_DISPLAY_MOJO_GAMMA_RAMP_RGB_ENTRY_MOJOM_SHARED_H_

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
#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace display {
namespace mojom {
class GammaRampRGBEntryDataView;



}  // namespace mojom
}  // namespace display

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::display::mojom::GammaRampRGBEntryDataView> {
  using Data = ::display::mojom::internal::GammaRampRGBEntry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace display {
namespace mojom {
class GammaRampRGBEntryDataView {
 public:
  GammaRampRGBEntryDataView() {}

  GammaRampRGBEntryDataView(
      internal::GammaRampRGBEntry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint16_t r() const {
    return data_->r;
  }
  uint16_t g() const {
    return data_->g;
  }
  uint16_t b() const {
    return data_->b;
  }
 private:
  internal::GammaRampRGBEntry_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace display

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::GammaRampRGBEntryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::display::mojom::GammaRampRGBEntryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::display::mojom::internal::GammaRampRGBEntry_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->r = Traits::r(input);
    (*output)->g = Traits::g(input);
    (*output)->b = Traits::b(input);
  }

  static bool Deserialize(::display::mojom::internal::GammaRampRGBEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::display::mojom::GammaRampRGBEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace display {
namespace mojom {




}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_GAMMA_RAMP_RGB_ENTRY_MOJOM_SHARED_H_