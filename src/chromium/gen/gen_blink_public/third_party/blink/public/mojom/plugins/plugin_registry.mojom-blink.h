// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-shared.h"
#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"

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




namespace blink {
namespace mojom {
namespace blink {

class PluginRegistryProxy;

template <typename ImplRefTraits>
class PluginRegistryStub;

class PluginRegistryRequestValidator;
class PluginRegistryResponseValidator;


class PLATFORM_EXPORT PluginRegistry
    : public PluginRegistryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = PluginRegistryInterfaceBase;
  using Proxy_ = PluginRegistryProxy;

  template <typename ImplRefTraits>
  using Stub_ = PluginRegistryStub<ImplRefTraits>;

  using RequestValidator_ = PluginRegistryRequestValidator;
  using ResponseValidator_ = PluginRegistryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPluginsMinVersion = 0,
  };
  virtual ~PluginRegistry() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetPlugins(bool refresh, const scoped_refptr<const ::blink::SecurityOrigin>& main_frame_origin, WTF::Vector<PluginInfoPtr>* out_plugins);

  using GetPluginsCallback = base::OnceCallback<void(WTF::Vector<PluginInfoPtr>)>;
  
  virtual void GetPlugins(bool refresh, const scoped_refptr<const ::blink::SecurityOrigin>& main_frame_origin, GetPluginsCallback callback) = 0;
};

class PLATFORM_EXPORT PluginRegistryProxy
    : public PluginRegistry {
 public:
  using InterfaceType = PluginRegistry;

  explicit PluginRegistryProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetPlugins(bool refresh, const scoped_refptr<const ::blink::SecurityOrigin>& main_frame_origin, WTF::Vector<PluginInfoPtr>* out_plugins) final;
  void GetPlugins(bool refresh, const scoped_refptr<const ::blink::SecurityOrigin>& main_frame_origin, GetPluginsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT PluginRegistryStubDispatch {
 public:
  static bool Accept(PluginRegistry* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PluginRegistry* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PluginRegistry>>
class PluginRegistryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PluginRegistryStub() {}
  ~PluginRegistryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginRegistryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginRegistryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT PluginRegistryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT PluginRegistryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class PLATFORM_EXPORT PluginMimeType {
 public:
  using DataView = PluginMimeTypeDataView;
  using Data_ = internal::PluginMimeType_Data;

  template <typename... Args>
  static PluginMimeTypePtr New(Args&&... args) {
    return PluginMimeTypePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PluginMimeTypePtr From(const U& u) {
    return mojo::TypeConverter<PluginMimeTypePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PluginMimeType>::Convert(*this);
  }


  PluginMimeType();

  PluginMimeType(
      const WTF::String& mime_type,
      const WTF::String& description,
      const WTF::Vector<WTF::String>& file_extensions);

  ~PluginMimeType();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PluginMimeTypePtr>
  PluginMimeTypePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PluginMimeType>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PluginMimeType::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PluginMimeType::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PluginMimeType_UnserializedMessageContext<
            UserType, PluginMimeType::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PluginMimeType::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PluginMimeType::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PluginMimeType_UnserializedMessageContext<
            UserType, PluginMimeType::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PluginMimeType::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String mime_type;
  
  WTF::String description;
  
  WTF::Vector<WTF::String> file_extensions;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT PluginInfo {
 public:
  using DataView = PluginInfoDataView;
  using Data_ = internal::PluginInfo_Data;

  template <typename... Args>
  static PluginInfoPtr New(Args&&... args) {
    return PluginInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PluginInfoPtr From(const U& u) {
    return mojo::TypeConverter<PluginInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PluginInfo>::Convert(*this);
  }


  PluginInfo();

  PluginInfo(
      const WTF::String& name,
      const WTF::String& description,
      const base::FilePath& filename,
      uint32_t background_color,
      WTF::Vector<PluginMimeTypePtr> mime_types,
      bool may_use_mime_handler_view);

  ~PluginInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PluginInfoPtr>
  PluginInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PluginInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PluginInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PluginInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PluginInfo_UnserializedMessageContext<
            UserType, PluginInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PluginInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PluginInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PluginInfo_UnserializedMessageContext<
            UserType, PluginInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PluginInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String name;
  
  WTF::String description;
  
  base::FilePath filename;
  
  uint32_t background_color;
  
  WTF::Vector<PluginMimeTypePtr> mime_types;
  
  bool may_use_mime_handler_view;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PluginInfo);
};

template <typename StructPtrType>
PluginMimeTypePtr PluginMimeType::Clone() const {
  return New(
      mojo::Clone(mime_type),
      mojo::Clone(description),
      mojo::Clone(file_extensions)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PluginMimeType>::value>::type*>
bool PluginMimeType::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->file_extensions, other_struct.file_extensions))
    return false;
  return true;
}
template <typename StructPtrType>
PluginInfoPtr PluginInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(description),
      mojo::Clone(filename),
      mojo::Clone(background_color),
      mojo::Clone(mime_types),
      mojo::Clone(may_use_mime_handler_view)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PluginInfo>::value>::type*>
bool PluginInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->filename, other_struct.filename))
    return false;
  if (!mojo::Equals(this->background_color, other_struct.background_color))
    return false;
  if (!mojo::Equals(this->mime_types, other_struct.mime_types))
    return false;
  if (!mojo::Equals(this->may_use_mime_handler_view, other_struct.may_use_mime_handler_view))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PluginMimeType::DataView,
                                         ::blink::mojom::blink::PluginMimeTypePtr> {
  static bool IsNull(const ::blink::mojom::blink::PluginMimeTypePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PluginMimeTypePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::PluginMimeType::mime_type)& mime_type(
      const ::blink::mojom::blink::PluginMimeTypePtr& input) {
    return input->mime_type;
  }

  static const decltype(::blink::mojom::blink::PluginMimeType::description)& description(
      const ::blink::mojom::blink::PluginMimeTypePtr& input) {
    return input->description;
  }

  static const decltype(::blink::mojom::blink::PluginMimeType::file_extensions)& file_extensions(
      const ::blink::mojom::blink::PluginMimeTypePtr& input) {
    return input->file_extensions;
  }

  static bool Read(::blink::mojom::blink::PluginMimeType::DataView input, ::blink::mojom::blink::PluginMimeTypePtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PluginInfo::DataView,
                                         ::blink::mojom::blink::PluginInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::PluginInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PluginInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::PluginInfo::name)& name(
      const ::blink::mojom::blink::PluginInfoPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::PluginInfo::description)& description(
      const ::blink::mojom::blink::PluginInfoPtr& input) {
    return input->description;
  }

  static const decltype(::blink::mojom::blink::PluginInfo::filename)& filename(
      const ::blink::mojom::blink::PluginInfoPtr& input) {
    return input->filename;
  }

  static decltype(::blink::mojom::blink::PluginInfo::background_color) background_color(
      const ::blink::mojom::blink::PluginInfoPtr& input) {
    return input->background_color;
  }

  static const decltype(::blink::mojom::blink::PluginInfo::mime_types)& mime_types(
      const ::blink::mojom::blink::PluginInfoPtr& input) {
    return input->mime_types;
  }

  static decltype(::blink::mojom::blink::PluginInfo::may_use_mime_handler_view) may_use_mime_handler_view(
      const ::blink::mojom::blink::PluginInfoPtr& input) {
    return input->may_use_mime_handler_view;
  }

  static bool Read(::blink::mojom::blink::PluginInfo::DataView input, ::blink::mojom::blink::PluginInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_H_