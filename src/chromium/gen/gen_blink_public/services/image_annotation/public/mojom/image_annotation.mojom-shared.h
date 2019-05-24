// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_SHARED_H_
#define SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_SHARED_H_

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
#include "services/image_annotation/public/mojom/image_annotation.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace image_annotation {
namespace mojom {
class AnnotationDataView;

class AnnotateImageResultDataView;


}  // namespace mojom
}  // namespace image_annotation

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::image_annotation::mojom::AnnotationDataView> {
  using Data = ::image_annotation::mojom::internal::Annotation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::image_annotation::mojom::AnnotateImageResultDataView> {
  using Data = ::image_annotation::mojom::internal::AnnotateImageResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace image_annotation {
namespace mojom {


enum class AnnotateImageError : int32_t {
  
  kCanceled,
  
  kFailure,
  
  kAdult,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, AnnotateImageError value);
inline bool IsKnownEnumValue(AnnotateImageError value) {
  return internal::AnnotateImageError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AnnotationType : int32_t {
  
  kOcr = 1,
  
  kLabel = 2,
  
  kCaption = 3,
  kMinValue = 1,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, AnnotationType value);
inline bool IsKnownEnumValue(AnnotationType value) {
  return internal::AnnotationType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ImageProcessorInterfaceBase {};

using ImageProcessorPtrDataView =
    mojo::InterfacePtrDataView<ImageProcessorInterfaceBase>;
using ImageProcessorRequestDataView =
    mojo::InterfaceRequestDataView<ImageProcessorInterfaceBase>;
using ImageProcessorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ImageProcessorInterfaceBase>;
using ImageProcessorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ImageProcessorInterfaceBase>;
class AnnotatorInterfaceBase {};

using AnnotatorPtrDataView =
    mojo::InterfacePtrDataView<AnnotatorInterfaceBase>;
using AnnotatorRequestDataView =
    mojo::InterfaceRequestDataView<AnnotatorInterfaceBase>;
using AnnotatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AnnotatorInterfaceBase>;
using AnnotatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AnnotatorInterfaceBase>;
class AnnotationDataView {
 public:
  AnnotationDataView() {}

  AnnotationDataView(
      internal::Annotation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::image_annotation::mojom::AnnotationType>(
        data_value, output);
  }

  AnnotationType type() const {
    return static_cast<AnnotationType>(data_->type);
  }
  double score() const {
    return data_->score;
  }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Annotation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AnnotateImageResultDataView {
 public:
  using Tag = internal::AnnotateImageResult_Data::AnnotateImageResult_Tag;

  AnnotateImageResultDataView() {}

  AnnotateImageResultDataView(
      internal::AnnotateImageResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_error_code() const { return data_->tag == Tag::ERROR_CODE; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    DCHECK(is_error_code());
    return mojo::internal::Deserialize<::image_annotation::mojom::AnnotateImageError>(
        data_->data.f_error_code, output);
  }

  AnnotateImageError error_code() const {
    DCHECK(is_error_code());
    return static_cast<AnnotateImageError>(
        data_->data.f_error_code);
  }
  bool is_annotations() const { return data_->tag == Tag::ANNOTATIONS; }
  inline void GetAnnotationsDataView(
      mojo::ArrayDataView<AnnotationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAnnotations(UserType* output) {
    DCHECK(is_annotations());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::image_annotation::mojom::AnnotationDataView>>(
        data_->data.f_annotations.Get(), output, context_);
  }

 private:
  internal::AnnotateImageResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace image_annotation

namespace std {

template <>
struct hash<::image_annotation::mojom::AnnotateImageError>
    : public mojo::internal::EnumHashImpl<::image_annotation::mojom::AnnotateImageError> {};

template <>
struct hash<::image_annotation::mojom::AnnotationType>
    : public mojo::internal::EnumHashImpl<::image_annotation::mojom::AnnotationType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::image_annotation::mojom::AnnotateImageError, ::image_annotation::mojom::AnnotateImageError> {
  static ::image_annotation::mojom::AnnotateImageError ToMojom(::image_annotation::mojom::AnnotateImageError input) { return input; }
  static bool FromMojom(::image_annotation::mojom::AnnotateImageError input, ::image_annotation::mojom::AnnotateImageError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::image_annotation::mojom::AnnotateImageError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::image_annotation::mojom::AnnotateImageError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::image_annotation::mojom::AnnotateImageError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::image_annotation::mojom::AnnotationType, ::image_annotation::mojom::AnnotationType> {
  static ::image_annotation::mojom::AnnotationType ToMojom(::image_annotation::mojom::AnnotationType input) { return input; }
  static bool FromMojom(::image_annotation::mojom::AnnotationType input, ::image_annotation::mojom::AnnotationType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::image_annotation::mojom::AnnotationType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::image_annotation::mojom::AnnotationType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::image_annotation::mojom::AnnotationType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::image_annotation::mojom::AnnotationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::image_annotation::mojom::AnnotationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::image_annotation::mojom::internal::Annotation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::image_annotation::mojom::AnnotationType>(
        Traits::type(input), &(*output)->type);
    (*output)->score = Traits::score(input);
    decltype(Traits::text(input)) in_text = Traits::text(input);
    typename decltype((*output)->text)::BaseType::BufferWriter
        text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_text, buffer, &text_writer, context);
    (*output)->text.Set(
        text_writer.is_null() ? nullptr : text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null text in Annotation struct");
  }

  static bool Deserialize(::image_annotation::mojom::internal::Annotation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::image_annotation::mojom::AnnotationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::image_annotation::mojom::AnnotateImageResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::image_annotation::mojom::AnnotateImageResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::image_annotation::mojom::internal::AnnotateImageResult_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::image_annotation::mojom::internal::AnnotateImageResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::image_annotation::mojom::AnnotateImageResultDataView::Tag::ERROR_CODE: {
        decltype(Traits::error_code(input))
            in_error_code = Traits::error_code(input);
        mojo::internal::Serialize<::image_annotation::mojom::AnnotateImageError>(
            in_error_code, &result->data.f_error_code);
        break;
      }
      case ::image_annotation::mojom::AnnotateImageResultDataView::Tag::ANNOTATIONS: {
        decltype(Traits::annotations(input))
            in_annotations = Traits::annotations(input);
        typename decltype(result->data.f_annotations)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams annotations_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::image_annotation::mojom::AnnotationDataView>>(
            in_annotations, buffer, &value_writer, &annotations_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null annotations in AnnotateImageResult union");
        result->data.f_annotations.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::image_annotation::mojom::internal::AnnotateImageResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::image_annotation::mojom::AnnotateImageResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace image_annotation {
namespace mojom {

inline void AnnotationDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void AnnotateImageResultDataView::GetAnnotationsDataView(
    mojo::ArrayDataView<AnnotationDataView>* output) {
  DCHECK(is_annotations());
  *output = mojo::ArrayDataView<AnnotationDataView>(data_->data.f_annotations.Get(), context_);
}


}  // namespace mojom
}  // namespace image_annotation

#endif  // SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_SHARED_H_