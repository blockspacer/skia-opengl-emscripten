// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_FILE_PATH_MOJOM_H_
#define MOJO_PUBLIC_MOJOM_BASE_FILE_PATH_MOJOM_H_

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
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-forward.h"
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
#include "base/files/file_path.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {





class COMPONENT_EXPORT(MOJO_BASE_MOJOM) FilePath {
 public:
  using DataView = FilePathDataView;
  using Data_ = internal::FilePath_Data;

  template <typename... Args>
  static FilePathPtr New(Args&&... args) {
    return FilePathPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FilePathPtr From(const U& u) {
    return mojo::TypeConverter<FilePathPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FilePath>::Convert(*this);
  }


  FilePath();

  explicit FilePath(
      const std::string& path);

  ~FilePath();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FilePathPtr>
  FilePathPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FilePath>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FilePath::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FilePath::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FilePath_UnserializedMessageContext<
            UserType, FilePath::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FilePath::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FilePath::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FilePath_UnserializedMessageContext<
            UserType, FilePath::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FilePath::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string path;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
FilePathPtr FilePath::Clone() const {
  return New(
      mojo::Clone(path)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FilePath>::value>::type*>
bool FilePath::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM) StructTraits<::mojo_base::mojom::FilePath::DataView,
                                         ::mojo_base::mojom::FilePathPtr> {
  static bool IsNull(const ::mojo_base::mojom::FilePathPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::FilePathPtr* output) { output->reset(); }

  static const decltype(::mojo_base::mojom::FilePath::path)& path(
      const ::mojo_base::mojom::FilePathPtr& input) {
    return input->path;
  }

  static bool Read(::mojo_base::mojom::FilePath::DataView input, ::mojo_base::mojom::FilePathPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_FILE_PATH_MOJOM_H_