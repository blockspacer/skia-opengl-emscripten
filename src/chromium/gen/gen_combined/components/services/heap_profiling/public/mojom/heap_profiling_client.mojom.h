// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_H_

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
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared.h"
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-forward.h"
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




namespace heap_profiling {
namespace mojom {

class ProfilingClientProxy;

template <typename ImplRefTraits>
class ProfilingClientStub;

class ProfilingClientRequestValidator;
class ProfilingClientResponseValidator;


class  ProfilingClient
    : public ProfilingClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProfilingClientInterfaceBase;
  using Proxy_ = ProfilingClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProfilingClientStub<ImplRefTraits>;

  using RequestValidator_ = ProfilingClientRequestValidator;
  using ResponseValidator_ = ProfilingClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartProfilingMinVersion = 0,
    kRetrieveHeapProfileMinVersion = 0,
  };
  virtual ~ProfilingClient() {}

  
  virtual void StartProfiling(ProfilingParamsPtr params) = 0;


  using RetrieveHeapProfileCallback = base::OnceCallback<void(HeapProfilePtr)>;
  
  virtual void RetrieveHeapProfile(RetrieveHeapProfileCallback callback) = 0;
};

class  ProfilingClientProxy
    : public ProfilingClient {
 public:
  using InterfaceType = ProfilingClient;

  explicit ProfilingClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartProfiling(ProfilingParamsPtr params) final;
  void RetrieveHeapProfile(RetrieveHeapProfileCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ProfilingClientStubDispatch {
 public:
  static bool Accept(ProfilingClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProfilingClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProfilingClient>>
class ProfilingClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProfilingClientStub() {}
  ~ProfilingClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfilingClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfilingClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProfilingClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProfilingClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  ProfilingParams {
 public:
  using DataView = ProfilingParamsDataView;
  using Data_ = internal::ProfilingParams_Data;

  template <typename... Args>
  static ProfilingParamsPtr New(Args&&... args) {
    return ProfilingParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProfilingParamsPtr From(const U& u) {
    return mojo::TypeConverter<ProfilingParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProfilingParams>::Convert(*this);
  }


  ProfilingParams();

  ProfilingParams(
      StackMode stack_mode,
      uint32_t sampling_rate);

  ~ProfilingParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProfilingParamsPtr>
  ProfilingParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProfilingParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProfilingParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProfilingParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProfilingParams_UnserializedMessageContext<
            UserType, ProfilingParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProfilingParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProfilingParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProfilingParams_UnserializedMessageContext<
            UserType, ProfilingParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProfilingParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  StackMode stack_mode;
  
  uint32_t sampling_rate;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class  HeapProfileSample {
 public:
  using DataView = HeapProfileSampleDataView;
  using Data_ = internal::HeapProfileSample_Data;

  template <typename... Args>
  static HeapProfileSamplePtr New(Args&&... args) {
    return HeapProfileSamplePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HeapProfileSamplePtr From(const U& u) {
    return mojo::TypeConverter<HeapProfileSamplePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HeapProfileSample>::Convert(*this);
  }


  HeapProfileSample();

  HeapProfileSample(
      AllocatorType allocator,
      uint64_t size,
      uint64_t context_id,
      const std::vector<uint64_t>& stack);

  ~HeapProfileSample();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HeapProfileSamplePtr>
  HeapProfileSamplePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HeapProfileSample>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HeapProfileSample::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HeapProfileSample::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HeapProfileSample_UnserializedMessageContext<
            UserType, HeapProfileSample::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HeapProfileSample::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HeapProfileSample::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HeapProfileSample_UnserializedMessageContext<
            UserType, HeapProfileSample::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HeapProfileSample::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  AllocatorType allocator;
  
  uint64_t size;
  
  uint64_t context_id;
  
  std::vector<uint64_t> stack;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  HeapProfile {
 public:
  using DataView = HeapProfileDataView;
  using Data_ = internal::HeapProfile_Data;

  template <typename... Args>
  static HeapProfilePtr New(Args&&... args) {
    return HeapProfilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HeapProfilePtr From(const U& u) {
    return mojo::TypeConverter<HeapProfilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HeapProfile>::Convert(*this);
  }


  HeapProfile();

  HeapProfile(
      std::vector<HeapProfileSamplePtr> samples,
      const base::flat_map<uint64_t, std::string>& strings);

  ~HeapProfile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HeapProfilePtr>
  HeapProfilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HeapProfile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HeapProfile::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HeapProfile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HeapProfile_UnserializedMessageContext<
            UserType, HeapProfile::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HeapProfile::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HeapProfile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HeapProfile_UnserializedMessageContext<
            UserType, HeapProfile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HeapProfile::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<HeapProfileSamplePtr> samples;
  
  base::flat_map<uint64_t, std::string> strings;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HeapProfile);
};

template <typename StructPtrType>
ProfilingParamsPtr ProfilingParams::Clone() const {
  return New(
      mojo::Clone(stack_mode),
      mojo::Clone(sampling_rate)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProfilingParams>::value>::type*>
bool ProfilingParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->stack_mode, other_struct.stack_mode))
    return false;
  if (!mojo::Equals(this->sampling_rate, other_struct.sampling_rate))
    return false;
  return true;
}
template <typename StructPtrType>
HeapProfileSamplePtr HeapProfileSample::Clone() const {
  return New(
      mojo::Clone(allocator),
      mojo::Clone(size),
      mojo::Clone(context_id),
      mojo::Clone(stack)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HeapProfileSample>::value>::type*>
bool HeapProfileSample::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->allocator, other_struct.allocator))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->context_id, other_struct.context_id))
    return false;
  if (!mojo::Equals(this->stack, other_struct.stack))
    return false;
  return true;
}
template <typename StructPtrType>
HeapProfilePtr HeapProfile::Clone() const {
  return New(
      mojo::Clone(samples),
      mojo::Clone(strings)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HeapProfile>::value>::type*>
bool HeapProfile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->samples, other_struct.samples))
    return false;
  if (!mojo::Equals(this->strings, other_struct.strings))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace heap_profiling

namespace mojo {


template <>
struct  StructTraits<::heap_profiling::mojom::ProfilingParams::DataView,
                                         ::heap_profiling::mojom::ProfilingParamsPtr> {
  static bool IsNull(const ::heap_profiling::mojom::ProfilingParamsPtr& input) { return !input; }
  static void SetToNull(::heap_profiling::mojom::ProfilingParamsPtr* output) { output->reset(); }

  static decltype(::heap_profiling::mojom::ProfilingParams::stack_mode) stack_mode(
      const ::heap_profiling::mojom::ProfilingParamsPtr& input) {
    return input->stack_mode;
  }

  static decltype(::heap_profiling::mojom::ProfilingParams::sampling_rate) sampling_rate(
      const ::heap_profiling::mojom::ProfilingParamsPtr& input) {
    return input->sampling_rate;
  }

  static bool Read(::heap_profiling::mojom::ProfilingParams::DataView input, ::heap_profiling::mojom::ProfilingParamsPtr* output);
};


template <>
struct  StructTraits<::heap_profiling::mojom::HeapProfileSample::DataView,
                                         ::heap_profiling::mojom::HeapProfileSamplePtr> {
  static bool IsNull(const ::heap_profiling::mojom::HeapProfileSamplePtr& input) { return !input; }
  static void SetToNull(::heap_profiling::mojom::HeapProfileSamplePtr* output) { output->reset(); }

  static decltype(::heap_profiling::mojom::HeapProfileSample::allocator) allocator(
      const ::heap_profiling::mojom::HeapProfileSamplePtr& input) {
    return input->allocator;
  }

  static decltype(::heap_profiling::mojom::HeapProfileSample::size) size(
      const ::heap_profiling::mojom::HeapProfileSamplePtr& input) {
    return input->size;
  }

  static decltype(::heap_profiling::mojom::HeapProfileSample::context_id) context_id(
      const ::heap_profiling::mojom::HeapProfileSamplePtr& input) {
    return input->context_id;
  }

  static const decltype(::heap_profiling::mojom::HeapProfileSample::stack)& stack(
      const ::heap_profiling::mojom::HeapProfileSamplePtr& input) {
    return input->stack;
  }

  static bool Read(::heap_profiling::mojom::HeapProfileSample::DataView input, ::heap_profiling::mojom::HeapProfileSamplePtr* output);
};


template <>
struct  StructTraits<::heap_profiling::mojom::HeapProfile::DataView,
                                         ::heap_profiling::mojom::HeapProfilePtr> {
  static bool IsNull(const ::heap_profiling::mojom::HeapProfilePtr& input) { return !input; }
  static void SetToNull(::heap_profiling::mojom::HeapProfilePtr* output) { output->reset(); }

  static const decltype(::heap_profiling::mojom::HeapProfile::samples)& samples(
      const ::heap_profiling::mojom::HeapProfilePtr& input) {
    return input->samples;
  }

  static const decltype(::heap_profiling::mojom::HeapProfile::strings)& strings(
      const ::heap_profiling::mojom::HeapProfilePtr& input) {
    return input->strings;
  }

  static bool Read(::heap_profiling::mojom::HeapProfile::DataView input, ::heap_profiling::mojom::HeapProfilePtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_H_