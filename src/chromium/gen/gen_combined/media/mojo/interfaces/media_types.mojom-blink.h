// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-blink-forward.h"
#include "gpu/ipc/common/mailbox_holder.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "mojo/public/mojom/base/values.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "ui/gfx/mojo/color_space.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace media {
namespace mojom {
namespace blink {






class BLINK_PLATFORM_EXPORT VideoTransformation {
 public:
  using DataView = VideoTransformationDataView;
  using Data_ = internal::VideoTransformation_Data;

  template <typename... Args>
  static VideoTransformationPtr New(Args&&... args) {
    return VideoTransformationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoTransformationPtr From(const U& u) {
    return mojo::TypeConverter<VideoTransformationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoTransformation>::Convert(*this);
  }


  VideoTransformation();

  VideoTransformation(
      VideoRotation rotation,
      bool mirrored);

  ~VideoTransformation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoTransformationPtr>
  VideoTransformationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoTransformation>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoTransformation::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoTransformation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoTransformation_UnserializedMessageContext<
            UserType, VideoTransformation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoTransformation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VideoTransformation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoTransformation_UnserializedMessageContext<
            UserType, VideoTransformation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoTransformation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VideoRotation rotation;
  
  bool mirrored;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT EncryptionPattern {
 public:
  using DataView = EncryptionPatternDataView;
  using Data_ = internal::EncryptionPattern_Data;

  template <typename... Args>
  static EncryptionPatternPtr New(Args&&... args) {
    return EncryptionPatternPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EncryptionPatternPtr From(const U& u) {
    return mojo::TypeConverter<EncryptionPatternPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EncryptionPattern>::Convert(*this);
  }


  EncryptionPattern();

  EncryptionPattern(
      uint32_t crypt_byte_block,
      uint32_t skip_byte_block);

  ~EncryptionPattern();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EncryptionPatternPtr>
  EncryptionPatternPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EncryptionPattern>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EncryptionPattern::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EncryptionPattern::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EncryptionPattern_UnserializedMessageContext<
            UserType, EncryptionPattern::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EncryptionPattern::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return EncryptionPattern::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EncryptionPattern_UnserializedMessageContext<
            UserType, EncryptionPattern::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EncryptionPattern::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t crypt_byte_block;
  
  uint32_t skip_byte_block;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class BLINK_PLATFORM_EXPORT VideoColorSpace {
 public:
  using DataView = VideoColorSpaceDataView;
  using Data_ = internal::VideoColorSpace_Data;
  using PrimaryID = VideoColorSpace_PrimaryID;
  using TransferID = VideoColorSpace_TransferID;
  using MatrixID = VideoColorSpace_MatrixID;
  using RangeID = VideoColorSpace_RangeID;

  template <typename... Args>
  static VideoColorSpacePtr New(Args&&... args) {
    return VideoColorSpacePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoColorSpacePtr From(const U& u) {
    return mojo::TypeConverter<VideoColorSpacePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoColorSpace>::Convert(*this);
  }


  VideoColorSpace();

  VideoColorSpace(
      VideoColorSpace::PrimaryID primaries,
      VideoColorSpace::TransferID transfer,
      VideoColorSpace::MatrixID matrix,
      VideoColorSpace::RangeID range);

  ~VideoColorSpace();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoColorSpacePtr>
  VideoColorSpacePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoColorSpace>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoColorSpace::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoColorSpace::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoColorSpace_UnserializedMessageContext<
            UserType, VideoColorSpace::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoColorSpace::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VideoColorSpace::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoColorSpace_UnserializedMessageContext<
            UserType, VideoColorSpace::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoColorSpace::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VideoColorSpace::PrimaryID primaries;
  
  VideoColorSpace::TransferID transfer;
  
  VideoColorSpace::MatrixID matrix;
  
  VideoColorSpace::RangeID range;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};














class BLINK_PLATFORM_EXPORT EosVideoFrameData {
 public:
  using DataView = EosVideoFrameDataDataView;
  using Data_ = internal::EosVideoFrameData_Data;

  template <typename... Args>
  static EosVideoFrameDataPtr New(Args&&... args) {
    return EosVideoFrameDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EosVideoFrameDataPtr From(const U& u) {
    return mojo::TypeConverter<EosVideoFrameDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EosVideoFrameData>::Convert(*this);
  }


  EosVideoFrameData();

  ~EosVideoFrameData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EosVideoFrameDataPtr>
  EosVideoFrameDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EosVideoFrameData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EosVideoFrameData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EosVideoFrameData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EosVideoFrameData_UnserializedMessageContext<
            UserType, EosVideoFrameData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EosVideoFrameData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return EosVideoFrameData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EosVideoFrameData_UnserializedMessageContext<
            UserType, EosVideoFrameData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EosVideoFrameData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }


 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class BLINK_PLATFORM_EXPORT PredictionTargets {
 public:
  using DataView = PredictionTargetsDataView;
  using Data_ = internal::PredictionTargets_Data;

  template <typename... Args>
  static PredictionTargetsPtr New(Args&&... args) {
    return PredictionTargetsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PredictionTargetsPtr From(const U& u) {
    return mojo::TypeConverter<PredictionTargetsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PredictionTargets>::Convert(*this);
  }


  PredictionTargets();

  PredictionTargets(
      uint32_t frames_decoded,
      uint32_t frames_dropped,
      uint32_t frames_power_efficient);

  ~PredictionTargets();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PredictionTargetsPtr>
  PredictionTargetsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PredictionTargets>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PredictionTargets::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PredictionTargets::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PredictionTargets_UnserializedMessageContext<
            UserType, PredictionTargets::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PredictionTargets::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PredictionTargets::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PredictionTargets_UnserializedMessageContext<
            UserType, PredictionTargets::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PredictionTargets::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t frames_decoded;
  
  uint32_t frames_dropped;
  
  uint32_t frames_power_efficient;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT VideoFrameData {
 public:
  using DataView = VideoFrameDataDataView;
  using Data_ = internal::VideoFrameData_Data;
  using Tag = Data_::VideoFrameData_Tag;

  static VideoFrameDataPtr New() {
    return VideoFrameDataPtr(base::in_place);
  }
  // Construct an instance holding |eos_data|.
  static VideoFrameDataPtr
  NewEosData(
      EosVideoFrameDataPtr eos_data) {
    auto result = VideoFrameDataPtr(base::in_place);
    result->set_eos_data(std::move(eos_data));
    return result;
  }
  // Construct an instance holding |shared_buffer_data|.
  static VideoFrameDataPtr
  NewSharedBufferData(
      SharedBufferVideoFrameDataPtr shared_buffer_data) {
    auto result = VideoFrameDataPtr(base::in_place);
    result->set_shared_buffer_data(std::move(shared_buffer_data));
    return result;
  }
  // Construct an instance holding |mailbox_data|.
  static VideoFrameDataPtr
  NewMailboxData(
      MailboxVideoFrameDataPtr mailbox_data) {
    auto result = VideoFrameDataPtr(base::in_place);
    result->set_mailbox_data(std::move(mailbox_data));
    return result;
  }

  template <typename U>
  static VideoFrameDataPtr From(const U& u) {
    return mojo::TypeConverter<VideoFrameDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoFrameData>::Convert(*this);
  }

  VideoFrameData();
  ~VideoFrameData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = VideoFrameDataPtr>
  VideoFrameDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoFrameData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_eos_data() const { return tag_ == Tag::EOS_DATA; }

  
  EosVideoFrameDataPtr& get_eos_data() const {
    DCHECK(tag_ == Tag::EOS_DATA);
    return *(data_.eos_data);
  }

  
  void set_eos_data(
      EosVideoFrameDataPtr eos_data);
  
  bool is_shared_buffer_data() const { return tag_ == Tag::SHARED_BUFFER_DATA; }

  
  SharedBufferVideoFrameDataPtr& get_shared_buffer_data() const {
    DCHECK(tag_ == Tag::SHARED_BUFFER_DATA);
    return *(data_.shared_buffer_data);
  }

  
  void set_shared_buffer_data(
      SharedBufferVideoFrameDataPtr shared_buffer_data);
  
  bool is_mailbox_data() const { return tag_ == Tag::MAILBOX_DATA; }

  
  MailboxVideoFrameDataPtr& get_mailbox_data() const {
    DCHECK(tag_ == Tag::MAILBOX_DATA);
    return *(data_.mailbox_data);
  }

  
  void set_mailbox_data(
      MailboxVideoFrameDataPtr mailbox_data);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoFrameData::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<VideoFrameData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    EosVideoFrameDataPtr* eos_data;
    SharedBufferVideoFrameDataPtr* shared_buffer_data;
    MailboxVideoFrameDataPtr* mailbox_data;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};








class BLINK_PLATFORM_EXPORT EncryptionScheme {
 public:
  using DataView = EncryptionSchemeDataView;
  using Data_ = internal::EncryptionScheme_Data;
  using CipherMode = EncryptionScheme_CipherMode;

  template <typename... Args>
  static EncryptionSchemePtr New(Args&&... args) {
    return EncryptionSchemePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EncryptionSchemePtr From(const U& u) {
    return mojo::TypeConverter<EncryptionSchemePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EncryptionScheme>::Convert(*this);
  }


  EncryptionScheme();

  EncryptionScheme(
      EncryptionScheme::CipherMode mode,
      EncryptionPatternPtr pattern);

  ~EncryptionScheme();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EncryptionSchemePtr>
  EncryptionSchemePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EncryptionScheme>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EncryptionScheme::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EncryptionScheme::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EncryptionScheme_UnserializedMessageContext<
            UserType, EncryptionScheme::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EncryptionScheme::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return EncryptionScheme::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EncryptionScheme_UnserializedMessageContext<
            UserType, EncryptionScheme::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EncryptionScheme::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  EncryptionScheme::CipherMode mode;
  
  EncryptionPatternPtr pattern;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(EncryptionScheme);
};






class BLINK_PLATFORM_EXPORT MasteringMetadata {
 public:
  using DataView = MasteringMetadataDataView;
  using Data_ = internal::MasteringMetadata_Data;

  template <typename... Args>
  static MasteringMetadataPtr New(Args&&... args) {
    return MasteringMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MasteringMetadataPtr From(const U& u) {
    return mojo::TypeConverter<MasteringMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MasteringMetadata>::Convert(*this);
  }


  MasteringMetadata();

  MasteringMetadata(
      const ::blink::WebFloatPoint& primary_r,
      const ::blink::WebFloatPoint& primary_g,
      const ::blink::WebFloatPoint& primary_b,
      const ::blink::WebFloatPoint& white_point,
      float luminance_max,
      float luminance_min);

  ~MasteringMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MasteringMetadataPtr>
  MasteringMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MasteringMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MasteringMetadata::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MasteringMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MasteringMetadata_UnserializedMessageContext<
            UserType, MasteringMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MasteringMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MasteringMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MasteringMetadata_UnserializedMessageContext<
            UserType, MasteringMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MasteringMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::WebFloatPoint primary_r;
  
  ::blink::WebFloatPoint primary_g;
  
  ::blink::WebFloatPoint primary_b;
  
  ::blink::WebFloatPoint white_point;
  
  float luminance_max;
  
  float luminance_min;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT HDRMetadata {
 public:
  using DataView = HDRMetadataDataView;
  using Data_ = internal::HDRMetadata_Data;

  template <typename... Args>
  static HDRMetadataPtr New(Args&&... args) {
    return HDRMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HDRMetadataPtr From(const U& u) {
    return mojo::TypeConverter<HDRMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HDRMetadata>::Convert(*this);
  }


  HDRMetadata();

  HDRMetadata(
      MasteringMetadataPtr mastering_metadata,
      uint32_t max_content_light_level,
      uint32_t max_frame_average_light_level);

  ~HDRMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HDRMetadataPtr>
  HDRMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HDRMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HDRMetadata::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HDRMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HDRMetadata_UnserializedMessageContext<
            UserType, HDRMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HDRMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HDRMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HDRMetadata_UnserializedMessageContext<
            UserType, HDRMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HDRMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  MasteringMetadataPtr mastering_metadata;
  
  uint32_t max_content_light_level;
  
  uint32_t max_frame_average_light_level;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HDRMetadata);
};





class BLINK_PLATFORM_EXPORT AudioDecoderConfig {
 public:
  using DataView = AudioDecoderConfigDataView;
  using Data_ = internal::AudioDecoderConfig_Data;

  template <typename... Args>
  static AudioDecoderConfigPtr New(Args&&... args) {
    return AudioDecoderConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AudioDecoderConfigPtr From(const U& u) {
    return mojo::TypeConverter<AudioDecoderConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AudioDecoderConfig>::Convert(*this);
  }


  AudioDecoderConfig();

  AudioDecoderConfig(
      AudioCodec codec,
      SampleFormat sample_format,
      ChannelLayout channel_layout,
      int32_t samples_per_second,
      const WTF::Vector<uint8_t>& extra_data,
      base::TimeDelta seek_preroll,
      int32_t codec_delay,
      EncryptionSchemePtr encryption_scheme);

  ~AudioDecoderConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AudioDecoderConfigPtr>
  AudioDecoderConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AudioDecoderConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AudioDecoderConfig::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AudioDecoderConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AudioDecoderConfig_UnserializedMessageContext<
            UserType, AudioDecoderConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AudioDecoderConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AudioDecoderConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AudioDecoderConfig_UnserializedMessageContext<
            UserType, AudioDecoderConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AudioDecoderConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  AudioCodec codec;
  
  SampleFormat sample_format;
  
  ChannelLayout channel_layout;
  
  int32_t samples_per_second;
  
  WTF::Vector<uint8_t> extra_data;
  
  base::TimeDelta seek_preroll;
  
  int32_t codec_delay;
  
  EncryptionSchemePtr encryption_scheme;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AudioDecoderConfig);
};





class BLINK_PLATFORM_EXPORT VideoDecoderConfig {
 public:
  using DataView = VideoDecoderConfigDataView;
  using Data_ = internal::VideoDecoderConfig_Data;

  template <typename... Args>
  static VideoDecoderConfigPtr New(Args&&... args) {
    return VideoDecoderConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoDecoderConfigPtr From(const U& u) {
    return mojo::TypeConverter<VideoDecoderConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoDecoderConfig>::Convert(*this);
  }


  VideoDecoderConfig();

  VideoDecoderConfig(
      VideoCodec codec,
      VideoCodecProfile profile,
      VideoPixelFormat format,
      VideoTransformationPtr transformation,
      const ::blink::WebSize& coded_size,
      const ::blink::WebRect& visible_rect,
      const ::blink::WebSize& natural_size,
      const WTF::Vector<uint8_t>& extra_data,
      EncryptionSchemePtr encryption_scheme,
      VideoColorSpacePtr color_space_info,
      HDRMetadataPtr hdr_metadata);

  ~VideoDecoderConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoDecoderConfigPtr>
  VideoDecoderConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoDecoderConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoDecoderConfig::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoDecoderConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoDecoderConfig_UnserializedMessageContext<
            UserType, VideoDecoderConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoDecoderConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VideoDecoderConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoDecoderConfig_UnserializedMessageContext<
            UserType, VideoDecoderConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoDecoderConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VideoCodec codec;
  
  VideoCodecProfile profile;
  
  VideoPixelFormat format;
  
  VideoTransformationPtr transformation;
  
  ::blink::WebSize coded_size;
  
  ::blink::WebRect visible_rect;
  
  ::blink::WebSize natural_size;
  
  WTF::Vector<uint8_t> extra_data;
  
  EncryptionSchemePtr encryption_scheme;
  
  VideoColorSpacePtr color_space_info;
  
  HDRMetadataPtr hdr_metadata;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VideoDecoderConfig);
};






class BLINK_PLATFORM_EXPORT DecryptConfig {
 public:
  using DataView = DecryptConfigDataView;
  using Data_ = internal::DecryptConfig_Data;

  template <typename... Args>
  static DecryptConfigPtr New(Args&&... args) {
    return DecryptConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DecryptConfigPtr From(const U& u) {
    return mojo::TypeConverter<DecryptConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DecryptConfig>::Convert(*this);
  }


  DecryptConfig();

  DecryptConfig(
      EncryptionMode encryption_mode,
      const WTF::String& key_id,
      const WTF::String& iv,
      WTF::Vector<SubsampleEntryPtr> subsamples,
      EncryptionPatternPtr encryption_pattern);

  ~DecryptConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DecryptConfigPtr>
  DecryptConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DecryptConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DecryptConfig::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DecryptConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DecryptConfig_UnserializedMessageContext<
            UserType, DecryptConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DecryptConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DecryptConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DecryptConfig_UnserializedMessageContext<
            UserType, DecryptConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DecryptConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  EncryptionMode encryption_mode;
  
  WTF::String key_id;
  
  WTF::String iv;
  
  WTF::Vector<SubsampleEntryPtr> subsamples;
  
  EncryptionPatternPtr encryption_pattern;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DecryptConfig);
};





class BLINK_PLATFORM_EXPORT DecoderBuffer {
 public:
  using DataView = DecoderBufferDataView;
  using Data_ = internal::DecoderBuffer_Data;

  template <typename... Args>
  static DecoderBufferPtr New(Args&&... args) {
    return DecoderBufferPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DecoderBufferPtr From(const U& u) {
    return mojo::TypeConverter<DecoderBufferPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DecoderBuffer>::Convert(*this);
  }


  DecoderBuffer();

  DecoderBuffer(
      base::TimeDelta timestamp,
      base::TimeDelta duration,
      bool is_end_of_stream,
      uint32_t data_size,
      bool is_key_frame,
      const WTF::Vector<uint8_t>& side_data,
      DecryptConfigPtr decrypt_config,
      base::TimeDelta front_discard,
      base::TimeDelta back_discard);

  ~DecoderBuffer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DecoderBufferPtr>
  DecoderBufferPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DecoderBuffer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DecoderBuffer::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DecoderBuffer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DecoderBuffer_UnserializedMessageContext<
            UserType, DecoderBuffer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DecoderBuffer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DecoderBuffer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DecoderBuffer_UnserializedMessageContext<
            UserType, DecoderBuffer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DecoderBuffer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::TimeDelta timestamp;
  
  base::TimeDelta duration;
  
  bool is_end_of_stream;
  
  uint32_t data_size;
  
  bool is_key_frame;
  
  WTF::Vector<uint8_t> side_data;
  
  DecryptConfigPtr decrypt_config;
  
  base::TimeDelta front_discard;
  
  base::TimeDelta back_discard;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DecoderBuffer);
};





class BLINK_PLATFORM_EXPORT AudioBuffer {
 public:
  using DataView = AudioBufferDataView;
  using Data_ = internal::AudioBuffer_Data;

  template <typename... Args>
  static AudioBufferPtr New(Args&&... args) {
    return AudioBufferPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AudioBufferPtr From(const U& u) {
    return mojo::TypeConverter<AudioBufferPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AudioBuffer>::Convert(*this);
  }


  AudioBuffer();

  AudioBuffer(
      SampleFormat sample_format,
      ChannelLayout channel_layout,
      int32_t channel_count,
      int32_t sample_rate,
      int32_t frame_count,
      bool end_of_stream,
      base::TimeDelta timestamp,
      const WTF::Vector<uint8_t>& data);

  ~AudioBuffer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AudioBufferPtr>
  AudioBufferPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AudioBuffer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AudioBuffer::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AudioBuffer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AudioBuffer_UnserializedMessageContext<
            UserType, AudioBuffer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AudioBuffer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AudioBuffer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AudioBuffer_UnserializedMessageContext<
            UserType, AudioBuffer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AudioBuffer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  SampleFormat sample_format;
  
  ChannelLayout channel_layout;
  
  int32_t channel_count;
  
  int32_t sample_rate;
  
  int32_t frame_count;
  
  bool end_of_stream;
  
  base::TimeDelta timestamp;
  
  WTF::Vector<uint8_t> data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT VideoFrame {
 public:
  using DataView = VideoFrameDataView;
  using Data_ = internal::VideoFrame_Data;

  template <typename... Args>
  static VideoFramePtr New(Args&&... args) {
    return VideoFramePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoFramePtr From(const U& u) {
    return mojo::TypeConverter<VideoFramePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoFrame>::Convert(*this);
  }


  VideoFrame();

  VideoFrame(
      VideoPixelFormat format,
      const ::blink::WebSize& coded_size,
      const ::blink::WebRect& visible_rect,
      const ::blink::WebSize& natural_size,
      base::TimeDelta timestamp,
      VideoFrameDataPtr data,
      ::mojo_base::mojom::blink::DictionaryValuePtr metadata,
      ::gfx::mojom::blink::ColorSpacePtr color_space);

  ~VideoFrame();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoFramePtr>
  VideoFramePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoFrame>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoFrame::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoFrame::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoFrame_UnserializedMessageContext<
            UserType, VideoFrame::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoFrame::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VideoFrame::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoFrame_UnserializedMessageContext<
            UserType, VideoFrame::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoFrame::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VideoPixelFormat format;
  
  ::blink::WebSize coded_size;
  
  ::blink::WebRect visible_rect;
  
  ::blink::WebSize natural_size;
  
  base::TimeDelta timestamp;
  
  VideoFrameDataPtr data;
  
  ::mojo_base::mojom::blink::DictionaryValuePtr metadata;
  
  ::gfx::mojom::blink::ColorSpacePtr color_space;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VideoFrame);
};






class BLINK_PLATFORM_EXPORT SharedBufferVideoFrameData {
 public:
  using DataView = SharedBufferVideoFrameDataDataView;
  using Data_ = internal::SharedBufferVideoFrameData_Data;

  template <typename... Args>
  static SharedBufferVideoFrameDataPtr New(Args&&... args) {
    return SharedBufferVideoFrameDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SharedBufferVideoFrameDataPtr From(const U& u) {
    return mojo::TypeConverter<SharedBufferVideoFrameDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SharedBufferVideoFrameData>::Convert(*this);
  }


  SharedBufferVideoFrameData();

  SharedBufferVideoFrameData(
      mojo::ScopedSharedBufferHandle frame_data,
      uint64_t frame_data_size,
      int32_t y_stride,
      int32_t u_stride,
      int32_t v_stride,
      uint64_t y_offset,
      uint64_t u_offset,
      uint64_t v_offset);

  ~SharedBufferVideoFrameData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SharedBufferVideoFrameDataPtr>
  SharedBufferVideoFrameDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SharedBufferVideoFrameData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SharedBufferVideoFrameData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SharedBufferVideoFrameData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SharedBufferVideoFrameData_UnserializedMessageContext<
            UserType, SharedBufferVideoFrameData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SharedBufferVideoFrameData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SharedBufferVideoFrameData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SharedBufferVideoFrameData_UnserializedMessageContext<
            UserType, SharedBufferVideoFrameData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SharedBufferVideoFrameData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedSharedBufferHandle frame_data;
  
  uint64_t frame_data_size;
  
  int32_t y_stride;
  
  int32_t u_stride;
  
  int32_t v_stride;
  
  uint64_t y_offset;
  
  uint64_t u_offset;
  
  uint64_t v_offset;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SharedBufferVideoFrameData);
};





class BLINK_PLATFORM_EXPORT MailboxVideoFrameData {
 public:
  using DataView = MailboxVideoFrameDataDataView;
  using Data_ = internal::MailboxVideoFrameData_Data;

  template <typename... Args>
  static MailboxVideoFrameDataPtr New(Args&&... args) {
    return MailboxVideoFrameDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MailboxVideoFrameDataPtr From(const U& u) {
    return mojo::TypeConverter<MailboxVideoFrameDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MailboxVideoFrameData>::Convert(*this);
  }


  MailboxVideoFrameData();

  explicit MailboxVideoFrameData(
      const WTF::Vector<::gpu::MailboxHolder>& mailbox_holder);

  ~MailboxVideoFrameData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MailboxVideoFrameDataPtr>
  MailboxVideoFrameDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MailboxVideoFrameData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MailboxVideoFrameData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MailboxVideoFrameData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MailboxVideoFrameData_UnserializedMessageContext<
            UserType, MailboxVideoFrameData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MailboxVideoFrameData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MailboxVideoFrameData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MailboxVideoFrameData_UnserializedMessageContext<
            UserType, MailboxVideoFrameData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MailboxVideoFrameData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<::gpu::MailboxHolder> mailbox_holder;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT PipelineStatistics {
 public:
  using DataView = PipelineStatisticsDataView;
  using Data_ = internal::PipelineStatistics_Data;

  template <typename... Args>
  static PipelineStatisticsPtr New(Args&&... args) {
    return PipelineStatisticsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PipelineStatisticsPtr From(const U& u) {
    return mojo::TypeConverter<PipelineStatisticsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PipelineStatistics>::Convert(*this);
  }


  PipelineStatistics();

  PipelineStatistics(
      uint64_t audio_bytes_decoded,
      uint64_t video_bytes_decoded,
      uint32_t video_frames_decoded,
      uint32_t video_frames_dropped,
      int64_t audio_memory_usage,
      int64_t video_memory_usage);

  ~PipelineStatistics();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PipelineStatisticsPtr>
  PipelineStatisticsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PipelineStatistics>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PipelineStatistics::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PipelineStatistics::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PipelineStatistics_UnserializedMessageContext<
            UserType, PipelineStatistics::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PipelineStatistics::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PipelineStatistics::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PipelineStatistics_UnserializedMessageContext<
            UserType, PipelineStatistics::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PipelineStatistics::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t audio_bytes_decoded;
  
  uint64_t video_bytes_decoded;
  
  uint32_t video_frames_decoded;
  
  uint32_t video_frames_dropped;
  
  int64_t audio_memory_usage;
  
  int64_t video_memory_usage;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT PredictionFeatures {
 public:
  using DataView = PredictionFeaturesDataView;
  using Data_ = internal::PredictionFeatures_Data;

  template <typename... Args>
  static PredictionFeaturesPtr New(Args&&... args) {
    return PredictionFeaturesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PredictionFeaturesPtr From(const U& u) {
    return mojo::TypeConverter<PredictionFeaturesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PredictionFeatures>::Convert(*this);
  }


  PredictionFeatures();

  PredictionFeatures(
      VideoCodecProfile profile,
      const ::blink::WebSize& video_size,
      int32_t frames_per_sec,
      const WTF::String& key_system,
      bool use_hw_secure_codecs);

  ~PredictionFeatures();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PredictionFeaturesPtr>
  PredictionFeaturesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PredictionFeatures>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PredictionFeatures::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PredictionFeatures::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PredictionFeatures_UnserializedMessageContext<
            UserType, PredictionFeatures::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PredictionFeatures::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PredictionFeatures::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PredictionFeatures_UnserializedMessageContext<
            UserType, PredictionFeatures::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PredictionFeatures::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VideoCodecProfile profile;
  
  ::blink::WebSize video_size;
  
  int32_t frames_per_sec;
  
  WTF::String key_system;
  
  bool use_hw_secure_codecs;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename UnionPtrType>
VideoFrameDataPtr VideoFrameData::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::EOS_DATA:
      rv->set_eos_data(mojo::Clone(*data_.eos_data));
      break;
    case Tag::SHARED_BUFFER_DATA:
      rv->set_shared_buffer_data(mojo::Clone(*data_.shared_buffer_data));
      break;
    case Tag::MAILBOX_DATA:
      rv->set_mailbox_data(mojo::Clone(*data_.mailbox_data));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoFrameData>::value>::type*>
bool VideoFrameData::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::EOS_DATA:
      return mojo::Equals(*(data_.eos_data), *(other.data_.eos_data));
    case Tag::SHARED_BUFFER_DATA:
      return mojo::Equals(*(data_.shared_buffer_data), *(other.data_.shared_buffer_data));
    case Tag::MAILBOX_DATA:
      return mojo::Equals(*(data_.mailbox_data), *(other.data_.mailbox_data));
  }

  return false;
}
template <typename StructPtrType>
VideoTransformationPtr VideoTransformation::Clone() const {
  return New(
      mojo::Clone(rotation),
      mojo::Clone(mirrored)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoTransformation>::value>::type*>
bool VideoTransformation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->rotation, other_struct.rotation))
    return false;
  if (!mojo::Equals(this->mirrored, other_struct.mirrored))
    return false;
  return true;
}
template <typename StructPtrType>
EncryptionPatternPtr EncryptionPattern::Clone() const {
  return New(
      mojo::Clone(crypt_byte_block),
      mojo::Clone(skip_byte_block)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EncryptionPattern>::value>::type*>
bool EncryptionPattern::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->crypt_byte_block, other_struct.crypt_byte_block))
    return false;
  if (!mojo::Equals(this->skip_byte_block, other_struct.skip_byte_block))
    return false;
  return true;
}
template <typename StructPtrType>
EncryptionSchemePtr EncryptionScheme::Clone() const {
  return New(
      mojo::Clone(mode),
      mojo::Clone(pattern)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EncryptionScheme>::value>::type*>
bool EncryptionScheme::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->pattern, other_struct.pattern))
    return false;
  return true;
}
template <typename StructPtrType>
VideoColorSpacePtr VideoColorSpace::Clone() const {
  return New(
      mojo::Clone(primaries),
      mojo::Clone(transfer),
      mojo::Clone(matrix),
      mojo::Clone(range)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoColorSpace>::value>::type*>
bool VideoColorSpace::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->primaries, other_struct.primaries))
    return false;
  if (!mojo::Equals(this->transfer, other_struct.transfer))
    return false;
  if (!mojo::Equals(this->matrix, other_struct.matrix))
    return false;
  if (!mojo::Equals(this->range, other_struct.range))
    return false;
  return true;
}
template <typename StructPtrType>
MasteringMetadataPtr MasteringMetadata::Clone() const {
  return New(
      mojo::Clone(primary_r),
      mojo::Clone(primary_g),
      mojo::Clone(primary_b),
      mojo::Clone(white_point),
      mojo::Clone(luminance_max),
      mojo::Clone(luminance_min)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MasteringMetadata>::value>::type*>
bool MasteringMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->primary_r, other_struct.primary_r))
    return false;
  if (!mojo::Equals(this->primary_g, other_struct.primary_g))
    return false;
  if (!mojo::Equals(this->primary_b, other_struct.primary_b))
    return false;
  if (!mojo::Equals(this->white_point, other_struct.white_point))
    return false;
  if (!mojo::Equals(this->luminance_max, other_struct.luminance_max))
    return false;
  if (!mojo::Equals(this->luminance_min, other_struct.luminance_min))
    return false;
  return true;
}
template <typename StructPtrType>
HDRMetadataPtr HDRMetadata::Clone() const {
  return New(
      mojo::Clone(mastering_metadata),
      mojo::Clone(max_content_light_level),
      mojo::Clone(max_frame_average_light_level)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HDRMetadata>::value>::type*>
bool HDRMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mastering_metadata, other_struct.mastering_metadata))
    return false;
  if (!mojo::Equals(this->max_content_light_level, other_struct.max_content_light_level))
    return false;
  if (!mojo::Equals(this->max_frame_average_light_level, other_struct.max_frame_average_light_level))
    return false;
  return true;
}
template <typename StructPtrType>
AudioDecoderConfigPtr AudioDecoderConfig::Clone() const {
  return New(
      mojo::Clone(codec),
      mojo::Clone(sample_format),
      mojo::Clone(channel_layout),
      mojo::Clone(samples_per_second),
      mojo::Clone(extra_data),
      mojo::Clone(seek_preroll),
      mojo::Clone(codec_delay),
      mojo::Clone(encryption_scheme)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AudioDecoderConfig>::value>::type*>
bool AudioDecoderConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->codec, other_struct.codec))
    return false;
  if (!mojo::Equals(this->sample_format, other_struct.sample_format))
    return false;
  if (!mojo::Equals(this->channel_layout, other_struct.channel_layout))
    return false;
  if (!mojo::Equals(this->samples_per_second, other_struct.samples_per_second))
    return false;
  if (!mojo::Equals(this->extra_data, other_struct.extra_data))
    return false;
  if (!mojo::Equals(this->seek_preroll, other_struct.seek_preroll))
    return false;
  if (!mojo::Equals(this->codec_delay, other_struct.codec_delay))
    return false;
  if (!mojo::Equals(this->encryption_scheme, other_struct.encryption_scheme))
    return false;
  return true;
}
template <typename StructPtrType>
VideoDecoderConfigPtr VideoDecoderConfig::Clone() const {
  return New(
      mojo::Clone(codec),
      mojo::Clone(profile),
      mojo::Clone(format),
      mojo::Clone(transformation),
      mojo::Clone(coded_size),
      mojo::Clone(visible_rect),
      mojo::Clone(natural_size),
      mojo::Clone(extra_data),
      mojo::Clone(encryption_scheme),
      mojo::Clone(color_space_info),
      mojo::Clone(hdr_metadata)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoDecoderConfig>::value>::type*>
bool VideoDecoderConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->codec, other_struct.codec))
    return false;
  if (!mojo::Equals(this->profile, other_struct.profile))
    return false;
  if (!mojo::Equals(this->format, other_struct.format))
    return false;
  if (!mojo::Equals(this->transformation, other_struct.transformation))
    return false;
  if (!mojo::Equals(this->coded_size, other_struct.coded_size))
    return false;
  if (!mojo::Equals(this->visible_rect, other_struct.visible_rect))
    return false;
  if (!mojo::Equals(this->natural_size, other_struct.natural_size))
    return false;
  if (!mojo::Equals(this->extra_data, other_struct.extra_data))
    return false;
  if (!mojo::Equals(this->encryption_scheme, other_struct.encryption_scheme))
    return false;
  if (!mojo::Equals(this->color_space_info, other_struct.color_space_info))
    return false;
  if (!mojo::Equals(this->hdr_metadata, other_struct.hdr_metadata))
    return false;
  return true;
}
template <typename StructPtrType>
DecryptConfigPtr DecryptConfig::Clone() const {
  return New(
      mojo::Clone(encryption_mode),
      mojo::Clone(key_id),
      mojo::Clone(iv),
      mojo::Clone(subsamples),
      mojo::Clone(encryption_pattern)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DecryptConfig>::value>::type*>
bool DecryptConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->encryption_mode, other_struct.encryption_mode))
    return false;
  if (!mojo::Equals(this->key_id, other_struct.key_id))
    return false;
  if (!mojo::Equals(this->iv, other_struct.iv))
    return false;
  if (!mojo::Equals(this->subsamples, other_struct.subsamples))
    return false;
  if (!mojo::Equals(this->encryption_pattern, other_struct.encryption_pattern))
    return false;
  return true;
}
template <typename StructPtrType>
DecoderBufferPtr DecoderBuffer::Clone() const {
  return New(
      mojo::Clone(timestamp),
      mojo::Clone(duration),
      mojo::Clone(is_end_of_stream),
      mojo::Clone(data_size),
      mojo::Clone(is_key_frame),
      mojo::Clone(side_data),
      mojo::Clone(decrypt_config),
      mojo::Clone(front_discard),
      mojo::Clone(back_discard)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DecoderBuffer>::value>::type*>
bool DecoderBuffer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  if (!mojo::Equals(this->is_end_of_stream, other_struct.is_end_of_stream))
    return false;
  if (!mojo::Equals(this->data_size, other_struct.data_size))
    return false;
  if (!mojo::Equals(this->is_key_frame, other_struct.is_key_frame))
    return false;
  if (!mojo::Equals(this->side_data, other_struct.side_data))
    return false;
  if (!mojo::Equals(this->decrypt_config, other_struct.decrypt_config))
    return false;
  if (!mojo::Equals(this->front_discard, other_struct.front_discard))
    return false;
  if (!mojo::Equals(this->back_discard, other_struct.back_discard))
    return false;
  return true;
}
template <typename StructPtrType>
AudioBufferPtr AudioBuffer::Clone() const {
  return New(
      mojo::Clone(sample_format),
      mojo::Clone(channel_layout),
      mojo::Clone(channel_count),
      mojo::Clone(sample_rate),
      mojo::Clone(frame_count),
      mojo::Clone(end_of_stream),
      mojo::Clone(timestamp),
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AudioBuffer>::value>::type*>
bool AudioBuffer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->sample_format, other_struct.sample_format))
    return false;
  if (!mojo::Equals(this->channel_layout, other_struct.channel_layout))
    return false;
  if (!mojo::Equals(this->channel_count, other_struct.channel_count))
    return false;
  if (!mojo::Equals(this->sample_rate, other_struct.sample_rate))
    return false;
  if (!mojo::Equals(this->frame_count, other_struct.frame_count))
    return false;
  if (!mojo::Equals(this->end_of_stream, other_struct.end_of_stream))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
VideoFramePtr VideoFrame::Clone() const {
  return New(
      mojo::Clone(format),
      mojo::Clone(coded_size),
      mojo::Clone(visible_rect),
      mojo::Clone(natural_size),
      mojo::Clone(timestamp),
      mojo::Clone(data),
      mojo::Clone(metadata),
      mojo::Clone(color_space)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoFrame>::value>::type*>
bool VideoFrame::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->format, other_struct.format))
    return false;
  if (!mojo::Equals(this->coded_size, other_struct.coded_size))
    return false;
  if (!mojo::Equals(this->visible_rect, other_struct.visible_rect))
    return false;
  if (!mojo::Equals(this->natural_size, other_struct.natural_size))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  if (!mojo::Equals(this->metadata, other_struct.metadata))
    return false;
  if (!mojo::Equals(this->color_space, other_struct.color_space))
    return false;
  return true;
}
template <typename StructPtrType>
EosVideoFrameDataPtr EosVideoFrameData::Clone() const {
  return New(
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EosVideoFrameData>::value>::type*>
bool EosVideoFrameData::Equals(const T& other_struct) const {
  return true;
}
template <typename StructPtrType>
SharedBufferVideoFrameDataPtr SharedBufferVideoFrameData::Clone() const {
  return New(
      mojo::Clone(frame_data),
      mojo::Clone(frame_data_size),
      mojo::Clone(y_stride),
      mojo::Clone(u_stride),
      mojo::Clone(v_stride),
      mojo::Clone(y_offset),
      mojo::Clone(u_offset),
      mojo::Clone(v_offset)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SharedBufferVideoFrameData>::value>::type*>
bool SharedBufferVideoFrameData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frame_data, other_struct.frame_data))
    return false;
  if (!mojo::Equals(this->frame_data_size, other_struct.frame_data_size))
    return false;
  if (!mojo::Equals(this->y_stride, other_struct.y_stride))
    return false;
  if (!mojo::Equals(this->u_stride, other_struct.u_stride))
    return false;
  if (!mojo::Equals(this->v_stride, other_struct.v_stride))
    return false;
  if (!mojo::Equals(this->y_offset, other_struct.y_offset))
    return false;
  if (!mojo::Equals(this->u_offset, other_struct.u_offset))
    return false;
  if (!mojo::Equals(this->v_offset, other_struct.v_offset))
    return false;
  return true;
}
template <typename StructPtrType>
MailboxVideoFrameDataPtr MailboxVideoFrameData::Clone() const {
  return New(
      mojo::Clone(mailbox_holder)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MailboxVideoFrameData>::value>::type*>
bool MailboxVideoFrameData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mailbox_holder, other_struct.mailbox_holder))
    return false;
  return true;
}
template <typename StructPtrType>
PipelineStatisticsPtr PipelineStatistics::Clone() const {
  return New(
      mojo::Clone(audio_bytes_decoded),
      mojo::Clone(video_bytes_decoded),
      mojo::Clone(video_frames_decoded),
      mojo::Clone(video_frames_dropped),
      mojo::Clone(audio_memory_usage),
      mojo::Clone(video_memory_usage)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PipelineStatistics>::value>::type*>
bool PipelineStatistics::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->audio_bytes_decoded, other_struct.audio_bytes_decoded))
    return false;
  if (!mojo::Equals(this->video_bytes_decoded, other_struct.video_bytes_decoded))
    return false;
  if (!mojo::Equals(this->video_frames_decoded, other_struct.video_frames_decoded))
    return false;
  if (!mojo::Equals(this->video_frames_dropped, other_struct.video_frames_dropped))
    return false;
  if (!mojo::Equals(this->audio_memory_usage, other_struct.audio_memory_usage))
    return false;
  if (!mojo::Equals(this->video_memory_usage, other_struct.video_memory_usage))
    return false;
  return true;
}
template <typename StructPtrType>
PredictionFeaturesPtr PredictionFeatures::Clone() const {
  return New(
      mojo::Clone(profile),
      mojo::Clone(video_size),
      mojo::Clone(frames_per_sec),
      mojo::Clone(key_system),
      mojo::Clone(use_hw_secure_codecs)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PredictionFeatures>::value>::type*>
bool PredictionFeatures::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->profile, other_struct.profile))
    return false;
  if (!mojo::Equals(this->video_size, other_struct.video_size))
    return false;
  if (!mojo::Equals(this->frames_per_sec, other_struct.frames_per_sec))
    return false;
  if (!mojo::Equals(this->key_system, other_struct.key_system))
    return false;
  if (!mojo::Equals(this->use_hw_secure_codecs, other_struct.use_hw_secure_codecs))
    return false;
  return true;
}
template <typename StructPtrType>
PredictionTargetsPtr PredictionTargets::Clone() const {
  return New(
      mojo::Clone(frames_decoded),
      mojo::Clone(frames_dropped),
      mojo::Clone(frames_power_efficient)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PredictionTargets>::value>::type*>
bool PredictionTargets::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frames_decoded, other_struct.frames_decoded))
    return false;
  if (!mojo::Equals(this->frames_dropped, other_struct.frames_dropped))
    return false;
  if (!mojo::Equals(this->frames_power_efficient, other_struct.frames_power_efficient))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::VideoTransformation::DataView,
                                         ::media::mojom::blink::VideoTransformationPtr> {
  static bool IsNull(const ::media::mojom::blink::VideoTransformationPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::VideoTransformationPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::VideoTransformation::rotation) rotation(
      const ::media::mojom::blink::VideoTransformationPtr& input) {
    return input->rotation;
  }

  static decltype(::media::mojom::blink::VideoTransformation::mirrored) mirrored(
      const ::media::mojom::blink::VideoTransformationPtr& input) {
    return input->mirrored;
  }

  static bool Read(::media::mojom::blink::VideoTransformation::DataView input, ::media::mojom::blink::VideoTransformationPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::EncryptionPattern::DataView,
                                         ::media::mojom::blink::EncryptionPatternPtr> {
  static bool IsNull(const ::media::mojom::blink::EncryptionPatternPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::EncryptionPatternPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::EncryptionPattern::crypt_byte_block) crypt_byte_block(
      const ::media::mojom::blink::EncryptionPatternPtr& input) {
    return input->crypt_byte_block;
  }

  static decltype(::media::mojom::blink::EncryptionPattern::skip_byte_block) skip_byte_block(
      const ::media::mojom::blink::EncryptionPatternPtr& input) {
    return input->skip_byte_block;
  }

  static bool Read(::media::mojom::blink::EncryptionPattern::DataView input, ::media::mojom::blink::EncryptionPatternPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::EncryptionScheme::DataView,
                                         ::media::mojom::blink::EncryptionSchemePtr> {
  static bool IsNull(const ::media::mojom::blink::EncryptionSchemePtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::EncryptionSchemePtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::EncryptionScheme::mode) mode(
      const ::media::mojom::blink::EncryptionSchemePtr& input) {
    return input->mode;
  }

  static const decltype(::media::mojom::blink::EncryptionScheme::pattern)& pattern(
      const ::media::mojom::blink::EncryptionSchemePtr& input) {
    return input->pattern;
  }

  static bool Read(::media::mojom::blink::EncryptionScheme::DataView input, ::media::mojom::blink::EncryptionSchemePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::VideoColorSpace::DataView,
                                         ::media::mojom::blink::VideoColorSpacePtr> {
  static bool IsNull(const ::media::mojom::blink::VideoColorSpacePtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::VideoColorSpacePtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::VideoColorSpace::primaries) primaries(
      const ::media::mojom::blink::VideoColorSpacePtr& input) {
    return input->primaries;
  }

  static decltype(::media::mojom::blink::VideoColorSpace::transfer) transfer(
      const ::media::mojom::blink::VideoColorSpacePtr& input) {
    return input->transfer;
  }

  static decltype(::media::mojom::blink::VideoColorSpace::matrix) matrix(
      const ::media::mojom::blink::VideoColorSpacePtr& input) {
    return input->matrix;
  }

  static decltype(::media::mojom::blink::VideoColorSpace::range) range(
      const ::media::mojom::blink::VideoColorSpacePtr& input) {
    return input->range;
  }

  static bool Read(::media::mojom::blink::VideoColorSpace::DataView input, ::media::mojom::blink::VideoColorSpacePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::MasteringMetadata::DataView,
                                         ::media::mojom::blink::MasteringMetadataPtr> {
  static bool IsNull(const ::media::mojom::blink::MasteringMetadataPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::MasteringMetadataPtr* output) { output->reset(); }

  static const decltype(::media::mojom::blink::MasteringMetadata::primary_r)& primary_r(
      const ::media::mojom::blink::MasteringMetadataPtr& input) {
    return input->primary_r;
  }

  static const decltype(::media::mojom::blink::MasteringMetadata::primary_g)& primary_g(
      const ::media::mojom::blink::MasteringMetadataPtr& input) {
    return input->primary_g;
  }

  static const decltype(::media::mojom::blink::MasteringMetadata::primary_b)& primary_b(
      const ::media::mojom::blink::MasteringMetadataPtr& input) {
    return input->primary_b;
  }

  static const decltype(::media::mojom::blink::MasteringMetadata::white_point)& white_point(
      const ::media::mojom::blink::MasteringMetadataPtr& input) {
    return input->white_point;
  }

  static decltype(::media::mojom::blink::MasteringMetadata::luminance_max) luminance_max(
      const ::media::mojom::blink::MasteringMetadataPtr& input) {
    return input->luminance_max;
  }

  static decltype(::media::mojom::blink::MasteringMetadata::luminance_min) luminance_min(
      const ::media::mojom::blink::MasteringMetadataPtr& input) {
    return input->luminance_min;
  }

  static bool Read(::media::mojom::blink::MasteringMetadata::DataView input, ::media::mojom::blink::MasteringMetadataPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::HDRMetadata::DataView,
                                         ::media::mojom::blink::HDRMetadataPtr> {
  static bool IsNull(const ::media::mojom::blink::HDRMetadataPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::HDRMetadataPtr* output) { output->reset(); }

  static const decltype(::media::mojom::blink::HDRMetadata::mastering_metadata)& mastering_metadata(
      const ::media::mojom::blink::HDRMetadataPtr& input) {
    return input->mastering_metadata;
  }

  static decltype(::media::mojom::blink::HDRMetadata::max_content_light_level) max_content_light_level(
      const ::media::mojom::blink::HDRMetadataPtr& input) {
    return input->max_content_light_level;
  }

  static decltype(::media::mojom::blink::HDRMetadata::max_frame_average_light_level) max_frame_average_light_level(
      const ::media::mojom::blink::HDRMetadataPtr& input) {
    return input->max_frame_average_light_level;
  }

  static bool Read(::media::mojom::blink::HDRMetadata::DataView input, ::media::mojom::blink::HDRMetadataPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::AudioDecoderConfig::DataView,
                                         ::media::mojom::blink::AudioDecoderConfigPtr> {
  static bool IsNull(const ::media::mojom::blink::AudioDecoderConfigPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::AudioDecoderConfigPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::AudioDecoderConfig::codec) codec(
      const ::media::mojom::blink::AudioDecoderConfigPtr& input) {
    return input->codec;
  }

  static decltype(::media::mojom::blink::AudioDecoderConfig::sample_format) sample_format(
      const ::media::mojom::blink::AudioDecoderConfigPtr& input) {
    return input->sample_format;
  }

  static decltype(::media::mojom::blink::AudioDecoderConfig::channel_layout) channel_layout(
      const ::media::mojom::blink::AudioDecoderConfigPtr& input) {
    return input->channel_layout;
  }

  static decltype(::media::mojom::blink::AudioDecoderConfig::samples_per_second) samples_per_second(
      const ::media::mojom::blink::AudioDecoderConfigPtr& input) {
    return input->samples_per_second;
  }

  static const decltype(::media::mojom::blink::AudioDecoderConfig::extra_data)& extra_data(
      const ::media::mojom::blink::AudioDecoderConfigPtr& input) {
    return input->extra_data;
  }

  static const decltype(::media::mojom::blink::AudioDecoderConfig::seek_preroll)& seek_preroll(
      const ::media::mojom::blink::AudioDecoderConfigPtr& input) {
    return input->seek_preroll;
  }

  static decltype(::media::mojom::blink::AudioDecoderConfig::codec_delay) codec_delay(
      const ::media::mojom::blink::AudioDecoderConfigPtr& input) {
    return input->codec_delay;
  }

  static const decltype(::media::mojom::blink::AudioDecoderConfig::encryption_scheme)& encryption_scheme(
      const ::media::mojom::blink::AudioDecoderConfigPtr& input) {
    return input->encryption_scheme;
  }

  static bool Read(::media::mojom::blink::AudioDecoderConfig::DataView input, ::media::mojom::blink::AudioDecoderConfigPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::VideoDecoderConfig::DataView,
                                         ::media::mojom::blink::VideoDecoderConfigPtr> {
  static bool IsNull(const ::media::mojom::blink::VideoDecoderConfigPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::VideoDecoderConfigPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::VideoDecoderConfig::codec) codec(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->codec;
  }

  static decltype(::media::mojom::blink::VideoDecoderConfig::profile) profile(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->profile;
  }

  static decltype(::media::mojom::blink::VideoDecoderConfig::format) format(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->format;
  }

  static const decltype(::media::mojom::blink::VideoDecoderConfig::transformation)& transformation(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->transformation;
  }

  static const decltype(::media::mojom::blink::VideoDecoderConfig::coded_size)& coded_size(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->coded_size;
  }

  static const decltype(::media::mojom::blink::VideoDecoderConfig::visible_rect)& visible_rect(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->visible_rect;
  }

  static const decltype(::media::mojom::blink::VideoDecoderConfig::natural_size)& natural_size(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->natural_size;
  }

  static const decltype(::media::mojom::blink::VideoDecoderConfig::extra_data)& extra_data(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->extra_data;
  }

  static const decltype(::media::mojom::blink::VideoDecoderConfig::encryption_scheme)& encryption_scheme(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->encryption_scheme;
  }

  static const decltype(::media::mojom::blink::VideoDecoderConfig::color_space_info)& color_space_info(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->color_space_info;
  }

  static const decltype(::media::mojom::blink::VideoDecoderConfig::hdr_metadata)& hdr_metadata(
      const ::media::mojom::blink::VideoDecoderConfigPtr& input) {
    return input->hdr_metadata;
  }

  static bool Read(::media::mojom::blink::VideoDecoderConfig::DataView input, ::media::mojom::blink::VideoDecoderConfigPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::DecryptConfig::DataView,
                                         ::media::mojom::blink::DecryptConfigPtr> {
  static bool IsNull(const ::media::mojom::blink::DecryptConfigPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::DecryptConfigPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::DecryptConfig::encryption_mode) encryption_mode(
      const ::media::mojom::blink::DecryptConfigPtr& input) {
    return input->encryption_mode;
  }

  static const decltype(::media::mojom::blink::DecryptConfig::key_id)& key_id(
      const ::media::mojom::blink::DecryptConfigPtr& input) {
    return input->key_id;
  }

  static const decltype(::media::mojom::blink::DecryptConfig::iv)& iv(
      const ::media::mojom::blink::DecryptConfigPtr& input) {
    return input->iv;
  }

  static const decltype(::media::mojom::blink::DecryptConfig::subsamples)& subsamples(
      const ::media::mojom::blink::DecryptConfigPtr& input) {
    return input->subsamples;
  }

  static const decltype(::media::mojom::blink::DecryptConfig::encryption_pattern)& encryption_pattern(
      const ::media::mojom::blink::DecryptConfigPtr& input) {
    return input->encryption_pattern;
  }

  static bool Read(::media::mojom::blink::DecryptConfig::DataView input, ::media::mojom::blink::DecryptConfigPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::DecoderBuffer::DataView,
                                         ::media::mojom::blink::DecoderBufferPtr> {
  static bool IsNull(const ::media::mojom::blink::DecoderBufferPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::DecoderBufferPtr* output) { output->reset(); }

  static const decltype(::media::mojom::blink::DecoderBuffer::timestamp)& timestamp(
      const ::media::mojom::blink::DecoderBufferPtr& input) {
    return input->timestamp;
  }

  static const decltype(::media::mojom::blink::DecoderBuffer::duration)& duration(
      const ::media::mojom::blink::DecoderBufferPtr& input) {
    return input->duration;
  }

  static decltype(::media::mojom::blink::DecoderBuffer::is_end_of_stream) is_end_of_stream(
      const ::media::mojom::blink::DecoderBufferPtr& input) {
    return input->is_end_of_stream;
  }

  static decltype(::media::mojom::blink::DecoderBuffer::data_size) data_size(
      const ::media::mojom::blink::DecoderBufferPtr& input) {
    return input->data_size;
  }

  static decltype(::media::mojom::blink::DecoderBuffer::is_key_frame) is_key_frame(
      const ::media::mojom::blink::DecoderBufferPtr& input) {
    return input->is_key_frame;
  }

  static const decltype(::media::mojom::blink::DecoderBuffer::side_data)& side_data(
      const ::media::mojom::blink::DecoderBufferPtr& input) {
    return input->side_data;
  }

  static const decltype(::media::mojom::blink::DecoderBuffer::decrypt_config)& decrypt_config(
      const ::media::mojom::blink::DecoderBufferPtr& input) {
    return input->decrypt_config;
  }

  static const decltype(::media::mojom::blink::DecoderBuffer::front_discard)& front_discard(
      const ::media::mojom::blink::DecoderBufferPtr& input) {
    return input->front_discard;
  }

  static const decltype(::media::mojom::blink::DecoderBuffer::back_discard)& back_discard(
      const ::media::mojom::blink::DecoderBufferPtr& input) {
    return input->back_discard;
  }

  static bool Read(::media::mojom::blink::DecoderBuffer::DataView input, ::media::mojom::blink::DecoderBufferPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::AudioBuffer::DataView,
                                         ::media::mojom::blink::AudioBufferPtr> {
  static bool IsNull(const ::media::mojom::blink::AudioBufferPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::AudioBufferPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::AudioBuffer::sample_format) sample_format(
      const ::media::mojom::blink::AudioBufferPtr& input) {
    return input->sample_format;
  }

  static decltype(::media::mojom::blink::AudioBuffer::channel_layout) channel_layout(
      const ::media::mojom::blink::AudioBufferPtr& input) {
    return input->channel_layout;
  }

  static decltype(::media::mojom::blink::AudioBuffer::channel_count) channel_count(
      const ::media::mojom::blink::AudioBufferPtr& input) {
    return input->channel_count;
  }

  static decltype(::media::mojom::blink::AudioBuffer::sample_rate) sample_rate(
      const ::media::mojom::blink::AudioBufferPtr& input) {
    return input->sample_rate;
  }

  static decltype(::media::mojom::blink::AudioBuffer::frame_count) frame_count(
      const ::media::mojom::blink::AudioBufferPtr& input) {
    return input->frame_count;
  }

  static decltype(::media::mojom::blink::AudioBuffer::end_of_stream) end_of_stream(
      const ::media::mojom::blink::AudioBufferPtr& input) {
    return input->end_of_stream;
  }

  static const decltype(::media::mojom::blink::AudioBuffer::timestamp)& timestamp(
      const ::media::mojom::blink::AudioBufferPtr& input) {
    return input->timestamp;
  }

  static const decltype(::media::mojom::blink::AudioBuffer::data)& data(
      const ::media::mojom::blink::AudioBufferPtr& input) {
    return input->data;
  }

  static bool Read(::media::mojom::blink::AudioBuffer::DataView input, ::media::mojom::blink::AudioBufferPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::VideoFrame::DataView,
                                         ::media::mojom::blink::VideoFramePtr> {
  static bool IsNull(const ::media::mojom::blink::VideoFramePtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::VideoFramePtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::VideoFrame::format) format(
      const ::media::mojom::blink::VideoFramePtr& input) {
    return input->format;
  }

  static const decltype(::media::mojom::blink::VideoFrame::coded_size)& coded_size(
      const ::media::mojom::blink::VideoFramePtr& input) {
    return input->coded_size;
  }

  static const decltype(::media::mojom::blink::VideoFrame::visible_rect)& visible_rect(
      const ::media::mojom::blink::VideoFramePtr& input) {
    return input->visible_rect;
  }

  static const decltype(::media::mojom::blink::VideoFrame::natural_size)& natural_size(
      const ::media::mojom::blink::VideoFramePtr& input) {
    return input->natural_size;
  }

  static const decltype(::media::mojom::blink::VideoFrame::timestamp)& timestamp(
      const ::media::mojom::blink::VideoFramePtr& input) {
    return input->timestamp;
  }

  static  decltype(::media::mojom::blink::VideoFrame::data)& data(
       ::media::mojom::blink::VideoFramePtr& input) {
    return input->data;
  }

  static const decltype(::media::mojom::blink::VideoFrame::metadata)& metadata(
      const ::media::mojom::blink::VideoFramePtr& input) {
    return input->metadata;
  }

  static const decltype(::media::mojom::blink::VideoFrame::color_space)& color_space(
      const ::media::mojom::blink::VideoFramePtr& input) {
    return input->color_space;
  }

  static bool Read(::media::mojom::blink::VideoFrame::DataView input, ::media::mojom::blink::VideoFramePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::EosVideoFrameData::DataView,
                                         ::media::mojom::blink::EosVideoFrameDataPtr> {
  static bool IsNull(const ::media::mojom::blink::EosVideoFrameDataPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::EosVideoFrameDataPtr* output) { output->reset(); }

  static bool Read(::media::mojom::blink::EosVideoFrameData::DataView input, ::media::mojom::blink::EosVideoFrameDataPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::SharedBufferVideoFrameData::DataView,
                                         ::media::mojom::blink::SharedBufferVideoFrameDataPtr> {
  static bool IsNull(const ::media::mojom::blink::SharedBufferVideoFrameDataPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::SharedBufferVideoFrameDataPtr* output) { output->reset(); }

  static  decltype(::media::mojom::blink::SharedBufferVideoFrameData::frame_data)& frame_data(
       ::media::mojom::blink::SharedBufferVideoFrameDataPtr& input) {
    return input->frame_data;
  }

  static decltype(::media::mojom::blink::SharedBufferVideoFrameData::frame_data_size) frame_data_size(
      const ::media::mojom::blink::SharedBufferVideoFrameDataPtr& input) {
    return input->frame_data_size;
  }

  static decltype(::media::mojom::blink::SharedBufferVideoFrameData::y_stride) y_stride(
      const ::media::mojom::blink::SharedBufferVideoFrameDataPtr& input) {
    return input->y_stride;
  }

  static decltype(::media::mojom::blink::SharedBufferVideoFrameData::u_stride) u_stride(
      const ::media::mojom::blink::SharedBufferVideoFrameDataPtr& input) {
    return input->u_stride;
  }

  static decltype(::media::mojom::blink::SharedBufferVideoFrameData::v_stride) v_stride(
      const ::media::mojom::blink::SharedBufferVideoFrameDataPtr& input) {
    return input->v_stride;
  }

  static decltype(::media::mojom::blink::SharedBufferVideoFrameData::y_offset) y_offset(
      const ::media::mojom::blink::SharedBufferVideoFrameDataPtr& input) {
    return input->y_offset;
  }

  static decltype(::media::mojom::blink::SharedBufferVideoFrameData::u_offset) u_offset(
      const ::media::mojom::blink::SharedBufferVideoFrameDataPtr& input) {
    return input->u_offset;
  }

  static decltype(::media::mojom::blink::SharedBufferVideoFrameData::v_offset) v_offset(
      const ::media::mojom::blink::SharedBufferVideoFrameDataPtr& input) {
    return input->v_offset;
  }

  static bool Read(::media::mojom::blink::SharedBufferVideoFrameData::DataView input, ::media::mojom::blink::SharedBufferVideoFrameDataPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::MailboxVideoFrameData::DataView,
                                         ::media::mojom::blink::MailboxVideoFrameDataPtr> {
  static bool IsNull(const ::media::mojom::blink::MailboxVideoFrameDataPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::MailboxVideoFrameDataPtr* output) { output->reset(); }

  static const decltype(::media::mojom::blink::MailboxVideoFrameData::mailbox_holder)& mailbox_holder(
      const ::media::mojom::blink::MailboxVideoFrameDataPtr& input) {
    return input->mailbox_holder;
  }

  static bool Read(::media::mojom::blink::MailboxVideoFrameData::DataView input, ::media::mojom::blink::MailboxVideoFrameDataPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::PipelineStatistics::DataView,
                                         ::media::mojom::blink::PipelineStatisticsPtr> {
  static bool IsNull(const ::media::mojom::blink::PipelineStatisticsPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::PipelineStatisticsPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::PipelineStatistics::audio_bytes_decoded) audio_bytes_decoded(
      const ::media::mojom::blink::PipelineStatisticsPtr& input) {
    return input->audio_bytes_decoded;
  }

  static decltype(::media::mojom::blink::PipelineStatistics::video_bytes_decoded) video_bytes_decoded(
      const ::media::mojom::blink::PipelineStatisticsPtr& input) {
    return input->video_bytes_decoded;
  }

  static decltype(::media::mojom::blink::PipelineStatistics::video_frames_decoded) video_frames_decoded(
      const ::media::mojom::blink::PipelineStatisticsPtr& input) {
    return input->video_frames_decoded;
  }

  static decltype(::media::mojom::blink::PipelineStatistics::video_frames_dropped) video_frames_dropped(
      const ::media::mojom::blink::PipelineStatisticsPtr& input) {
    return input->video_frames_dropped;
  }

  static decltype(::media::mojom::blink::PipelineStatistics::audio_memory_usage) audio_memory_usage(
      const ::media::mojom::blink::PipelineStatisticsPtr& input) {
    return input->audio_memory_usage;
  }

  static decltype(::media::mojom::blink::PipelineStatistics::video_memory_usage) video_memory_usage(
      const ::media::mojom::blink::PipelineStatisticsPtr& input) {
    return input->video_memory_usage;
  }

  static bool Read(::media::mojom::blink::PipelineStatistics::DataView input, ::media::mojom::blink::PipelineStatisticsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::PredictionFeatures::DataView,
                                         ::media::mojom::blink::PredictionFeaturesPtr> {
  static bool IsNull(const ::media::mojom::blink::PredictionFeaturesPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::PredictionFeaturesPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::PredictionFeatures::profile) profile(
      const ::media::mojom::blink::PredictionFeaturesPtr& input) {
    return input->profile;
  }

  static const decltype(::media::mojom::blink::PredictionFeatures::video_size)& video_size(
      const ::media::mojom::blink::PredictionFeaturesPtr& input) {
    return input->video_size;
  }

  static decltype(::media::mojom::blink::PredictionFeatures::frames_per_sec) frames_per_sec(
      const ::media::mojom::blink::PredictionFeaturesPtr& input) {
    return input->frames_per_sec;
  }

  static const decltype(::media::mojom::blink::PredictionFeatures::key_system)& key_system(
      const ::media::mojom::blink::PredictionFeaturesPtr& input) {
    return input->key_system;
  }

  static decltype(::media::mojom::blink::PredictionFeatures::use_hw_secure_codecs) use_hw_secure_codecs(
      const ::media::mojom::blink::PredictionFeaturesPtr& input) {
    return input->use_hw_secure_codecs;
  }

  static bool Read(::media::mojom::blink::PredictionFeatures::DataView input, ::media::mojom::blink::PredictionFeaturesPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::PredictionTargets::DataView,
                                         ::media::mojom::blink::PredictionTargetsPtr> {
  static bool IsNull(const ::media::mojom::blink::PredictionTargetsPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::PredictionTargetsPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::PredictionTargets::frames_decoded) frames_decoded(
      const ::media::mojom::blink::PredictionTargetsPtr& input) {
    return input->frames_decoded;
  }

  static decltype(::media::mojom::blink::PredictionTargets::frames_dropped) frames_dropped(
      const ::media::mojom::blink::PredictionTargetsPtr& input) {
    return input->frames_dropped;
  }

  static decltype(::media::mojom::blink::PredictionTargets::frames_power_efficient) frames_power_efficient(
      const ::media::mojom::blink::PredictionTargetsPtr& input) {
    return input->frames_power_efficient;
  }

  static bool Read(::media::mojom::blink::PredictionTargets::DataView input, ::media::mojom::blink::PredictionTargetsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT UnionTraits<::media::mojom::blink::VideoFrameData::DataView,
                                        ::media::mojom::blink::VideoFrameDataPtr> {
  static bool IsNull(const ::media::mojom::blink::VideoFrameDataPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::VideoFrameDataPtr* output) { output->reset(); }

  static ::media::mojom::blink::VideoFrameData::Tag GetTag(const ::media::mojom::blink::VideoFrameDataPtr& input) {
    return input->which();
  }

  static const ::media::mojom::blink::EosVideoFrameDataPtr& eos_data(const ::media::mojom::blink::VideoFrameDataPtr& input) {
    return input->get_eos_data();
  }

  static  ::media::mojom::blink::SharedBufferVideoFrameDataPtr& shared_buffer_data( ::media::mojom::blink::VideoFrameDataPtr& input) {
    return input->get_shared_buffer_data();
  }

  static const ::media::mojom::blink::MailboxVideoFrameDataPtr& mailbox_data(const ::media::mojom::blink::VideoFrameDataPtr& input) {
    return input->get_mailbox_data();
  }

  static bool Read(::media::mojom::blink::VideoFrameData::DataView input, ::media::mojom::blink::VideoFrameDataPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_BLINK_H_