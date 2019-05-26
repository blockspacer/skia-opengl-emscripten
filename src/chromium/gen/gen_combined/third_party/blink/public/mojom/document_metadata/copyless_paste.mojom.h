// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_H_

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
#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom-shared.h"
#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom-forward.h"
#include "url/mojom/url.mojom.h"
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
namespace document_metadata {

class CopylessPasteProxy;

template <typename ImplRefTraits>
class CopylessPasteStub;

class CopylessPasteRequestValidator;
class CopylessPasteResponseValidator;


class BLINK_COMMON_EXPORT CopylessPaste
    : public CopylessPasteInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CopylessPasteInterfaceBase;
  using Proxy_ = CopylessPasteProxy;

  template <typename ImplRefTraits>
  using Stub_ = CopylessPasteStub<ImplRefTraits>;

  using RequestValidator_ = CopylessPasteRequestValidator;
  using ResponseValidator_ = CopylessPasteResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetEntitiesMinVersion = 0,
  };
  virtual ~CopylessPaste() {}


  using GetEntitiesCallback = base::OnceCallback<void(WebPagePtr)>;
  
  virtual void GetEntities(GetEntitiesCallback callback) = 0;
};

class BLINK_COMMON_EXPORT CopylessPasteProxy
    : public CopylessPaste {
 public:
  using InterfaceType = CopylessPaste;

  explicit CopylessPasteProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetEntities(GetEntitiesCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT CopylessPasteStubDispatch {
 public:
  static bool Accept(CopylessPaste* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CopylessPaste* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CopylessPaste>>
class CopylessPasteStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CopylessPasteStub() {}
  ~CopylessPasteStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CopylessPasteStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CopylessPasteStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT CopylessPasteRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT CopylessPasteResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT Values {
 public:
  using DataView = ValuesDataView;
  using Data_ = internal::Values_Data;
  using Tag = Data_::Values_Tag;

  static ValuesPtr New() {
    return ValuesPtr(base::in_place);
  }
  // Construct an instance holding |bool_values|.
  static ValuesPtr
  NewBoolValues(
      const std::vector<bool>& bool_values) {
    auto result = ValuesPtr(base::in_place);
    result->set_bool_values(std::move(bool_values));
    return result;
  }
  // Construct an instance holding |long_values|.
  static ValuesPtr
  NewLongValues(
      const std::vector<int64_t>& long_values) {
    auto result = ValuesPtr(base::in_place);
    result->set_long_values(std::move(long_values));
    return result;
  }
  // Construct an instance holding |string_values|.
  static ValuesPtr
  NewStringValues(
      const std::vector<std::string>& string_values) {
    auto result = ValuesPtr(base::in_place);
    result->set_string_values(std::move(string_values));
    return result;
  }
  // Construct an instance holding |entity_values|.
  static ValuesPtr
  NewEntityValues(
      std::vector<EntityPtr> entity_values) {
    auto result = ValuesPtr(base::in_place);
    result->set_entity_values(std::move(entity_values));
    return result;
  }

  template <typename U>
  static ValuesPtr From(const U& u) {
    return mojo::TypeConverter<ValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Values>::Convert(*this);
  }

  Values();
  ~Values();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = ValuesPtr>
  ValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Values>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_bool_values() const { return tag_ == Tag::BOOL_VALUES; }

  
  std::vector<bool>& get_bool_values() const {
    DCHECK(tag_ == Tag::BOOL_VALUES);
    return *(data_.bool_values);
  }

  
  void set_bool_values(
      const std::vector<bool>& bool_values);
  
  bool is_long_values() const { return tag_ == Tag::LONG_VALUES; }

  
  std::vector<int64_t>& get_long_values() const {
    DCHECK(tag_ == Tag::LONG_VALUES);
    return *(data_.long_values);
  }

  
  void set_long_values(
      const std::vector<int64_t>& long_values);
  
  bool is_string_values() const { return tag_ == Tag::STRING_VALUES; }

  
  std::vector<std::string>& get_string_values() const {
    DCHECK(tag_ == Tag::STRING_VALUES);
    return *(data_.string_values);
  }

  
  void set_string_values(
      const std::vector<std::string>& string_values);
  
  bool is_entity_values() const { return tag_ == Tag::ENTITY_VALUES; }

  
  std::vector<EntityPtr>& get_entity_values() const {
    DCHECK(tag_ == Tag::ENTITY_VALUES);
    return *(data_.entity_values);
  }

  
  void set_entity_values(
      std::vector<EntityPtr> entity_values);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Values::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<Values::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    std::vector<bool>* bool_values;
    std::vector<int64_t>* long_values;
    std::vector<std::string>* string_values;
    std::vector<EntityPtr>* entity_values;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class BLINK_COMMON_EXPORT Property {
 public:
  using DataView = PropertyDataView;
  using Data_ = internal::Property_Data;

  template <typename... Args>
  static PropertyPtr New(Args&&... args) {
    return PropertyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PropertyPtr From(const U& u) {
    return mojo::TypeConverter<PropertyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Property>::Convert(*this);
  }


  Property();

  Property(
      const std::string& name,
      ValuesPtr values);

  ~Property();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PropertyPtr>
  PropertyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Property>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Property::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Property::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Property_UnserializedMessageContext<
            UserType, Property::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Property::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Property::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Property_UnserializedMessageContext<
            UserType, Property::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Property::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  ValuesPtr values;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Property);
};





class BLINK_COMMON_EXPORT Entity {
 public:
  using DataView = EntityDataView;
  using Data_ = internal::Entity_Data;

  template <typename... Args>
  static EntityPtr New(Args&&... args) {
    return EntityPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EntityPtr From(const U& u) {
    return mojo::TypeConverter<EntityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Entity>::Convert(*this);
  }


  Entity();

  Entity(
      const std::string& type,
      std::vector<PropertyPtr> properties);

  ~Entity();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EntityPtr>
  EntityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Entity>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Entity::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Entity::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Entity_UnserializedMessageContext<
            UserType, Entity::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Entity::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Entity::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Entity_UnserializedMessageContext<
            UserType, Entity::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Entity::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string type;
  
  std::vector<PropertyPtr> properties;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Entity);
};





class BLINK_COMMON_EXPORT WebPage {
 public:
  using DataView = WebPageDataView;
  using Data_ = internal::WebPage_Data;

  template <typename... Args>
  static WebPagePtr New(Args&&... args) {
    return WebPagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebPagePtr From(const U& u) {
    return mojo::TypeConverter<WebPagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebPage>::Convert(*this);
  }


  WebPage();

  WebPage(
      const GURL& url,
      const std::string& title,
      std::vector<EntityPtr> entities);

  ~WebPage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebPagePtr>
  WebPagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebPage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebPage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebPage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebPage_UnserializedMessageContext<
            UserType, WebPage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebPage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebPage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebPage_UnserializedMessageContext<
            UserType, WebPage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebPage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GURL url;
  
  std::string title;
  
  std::vector<EntityPtr> entities;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WebPage);
};

template <typename UnionPtrType>
ValuesPtr Values::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::BOOL_VALUES:
      rv->set_bool_values(mojo::Clone(*data_.bool_values));
      break;
    case Tag::LONG_VALUES:
      rv->set_long_values(mojo::Clone(*data_.long_values));
      break;
    case Tag::STRING_VALUES:
      rv->set_string_values(mojo::Clone(*data_.string_values));
      break;
    case Tag::ENTITY_VALUES:
      rv->set_entity_values(mojo::Clone(*data_.entity_values));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Values>::value>::type*>
bool Values::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::BOOL_VALUES:
      return mojo::Equals(*(data_.bool_values), *(other.data_.bool_values));
    case Tag::LONG_VALUES:
      return mojo::Equals(*(data_.long_values), *(other.data_.long_values));
    case Tag::STRING_VALUES:
      return mojo::Equals(*(data_.string_values), *(other.data_.string_values));
    case Tag::ENTITY_VALUES:
      return mojo::Equals(*(data_.entity_values), *(other.data_.entity_values));
  }

  return false;
}
template <typename StructPtrType>
PropertyPtr Property::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(values)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Property>::value>::type*>
bool Property::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->values, other_struct.values))
    return false;
  return true;
}
template <typename StructPtrType>
EntityPtr Entity::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(properties)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Entity>::value>::type*>
bool Entity::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->properties, other_struct.properties))
    return false;
  return true;
}
template <typename StructPtrType>
WebPagePtr WebPage::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(title),
      mojo::Clone(entities)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebPage>::value>::type*>
