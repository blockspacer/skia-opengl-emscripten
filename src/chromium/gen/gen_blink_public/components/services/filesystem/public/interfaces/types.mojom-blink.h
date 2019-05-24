// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_BLINK_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_BLINK_H_

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
#include "components/services/filesystem/public/interfaces/types.mojom-shared.h"
#include "components/services/filesystem/public/interfaces/types.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"

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




namespace WTF {
struct filesystem_mojom_internal_Whence_DataHashFn {
  static unsigned GetHash(const ::filesystem::mojom::Whence& value) {
    using utype = std::underlying_type<::filesystem::mojom::Whence>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::filesystem::mojom::Whence& left, const ::filesystem::mojom::Whence& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::filesystem::mojom::Whence>
    : public GenericHashTraits<::filesystem::mojom::Whence> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::filesystem::mojom::Whence& value) {
    return value == static_cast<::filesystem::mojom::Whence>(-1000000);
  }
  static void ConstructDeletedValue(::filesystem::mojom::Whence& slot, bool) {
    slot = static_cast<::filesystem::mojom::Whence>(-1000001);
  }
  static bool IsDeletedValue(const ::filesystem::mojom::Whence& value) {
    return value == static_cast<::filesystem::mojom::Whence>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct filesystem_mojom_internal_FsFileType_DataHashFn {
  static unsigned GetHash(const ::filesystem::mojom::FsFileType& value) {
    using utype = std::underlying_type<::filesystem::mojom::FsFileType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::filesystem::mojom::FsFileType& left, const ::filesystem::mojom::FsFileType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::filesystem::mojom::FsFileType>
    : public GenericHashTraits<::filesystem::mojom::FsFileType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::filesystem::mojom::FsFileType& value) {
    return value == static_cast<::filesystem::mojom::FsFileType>(-1000000);
  }
  static void ConstructDeletedValue(::filesystem::mojom::FsFileType& slot, bool) {
    slot = static_cast<::filesystem::mojom::FsFileType>(-1000001);
  }
  static bool IsDeletedValue(const ::filesystem::mojom::FsFileType& value) {
    return value == static_cast<::filesystem::mojom::FsFileType>(-1000001);
  }
};
}  // namespace WTF


namespace filesystem {
namespace mojom {
namespace blink {





class  TimespecOrNow {
 public:
  using DataView = TimespecOrNowDataView;
  using Data_ = internal::TimespecOrNow_Data;

