// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class LeakDetectionResultDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::LeakDetectionResultDataView> {
  using Data = ::blink::mojom::internal::LeakDetectionResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class LeakDetectorInterfaceBase {};

using LeakDetectorPtrDataView =
    mojo::InterfacePtrDataView<LeakDetectorInterfaceBase>;
using LeakDetectorRequestDataView =
    mojo::InterfaceRequestDataView<LeakDetectorInterfaceBase>;
using LeakDetectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LeakDetectorInterfaceBase>;
using LeakDetectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LeakDetectorInterfaceBase>;
class LeakDetectionResultDataView {
 public:
  LeakDetectionResultDataView() {}

  LeakDetectionResultDataView(
      internal::LeakDetectionResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t number_of_live_audio_nodes() const {
    return data_->number_of_live_audio_nodes;
  }
  uint32_t number_of_live_documents() const {
    return data_->number_of_live_documents;
  }
  uint32_t number_of_live_nodes() const {
    return data_->number_of_live_nodes;
  }
  uint32_t number_of_live_layout_objects() const {
    return data_->number_of_live_layout_objects;
  }
  uint32_t number_of_live_resources() const {
    return data_->number_of_live_resources;
  }
  uint32_t number_of_live_context_lifecycle_state_observers() const {
    return data_->number_of_live_context_lifecycle_state_observers;
  }
  uint32_t number_of_live_script_promises() const {
    return data_->number_of_live_script_promises;
  }
  uint32_t number_of_live_frames() const {
    return data_->number_of_live_frames;
  }
  uint32_t number_of_live_v8_per_context_data() const {
    return data_->number_of_live_v8_per_context_data;
  }
  uint32_t number_of_worker_global_scopes() const {
    return data_->number_of_worker_global_scopes;
  }
  uint32_t number_of_live_ua_css_resources() const {
    return data_->number_of_live_ua_css_resources;
  }
  uint32_t number_of_live_resource_fetchers() const {
    return data_->number_of_live_resource_fetchers;
  }
 private:
  internal::LeakDetectionResult_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LeakDetectionResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::LeakDetectionResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::LeakDetectionResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->number_of_live_audio_nodes = Traits::number_of_live_audio_nodes(input);
    (*output)->number_of_live_documents = Traits::number_of_live_documents(input);
    (*output)->number_of_live_nodes = Traits::number_of_live_nodes(input);
    (*output)->number_of_live_layout_objects = Traits::number_of_live_layout_objects(input);
    (*output)->number_of_live_resources = Traits::number_of_live_resources(input);
    (*output)->number_of_live_context_lifecycle_state_observers = Traits::number_of_live_context_lifecycle_state_observers(input);
    (*output)->number_of_live_script_promises = Traits::number_of_live_script_promises(input);
    (*output)->number_of_live_frames = Traits::number_of_live_frames(input);
    (*output)->number_of_live_v8_per_context_data = Traits::number_of_live_v8_per_context_data(input);
    (*output)->number_of_worker_global_scopes = Traits::number_of_worker_global_scopes(input);
    (*output)->number_of_live_ua_css_resources = Traits::number_of_live_ua_css_resources(input);
    (*output)->number_of_live_resource_fetchers = Traits::number_of_live_resource_fetchers(input);
  }

  static bool Deserialize(::blink::mojom::internal::LeakDetectionResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::LeakDetectionResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_SHARED_H_