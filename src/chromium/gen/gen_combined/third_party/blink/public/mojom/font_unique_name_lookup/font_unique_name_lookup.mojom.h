// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_H_

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
#include "third_party/blink/public/mojom/font_unique_name_lookup/font_unique_name_lookup.mojom-shared.h"
#include "third_party/blink/public/mojom/font_unique_name_lookup/font_unique_name_lookup.mojom-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-forward.h"
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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class FontUniqueNameLookupProxy;

template <typename ImplRefTraits>
class FontUniqueNameLookupStub;

class FontUniqueNameLookupRequestValidator;
class FontUniqueNameLookupResponseValidator;


class BLINK_COMMON_EXPORT FontUniqueNameLookup
    : public FontUniqueNameLookupInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = FontUniqueNameLookupInterfaceBase;
  using Proxy_ = FontUniqueNameLookupProxy;

  template <typename ImplRefTraits>
  using Stub_ = FontUniqueNameLookupStub<ImplRefTraits>;

  using RequestValidator_ = FontUniqueNameLookupRequestValidator;
  using ResponseValidator_ = FontUniqueNameLookupResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetUniqueNameLookupTableMinVersion = 0,
  };
  virtual ~FontUniqueNameLookup() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetUniqueNameLookupTable(base::ReadOnlySharedMemoryRegion* out_font_lookup_table);

  using GetUniqueNameLookupTableCallback = base::OnceCallback<void(base::ReadOnlySharedMemoryRegion)>;
  
  virtual void GetUniqueNameLookupTable(GetUniqueNameLookupTableCallback callback) = 0;
};

class BLINK_COMMON_EXPORT FontUniqueNameLookupProxy
    : public FontUniqueNameLookup {
 public:
  using InterfaceType = FontUniqueNameLookup;

  explicit FontUniqueNameLookupProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetUniqueNameLookupTable(base::ReadOnlySharedMemoryRegion* out_font_lookup_table) final;
  void GetUniqueNameLookupTable(GetUniqueNameLookupTableCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT FontUniqueNameLookupStubDispatch {
 public:
  static bool Accept(FontUniqueNameLookup* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FontUniqueNameLookup* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FontUniqueNameLookup>>
class FontUniqueNameLookupStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FontUniqueNameLookupStub() {}
  ~FontUniqueNameLookupStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FontUniqueNameLookupStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FontUniqueNameLookupStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT FontUniqueNameLookupRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FontUniqueNameLookupResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_H_