bool WebPage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->entities, other_struct.entities))
    return false;
  return true;
}


}  // namespace document_metadata
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::document_metadata::Property::DataView,
                                         ::blink::mojom::document_metadata::PropertyPtr> {
  static bool IsNull(const ::blink::mojom::document_metadata::PropertyPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::document_metadata::PropertyPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::document_metadata::Property::name)& name(
      const ::blink::mojom::document_metadata::PropertyPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::document_metadata::Property::values)& values(
      const ::blink::mojom::document_metadata::PropertyPtr& input) {
    return input->values;
  }

  static bool Read(::blink::mojom::document_metadata::Property::DataView input, ::blink::mojom::document_metadata::PropertyPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::document_metadata::Entity::DataView,
                                         ::blink::mojom::document_metadata::EntityPtr> {
  static bool IsNull(const ::blink::mojom::document_metadata::EntityPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::document_metadata::EntityPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::document_metadata::Entity::type)& type(
      const ::blink::mojom::document_metadata::EntityPtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::document_metadata::Entity::properties)& properties(
      const ::blink::mojom::document_metadata::EntityPtr& input) {
    return input->properties;
  }

  static bool Read(::blink::mojom::document_metadata::Entity::DataView input, ::blink::mojom::document_metadata::EntityPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::document_metadata::WebPage::DataView,
                                         ::blink::mojom::document_metadata::WebPagePtr> {
  static bool IsNull(const ::blink::mojom::document_metadata::WebPagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::document_metadata::WebPagePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::document_metadata::WebPage::url)& url(
      const ::blink::mojom::document_metadata::WebPagePtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::document_metadata::WebPage::title)& title(
      const ::blink::mojom::document_metadata::WebPagePtr& input) {
    return input->title;
  }

  static const decltype(::blink::mojom::document_metadata::WebPage::entities)& entities(
      const ::blink::mojom::document_metadata::WebPagePtr& input) {
    return input->entities;
  }

  static bool Read(::blink::mojom::document_metadata::WebPage::DataView input, ::blink::mojom::document_metadata::WebPagePtr* output);
};


template <>
struct BLINK_COMMON_EXPORT UnionTraits<::blink::mojom::document_metadata::Values::DataView,
                                        ::blink::mojom::document_metadata::ValuesPtr> {
  static bool IsNull(const ::blink::mojom::document_metadata::ValuesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::document_metadata::ValuesPtr* output) { output->reset(); }

  static ::blink::mojom::document_metadata::Values::Tag GetTag(const ::blink::mojom::document_metadata::ValuesPtr& input) {
    return input->which();
  }

  static const std::vector<bool>& bool_values(const ::blink::mojom::document_metadata::ValuesPtr& input) {
    return input->get_bool_values();
  }

  static const std::vector<int64_t>& long_values(const ::blink::mojom::document_metadata::ValuesPtr& input) {
    return input->get_long_values();
  }

  static const std::vector<std::string>& string_values(const ::blink::mojom::document_metadata::ValuesPtr& input) {
    return input->get_string_values();
  }

  static const std::vector<::blink::mojom::document_metadata::EntityPtr>& entity_values(const ::blink::mojom::document_metadata::ValuesPtr& input) {
    return input->get_entity_values();
  }

  static bool Read(::blink::mojom::document_metadata::Values::DataView input, ::blink::mojom::document_metadata::ValuesPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_H_