  template <typename... Args>
  static TimespecOrNowPtr New(Args&&... args) {
    return TimespecOrNowPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TimespecOrNowPtr From(const U& u) {
    return mojo::TypeConverter<TimespecOrNowPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TimespecOrNow>::Convert(*this);
  }


  TimespecOrNow();

  TimespecOrNow(
      bool now,
      double seconds);

  ~TimespecOrNow();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TimespecOrNowPtr>
  TimespecOrNowPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TimespecOrNow>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TimespecOrNow::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TimespecOrNow::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TimespecOrNow_UnserializedMessageContext<
            UserType, TimespecOrNow::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TimespecOrNow::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TimespecOrNow::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TimespecOrNow_UnserializedMessageContext<
            UserType, TimespecOrNow::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TimespecOrNow::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool now;
  
  double seconds;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class  FileInformation {
 public:
  using DataView = FileInformationDataView;
  using Data_ = internal::FileInformation_Data;

  template <typename... Args>
  static FileInformationPtr New(Args&&... args) {
    return FileInformationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileInformationPtr From(const U& u) {
    return mojo::TypeConverter<FileInformationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileInformation>::Convert(*this);
  }


  FileInformation();

  FileInformation(
      FsFileType type,
      int64_t size,
      double atime,
      double mtime,
      double ctime);

  ~FileInformation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileInformationPtr>
  FileInformationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileInformation>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileInformation::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileInformation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileInformation_UnserializedMessageContext<
            UserType, FileInformation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FileInformation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FileInformation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileInformation_UnserializedMessageContext<
            UserType, FileInformation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileInformation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  FsFileType type;
  
  int64_t size;
  
  double atime;
  
  double mtime;
  
  double ctime;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  DirectoryEntry {
 public:
  using DataView = DirectoryEntryDataView;
  using Data_ = internal::DirectoryEntry_Data;

  template <typename... Args>
  static DirectoryEntryPtr New(Args&&... args) {
    return DirectoryEntryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DirectoryEntryPtr From(const U& u) {
    return mojo::TypeConverter<DirectoryEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DirectoryEntry>::Convert(*this);
  }


  DirectoryEntry();

  DirectoryEntry(
      const base::FilePath& name,
      FsFileType type);

  ~DirectoryEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DirectoryEntryPtr>
  DirectoryEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DirectoryEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DirectoryEntry::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DirectoryEntry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DirectoryEntry_UnserializedMessageContext<
            UserType, DirectoryEntry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DirectoryEntry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DirectoryEntry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DirectoryEntry_UnserializedMessageContext<
            UserType, DirectoryEntry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DirectoryEntry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::FilePath name;
  
  FsFileType type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
TimespecOrNowPtr TimespecOrNow::Clone() const {
  return New(
      mojo::Clone(now),
      mojo::Clone(seconds)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TimespecOrNow>::value>::type*>
bool TimespecOrNow::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->now, other_struct.now))
    return false;
  if (!mojo::Equals(this->seconds, other_struct.seconds))
    return false;
  return true;
}
template <typename StructPtrType>
FileInformationPtr FileInformation::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(size),
      mojo::Clone(atime),
      mojo::Clone(mtime),
      mojo::Clone(ctime)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileInformation>::value>::type*>
bool FileInformation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->atime, other_struct.atime))
    return false;
  if (!mojo::Equals(this->mtime, other_struct.mtime))
    return false;
  if (!mojo::Equals(this->ctime, other_struct.ctime))
    return false;
  return true;
}
template <typename StructPtrType>
DirectoryEntryPtr DirectoryEntry::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DirectoryEntry>::value>::type*>
bool DirectoryEntry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

namespace mojo {


template <>
struct  StructTraits<::filesystem::mojom::blink::TimespecOrNow::DataView,
                                         ::filesystem::mojom::blink::TimespecOrNowPtr> {
  static bool IsNull(const ::filesystem::mojom::blink::TimespecOrNowPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::blink::TimespecOrNowPtr* output) { output->reset(); }

  static decltype(::filesystem::mojom::blink::TimespecOrNow::now) now(
      const ::filesystem::mojom::blink::TimespecOrNowPtr& input) {
    return input->now;
  }

  static decltype(::filesystem::mojom::blink::TimespecOrNow::seconds) seconds(
      const ::filesystem::mojom::blink::TimespecOrNowPtr& input) {
    return input->seconds;
  }

  static bool Read(::filesystem::mojom::blink::TimespecOrNow::DataView input, ::filesystem::mojom::blink::TimespecOrNowPtr* output);
};


template <>
struct  StructTraits<::filesystem::mojom::blink::FileInformation::DataView,
                                         ::filesystem::mojom::blink::FileInformationPtr> {
  static bool IsNull(const ::filesystem::mojom::blink::FileInformationPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::blink::FileInformationPtr* output) { output->reset(); }

  static decltype(::filesystem::mojom::blink::FileInformation::type) type(
      const ::filesystem::mojom::blink::FileInformationPtr& input) {
    return input->type;
  }

  static decltype(::filesystem::mojom::blink::FileInformation::size) size(
      const ::filesystem::mojom::blink::FileInformationPtr& input) {
    return input->size;
  }

  static decltype(::filesystem::mojom::blink::FileInformation::atime) atime(
      const ::filesystem::mojom::blink::FileInformationPtr& input) {
    return input->atime;
  }

  static decltype(::filesystem::mojom::blink::FileInformation::mtime) mtime(
      const ::filesystem::mojom::blink::FileInformationPtr& input) {
    return input->mtime;
  }

  static decltype(::filesystem::mojom::blink::FileInformation::ctime) ctime(
      const ::filesystem::mojom::blink::FileInformationPtr& input) {
    return input->ctime;
  }

  static bool Read(::filesystem::mojom::blink::FileInformation::DataView input, ::filesystem::mojom::blink::FileInformationPtr* output);
};


template <>
struct  StructTraits<::filesystem::mojom::blink::DirectoryEntry::DataView,
                                         ::filesystem::mojom::blink::DirectoryEntryPtr> {
  static bool IsNull(const ::filesystem::mojom::blink::DirectoryEntryPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::blink::DirectoryEntryPtr* output) { output->reset(); }

  static const decltype(::filesystem::mojom::blink::DirectoryEntry::name)& name(
      const ::filesystem::mojom::blink::DirectoryEntryPtr& input) {
    return input->name;
  }

  static decltype(::filesystem::mojom::blink::DirectoryEntry::type) type(
      const ::filesystem::mojom::blink::DirectoryEntryPtr& input) {
    return input->type;
  }

  static bool Read(::filesystem::mojom::blink::DirectoryEntry::DataView input, ::filesystem::mojom::blink::DirectoryEntryPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_BLINK_H_