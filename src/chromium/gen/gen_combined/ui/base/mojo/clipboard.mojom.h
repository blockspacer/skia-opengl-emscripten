// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_CLIPBOARD_MOJOM_H_
#define UI_BASE_MOJO_CLIPBOARD_MOJOM_H_

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
#include "ui/base/mojo/clipboard.mojom-shared.h"
#include "ui/base/mojo/clipboard.mojom-forward.h"
#include "mojo/public/mojom/base/big_string.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom-forward.h"
#include "skia/public/interfaces/bitmap.mojom-forward.h"
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
#include "ui/base/clipboard/clipboard_types.h"




namespace ui {
namespace mojom {

class ClipboardHostProxy;

template <typename ImplRefTraits>
class ClipboardHostStub;

class ClipboardHostRequestValidator;
class ClipboardHostResponseValidator;


class  ClipboardHost
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
    kClearMinVersion = 0,
    kReadAvailableTypesMinVersion = 0,
    kReadTextMinVersion = 0,
    kReadAsciiTextMinVersion = 0,
    kReadHTMLMinVersion = 0,
    kReadRTFMinVersion = 0,
    kReadImageMinVersion = 0,
    kReadCustomDataMinVersion = 0,
    kReadBookmarkMinVersion = 0,
    kReadDataMinVersion = 0,
    kGetLastModifiedTimeMinVersion = 0,
    kClearLastModifiedTimeMinVersion = 0,
    kWriteTextMinVersion = 0,
    kWriteHTMLMinVersion = 0,
    kWriteRTFMinVersion = 0,
    kWriteBookmarkMinVersion = 0,
    kWriteWebSmartPasteMinVersion = 0,
    kWriteBitmapMinVersion = 0,
    kWriteDataMinVersion = 0,
    kCommitWriteMinVersion = 0,
  };
  virtual ~ClipboardHost() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetSequenceNumber(ui::ClipboardType type, uint64_t* out_result);

  using GetSequenceNumberCallback = base::OnceCallback<void(uint64_t)>;
  
