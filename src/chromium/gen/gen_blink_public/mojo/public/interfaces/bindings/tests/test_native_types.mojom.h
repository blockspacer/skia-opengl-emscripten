// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/test_native_types.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/test_native_types.mojom-forward.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom.h"
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
#include "mojo/public/cpp/bindings/tests/pickled_types_chromium.h"
#include "mojo/public/cpp/bindings/tests/test_native_types.h"




namespace mojo {
namespace test {

class PicklePasserProxy;

template <typename ImplRefTraits>
class PicklePasserStub;

class PicklePasserRequestValidator;
class PicklePasserResponseValidator;


class  PicklePasser
    : public PicklePasserInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PicklePasserInterfaceBase;
  using Proxy_ = PicklePasserProxy;

  template <typename ImplRefTraits>
  using Stub_ = PicklePasserStub<ImplRefTraits>;

  using RequestValidator_ = PicklePasserRequestValidator;
  using ResponseValidator_ = PicklePasserResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPassPickledStructMinVersion = 0,
    kPassPickledEnumMinVersion = 0,
    kPassPickleContainerMinVersion = 0,
    kPassPicklesMinVersion = 0,
    kPassPickleArraysMinVersion = 0,
  };
  virtual ~PicklePasser() {}


  using PassPickledStructCallback = base::OnceCallback<void(mojo::test::PickledStructChromium)>;
  
  virtual void PassPickledStruct(mojo::test::PickledStructChromium pickle, PassPickledStructCallback callback) = 0;


  using PassPickledEnumCallback = base::OnceCallback<void(mojo::test::PickledEnumChromium)>;
  
  virtual void PassPickledEnum(mojo::test::PickledEnumChromium pickle, PassPickledEnumCallback callback) = 0;


  using PassPickleContainerCallback = base::OnceCallback<void(PickleContainerPtr)>;
  
  virtual void PassPickleContainer(PickleContainerPtr container, PassPickleContainerCallback callback) = 0;


  using PassPicklesCallback = base::OnceCallback<void(std::vector<mojo::test::PickledStructChromium>)>;
  
  virtual void PassPickles(std::vector<mojo::test::PickledStructChromium> pickles, PassPicklesCallback callback) = 0;


  using PassPickleArraysCallback = base::OnceCallback<void(std::vector<std::vector<mojo::test::PickledStructChromium>>)>;
  
  virtual void PassPickleArrays(std::vector<std::vector<mojo::test::PickledStructChromium>> pickle_arrays, PassPickleArraysCallback callback) = 0;
};

class RectServiceProxy;

template <typename ImplRefTraits>
class RectServiceStub;

class RectServiceRequestValidator;
class RectServiceResponseValidator;


class  RectService
    : public RectServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RectServiceInterfaceBase;
  using Proxy_ = RectServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = RectServiceStub<ImplRefTraits>;

  using RequestValidator_ = RectServiceRequestValidator;
  using ResponseValidator_ = RectServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddRectMinVersion = 0,
    kGetLargestRectMinVersion = 0,
    kPassSharedRectMinVersion = 0,
  };
  virtual ~RectService() {}

  
  virtual void AddRect(const mojo::test::RectChromium& r) = 0;


  using GetLargestRectCallback = base::OnceCallback<void(const mojo::test::RectChromium&)>;
  
  virtual void GetLargestRect(GetLargestRectCallback callback) = 0;


  using PassSharedRectCallback = base::OnceCallback<void(const mojo::test::SharedRect&)>;
  
  virtual void PassSharedRect(const mojo::test::SharedRect& r, PassSharedRectCallback callback) = 0;
};

class NativeTypeTesterProxy;

template <typename ImplRefTraits>
class NativeTypeTesterStub;

class NativeTypeTesterRequestValidator;
class NativeTypeTesterResponseValidator;


class  NativeTypeTester
    : public NativeTypeTesterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NativeTypeTesterInterfaceBase;
  using Proxy_ = NativeTypeTesterProxy;

  template <typename ImplRefTraits>
  using Stub_ = NativeTypeTesterStub<ImplRefTraits>;

  using RequestValidator_ = NativeTypeTesterRequestValidator;
  using ResponseValidator_ = NativeTypeTesterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPassNativeStructMinVersion = 0,
    kPassNativeStructWithAttachmentsMinVersion = 0,
  };
  virtual ~NativeTypeTester() {}


  using PassNativeStructCallback = base::OnceCallback<void(const mojo::test::TestNativeStruct&)>;
  
  virtual void PassNativeStruct(const mojo::test::TestNativeStruct& s, PassNativeStructCallback callback) = 0;


  using PassNativeStructWithAttachmentsCallback = base::OnceCallback<void(mojo::test::TestNativeStructWithAttachments)>;
  
  virtual void PassNativeStructWithAttachments(mojo::test::TestNativeStructWithAttachments s, PassNativeStructWithAttachmentsCallback callback) = 0;
};

