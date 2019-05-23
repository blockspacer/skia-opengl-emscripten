// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_MOJOM_H_
#define UI_EVENTS_MOJO_EVENT_MOJOM_H_

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
#include "ui/events/mojo/event.mojom-shared.h"
#include "ui/events/mojo/event.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/events/mojo/event_constants.mojom.h"
#include "ui/events/mojo/keyboard_codes.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/latency/mojo/latency_info.mojom.h"
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
#include "ui/events/event.h"




namespace ui {
namespace mojom {





class  KeyData {
 public:
  using DataView = KeyDataDataView;
  using Data_ = internal::KeyData_Data;

  template <typename... Args>
  static KeyDataPtr New(Args&&... args) {
    return KeyDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyDataPtr From(const U& u) {
    return mojo::TypeConverter<KeyDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyData>::Convert(*this);
  }


  KeyData();

  KeyData(
      int32_t key_code,
      uint32_t dom_code,
      int32_t dom_key,
      bool is_char);

  ~KeyData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyDataPtr>
  KeyDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeyData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeyData_UnserializedMessageContext<
            UserType, KeyData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeyData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return KeyData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeyData_UnserializedMessageContext<
            UserType, KeyData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeyData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t key_code;
  
  uint32_t dom_code;
  
  int32_t dom_key;
  
  bool is_char;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};















class  LocationData {
 public:
  using DataView = LocationDataDataView;
  using Data_ = internal::LocationData_Data;

