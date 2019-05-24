// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_H_
#define COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_H_

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
#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom-shared.h"
#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom-forward.h"
#include "mojo/public/mojom/base/shared_memory.mojom-forward.h"
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




namespace discardable_memory {
namespace mojom {

class DiscardableSharedMemoryManagerProxy;

template <typename ImplRefTraits>
class DiscardableSharedMemoryManagerStub;

class DiscardableSharedMemoryManagerRequestValidator;
class DiscardableSharedMemoryManagerResponseValidator;


class  DiscardableSharedMemoryManager
    : public DiscardableSharedMemoryManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DiscardableSharedMemoryManagerInterfaceBase;
  using Proxy_ = DiscardableSharedMemoryManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = DiscardableSharedMemoryManagerStub<ImplRefTraits>;

  using RequestValidator_ = DiscardableSharedMemoryManagerRequestValidator;
  using ResponseValidator_ = DiscardableSharedMemoryManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAllocateLockedDiscardableSharedMemoryMinVersion = 0,
    kDeletedDiscardableSharedMemoryMinVersion = 0,
  };
  virtual ~DiscardableSharedMemoryManager() {}


  using AllocateLockedDiscardableSharedMemoryCallback = base::OnceCallback<void(base::UnsafeSharedMemoryRegion)>;
  
  virtual void AllocateLockedDiscardableSharedMemory(uint32_t size, int32_t id, AllocateLockedDiscardableSharedMemoryCallback callback) = 0;

  
  virtual void DeletedDiscardableSharedMemory(int32_t id) = 0;
};

class  DiscardableSharedMemoryManagerProxy
    : public DiscardableSharedMemoryManager {
 public:
  using InterfaceType = DiscardableSharedMemoryManager;

  explicit DiscardableSharedMemoryManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void AllocateLockedDiscardableSharedMemory(uint32_t size, int32_t id, AllocateLockedDiscardableSharedMemoryCallback callback) final;
  void DeletedDiscardableSharedMemory(int32_t id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DiscardableSharedMemoryManagerStubDispatch {
 public:
  static bool Accept(DiscardableSharedMemoryManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DiscardableSharedMemoryManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DiscardableSharedMemoryManager>>
class DiscardableSharedMemoryManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DiscardableSharedMemoryManagerStub() {}
  ~DiscardableSharedMemoryManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DiscardableSharedMemoryManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DiscardableSharedMemoryManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DiscardableSharedMemoryManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DiscardableSharedMemoryManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace discardable_memory

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_H_