class  PicklePasserProxy
    : public PicklePasser {
 public:
  using InterfaceType = PicklePasser;

  explicit PicklePasserProxy(mojo::MessageReceiverWithResponder* receiver);
  void PassPickledStruct(mojo::test::PickledStructChromium pickle, PassPickledStructCallback callback) final;
  void PassPickledEnum(mojo::test::PickledEnumChromium pickle, PassPickledEnumCallback callback) final;
  void PassPickleContainer(PickleContainerPtr container, PassPickleContainerCallback callback) final;
  void PassPickles(std::vector<mojo::test::PickledStructChromium> pickles, PassPicklesCallback callback) final;
  void PassPickleArrays(std::vector<std::vector<mojo::test::PickledStructChromium>> pickle_arrays, PassPickleArraysCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  RectServiceProxy
    : public RectService {
 public:
  using InterfaceType = RectService;

  explicit RectServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddRect(const mojo::test::RectChromium& r) final;
  void GetLargestRect(GetLargestRectCallback callback) final;
  void PassSharedRect(const mojo::test::SharedRect& r, PassSharedRectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NativeTypeTesterProxy
    : public NativeTypeTester {
 public:
  using InterfaceType = NativeTypeTester;

  explicit NativeTypeTesterProxy(mojo::MessageReceiverWithResponder* receiver);
  void PassNativeStruct(const mojo::test::TestNativeStruct& s, PassNativeStructCallback callback) final;
  void PassNativeStructWithAttachments(mojo::test::TestNativeStructWithAttachments s, PassNativeStructWithAttachmentsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PicklePasserStubDispatch {
 public:
  static bool Accept(PicklePasser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PicklePasser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PicklePasser>>
class PicklePasserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PicklePasserStub() {}
  ~PicklePasserStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PicklePasserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PicklePasserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RectServiceStubDispatch {
 public:
  static bool Accept(RectService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RectService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RectService>>
class RectServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RectServiceStub() {}
  ~RectServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RectServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RectServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NativeTypeTesterStubDispatch {
 public:
  static bool Accept(NativeTypeTester* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NativeTypeTester* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NativeTypeTester>>
class NativeTypeTesterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NativeTypeTesterStub() {}
  ~NativeTypeTesterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeTypeTesterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeTypeTesterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PicklePasserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RectServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NativeTypeTesterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PicklePasserResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RectServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NativeTypeTesterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};












class  PickleContainer {
 public:
  using DataView = PickleContainerDataView;
  using Data_ = internal::PickleContainer_Data;

  template <typename... Args>
  static PickleContainerPtr New(Args&&... args) {
    return PickleContainerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PickleContainerPtr From(const U& u) {
    return mojo::TypeConverter<PickleContainerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PickleContainer>::Convert(*this);
  }


  PickleContainer();

  PickleContainer(
      mojo::test::PickledStructChromium f_struct,
      mojo::test::PickledEnumChromium f_enum);

  ~PickleContainer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PickleContainerPtr>
  PickleContainerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PickleContainer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PickleContainer::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PickleContainer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PickleContainer_UnserializedMessageContext<
            UserType, PickleContainer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PickleContainer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PickleContainer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PickleContainer_UnserializedMessageContext<
            UserType, PickleContainer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PickleContainer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::test::PickledStructChromium f_struct;
  
  mojo::test::PickledEnumChromium f_enum;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PickleContainer);
};



template <typename StructPtrType>
PickleContainerPtr PickleContainer::Clone() const {
  return New(
      mojo::Clone(f_struct),
      mojo::Clone(f_enum)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PickleContainer>::value>::type*>
bool PickleContainer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_struct, other_struct.f_struct))
    return false;
  if (!mojo::Equals(this->f_enum, other_struct.f_enum))
    return false;
  return true;
}


}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::PickleContainer::DataView,
                                         ::mojo::test::PickleContainerPtr> {
  static bool IsNull(const ::mojo::test::PickleContainerPtr& input) { return !input; }
  static void SetToNull(::mojo::test::PickleContainerPtr* output) { output->reset(); }

  static const decltype(::mojo::test::PickleContainer::f_struct)& f_struct(
      const ::mojo::test::PickleContainerPtr& input) {
    return input->f_struct;
  }

  static decltype(::mojo::test::PickleContainer::f_enum) f_enum(
      const ::mojo::test::PickleContainerPtr& input) {
    return input->f_enum;
  }

  static bool Read(::mojo::test::PickleContainer::DataView input, ::mojo::test::PickleContainerPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_H_