  template <typename... Args>
  static LocationDataPtr New(Args&&... args) {
    return LocationDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LocationDataPtr From(const U& u) {
    return mojo::TypeConverter<LocationDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LocationData>::Convert(*this);
  }


  LocationData();

  LocationData(
      const gfx::PointF& relative_location,
      const gfx::PointF& root_location);

  ~LocationData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LocationDataPtr>
  LocationDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LocationData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LocationData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LocationData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LocationData_UnserializedMessageContext<
            UserType, LocationData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LocationData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LocationData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LocationData_UnserializedMessageContext<
            UserType, LocationData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LocationData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  gfx::PointF relative_location;
  
  gfx::PointF root_location;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  GestureData {
 public:
  using DataView = GestureDataDataView;
  using Data_ = internal::GestureData_Data;

  template <typename... Args>
  static GestureDataPtr New(Args&&... args) {
    return GestureDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GestureDataPtr From(const U& u) {
    return mojo::TypeConverter<GestureDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GestureData>::Convert(*this);
  }


  GestureData();

  GestureData(
      LocationDataPtr location,
      ui::GestureDeviceType device_type,
      float scale);

  ~GestureData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GestureDataPtr>
  GestureDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GestureData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GestureData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GestureData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GestureData_UnserializedMessageContext<
            UserType, GestureData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GestureData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GestureData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GestureData_UnserializedMessageContext<
            UserType, GestureData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GestureData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  LocationDataPtr location;
  
  ui::GestureDeviceType device_type;
  
  float scale;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GestureData);
};





class  ScrollData {
 public:
  using DataView = ScrollDataDataView;
  using Data_ = internal::ScrollData_Data;

  template <typename... Args>
  static ScrollDataPtr New(Args&&... args) {
    return ScrollDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ScrollDataPtr From(const U& u) {
    return mojo::TypeConverter<ScrollDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ScrollData>::Convert(*this);
  }


  ScrollData();

  ScrollData(
      LocationDataPtr location,
      float x_offset,
      float y_offset,
      float x_offset_ordinal,
      float y_offset_ordinal,
      int32_t finger_count,
      ui::EventMomentumPhase momentum_phase,
      ui::ScrollEventPhase scroll_event_phase);

  ~ScrollData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ScrollDataPtr>
  ScrollDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ScrollData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ScrollData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ScrollData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ScrollData_UnserializedMessageContext<
            UserType, ScrollData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ScrollData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ScrollData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ScrollData_UnserializedMessageContext<
            UserType, ScrollData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ScrollData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  LocationDataPtr location;
  
  float x_offset;
  
  float y_offset;
  
  float x_offset_ordinal;
  
  float y_offset_ordinal;
  
  int32_t finger_count;
  
  ui::EventMomentumPhase momentum_phase;
  
  ui::ScrollEventPhase scroll_event_phase;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ScrollData);
};





class  PointerDetails {
 public:
  using DataView = PointerDetailsDataView;
  using Data_ = internal::PointerDetails_Data;

  template <typename... Args>
  static PointerDetailsPtr New(Args&&... args) {
    return PointerDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PointerDetailsPtr From(const U& u) {
    return mojo::TypeConverter<PointerDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointerDetails>::Convert(*this);
  }


  PointerDetails();

  PointerDetails(
      ::ui::mojom::PointerKind pointer_type,
      float radius_x,
      float radius_y,
      float force,
      float tilt_x,
      float tilt_y,
      float tangential_pressure,
      float twist,
      int32_t id,
      int32_t offset_x,
      int32_t offset_y);

  ~PointerDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointerDetailsPtr>
  PointerDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointerDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PointerDetails::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PointerDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PointerDetails_UnserializedMessageContext<
            UserType, PointerDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PointerDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PointerDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PointerDetails_UnserializedMessageContext<
            UserType, PointerDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PointerDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::ui::mojom::PointerKind pointer_type;
  
  float radius_x;
  
  float radius_y;
  
  float force;
  
  float tilt_x;
  
  float tilt_y;
  
  float tangential_pressure;
  
  float twist;
  
  int32_t id;
  
  int32_t offset_x;
  
  int32_t offset_y;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  MouseData {
 public:
  using DataView = MouseDataDataView;
  using Data_ = internal::MouseData_Data;

  template <typename... Args>
  static MouseDataPtr New(Args&&... args) {
    return MouseDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MouseDataPtr From(const U& u) {
    return mojo::TypeConverter<MouseDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MouseData>::Convert(*this);
  }


  MouseData();

  MouseData(
      int32_t changed_button_flags,
      LocationDataPtr location,
      const ui::PointerDetails& pointer_details,
      const gfx::Vector2d& wheel_offset);

  ~MouseData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MouseDataPtr>
  MouseDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MouseData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MouseData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MouseData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MouseData_UnserializedMessageContext<
            UserType, MouseData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MouseData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MouseData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MouseData_UnserializedMessageContext<
            UserType, MouseData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MouseData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t changed_button_flags;
  
  LocationDataPtr location;
  
  ui::PointerDetails pointer_details;
  
  gfx::Vector2d wheel_offset;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MouseData);
};





class  TouchData {
 public:
  using DataView = TouchDataDataView;
  using Data_ = internal::TouchData_Data;

  template <typename... Args>
  static TouchDataPtr New(Args&&... args) {
    return TouchDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TouchDataPtr From(const U& u) {
    return mojo::TypeConverter<TouchDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TouchData>::Convert(*this);
  }


  TouchData();

  TouchData(
      bool may_cause_scrolling,
      bool hovering,
      LocationDataPtr location,
      const ui::PointerDetails& pointer_details);

  ~TouchData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TouchDataPtr>
  TouchDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TouchData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TouchData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TouchData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TouchData_UnserializedMessageContext<
            UserType, TouchData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TouchData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TouchData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TouchData_UnserializedMessageContext<
            UserType, TouchData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TouchData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool may_cause_scrolling;
  
  bool hovering;
  
  LocationDataPtr location;
  
  ui::PointerDetails pointer_details;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TouchData);
};





class  Event {
 public:
  using DataView = EventDataView;
  using Data_ = internal::Event_Data;

  template <typename... Args>
  static EventPtr New(Args&&... args) {
    return EventPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EventPtr From(const U& u) {
    return mojo::TypeConverter<EventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Event>::Convert(*this);
  }


  Event();

  Event(
      ::ui::mojom::EventType action,
      int32_t flags,
      base::TimeTicks time_stamp,
      const ui::LatencyInfo& latency,
      KeyDataPtr key_data,
      GestureDataPtr gesture_data,
      ScrollDataPtr scroll_data,
      TouchDataPtr touch_data,
      MouseDataPtr mouse_data,
      const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties);

  ~Event();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventPtr>
  EventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Event>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Event::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Event::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Event_UnserializedMessageContext<
            UserType, Event::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Event::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Event::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Event_UnserializedMessageContext<
            UserType, Event::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Event::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::ui::mojom::EventType action;
  
  int32_t flags;
  
  base::TimeTicks time_stamp;
  
  ui::LatencyInfo latency;
  
  KeyDataPtr key_data;
  
  GestureDataPtr gesture_data;
  
  ScrollDataPtr scroll_data;
  
  TouchDataPtr touch_data;
  
  MouseDataPtr mouse_data;
  
  base::Optional<base::flat_map<std::string, std::vector<uint8_t>>> properties;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Event);
};

template <typename StructPtrType>
KeyDataPtr KeyData::Clone() const {
  return New(
      mojo::Clone(key_code),
      mojo::Clone(dom_code),
      mojo::Clone(dom_key),
      mojo::Clone(is_char)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyData>::value>::type*>
bool KeyData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key_code, other_struct.key_code))
    return false;
  if (!mojo::Equals(this->dom_code, other_struct.dom_code))
    return false;
  if (!mojo::Equals(this->dom_key, other_struct.dom_key))
    return false;
  if (!mojo::Equals(this->is_char, other_struct.is_char))
    return false;
  return true;
}
template <typename StructPtrType>
LocationDataPtr LocationData::Clone() const {
  return New(
      mojo::Clone(relative_location),
      mojo::Clone(root_location)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LocationData>::value>::type*>
bool LocationData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->relative_location, other_struct.relative_location))
    return false;
  if (!mojo::Equals(this->root_location, other_struct.root_location))
    return false;
  return true;
}
template <typename StructPtrType>
GestureDataPtr GestureData::Clone() const {
  return New(
      mojo::Clone(location),
      mojo::Clone(device_type),
      mojo::Clone(scale)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GestureData>::value>::type*>
bool GestureData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->location, other_struct.location))
    return false;
  if (!mojo::Equals(this->device_type, other_struct.device_type))
    return false;
  if (!mojo::Equals(this->scale, other_struct.scale))
    return false;
  return true;
}
template <typename StructPtrType>
ScrollDataPtr ScrollData::Clone() const {
  return New(
      mojo::Clone(location),
      mojo::Clone(x_offset),
      mojo::Clone(y_offset),
      mojo::Clone(x_offset_ordinal),
      mojo::Clone(y_offset_ordinal),
      mojo::Clone(finger_count),
      mojo::Clone(momentum_phase),
      mojo::Clone(scroll_event_phase)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ScrollData>::value>::type*>
bool ScrollData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->location, other_struct.location))
    return false;
  if (!mojo::Equals(this->x_offset, other_struct.x_offset))
    return false;
  if (!mojo::Equals(this->y_offset, other_struct.y_offset))
    return false;
  if (!mojo::Equals(this->x_offset_ordinal, other_struct.x_offset_ordinal))
    return false;
  if (!mojo::Equals(this->y_offset_ordinal, other_struct.y_offset_ordinal))
    return false;
  if (!mojo::Equals(this->finger_count, other_struct.finger_count))
    return false;
  if (!mojo::Equals(this->momentum_phase, other_struct.momentum_phase))
    return false;
  if (!mojo::Equals(this->scroll_event_phase, other_struct.scroll_event_phase))
    return false;
  return true;
}
template <typename StructPtrType>
PointerDetailsPtr PointerDetails::Clone() const {
  return New(
      mojo::Clone(pointer_type),
      mojo::Clone(radius_x),
      mojo::Clone(radius_y),
      mojo::Clone(force),
      mojo::Clone(tilt_x),
      mojo::Clone(tilt_y),
      mojo::Clone(tangential_pressure),
      mojo::Clone(twist),
      mojo::Clone(id),
      mojo::Clone(offset_x),
      mojo::Clone(offset_y)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointerDetails>::value>::type*>
bool PointerDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pointer_type, other_struct.pointer_type))
    return false;
  if (!mojo::Equals(this->radius_x, other_struct.radius_x))
    return false;
  if (!mojo::Equals(this->radius_y, other_struct.radius_y))
    return false;
  if (!mojo::Equals(this->force, other_struct.force))
    return false;
  if (!mojo::Equals(this->tilt_x, other_struct.tilt_x))
    return false;
  if (!mojo::Equals(this->tilt_y, other_struct.tilt_y))
    return false;
  if (!mojo::Equals(this->tangential_pressure, other_struct.tangential_pressure))
    return false;
  if (!mojo::Equals(this->twist, other_struct.twist))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->offset_x, other_struct.offset_x))
    return false;
  if (!mojo::Equals(this->offset_y, other_struct.offset_y))
    return false;
  return true;
}
template <typename StructPtrType>
MouseDataPtr MouseData::Clone() const {
  return New(
      mojo::Clone(changed_button_flags),
      mojo::Clone(location),
      mojo::Clone(pointer_details),
      mojo::Clone(wheel_offset)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MouseData>::value>::type*>
bool MouseData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->changed_button_flags, other_struct.changed_button_flags))
    return false;
  if (!mojo::Equals(this->location, other_struct.location))
    return false;
  if (!mojo::Equals(this->pointer_details, other_struct.pointer_details))
    return false;
  if (!mojo::Equals(this->wheel_offset, other_struct.wheel_offset))
    return false;
  return true;
}
template <typename StructPtrType>
TouchDataPtr TouchData::Clone() const {
  return New(
      mojo::Clone(may_cause_scrolling),
      mojo::Clone(hovering),
      mojo::Clone(location),
      mojo::Clone(pointer_details)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TouchData>::value>::type*>
bool TouchData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->may_cause_scrolling, other_struct.may_cause_scrolling))
    return false;
  if (!mojo::Equals(this->hovering, other_struct.hovering))
    return false;
  if (!mojo::Equals(this->location, other_struct.location))
    return false;
  if (!mojo::Equals(this->pointer_details, other_struct.pointer_details))
    return false;
  return true;
}
template <typename StructPtrType>
EventPtr Event::Clone() const {
  return New(
      mojo::Clone(action),
      mojo::Clone(flags),
      mojo::Clone(time_stamp),
      mojo::Clone(latency),
      mojo::Clone(key_data),
      mojo::Clone(gesture_data),
      mojo::Clone(scroll_data),
      mojo::Clone(touch_data),
      mojo::Clone(mouse_data),
      mojo::Clone(properties)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Event>::value>::type*>
bool Event::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  if (!mojo::Equals(this->time_stamp, other_struct.time_stamp))
    return false;
  if (!mojo::Equals(this->latency, other_struct.latency))
    return false;
  if (!mojo::Equals(this->key_data, other_struct.key_data))
    return false;
  if (!mojo::Equals(this->gesture_data, other_struct.gesture_data))
    return false;
  if (!mojo::Equals(this->scroll_data, other_struct.scroll_data))
    return false;
  if (!mojo::Equals(this->touch_data, other_struct.touch_data))
    return false;
  if (!mojo::Equals(this->mouse_data, other_struct.mouse_data))
    return false;
  if (!mojo::Equals(this->properties, other_struct.properties))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::KeyData::DataView,
                                         ::ui::mojom::KeyDataPtr> {
  static bool IsNull(const ::ui::mojom::KeyDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::KeyDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::KeyData::key_code) key_code(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->key_code;
  }

  static decltype(::ui::mojom::KeyData::dom_code) dom_code(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->dom_code;
  }

  static decltype(::ui::mojom::KeyData::dom_key) dom_key(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->dom_key;
  }

  static decltype(::ui::mojom::KeyData::is_char) is_char(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->is_char;
  }

  static bool Read(::ui::mojom::KeyData::DataView input, ::ui::mojom::KeyDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::LocationData::DataView,
                                         ::ui::mojom::LocationDataPtr> {
  static bool IsNull(const ::ui::mojom::LocationDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LocationDataPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::LocationData::relative_location)& relative_location(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->relative_location;
  }

  static const decltype(::ui::mojom::LocationData::root_location)& root_location(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->root_location;
  }

  static bool Read(::ui::mojom::LocationData::DataView input, ::ui::mojom::LocationDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::GestureData::DataView,
                                         ::ui::mojom::GestureDataPtr> {
  static bool IsNull(const ::ui::mojom::GestureDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::GestureDataPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::GestureData::location)& location(
      const ::ui::mojom::GestureDataPtr& input) {
    return input->location;
  }

  static decltype(::ui::mojom::GestureData::device_type) device_type(
      const ::ui::mojom::GestureDataPtr& input) {
    return input->device_type;
  }

  static decltype(::ui::mojom::GestureData::scale) scale(
      const ::ui::mojom::GestureDataPtr& input) {
    return input->scale;
  }

  static bool Read(::ui::mojom::GestureData::DataView input, ::ui::mojom::GestureDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::ScrollData::DataView,
                                         ::ui::mojom::ScrollDataPtr> {
  static bool IsNull(const ::ui::mojom::ScrollDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::ScrollDataPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::ScrollData::location)& location(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->location;
  }

  static decltype(::ui::mojom::ScrollData::x_offset) x_offset(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->x_offset;
  }

  static decltype(::ui::mojom::ScrollData::y_offset) y_offset(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->y_offset;
  }

  static decltype(::ui::mojom::ScrollData::x_offset_ordinal) x_offset_ordinal(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->x_offset_ordinal;
  }

  static decltype(::ui::mojom::ScrollData::y_offset_ordinal) y_offset_ordinal(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->y_offset_ordinal;
  }

  static decltype(::ui::mojom::ScrollData::finger_count) finger_count(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->finger_count;
  }

  static decltype(::ui::mojom::ScrollData::momentum_phase) momentum_phase(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->momentum_phase;
  }

  static decltype(::ui::mojom::ScrollData::scroll_event_phase) scroll_event_phase(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->scroll_event_phase;
  }

  static bool Read(::ui::mojom::ScrollData::DataView input, ::ui::mojom::ScrollDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::PointerDetails::DataView,
                                         ::ui::mojom::PointerDetailsPtr> {
  static bool IsNull(const ::ui::mojom::PointerDetailsPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::PointerDetailsPtr* output) { output->reset(); }

  static decltype(::ui::mojom::PointerDetails::pointer_type) pointer_type(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->pointer_type;
  }

  static decltype(::ui::mojom::PointerDetails::radius_x) radius_x(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->radius_x;
  }

  static decltype(::ui::mojom::PointerDetails::radius_y) radius_y(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->radius_y;
  }

  static decltype(::ui::mojom::PointerDetails::force) force(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->force;
  }

  static decltype(::ui::mojom::PointerDetails::tilt_x) tilt_x(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->tilt_x;
  }

  static decltype(::ui::mojom::PointerDetails::tilt_y) tilt_y(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->tilt_y;
  }

  static decltype(::ui::mojom::PointerDetails::tangential_pressure) tangential_pressure(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->tangential_pressure;
  }

  static decltype(::ui::mojom::PointerDetails::twist) twist(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->twist;
  }

  static decltype(::ui::mojom::PointerDetails::id) id(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->id;
  }

  static decltype(::ui::mojom::PointerDetails::offset_x) offset_x(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->offset_x;
  }

  static decltype(::ui::mojom::PointerDetails::offset_y) offset_y(
      const ::ui::mojom::PointerDetailsPtr& input) {
    return input->offset_y;
  }

  static bool Read(::ui::mojom::PointerDetails::DataView input, ::ui::mojom::PointerDetailsPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::MouseData::DataView,
                                         ::ui::mojom::MouseDataPtr> {
  static bool IsNull(const ::ui::mojom::MouseDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::MouseDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::MouseData::changed_button_flags) changed_button_flags(
      const ::ui::mojom::MouseDataPtr& input) {
    return input->changed_button_flags;
  }

  static const decltype(::ui::mojom::MouseData::location)& location(
      const ::ui::mojom::MouseDataPtr& input) {
    return input->location;
  }

  static const decltype(::ui::mojom::MouseData::pointer_details)& pointer_details(
      const ::ui::mojom::MouseDataPtr& input) {
    return input->pointer_details;
  }

  static const decltype(::ui::mojom::MouseData::wheel_offset)& wheel_offset(
      const ::ui::mojom::MouseDataPtr& input) {
    return input->wheel_offset;
  }

  static bool Read(::ui::mojom::MouseData::DataView input, ::ui::mojom::MouseDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::TouchData::DataView,
                                         ::ui::mojom::TouchDataPtr> {
  static bool IsNull(const ::ui::mojom::TouchDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::TouchDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::TouchData::may_cause_scrolling) may_cause_scrolling(
      const ::ui::mojom::TouchDataPtr& input) {
    return input->may_cause_scrolling;
  }

  static decltype(::ui::mojom::TouchData::hovering) hovering(
      const ::ui::mojom::TouchDataPtr& input) {
    return input->hovering;
  }

  static const decltype(::ui::mojom::TouchData::location)& location(
      const ::ui::mojom::TouchDataPtr& input) {
    return input->location;
  }

  static const decltype(::ui::mojom::TouchData::pointer_details)& pointer_details(
      const ::ui::mojom::TouchDataPtr& input) {
    return input->pointer_details;
  }

  static bool Read(::ui::mojom::TouchData::DataView input, ::ui::mojom::TouchDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::Event::DataView,
                                         ::ui::mojom::EventPtr> {
  static bool IsNull(const ::ui::mojom::EventPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::EventPtr* output) { output->reset(); }

  static decltype(::ui::mojom::Event::action) action(
      const ::ui::mojom::EventPtr& input) {
    return input->action;
  }

  static decltype(::ui::mojom::Event::flags) flags(
      const ::ui::mojom::EventPtr& input) {
    return input->flags;
  }

  static const decltype(::ui::mojom::Event::time_stamp)& time_stamp(
      const ::ui::mojom::EventPtr& input) {
    return input->time_stamp;
  }

  static const decltype(::ui::mojom::Event::latency)& latency(
      const ::ui::mojom::EventPtr& input) {
    return input->latency;
  }

  static const decltype(::ui::mojom::Event::key_data)& key_data(
      const ::ui::mojom::EventPtr& input) {
    return input->key_data;
  }

  static const decltype(::ui::mojom::Event::gesture_data)& gesture_data(
      const ::ui::mojom::EventPtr& input) {
    return input->gesture_data;
  }

  static const decltype(::ui::mojom::Event::scroll_data)& scroll_data(
      const ::ui::mojom::EventPtr& input) {
    return input->scroll_data;
  }

  static const decltype(::ui::mojom::Event::touch_data)& touch_data(
      const ::ui::mojom::EventPtr& input) {
    return input->touch_data;
  }

  static const decltype(::ui::mojom::Event::mouse_data)& mouse_data(
      const ::ui::mojom::EventPtr& input) {
    return input->mouse_data;
  }

  static const decltype(::ui::mojom::Event::properties)& properties(
      const ::ui::mojom::EventPtr& input) {
    return input->properties;
  }

  static bool Read(::ui::mojom::Event::DataView input, ::ui::mojom::EventPtr* output);
};

}  // namespace mojo

#endif  // UI_EVENTS_MOJO_EVENT_MOJOM_H_