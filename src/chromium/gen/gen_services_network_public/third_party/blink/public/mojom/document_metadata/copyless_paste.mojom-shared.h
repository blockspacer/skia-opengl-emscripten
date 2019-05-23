// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
namespace document_metadata {
class PropertyDataView;

class EntityDataView;

class WebPageDataView;

class ValuesDataView;


}  // namespace document_metadata
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::document_metadata::PropertyDataView> {
  using Data = ::blink::mojom::document_metadata::internal::Property_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::document_metadata::EntityDataView> {
  using Data = ::blink::mojom::document_metadata::internal::Entity_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::document_metadata::WebPageDataView> {
  using Data = ::blink::mojom::document_metadata::internal::WebPage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::document_metadata::ValuesDataView> {
  using Data = ::blink::mojom::document_metadata::internal::Values_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
namespace document_metadata {
// Interface base classes. They are used for type safety check.
class CopylessPasteInterfaceBase {};

using CopylessPastePtrDataView =
    mojo::InterfacePtrDataView<CopylessPasteInterfaceBase>;
using CopylessPasteRequestDataView =
    mojo::InterfaceRequestDataView<CopylessPasteInterfaceBase>;
using CopylessPasteAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CopylessPasteInterfaceBase>;
using CopylessPasteAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CopylessPasteInterfaceBase>;
class PropertyDataView {
 public:
  PropertyDataView() {}

  PropertyDataView(
      internal::Property_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValuesDataView(
      ValuesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = !data_->values.is_null() ? &data_->values : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::document_metadata::ValuesDataView>(
        pointer, output, context_);
  }
 private:
  internal::Property_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EntityDataView {
 public:
  EntityDataView() {}

  EntityDataView(
      internal::Entity_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPropertiesDataView(
      mojo::ArrayDataView<PropertyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::document_metadata::PropertyDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Entity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebPageDataView {
 public:
  WebPageDataView() {}

  WebPageDataView(
      internal::WebPage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetEntitiesDataView(
      mojo::ArrayDataView<EntityDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntities(UserType* output) {
    auto* pointer = data_->entities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::document_metadata::EntityDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WebPage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ValuesDataView {
 public:
  using Tag = internal::Values_Data::Values_Tag;

  ValuesDataView() {}

  ValuesDataView(
      internal::Values_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_bool_values() const { return data_->tag == Tag::BOOL_VALUES; }
  inline void GetBoolValuesDataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBoolValues(UserType* output) {
    DCHECK(is_bool_values());
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        data_->data.f_bool_values.Get(), output, context_);
  }
  bool is_long_values() const { return data_->tag == Tag::LONG_VALUES; }
  inline void GetLongValuesDataView(
      mojo::ArrayDataView<int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLongValues(UserType* output) {
    DCHECK(is_long_values());
    return mojo::internal::Deserialize<mojo::ArrayDataView<int64_t>>(
        data_->data.f_long_values.Get(), output, context_);
  }
  bool is_string_values() const { return data_->tag == Tag::STRING_VALUES; }
  inline void GetStringValuesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringValues(UserType* output) {
    DCHECK(is_string_values());
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        data_->data.f_string_values.Get(), output, context_);
  }
  bool is_entity_values() const { return data_->tag == Tag::ENTITY_VALUES; }
  inline void GetEntityValuesDataView(
      mojo::ArrayDataView<EntityDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntityValues(UserType* output) {
    DCHECK(is_entity_values());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::document_metadata::EntityDataView>>(
        data_->data.f_entity_values.Get(), output, context_);
  }

 private:
  internal::Values_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace document_metadata
}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::document_metadata::PropertyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::document_metadata::PropertyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::document_metadata::internal::Property_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in Property struct");
    decltype(Traits::values(input)) in_values = Traits::values(input);
    typename decltype((*output)->values)::BufferWriter values_writer;
    values_writer.AllocateInline(buffer, &(*output)->values);
    mojo::internal::Serialize<::blink::mojom::document_metadata::ValuesDataView>(
        in_values, buffer, &values_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null values in Property struct");
  }

  static bool Deserialize(::blink::mojom::document_metadata::internal::Property_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::document_metadata::PropertyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::document_metadata::EntityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::document_metadata::EntityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::document_metadata::internal::Entity_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::type(input)) in_type = Traits::type(input);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in Entity struct");
    decltype(Traits::properties(input)) in_properties = Traits::properties(input);
    typename decltype((*output)->properties)::BaseType::BufferWriter
        properties_writer;
    const mojo::internal::ContainerValidateParams properties_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::document_metadata::PropertyDataView>>(
        in_properties, buffer, &properties_writer, &properties_validate_params,
        context);
    (*output)->properties.Set(
        properties_writer.is_null() ? nullptr : properties_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->properties.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null properties in Entity struct");
  }

  static bool Deserialize(::blink::mojom::document_metadata::internal::Entity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::document_metadata::EntityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::document_metadata::WebPageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::document_metadata::WebPageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::document_metadata::internal::WebPage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in WebPage struct");
    decltype(Traits::title(input)) in_title = Traits::title(input);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in WebPage struct");
    decltype(Traits::entities(input)) in_entities = Traits::entities(input);
    typename decltype((*output)->entities)::BaseType::BufferWriter
        entities_writer;
    const mojo::internal::ContainerValidateParams entities_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::document_metadata::EntityDataView>>(
        in_entities, buffer, &entities_writer, &entities_validate_params,
        context);
    (*output)->entities.Set(
        entities_writer.is_null() ? nullptr : entities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->entities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null entities in WebPage struct");
  }

  static bool Deserialize(::blink::mojom::document_metadata::internal::WebPage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::document_metadata::WebPageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::document_metadata::ValuesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::document_metadata::ValuesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::document_metadata::internal::Values_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::document_metadata::internal::Values_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::document_metadata::ValuesDataView::Tag::BOOL_VALUES: {
        decltype(Traits::bool_values(input))
            in_bool_values = Traits::bool_values(input);
        typename decltype(result->data.f_bool_values)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams bool_values_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<bool>>(
            in_bool_values, buffer, &value_writer, &bool_values_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null bool_values in Values union");
        result->data.f_bool_values.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::document_metadata::ValuesDataView::Tag::LONG_VALUES: {
        decltype(Traits::long_values(input))
            in_long_values = Traits::long_values(input);
        typename decltype(result->data.f_long_values)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams long_values_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<int64_t>>(
            in_long_values, buffer, &value_writer, &long_values_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null long_values in Values union");
        result->data.f_long_values.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::document_metadata::ValuesDataView::Tag::STRING_VALUES: {
        decltype(Traits::string_values(input))
            in_string_values = Traits::string_values(input);
        typename decltype(result->data.f_string_values)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams string_values_validate_params(
            0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
        mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
            in_string_values, buffer, &value_writer, &string_values_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string_values in Values union");
        result->data.f_string_values.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::document_metadata::ValuesDataView::Tag::ENTITY_VALUES: {
        decltype(Traits::entity_values(input))
            in_entity_values = Traits::entity_values(input);
        typename decltype(result->data.f_entity_values)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams entity_values_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::document_metadata::EntityDataView>>(
            in_entity_values, buffer, &value_writer, &entity_values_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null entity_values in Values union");
        result->data.f_entity_values.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::document_metadata::internal::Values_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::document_metadata::ValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {
namespace document_metadata {

inline void PropertyDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PropertyDataView::GetValuesDataView(
    ValuesDataView* output) {
  auto pointer = &data_->values;
  *output = ValuesDataView(pointer, context_);
}


inline void EntityDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void EntityDataView::GetPropertiesDataView(
    mojo::ArrayDataView<PropertyDataView>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::ArrayDataView<PropertyDataView>(pointer, context_);
}


inline void WebPageDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void WebPageDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebPageDataView::GetEntitiesDataView(
    mojo::ArrayDataView<EntityDataView>* output) {
  auto pointer = data_->entities.Get();
  *output = mojo::ArrayDataView<EntityDataView>(pointer, context_);
}


inline void ValuesDataView::GetBoolValuesDataView(
    mojo::ArrayDataView<bool>* output) {
  DCHECK(is_bool_values());
  *output = mojo::ArrayDataView<bool>(data_->data.f_bool_values.Get(), context_);
}
inline void ValuesDataView::GetLongValuesDataView(
    mojo::ArrayDataView<int64_t>* output) {
  DCHECK(is_long_values());
  *output = mojo::ArrayDataView<int64_t>(data_->data.f_long_values.Get(), context_);
}
inline void ValuesDataView::GetStringValuesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  DCHECK(is_string_values());
  *output = mojo::ArrayDataView<mojo::StringDataView>(data_->data.f_string_values.Get(), context_);
}
inline void ValuesDataView::GetEntityValuesDataView(
    mojo::ArrayDataView<EntityDataView>* output) {
  DCHECK(is_entity_values());
  *output = mojo::ArrayDataView<EntityDataView>(data_->data.f_entity_values.Get(), context_);
}


}  // namespace document_metadata
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_SHARED_H_