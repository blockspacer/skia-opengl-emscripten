// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ContactInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ContactInfoDataView> {
  using Data = ::blink::mojom::internal::ContactInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ContactsManagerInterfaceBase {};

using ContactsManagerPtrDataView =
    mojo::InterfacePtrDataView<ContactsManagerInterfaceBase>;
using ContactsManagerRequestDataView =
    mojo::InterfaceRequestDataView<ContactsManagerInterfaceBase>;
using ContactsManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ContactsManagerInterfaceBase>;
using ContactsManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ContactsManagerInterfaceBase>;
class ContactInfoDataView {
 public:
  ContactInfoDataView() {}

  ContactInfoDataView(
      internal::ContactInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetEmailDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEmail(UserType* output) {
    auto* pointer = data_->email.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetTelDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTel(UserType* output) {
    auto* pointer = data_->tel.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ContactInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ContactInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ContactInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ContactInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    const mojo::internal::ContainerValidateParams name_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_name, buffer, &name_writer, &name_validate_params,
        context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(Traits::email(input)) in_email = Traits::email(input);
    typename decltype((*output)->email)::BaseType::BufferWriter
        email_writer;
    const mojo::internal::ContainerValidateParams email_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_email, buffer, &email_writer, &email_validate_params,
        context);
    (*output)->email.Set(
        email_writer.is_null() ? nullptr : email_writer.data());
    decltype(Traits::tel(input)) in_tel = Traits::tel(input);
    typename decltype((*output)->tel)::BaseType::BufferWriter
        tel_writer;
    const mojo::internal::ContainerValidateParams tel_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_tel, buffer, &tel_writer, &tel_validate_params,
        context);
    (*output)->tel.Set(
        tel_writer.is_null() ? nullptr : tel_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::ContactInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ContactInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ContactInfoDataView::GetNameDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->name.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void ContactInfoDataView::GetEmailDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->email.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void ContactInfoDataView::GetTelDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->tel.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_SHARED_H_