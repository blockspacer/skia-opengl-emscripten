// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/hid.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class HidUsageAndPageDataView;

class HidReportItemDataView;

class HidReportDescriptionDataView;

class HidCollectionInfoDataView;

class HidDeviceInfoDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::HidUsageAndPageDataView> {
  using Data = ::device::mojom::internal::HidUsageAndPage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::HidReportItemDataView> {
  using Data = ::device::mojom::internal::HidReportItem_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::HidReportDescriptionDataView> {
  using Data = ::device::mojom::internal::HidReportDescription_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::HidCollectionInfoDataView> {
  using Data = ::device::mojom::internal::HidCollectionInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::HidDeviceInfoDataView> {
  using Data = ::device::mojom::internal::HidDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class HidBusType : int32_t {
  
  kHIDBusTypeUSB = 0,
  
  kHIDBusTypeBluetooth = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, HidBusType value);
inline bool IsKnownEnumValue(HidBusType value) {
  return internal::HidBusType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class HidManagerClientInterfaceBase {};

using HidManagerClientPtrDataView =
    mojo::InterfacePtrDataView<HidManagerClientInterfaceBase>;
using HidManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<HidManagerClientInterfaceBase>;
using HidManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HidManagerClientInterfaceBase>;
using HidManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HidManagerClientInterfaceBase>;
class HidManagerInterfaceBase {};

using HidManagerPtrDataView =
    mojo::InterfacePtrDataView<HidManagerInterfaceBase>;
using HidManagerRequestDataView =
    mojo::InterfaceRequestDataView<HidManagerInterfaceBase>;
using HidManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HidManagerInterfaceBase>;
using HidManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HidManagerInterfaceBase>;
class HidConnectionInterfaceBase {};

using HidConnectionPtrDataView =
    mojo::InterfacePtrDataView<HidConnectionInterfaceBase>;
using HidConnectionRequestDataView =
    mojo::InterfaceRequestDataView<HidConnectionInterfaceBase>;
using HidConnectionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HidConnectionInterfaceBase>;
using HidConnectionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HidConnectionInterfaceBase>;
class HidConnectionClientInterfaceBase {};

using HidConnectionClientPtrDataView =
    mojo::InterfacePtrDataView<HidConnectionClientInterfaceBase>;
using HidConnectionClientRequestDataView =
    mojo::InterfaceRequestDataView<HidConnectionClientInterfaceBase>;
using HidConnectionClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HidConnectionClientInterfaceBase>;
using HidConnectionClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HidConnectionClientInterfaceBase>;
class HidUsageAndPageDataView {
 public:
  HidUsageAndPageDataView() {}

  HidUsageAndPageDataView(
      internal::HidUsageAndPage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint16_t usage() const {
    return data_->usage;
  }
  uint16_t usage_page() const {
    return data_->usage_page;
  }
 private:
  internal::HidUsageAndPage_Data* data_ = nullptr;
};

class HidReportItemDataView {
 public:
  HidReportItemDataView() {}

  HidReportItemDataView(
      internal::HidReportItem_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool is_range() const {
    return data_->is_range;
  }
  bool is_constant() const {
    return data_->is_constant;
  }
  bool is_variable() const {
    return data_->is_variable;
  }
  bool is_relative() const {
    return data_->is_relative;
  }
  bool wrap() const {
    return data_->wrap;
  }
  bool is_non_linear() const {
    return data_->is_non_linear;
  }
  bool no_preferred_state() const {
    return data_->no_preferred_state;
  }
  bool has_null_position() const {
    return data_->has_null_position;
  }
  bool is_volatile() const {
    return data_->is_volatile;
  }
  bool is_buffered_bytes() const {
    return data_->is_buffered_bytes;
  }
  inline void GetUsagesDataView(
      mojo::ArrayDataView<HidUsageAndPageDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsages(UserType* output) {
    auto* pointer = data_->usages.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidUsageAndPageDataView>>(
        pointer, output, context_);
  }
  inline void GetUsageMinimumDataView(
      HidUsageAndPageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsageMinimum(UserType* output) {
    auto* pointer = data_->usage_minimum.Get();
    return mojo::internal::Deserialize<::device::mojom::HidUsageAndPageDataView>(
        pointer, output, context_);
  }
  inline void GetUsageMaximumDataView(
      HidUsageAndPageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsageMaximum(UserType* output) {
    auto* pointer = data_->usage_maximum.Get();
    return mojo::internal::Deserialize<::device::mojom::HidUsageAndPageDataView>(
        pointer, output, context_);
  }
  uint32_t designator_minimum() const {
    return data_->designator_minimum;
  }
  uint32_t designator_maximum() const {
    return data_->designator_maximum;
  }
  uint32_t string_minimum() const {
    return data_->string_minimum;
  }
  uint32_t string_maximum() const {
    return data_->string_maximum;
  }
  int32_t logical_minimum() const {
    return data_->logical_minimum;
  }
  int32_t logical_maximum() const {
    return data_->logical_maximum;
  }
  int32_t physical_minimum() const {
    return data_->physical_minimum;
  }
  int32_t physical_maximum() const {
    return data_->physical_maximum;
  }
  uint32_t unit_exponent() const {
    return data_->unit_exponent;
  }
  uint32_t unit() const {
    return data_->unit;
  }
  uint32_t report_size() const {
    return data_->report_size;
  }
  uint32_t report_count() const {
    return data_->report_count;
  }
 private:
  internal::HidReportItem_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidReportDescriptionDataView {
 public:
  HidReportDescriptionDataView() {}

  HidReportDescriptionDataView(
      internal::HidReportDescription_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t report_id() const {
    return data_->report_id;
  }
  inline void GetItemsDataView(
      mojo::ArrayDataView<HidReportItemDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadItems(UserType* output) {
    auto* pointer = data_->items.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidReportItemDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HidReportDescription_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidCollectionInfoDataView {
 public:
  HidCollectionInfoDataView() {}

  HidCollectionInfoDataView(
      internal::HidCollectionInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUsageDataView(
      HidUsageAndPageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsage(UserType* output) {
    auto* pointer = data_->usage.Get();
    return mojo::internal::Deserialize<::device::mojom::HidUsageAndPageDataView>(
        pointer, output, context_);
  }
  inline void GetReportIdsDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReportIds(UserType* output) {
    auto* pointer = data_->report_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint32_t collection_type() const {
    return data_->collection_type;
  }
  inline void GetInputReportsDataView(
      mojo::ArrayDataView<HidReportDescriptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputReports(UserType* output) {
    auto* pointer = data_->input_reports.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidReportDescriptionDataView>>(
        pointer, output, context_);
  }
  inline void GetOutputReportsDataView(
      mojo::ArrayDataView<HidReportDescriptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputReports(UserType* output) {
    auto* pointer = data_->output_reports.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidReportDescriptionDataView>>(
        pointer, output, context_);
  }
  inline void GetFeatureReportsDataView(
      mojo::ArrayDataView<HidReportDescriptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeatureReports(UserType* output) {
    auto* pointer = data_->feature_reports.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidReportDescriptionDataView>>(
        pointer, output, context_);
  }
  inline void GetChildrenDataView(
      mojo::ArrayDataView<HidCollectionInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChildren(UserType* output) {
    auto* pointer = data_->children.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidCollectionInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HidCollectionInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidDeviceInfoDataView {
 public:
  HidDeviceInfoDataView() {}

  HidDeviceInfoDataView(
      internal::HidDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGuid(UserType* output) {
    auto* pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  inline void GetProductNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProductName(UserType* output) {
    auto* pointer = data_->product_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSerialNumberDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSerialNumber(UserType* output) {
    auto* pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBusType(UserType* output) const {
    auto data_value = data_->bus_type;
    return mojo::internal::Deserialize<::device::mojom::HidBusType>(
        data_value, output);
  }

  HidBusType bus_type() const {
    return static_cast<HidBusType>(data_->bus_type);
  }
  inline void GetReportDescriptorDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReportDescriptor(UserType* output) {
    auto* pointer = data_->report_descriptor.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetCollectionsDataView(
      mojo::ArrayDataView<HidCollectionInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCollections(UserType* output) {
    auto* pointer = data_->collections.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidCollectionInfoDataView>>(
        pointer, output, context_);
  }
  bool has_report_id() const {
    return data_->has_report_id;
  }
  uint64_t max_input_report_size() const {
    return data_->max_input_report_size;
  }
  uint64_t max_output_report_size() const {
    return data_->max_output_report_size;
  }
  uint64_t max_feature_report_size() const {
    return data_->max_feature_report_size;
  }
  inline void GetDeviceNodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceNode(UserType* output) {
    auto* pointer = data_->device_node.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::HidDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::HidBusType>
    : public mojo::internal::EnumHashImpl<::device::mojom::HidBusType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::HidBusType, ::device::mojom::HidBusType> {
  static ::device::mojom::HidBusType ToMojom(::device::mojom::HidBusType input) { return input; }
  static bool FromMojom(::device::mojom::HidBusType input, ::device::mojom::HidBusType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidBusType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::HidBusType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::HidBusType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidUsageAndPageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::HidUsageAndPageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::HidUsageAndPage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->usage = Traits::usage(input);
    (*output)->usage_page = Traits::usage_page(input);
  }

  static bool Deserialize(::device::mojom::internal::HidUsageAndPage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::HidUsageAndPageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidReportItemDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::HidReportItemDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::HidReportItem_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->is_range = Traits::is_range(input);
    (*output)->is_constant = Traits::is_constant(input);
    (*output)->is_variable = Traits::is_variable(input);
    (*output)->is_relative = Traits::is_relative(input);
    (*output)->wrap = Traits::wrap(input);
    (*output)->is_non_linear = Traits::is_non_linear(input);
    (*output)->no_preferred_state = Traits::no_preferred_state(input);
    (*output)->has_null_position = Traits::has_null_position(input);
    (*output)->is_volatile = Traits::is_volatile(input);
    (*output)->is_buffered_bytes = Traits::is_buffered_bytes(input);
    decltype(Traits::usages(input)) in_usages = Traits::usages(input);
    typename decltype((*output)->usages)::BaseType::BufferWriter
        usages_writer;
    const mojo::internal::ContainerValidateParams usages_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidUsageAndPageDataView>>(
        in_usages, buffer, &usages_writer, &usages_validate_params,
        context);
    (*output)->usages.Set(
        usages_writer.is_null() ? nullptr : usages_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->usages.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null usages in HidReportItem struct");
    decltype(Traits::usage_minimum(input)) in_usage_minimum = Traits::usage_minimum(input);
    typename decltype((*output)->usage_minimum)::BaseType::BufferWriter
        usage_minimum_writer;
    mojo::internal::Serialize<::device::mojom::HidUsageAndPageDataView>(
        in_usage_minimum, buffer, &usage_minimum_writer, context);
    (*output)->usage_minimum.Set(
        usage_minimum_writer.is_null() ? nullptr : usage_minimum_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->usage_minimum.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null usage_minimum in HidReportItem struct");
    decltype(Traits::usage_maximum(input)) in_usage_maximum = Traits::usage_maximum(input);
    typename decltype((*output)->usage_maximum)::BaseType::BufferWriter
        usage_maximum_writer;
    mojo::internal::Serialize<::device::mojom::HidUsageAndPageDataView>(
        in_usage_maximum, buffer, &usage_maximum_writer, context);
    (*output)->usage_maximum.Set(
        usage_maximum_writer.is_null() ? nullptr : usage_maximum_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->usage_maximum.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null usage_maximum in HidReportItem struct");
    (*output)->designator_minimum = Traits::designator_minimum(input);
    (*output)->designator_maximum = Traits::designator_maximum(input);
    (*output)->string_minimum = Traits::string_minimum(input);
    (*output)->string_maximum = Traits::string_maximum(input);
    (*output)->logical_minimum = Traits::logical_minimum(input);
    (*output)->logical_maximum = Traits::logical_maximum(input);
    (*output)->physical_minimum = Traits::physical_minimum(input);
    (*output)->physical_maximum = Traits::physical_maximum(input);
    (*output)->unit_exponent = Traits::unit_exponent(input);
    (*output)->unit = Traits::unit(input);
    (*output)->report_size = Traits::report_size(input);
    (*output)->report_count = Traits::report_count(input);
  }

  static bool Deserialize(::device::mojom::internal::HidReportItem_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::HidReportItemDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidReportDescriptionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::HidReportDescriptionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::HidReportDescription_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->report_id = Traits::report_id(input);
    decltype(Traits::items(input)) in_items = Traits::items(input);
    typename decltype((*output)->items)::BaseType::BufferWriter
        items_writer;
    const mojo::internal::ContainerValidateParams items_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidReportItemDataView>>(
        in_items, buffer, &items_writer, &items_validate_params,
        context);
    (*output)->items.Set(
        items_writer.is_null() ? nullptr : items_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->items.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null items in HidReportDescription struct");
  }

  static bool Deserialize(::device::mojom::internal::HidReportDescription_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::HidReportDescriptionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidCollectionInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::HidCollectionInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::HidCollectionInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::usage(input)) in_usage = Traits::usage(input);
    typename decltype((*output)->usage)::BaseType::BufferWriter
        usage_writer;
    mojo::internal::Serialize<::device::mojom::HidUsageAndPageDataView>(
        in_usage, buffer, &usage_writer, context);
    (*output)->usage.Set(
        usage_writer.is_null() ? nullptr : usage_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->usage.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null usage in HidCollectionInfo struct");
    decltype(Traits::report_ids(input)) in_report_ids = Traits::report_ids(input);
    typename decltype((*output)->report_ids)::BaseType::BufferWriter
        report_ids_writer;
    const mojo::internal::ContainerValidateParams report_ids_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_report_ids, buffer, &report_ids_writer, &report_ids_validate_params,
        context);
    (*output)->report_ids.Set(
        report_ids_writer.is_null() ? nullptr : report_ids_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->report_ids.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null report_ids in HidCollectionInfo struct");
    (*output)->collection_type = Traits::collection_type(input);
    decltype(Traits::input_reports(input)) in_input_reports = Traits::input_reports(input);
    typename decltype((*output)->input_reports)::BaseType::BufferWriter
        input_reports_writer;
    const mojo::internal::ContainerValidateParams input_reports_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidReportDescriptionDataView>>(
        in_input_reports, buffer, &input_reports_writer, &input_reports_validate_params,
        context);
    (*output)->input_reports.Set(
        input_reports_writer.is_null() ? nullptr : input_reports_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->input_reports.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null input_reports in HidCollectionInfo struct");
    decltype(Traits::output_reports(input)) in_output_reports = Traits::output_reports(input);
    typename decltype((*output)->output_reports)::BaseType::BufferWriter
        output_reports_writer;
    const mojo::internal::ContainerValidateParams output_reports_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidReportDescriptionDataView>>(
        in_output_reports, buffer, &output_reports_writer, &output_reports_validate_params,
        context);
    (*output)->output_reports.Set(
        output_reports_writer.is_null() ? nullptr : output_reports_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->output_reports.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null output_reports in HidCollectionInfo struct");
    decltype(Traits::feature_reports(input)) in_feature_reports = Traits::feature_reports(input);
    typename decltype((*output)->feature_reports)::BaseType::BufferWriter
        feature_reports_writer;
    const mojo::internal::ContainerValidateParams feature_reports_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidReportDescriptionDataView>>(
        in_feature_reports, buffer, &feature_reports_writer, &feature_reports_validate_params,
        context);
    (*output)->feature_reports.Set(
        feature_reports_writer.is_null() ? nullptr : feature_reports_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->feature_reports.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null feature_reports in HidCollectionInfo struct");
    decltype(Traits::children(input)) in_children = Traits::children(input);
    typename decltype((*output)->children)::BaseType::BufferWriter
        children_writer;
    const mojo::internal::ContainerValidateParams children_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidCollectionInfoDataView>>(
        in_children, buffer, &children_writer, &children_validate_params,
        context);
    (*output)->children.Set(
        children_writer.is_null() ? nullptr : children_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->children.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null children in HidCollectionInfo struct");
  }

  static bool Deserialize(::device::mojom::internal::HidCollectionInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::HidCollectionInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::HidDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::HidDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::HidDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::guid(input)) in_guid = Traits::guid(input);
    typename decltype((*output)->guid)::BaseType::BufferWriter
        guid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_guid, buffer, &guid_writer, context);
    (*output)->guid.Set(
        guid_writer.is_null() ? nullptr : guid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->guid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null guid in HidDeviceInfo struct");
    (*output)->vendor_id = Traits::vendor_id(input);
    (*output)->product_id = Traits::product_id(input);
    decltype(Traits::product_name(input)) in_product_name = Traits::product_name(input);
    typename decltype((*output)->product_name)::BaseType::BufferWriter
        product_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_product_name, buffer, &product_name_writer, context);
    (*output)->product_name.Set(
        product_name_writer.is_null() ? nullptr : product_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->product_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null product_name in HidDeviceInfo struct");
    decltype(Traits::serial_number(input)) in_serial_number = Traits::serial_number(input);
    typename decltype((*output)->serial_number)::BaseType::BufferWriter
        serial_number_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_serial_number, buffer, &serial_number_writer, context);
    (*output)->serial_number.Set(
        serial_number_writer.is_null() ? nullptr : serial_number_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->serial_number.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null serial_number in HidDeviceInfo struct");
    mojo::internal::Serialize<::device::mojom::HidBusType>(
        Traits::bus_type(input), &(*output)->bus_type);
    decltype(Traits::report_descriptor(input)) in_report_descriptor = Traits::report_descriptor(input);
    typename decltype((*output)->report_descriptor)::BaseType::BufferWriter
        report_descriptor_writer;
    const mojo::internal::ContainerValidateParams report_descriptor_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_report_descriptor, buffer, &report_descriptor_writer, &report_descriptor_validate_params,
        context);
    (*output)->report_descriptor.Set(
        report_descriptor_writer.is_null() ? nullptr : report_descriptor_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->report_descriptor.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null report_descriptor in HidDeviceInfo struct");
    decltype(Traits::collections(input)) in_collections = Traits::collections(input);
    typename decltype((*output)->collections)::BaseType::BufferWriter
        collections_writer;
    const mojo::internal::ContainerValidateParams collections_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidCollectionInfoDataView>>(
        in_collections, buffer, &collections_writer, &collections_validate_params,
        context);
    (*output)->collections.Set(
        collections_writer.is_null() ? nullptr : collections_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->collections.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null collections in HidDeviceInfo struct");
    (*output)->has_report_id = Traits::has_report_id(input);
    (*output)->max_input_report_size = Traits::max_input_report_size(input);
    (*output)->max_output_report_size = Traits::max_output_report_size(input);
    (*output)->max_feature_report_size = Traits::max_feature_report_size(input);
    decltype(Traits::device_node(input)) in_device_node = Traits::device_node(input);
    typename decltype((*output)->device_node)::BaseType::BufferWriter
        device_node_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_node, buffer, &device_node_writer, context);
    (*output)->device_node.Set(
        device_node_writer.is_null() ? nullptr : device_node_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_node.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_node in HidDeviceInfo struct");
  }

  static bool Deserialize(::device::mojom::internal::HidDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::HidDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {



inline void HidReportItemDataView::GetUsagesDataView(
    mojo::ArrayDataView<HidUsageAndPageDataView>* output) {
  auto pointer = data_->usages.Get();
  *output = mojo::ArrayDataView<HidUsageAndPageDataView>(pointer, context_);
}
inline void HidReportItemDataView::GetUsageMinimumDataView(
    HidUsageAndPageDataView* output) {
  auto pointer = data_->usage_minimum.Get();
  *output = HidUsageAndPageDataView(pointer, context_);
}
inline void HidReportItemDataView::GetUsageMaximumDataView(
    HidUsageAndPageDataView* output) {
  auto pointer = data_->usage_maximum.Get();
  *output = HidUsageAndPageDataView(pointer, context_);
}


inline void HidReportDescriptionDataView::GetItemsDataView(
    mojo::ArrayDataView<HidReportItemDataView>* output) {
  auto pointer = data_->items.Get();
  *output = mojo::ArrayDataView<HidReportItemDataView>(pointer, context_);
}


inline void HidCollectionInfoDataView::GetUsageDataView(
    HidUsageAndPageDataView* output) {
  auto pointer = data_->usage.Get();
  *output = HidUsageAndPageDataView(pointer, context_);
}
inline void HidCollectionInfoDataView::GetReportIdsDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->report_ids.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void HidCollectionInfoDataView::GetInputReportsDataView(
    mojo::ArrayDataView<HidReportDescriptionDataView>* output) {
  auto pointer = data_->input_reports.Get();
  *output = mojo::ArrayDataView<HidReportDescriptionDataView>(pointer, context_);
}
inline void HidCollectionInfoDataView::GetOutputReportsDataView(
    mojo::ArrayDataView<HidReportDescriptionDataView>* output) {
  auto pointer = data_->output_reports.Get();
  *output = mojo::ArrayDataView<HidReportDescriptionDataView>(pointer, context_);
}
inline void HidCollectionInfoDataView::GetFeatureReportsDataView(
    mojo::ArrayDataView<HidReportDescriptionDataView>* output) {
  auto pointer = data_->feature_reports.Get();
  *output = mojo::ArrayDataView<HidReportDescriptionDataView>(pointer, context_);
}
inline void HidCollectionInfoDataView::GetChildrenDataView(
    mojo::ArrayDataView<HidCollectionInfoDataView>* output) {
  auto pointer = data_->children.Get();
  *output = mojo::ArrayDataView<HidCollectionInfoDataView>(pointer, context_);
}


inline void HidDeviceInfoDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HidDeviceInfoDataView::GetProductNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->product_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HidDeviceInfoDataView::GetSerialNumberDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HidDeviceInfoDataView::GetReportDescriptorDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->report_descriptor.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void HidDeviceInfoDataView::GetCollectionsDataView(
    mojo::ArrayDataView<HidCollectionInfoDataView>* output) {
  auto pointer = data_->collections.Get();
  *output = mojo::ArrayDataView<HidCollectionInfoDataView>(pointer, context_);
}
inline void HidDeviceInfoDataView::GetDeviceNodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_node.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_H_