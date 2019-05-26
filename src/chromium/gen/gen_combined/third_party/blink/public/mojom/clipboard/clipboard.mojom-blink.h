// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-shared.h"
#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-blink-forward.h"
#include "mojo/public/mojom/base/string16.mojom-blink-forward.h"
#include "skia/public/interfaces/bitmap.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_ClipboardFormat_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ClipboardFormat& value) {
    using utype = std::underlying_type<::blink::mojom::ClipboardFormat>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ClipboardFormat& left, const ::blink::mojom::ClipboardFormat& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ClipboardFormat>
    : public GenericHashTraits<::blink::mojom::ClipboardFormat> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ClipboardFormat& value) {
    return value == static_cast<::blink::mojom::ClipboardFormat>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ClipboardFormat& slot, bool) {
    slot = static_cast<::blink::mojom::ClipboardFormat>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ClipboardFormat& value) {
    return value == static_cast<::blink::mojom::ClipboardFormat>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_ClipboardBuffer_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ClipboardBuffer& value) {
    using utype = std::underlying_type<::blink::mojom::ClipboardBuffer>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ClipboardBuffer& left, const ::blink::mojom::ClipboardBuffer& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ClipboardBuffer>
    : public GenericHashTraits<::blink::mojom::ClipboardBuffer> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ClipboardBuffer& value) {
    return value == static_cast<::blink::mojom::ClipboardBuffer>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ClipboardBuffer& slot, bool) {
    slot = static_cast<::blink::mojom::ClipboardBuffer>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ClipboardBuffer& value) {
    return value == static_cast<::blink::mojom::ClipboardBuffer>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class ClipboardHostProxy;

template <typename ImplRefTraits>
class ClipboardHostStub;

class ClipboardHostRequestValidator;
class ClipboardHostResponseValidator;


class PLATFORM_EXPORT ClipboardHost
    : public ClipboardHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = ClipboardHostInterfaceBase;
  using Proxy_ = ClipboardHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ClipboardHostStub<ImplRefTraits>;

  using RequestValidator_ = ClipboardHostRequestValidator;
  using ResponseValidator_ = ClipboardHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSequenceNumberMinVersion = 0,
    kIsFormatAvailableMinVersion = 0,
    kReadAvailableTypesMinVersion = 0,
    kReadTextMinVersion = 0,
    kReadHtmlMinVersion = 0,
    kReadRtfMinVersion = 0,
    kReadImageMinVersion = 0,
    kReadCustomDataMinVersion = 0,
    kWriteTextMinVersion = 0,
    kWriteHtmlMinVersion = 0,
    kWriteSmartPasteMarkerMinVersion = 0,
    kWriteCustomDataMinVersion = 0,
    kWriteBookmarkMinVersion = 0,
    kWriteImageMinVersion = 0,
    kCommitWriteMinVersion = 0,
  };
  virtual ~ClipboardHost() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetSequenceNumber(ClipboardBuffer buffer, uint64_t* out_result);

  using GetSequenceNumberCallback = base::OnceCallback<void(uint64_t)>;
  
  virtual void GetSequenceNumber(ClipboardBuffer buffer, GetSequenceNumberCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IsFormatAvailable(ClipboardFormat format, ClipboardBuffer buffer, bool* out_result);

  using IsFormatAvailableCallback = base::OnceCallback<void(bool)>;
  
  virtual void IsFormatAvailable(ClipboardFormat format, ClipboardBuffer buffer, IsFormatAvailableCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadAvailableTypes(ClipboardBuffer buffer, WTF::Vector<WTF::String>* out_types, bool* out_result);

  using ReadAvailableTypesCallback = base::OnceCallback<void(const WTF::Vector<WTF::String>&, bool)>;
  
  virtual void ReadAvailableTypes(ClipboardBuffer buffer, ReadAvailableTypesCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadText(ClipboardBuffer buffer, WTF::String* out_result);

  using ReadTextCallback = base::OnceCallback<void(const WTF::String&)>;
  
  virtual void ReadText(ClipboardBuffer buffer, ReadTextCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadHtml(ClipboardBuffer buffer, WTF::String* out_markup, ::blink::KURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end);

  using ReadHtmlCallback = base::OnceCallback<void(const WTF::String&, const ::blink::KURL&, uint32_t, uint32_t)>;
  
  virtual void ReadHtml(ClipboardBuffer buffer, ReadHtmlCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadRtf(ClipboardBuffer buffer, WTF::String* out_result);

  using ReadRtfCallback = base::OnceCallback<void(const WTF::String&)>;
  
  virtual void ReadRtf(ClipboardBuffer buffer, ReadRtfCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadImage(ClipboardBuffer buffer, SkBitmap* out_image);

  using ReadImageCallback = base::OnceCallback<void(const SkBitmap&)>;
  
  virtual void ReadImage(ClipboardBuffer buffer, ReadImageCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadCustomData(ClipboardBuffer buffer, const WTF::String& type, WTF::String* out_result);

  using ReadCustomDataCallback = base::OnceCallback<void(const WTF::String&)>;
  
  virtual void ReadCustomData(ClipboardBuffer buffer, const WTF::String& type, ReadCustomDataCallback callback) = 0;

  
  virtual void WriteText(const WTF::String& text) = 0;

  
  virtual void WriteHtml(const WTF::String& markup, const ::blink::KURL& url) = 0;

  
  virtual void WriteSmartPasteMarker() = 0;

  
  virtual void WriteCustomData(const WTF::HashMap<WTF::String, WTF::String>& data) = 0;

  
  virtual void WriteBookmark(const WTF::String& url, const WTF::String& title) = 0;

  
  virtual void WriteImage(const SkBitmap& image) = 0;

  
  virtual void CommitWrite() = 0;
};

class PLATFORM_EXPORT ClipboardHostProxy
    : public ClipboardHost {
 public:
  using InterfaceType = ClipboardHost;

  explicit ClipboardHostProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetSequenceNumber(ClipboardBuffer buffer, uint64_t* out_result) final;
  void GetSequenceNumber(ClipboardBuffer buffer, GetSequenceNumberCallback callback) final;
  bool IsFormatAvailable(ClipboardFormat format, ClipboardBuffer buffer, bool* out_result) final;
  void IsFormatAvailable(ClipboardFormat format, ClipboardBuffer buffer, IsFormatAvailableCallback callback) final;
  bool ReadAvailableTypes(ClipboardBuffer buffer, WTF::Vector<WTF::String>* out_types, bool* out_result) final;
  void ReadAvailableTypes(ClipboardBuffer buffer, ReadAvailableTypesCallback callback) final;
  bool ReadText(ClipboardBuffer buffer, WTF::String* out_result) final;
  void ReadText(ClipboardBuffer buffer, ReadTextCallback callback) final;
  bool ReadHtml(ClipboardBuffer buffer, WTF::String* out_markup, ::blink::KURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end) final;
  void ReadHtml(ClipboardBuffer buffer, ReadHtmlCallback callback) final;
  bool ReadRtf(ClipboardBuffer buffer, WTF::String* out_result) final;
  void ReadRtf(ClipboardBuffer buffer, ReadRtfCallback callback) final;
  bool ReadImage(ClipboardBuffer buffer, SkBitmap* out_image) final;
  void ReadImage(ClipboardBuffer buffer, ReadImageCallback callback) final;
  bool ReadCustomData(ClipboardBuffer buffer, const WTF::String& type, WTF::String* out_result) final;
  void ReadCustomData(ClipboardBuffer buffer, const WTF::String& type, ReadCustomDataCallback callback) final;
  void WriteText(const WTF::String& text) final;
  void WriteHtml(const WTF::String& markup, const ::blink::KURL& url) final;
  void WriteSmartPasteMarker() final;
  void WriteCustomData(const WTF::HashMap<WTF::String, WTF::String>& data) final;
  void WriteBookmark(const WTF::String& url, const WTF::String& title) final;
  void WriteImage(const SkBitmap& image) final;
  void CommitWrite() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT ClipboardHostStubDispatch {
 public:
  static bool Accept(ClipboardHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ClipboardHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ClipboardHost>>
class ClipboardHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ClipboardHostStub() {}
  ~ClipboardHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClipboardHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClipboardHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ClipboardHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT ClipboardHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_H_