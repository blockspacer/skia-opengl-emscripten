// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {








class BLINK_COMMON_EXPORT UsageBreakdown {
 public:
  using DataView = UsageBreakdownDataView;
  using Data_ = internal::UsageBreakdown_Data;

  template <typename... Args>
  static UsageBreakdownPtr New(Args&&... args) {
    return UsageBreakdownPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsageBreakdownPtr From(const U& u) {
    return mojo::TypeConverter<UsageBreakdownPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsageBreakdown>::Convert(*this);
  }


  UsageBreakdown();

  UsageBreakdown(
      int64_t fileSystem,
      int64_t webSql,
      int64_t appcache,
      int64_t indexedDatabase,
      int64_t serviceWorkerCache,
      int64_t serviceWorker,
      int64_t backgroundFetch);

  ~UsageBreakdown();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsageBreakdownPtr>
  UsageBreakdownPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsageBreakdown>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsageBreakdown::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsageBreakdown::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsageBreakdown_UnserializedMessageContext<
            UserType, UsageBreakdown::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsageBreakdown::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsageBreakdown::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsageBreakdown_UnserializedMessageContext<
            UserType, UsageBreakdown::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsageBreakdown::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t fileSystem;
  
  int64_t webSql;
  
  int64_t appcache;
  
  int64_t indexedDatabase;
  
  int64_t serviceWorkerCache;
  
  int64_t serviceWorker;
  
  int64_t backgroundFetch;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
UsageBreakdownPtr UsageBreakdown::Clone() const {
  return New(
      mojo::Clone(fileSystem),
      mojo::Clone(webSql),
      mojo::Clone(appcache),
      mojo::Clone(indexedDatabase),
      mojo::Clone(serviceWorkerCache),
      mojo::Clone(serviceWorker),
      mojo::Clone(backgroundFetch)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsageBreakdown>::value>::type*>
bool UsageBreakdown::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->fileSystem, other_struct.fileSystem))
    return false;
  if (!mojo::Equals(this->webSql, other_struct.webSql))
    return false;
  if (!mojo::Equals(this->appcache, other_struct.appcache))
    return false;
  if (!mojo::Equals(this->indexedDatabase, other_struct.indexedDatabase))
    return false;
  if (!mojo::Equals(this->serviceWorkerCache, other_struct.serviceWorkerCache))
    return false;
  if (!mojo::Equals(this->serviceWorker, other_struct.serviceWorker))
    return false;
  if (!mojo::Equals(this->backgroundFetch, other_struct.backgroundFetch))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::UsageBreakdown::DataView,
                                         ::blink::mojom::UsageBreakdownPtr> {
  static bool IsNull(const ::blink::mojom::UsageBreakdownPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::UsageBreakdownPtr* output) { output->reset(); }

  static decltype(::blink::mojom::UsageBreakdown::fileSystem) fileSystem(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->fileSystem;
  }

  static decltype(::blink::mojom::UsageBreakdown::webSql) webSql(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->webSql;
  }

  static decltype(::blink::mojom::UsageBreakdown::appcache) appcache(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->appcache;
  }

  static decltype(::blink::mojom::UsageBreakdown::indexedDatabase) indexedDatabase(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->indexedDatabase;
  }

  static decltype(::blink::mojom::UsageBreakdown::serviceWorkerCache) serviceWorkerCache(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->serviceWorkerCache;
  }

  static decltype(::blink::mojom::UsageBreakdown::serviceWorker) serviceWorker(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->serviceWorker;
  }

  static decltype(::blink::mojom::UsageBreakdown::backgroundFetch) backgroundFetch(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->backgroundFetch;
  }

  static bool Read(::blink::mojom::UsageBreakdown::DataView input, ::blink::mojom::UsageBreakdownPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_H_