  virtual void GetSequenceNumber(ui::ClipboardType type, GetSequenceNumberCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IsFormatAvailable(const std::string& format, ui::ClipboardType type, bool* out_result);

  using IsFormatAvailableCallback = base::OnceCallback<void(bool)>;
  
  virtual void IsFormatAvailable(const std::string& format, ui::ClipboardType type, IsFormatAvailableCallback callback) = 0;

  
  virtual void Clear(ui::ClipboardType type) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadAvailableTypes(ui::ClipboardType type, std::vector<base::string16>* out_types, bool* out_contains_filenames);

  using ReadAvailableTypesCallback = base::OnceCallback<void(const std::vector<base::string16>&, bool)>;
  
  virtual void ReadAvailableTypes(ui::ClipboardType type, ReadAvailableTypesCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadText(ui::ClipboardType type, base::string16* out_result);

  using ReadTextCallback = base::OnceCallback<void(const base::string16&)>;
  
  virtual void ReadText(ui::ClipboardType type, ReadTextCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadAsciiText(ui::ClipboardType type, std::string* out_result);

  using ReadAsciiTextCallback = base::OnceCallback<void(const std::string&)>;
  
  virtual void ReadAsciiText(ui::ClipboardType type, ReadAsciiTextCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadHTML(ui::ClipboardType type, base::string16* out_markup, std::string* out_src_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end);

  using ReadHTMLCallback = base::OnceCallback<void(const base::string16&, const std::string&, uint32_t, uint32_t)>;
  
  virtual void ReadHTML(ui::ClipboardType type, ReadHTMLCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadRTF(ui::ClipboardType type, std::string* out_result);

  using ReadRTFCallback = base::OnceCallback<void(const std::string&)>;
  
  virtual void ReadRTF(ui::ClipboardType type, ReadRTFCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadImage(ui::ClipboardType type, SkBitmap* out_image);

  using ReadImageCallback = base::OnceCallback<void(const SkBitmap&)>;
  
  virtual void ReadImage(ui::ClipboardType type, ReadImageCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadCustomData(ui::ClipboardType clipboard_type, const base::string16& type, base::string16* out_result);

  using ReadCustomDataCallback = base::OnceCallback<void(const base::string16&)>;
  
  virtual void ReadCustomData(ui::ClipboardType clipboard_type, const base::string16& type, ReadCustomDataCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadBookmark(base::string16* out_title, std::string* out_url);

  using ReadBookmarkCallback = base::OnceCallback<void(const base::string16&, const std::string&)>;
  
  virtual void ReadBookmark(ReadBookmarkCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadData(const std::string& format, std::string* out_result);

  using ReadDataCallback = base::OnceCallback<void(const std::string&)>;
  
  virtual void ReadData(const std::string& format, ReadDataCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetLastModifiedTime(base::Time* out_time);

  using GetLastModifiedTimeCallback = base::OnceCallback<void(base::Time)>;
  
  virtual void GetLastModifiedTime(GetLastModifiedTimeCallback callback) = 0;

  
  virtual void ClearLastModifiedTime() = 0;

  
  virtual void WriteText(const base::string16& text) = 0;

  
  virtual void WriteHTML(const base::string16& markup, const std::string& url) = 0;

  
  virtual void WriteRTF(const std::string& rtf) = 0;

  
  virtual void WriteBookmark(const std::string& url, const base::string16& title) = 0;

  
  virtual void WriteWebSmartPaste() = 0;

  
  virtual void WriteBitmap(const SkBitmap& bitmap) = 0;

  
  virtual void WriteData(const std::string& type, const std::string& data) = 0;

  
  virtual void CommitWrite(ui::ClipboardType type) = 0;
};

class  ClipboardHostProxy
    : public ClipboardHost {
 public:
  using InterfaceType = ClipboardHost;

  explicit ClipboardHostProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetSequenceNumber(ui::ClipboardType type, uint64_t* out_result) final;
  void GetSequenceNumber(ui::ClipboardType type, GetSequenceNumberCallback callback) final;
  bool IsFormatAvailable(const std::string& format, ui::ClipboardType type, bool* out_result) final;
  void IsFormatAvailable(const std::string& format, ui::ClipboardType type, IsFormatAvailableCallback callback) final;
  void Clear(ui::ClipboardType type) final;
  bool ReadAvailableTypes(ui::ClipboardType type, std::vector<base::string16>* out_types, bool* out_contains_filenames) final;
  void ReadAvailableTypes(ui::ClipboardType type, ReadAvailableTypesCallback callback) final;
  bool ReadText(ui::ClipboardType type, base::string16* out_result) final;
  void ReadText(ui::ClipboardType type, ReadTextCallback callback) final;
  bool ReadAsciiText(ui::ClipboardType type, std::string* out_result) final;
  void ReadAsciiText(ui::ClipboardType type, ReadAsciiTextCallback callback) final;
  bool ReadHTML(ui::ClipboardType type, base::string16* out_markup, std::string* out_src_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end) final;
  void ReadHTML(ui::ClipboardType type, ReadHTMLCallback callback) final;
  bool ReadRTF(ui::ClipboardType type, std::string* out_result) final;
  void ReadRTF(ui::ClipboardType type, ReadRTFCallback callback) final;
  bool ReadImage(ui::ClipboardType type, SkBitmap* out_image) final;
  void ReadImage(ui::ClipboardType type, ReadImageCallback callback) final;
  bool ReadCustomData(ui::ClipboardType clipboard_type, const base::string16& type, base::string16* out_result) final;
  void ReadCustomData(ui::ClipboardType clipboard_type, const base::string16& type, ReadCustomDataCallback callback) final;
  bool ReadBookmark(base::string16* out_title, std::string* out_url) final;
  void ReadBookmark(ReadBookmarkCallback callback) final;
  bool ReadData(const std::string& format, std::string* out_result) final;
  void ReadData(const std::string& format, ReadDataCallback callback) final;
  bool GetLastModifiedTime(base::Time* out_time) final;
  void GetLastModifiedTime(GetLastModifiedTimeCallback callback) final;
  void ClearLastModifiedTime() final;
  void WriteText(const base::string16& text) final;
  void WriteHTML(const base::string16& markup, const std::string& url) final;
  void WriteRTF(const std::string& rtf) final;
  void WriteBookmark(const std::string& url, const base::string16& title) final;
  void WriteWebSmartPaste() final;
  void WriteBitmap(const SkBitmap& bitmap) final;
  void WriteData(const std::string& type, const std::string& data) final;
  void CommitWrite(ui::ClipboardType type) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ClipboardHostStubDispatch {
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
class  ClipboardHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ClipboardHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // UI_BASE_MOJO_CLIPBOARD_MOJOM_H_