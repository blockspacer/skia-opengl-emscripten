// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_H_
#define UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_H_

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
#include "ui/base/ime/mojo/ime_engine_factory_registry.mojom-shared.h"
#include "ui/base/ime/mojo/ime_engine_factory_registry.mojom-forward.h"
#include "ui/base/ime/mojo/ime.mojom-forward.h"
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




namespace ime {
namespace mojom {

class ImeEngineFactoryRegistryProxy;

template <typename ImplRefTraits>
class ImeEngineFactoryRegistryStub;

class ImeEngineFactoryRegistryRequestValidator;


class  ImeEngineFactoryRegistry
    : public ImeEngineFactoryRegistryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ImeEngineFactoryRegistryInterfaceBase;
  using Proxy_ = ImeEngineFactoryRegistryProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImeEngineFactoryRegistryStub<ImplRefTraits>;

  using RequestValidator_ = ImeEngineFactoryRegistryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kActivateFactoryMinVersion = 0,
  };
  virtual ~ImeEngineFactoryRegistry() {}

  
  virtual void ActivateFactory(::ime::mojom::ImeEngineFactoryPtr factory) = 0;
};

class  ImeEngineFactoryRegistryProxy
    : public ImeEngineFactoryRegistry {
 public:
  using InterfaceType = ImeEngineFactoryRegistry;

  explicit ImeEngineFactoryRegistryProxy(mojo::MessageReceiverWithResponder* receiver);
  void ActivateFactory(::ime::mojom::ImeEngineFactoryPtr factory) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ImeEngineFactoryRegistryStubDispatch {
 public:
  static bool Accept(ImeEngineFactoryRegistry* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImeEngineFactoryRegistry* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImeEngineFactoryRegistry>>
class ImeEngineFactoryRegistryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImeEngineFactoryRegistryStub() {}
  ~ImeEngineFactoryRegistryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImeEngineFactoryRegistryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImeEngineFactoryRegistryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ImeEngineFactoryRegistryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ime

namespace mojo {

}  // namespace mojo

#endif  // UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_H_