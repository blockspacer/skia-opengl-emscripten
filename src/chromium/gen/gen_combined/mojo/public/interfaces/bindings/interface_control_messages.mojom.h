// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-shared.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-forward.h"
#include <string>
#include <vector>




#include "base/component_export.h"




namespace mojo {
namespace interface_control {







class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) QueryVersion {
 public:
  using DataView = QueryVersionDataView;
  using Data_ = internal::QueryVersion_Data;

  template <typename... Args>
  static QueryVersionPtr New(Args&&... args) {
    return QueryVersionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static QueryVersionPtr From(const U& u) {
    return mojo::TypeConverter<QueryVersionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, QueryVersion>::Convert(*this);
  }


  QueryVersion();

  ~QueryVersion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = QueryVersionPtr>
  QueryVersionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, QueryVersion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        QueryVersion::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        QueryVersion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::QueryVersion_UnserializedMessageContext<
            UserType, QueryVersion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<QueryVersion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return QueryVersion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::QueryVersion_UnserializedMessageContext<
            UserType, QueryVersion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<QueryVersion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }


 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) QueryVersionResult {
 public:
  using DataView = QueryVersionResultDataView;
  using Data_ = internal::QueryVersionResult_Data;

  template <typename... Args>
  static QueryVersionResultPtr New(Args&&... args) {
    return QueryVersionResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static QueryVersionResultPtr From(const U& u) {
    return mojo::TypeConverter<QueryVersionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, QueryVersionResult>::Convert(*this);
  }


  QueryVersionResult();

  explicit QueryVersionResult(
      uint32_t version);

  ~QueryVersionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = QueryVersionResultPtr>
  QueryVersionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, QueryVersionResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        QueryVersionResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        QueryVersionResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::QueryVersionResult_UnserializedMessageContext<
            UserType, QueryVersionResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<QueryVersionResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return QueryVersionResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::QueryVersionResult_UnserializedMessageContext<
            UserType, QueryVersionResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<QueryVersionResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t version;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) FlushForTesting {
 public:
  using DataView = FlushForTestingDataView;
  using Data_ = internal::FlushForTesting_Data;

  template <typename... Args>
  static FlushForTestingPtr New(Args&&... args) {
    return FlushForTestingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FlushForTestingPtr From(const U& u) {
    return mojo::TypeConverter<FlushForTestingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FlushForTesting>::Convert(*this);
  }


  FlushForTesting();

  ~FlushForTesting();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FlushForTestingPtr>
  FlushForTestingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FlushForTesting>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FlushForTesting::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FlushForTesting::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FlushForTesting_UnserializedMessageContext<
            UserType, FlushForTesting::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FlushForTesting::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FlushForTesting::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FlushForTesting_UnserializedMessageContext<
            UserType, FlushForTesting::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FlushForTesting::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }


 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) RequireVersion {
 public:
  using DataView = RequireVersionDataView;
  using Data_ = internal::RequireVersion_Data;

  template <typename... Args>
  static RequireVersionPtr New(Args&&... args) {
    return RequireVersionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RequireVersionPtr From(const U& u) {
    return mojo::TypeConverter<RequireVersionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RequireVersion>::Convert(*this);
  }


  RequireVersion();

  explicit RequireVersion(
      uint32_t version);

  ~RequireVersion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RequireVersionPtr>
  RequireVersionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RequireVersion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RequireVersion::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RequireVersion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RequireVersion_UnserializedMessageContext<
            UserType, RequireVersion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RequireVersion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RequireVersion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RequireVersion_UnserializedMessageContext<
            UserType, RequireVersion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RequireVersion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t version;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) RunInput {
 public:
  using DataView = RunInputDataView;
  using Data_ = internal::RunInput_Data;
  using Tag = Data_::RunInput_Tag;

  static RunInputPtr New() {
    return RunInputPtr(base::in_place);
  }
  // Construct an instance holding |query_version|.
  static RunInputPtr
  NewQueryVersion(
      QueryVersionPtr query_version) {
    auto result = RunInputPtr(base::in_place);
    result->set_query_version(std::move(query_version));
    return result;
  }
  // Construct an instance holding |flush_for_testing|.
  static RunInputPtr
  NewFlushForTesting(
      FlushForTestingPtr flush_for_testing) {
    auto result = RunInputPtr(base::in_place);
    result->set_flush_for_testing(std::move(flush_for_testing));
    return result;
  }

  template <typename U>
  static RunInputPtr From(const U& u) {
    return mojo::TypeConverter<RunInputPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunInput>::Convert(*this);
  }

  RunInput();
  ~RunInput();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RunInputPtr>
  RunInputPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunInput>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_query_version() const { return tag_ == Tag::QUERY_VERSION; }

  
  QueryVersionPtr& get_query_version() const {
    DCHECK(tag_ == Tag::QUERY_VERSION);
    return *(data_.query_version);
  }

  
  void set_query_version(
      QueryVersionPtr query_version);
  
  bool is_flush_for_testing() const { return tag_ == Tag::FLUSH_FOR_TESTING; }

  
  FlushForTestingPtr& get_flush_for_testing() const {
    DCHECK(tag_ == Tag::FLUSH_FOR_TESTING);
    return *(data_.flush_for_testing);
  }

  
  void set_flush_for_testing(
      FlushForTestingPtr flush_for_testing);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RunInput::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<RunInput::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    QueryVersionPtr* query_version;
    FlushForTestingPtr* flush_for_testing;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) RunOutput {
 public:
  using DataView = RunOutputDataView;
  using Data_ = internal::RunOutput_Data;
  using Tag = Data_::RunOutput_Tag;

  static RunOutputPtr New() {
    return RunOutputPtr(base::in_place);
  }
  // Construct an instance holding |query_version_result|.
  static RunOutputPtr
  NewQueryVersionResult(
      QueryVersionResultPtr query_version_result) {
    auto result = RunOutputPtr(base::in_place);
    result->set_query_version_result(std::move(query_version_result));
    return result;
  }

  template <typename U>
  static RunOutputPtr From(const U& u) {
    return mojo::TypeConverter<RunOutputPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOutput>::Convert(*this);
  }

  RunOutput();
  ~RunOutput();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RunOutputPtr>
  RunOutputPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunOutput>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_query_version_result() const { return tag_ == Tag::QUERY_VERSION_RESULT; }

  
  QueryVersionResultPtr& get_query_version_result() const {
    DCHECK(tag_ == Tag::QUERY_VERSION_RESULT);
    return *(data_.query_version_result);
  }

  
  void set_query_version_result(
      QueryVersionResultPtr query_version_result);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RunOutput::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<RunOutput::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    QueryVersionResultPtr* query_version_result;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) RunOrClosePipeInput {
 public:
  using DataView = RunOrClosePipeInputDataView;
  using Data_ = internal::RunOrClosePipeInput_Data;
  using Tag = Data_::RunOrClosePipeInput_Tag;

  static RunOrClosePipeInputPtr New() {
    return RunOrClosePipeInputPtr(base::in_place);
  }
  // Construct an instance holding |require_version|.
  static RunOrClosePipeInputPtr
  NewRequireVersion(
      RequireVersionPtr require_version) {
    auto result = RunOrClosePipeInputPtr(base::in_place);
    result->set_require_version(std::move(require_version));
    return result;
  }

  template <typename U>
  static RunOrClosePipeInputPtr From(const U& u) {
    return mojo::TypeConverter<RunOrClosePipeInputPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOrClosePipeInput>::Convert(*this);
  }

  RunOrClosePipeInput();
  ~RunOrClosePipeInput();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RunOrClosePipeInputPtr>
  RunOrClosePipeInputPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunOrClosePipeInput>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_require_version() const { return tag_ == Tag::REQUIRE_VERSION; }

  
  RequireVersionPtr& get_require_version() const {
    DCHECK(tag_ == Tag::REQUIRE_VERSION);
    return *(data_.require_version);
  }

  
  void set_require_version(
      RequireVersionPtr require_version);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RunOrClosePipeInput::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<RunOrClosePipeInput::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    RequireVersionPtr* require_version;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) RunMessageParams {
 public:
  using DataView = RunMessageParamsDataView;
  using Data_ = internal::RunMessageParams_Data;

  template <typename... Args>
  static RunMessageParamsPtr New(Args&&... args) {
    return RunMessageParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RunMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunMessageParams>::Convert(*this);
  }


  RunMessageParams();

  explicit RunMessageParams(
      RunInputPtr input);

  ~RunMessageParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RunMessageParamsPtr>
  RunMessageParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunMessageParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RunMessageParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RunMessageParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RunMessageParams_UnserializedMessageContext<
            UserType, RunMessageParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RunMessageParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RunMessageParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RunMessageParams_UnserializedMessageContext<
            UserType, RunMessageParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RunMessageParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  RunInputPtr input;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RunMessageParams);
};





class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) RunResponseMessageParams {
 public:
  using DataView = RunResponseMessageParamsDataView;
  using Data_ = internal::RunResponseMessageParams_Data;

  template <typename... Args>
  static RunResponseMessageParamsPtr New(Args&&... args) {
    return RunResponseMessageParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RunResponseMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunResponseMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunResponseMessageParams>::Convert(*this);
  }


  RunResponseMessageParams();

  explicit RunResponseMessageParams(
      RunOutputPtr output);

  ~RunResponseMessageParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RunResponseMessageParamsPtr>
  RunResponseMessageParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunResponseMessageParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RunResponseMessageParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RunResponseMessageParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RunResponseMessageParams_UnserializedMessageContext<
            UserType, RunResponseMessageParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RunResponseMessageParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RunResponseMessageParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RunResponseMessageParams_UnserializedMessageContext<
            UserType, RunResponseMessageParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RunResponseMessageParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  RunOutputPtr output;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RunResponseMessageParams);
};








class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) RunOrClosePipeMessageParams {
 public:
  using DataView = RunOrClosePipeMessageParamsDataView;
  using Data_ = internal::RunOrClosePipeMessageParams_Data;

  template <typename... Args>
  static RunOrClosePipeMessageParamsPtr New(Args&&... args) {
    return RunOrClosePipeMessageParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RunOrClosePipeMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunOrClosePipeMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOrClosePipeMessageParams>::Convert(*this);
  }


  RunOrClosePipeMessageParams();

  explicit RunOrClosePipeMessageParams(
      RunOrClosePipeInputPtr input);

  ~RunOrClosePipeMessageParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RunOrClosePipeMessageParamsPtr>
  RunOrClosePipeMessageParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunOrClosePipeMessageParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RunOrClosePipeMessageParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RunOrClosePipeMessageParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RunOrClosePipeMessageParams_UnserializedMessageContext<
            UserType, RunOrClosePipeMessageParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RunOrClosePipeMessageParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RunOrClosePipeMessageParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RunOrClosePipeMessageParams_UnserializedMessageContext<
            UserType, RunOrClosePipeMessageParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RunOrClosePipeMessageParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  RunOrClosePipeInputPtr input;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RunOrClosePipeMessageParams);
};


template <typename UnionPtrType>
RunInputPtr RunInput::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::QUERY_VERSION:
      rv->set_query_version(mojo::Clone(*data_.query_version));
      break;
    case Tag::FLUSH_FOR_TESTING:
      rv->set_flush_for_testing(mojo::Clone(*data_.flush_for_testing));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunInput>::value>::type*>
bool RunInput::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::QUERY_VERSION:
      return mojo::Equals(*(data_.query_version), *(other.data_.query_version));
    case Tag::FLUSH_FOR_TESTING:
      return mojo::Equals(*(data_.flush_for_testing), *(other.data_.flush_for_testing));
  }

  return false;
}
template <typename UnionPtrType>
RunOutputPtr RunOutput::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::QUERY_VERSION_RESULT:
      rv->set_query_version_result(mojo::Clone(*data_.query_version_result));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunOutput>::value>::type*>
bool RunOutput::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::QUERY_VERSION_RESULT:
      return mojo::Equals(*(data_.query_version_result), *(other.data_.query_version_result));
  }

  return false;
}
template <typename UnionPtrType>
RunOrClosePipeInputPtr RunOrClosePipeInput::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::REQUIRE_VERSION:
      rv->set_require_version(mojo::Clone(*data_.require_version));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunOrClosePipeInput>::value>::type*>
bool RunOrClosePipeInput::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::REQUIRE_VERSION:
      return mojo::Equals(*(data_.require_version), *(other.data_.require_version));
  }

  return false;
}
template <typename StructPtrType>
RunMessageParamsPtr RunMessageParams::Clone() const {
  return New(
      mojo::Clone(input)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunMessageParams>::value>::type*>
bool RunMessageParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->input, other_struct.input))
    return false;
  return true;
}
template <typename StructPtrType>
RunResponseMessageParamsPtr RunResponseMessageParams::Clone() const {
  return New(
      mojo::Clone(output)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunResponseMessageParams>::value>::type*>
bool RunResponseMessageParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->output, other_struct.output))
    return false;
  return true;
}
template <typename StructPtrType>
QueryVersionPtr QueryVersion::Clone() const {
  return New(
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, QueryVersion>::value>::type*>
bool QueryVersion::Equals(const T& other_struct) const {
  return true;
}
template <typename StructPtrType>
QueryVersionResultPtr QueryVersionResult::Clone() const {
  return New(
      mojo::Clone(version)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, QueryVersionResult>::value>::type*>
bool QueryVersionResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  return true;
}
template <typename StructPtrType>
FlushForTestingPtr FlushForTesting::Clone() const {
  return New(
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FlushForTesting>::value>::type*>
bool FlushForTesting::Equals(const T& other_struct) const {
  return true;
}
template <typename StructPtrType>
RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::Clone() const {
  return New(
      mojo::Clone(input)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunOrClosePipeMessageParams>::value>::type*>
bool RunOrClosePipeMessageParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->input, other_struct.input))
    return false;
  return true;
}
template <typename StructPtrType>
RequireVersionPtr RequireVersion::Clone() const {
  return New(
      mojo::Clone(version)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RequireVersion>::value>::type*>
bool RequireVersion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  return true;
}


}  // namespace interface_control
}  // namespace mojo

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::interface_control::RunMessageParams::DataView,
                                         ::mojo::interface_control::RunMessageParamsPtr> {
  static bool IsNull(const ::mojo::interface_control::RunMessageParamsPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::RunMessageParamsPtr* output) { output->reset(); }

  static const decltype(::mojo::interface_control::RunMessageParams::input)& input(
      const ::mojo::interface_control::RunMessageParamsPtr& input) {
    return input->input;
  }

  static bool Read(::mojo::interface_control::RunMessageParams::DataView input, ::mojo::interface_control::RunMessageParamsPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::interface_control::RunResponseMessageParams::DataView,
                                         ::mojo::interface_control::RunResponseMessageParamsPtr> {
  static bool IsNull(const ::mojo::interface_control::RunResponseMessageParamsPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::RunResponseMessageParamsPtr* output) { output->reset(); }

  static const decltype(::mojo::interface_control::RunResponseMessageParams::output)& output(
      const ::mojo::interface_control::RunResponseMessageParamsPtr& input) {
    return input->output;
  }

  static bool Read(::mojo::interface_control::RunResponseMessageParams::DataView input, ::mojo::interface_control::RunResponseMessageParamsPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::interface_control::QueryVersion::DataView,
                                         ::mojo::interface_control::QueryVersionPtr> {
  static bool IsNull(const ::mojo::interface_control::QueryVersionPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::QueryVersionPtr* output) { output->reset(); }

  static bool Read(::mojo::interface_control::QueryVersion::DataView input, ::mojo::interface_control::QueryVersionPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::interface_control::QueryVersionResult::DataView,
                                         ::mojo::interface_control::QueryVersionResultPtr> {
  static bool IsNull(const ::mojo::interface_control::QueryVersionResultPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::QueryVersionResultPtr* output) { output->reset(); }

  static decltype(::mojo::interface_control::QueryVersionResult::version) version(
      const ::mojo::interface_control::QueryVersionResultPtr& input) {
    return input->version;
  }

  static bool Read(::mojo::interface_control::QueryVersionResult::DataView input, ::mojo::interface_control::QueryVersionResultPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::interface_control::FlushForTesting::DataView,
                                         ::mojo::interface_control::FlushForTestingPtr> {
  static bool IsNull(const ::mojo::interface_control::FlushForTestingPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::FlushForTestingPtr* output) { output->reset(); }

  static bool Read(::mojo::interface_control::FlushForTesting::DataView input, ::mojo::interface_control::FlushForTestingPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::interface_control::RunOrClosePipeMessageParams::DataView,
                                         ::mojo::interface_control::RunOrClosePipeMessageParamsPtr> {
  static bool IsNull(const ::mojo::interface_control::RunOrClosePipeMessageParamsPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::RunOrClosePipeMessageParamsPtr* output) { output->reset(); }

  static const decltype(::mojo::interface_control::RunOrClosePipeMessageParams::input)& input(
      const ::mojo::interface_control::RunOrClosePipeMessageParamsPtr& input) {
    return input->input;
  }

  static bool Read(::mojo::interface_control::RunOrClosePipeMessageParams::DataView input, ::mojo::interface_control::RunOrClosePipeMessageParamsPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::interface_control::RequireVersion::DataView,
                                         ::mojo::interface_control::RequireVersionPtr> {
  static bool IsNull(const ::mojo::interface_control::RequireVersionPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::RequireVersionPtr* output) { output->reset(); }

  static decltype(::mojo::interface_control::RequireVersion::version) version(
      const ::mojo::interface_control::RequireVersionPtr& input) {
    return input->version;
  }

  static bool Read(::mojo::interface_control::RequireVersion::DataView input, ::mojo::interface_control::RequireVersionPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) UnionTraits<::mojo::interface_control::RunInput::DataView,
                                        ::mojo::interface_control::RunInputPtr> {
  static bool IsNull(const ::mojo::interface_control::RunInputPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::RunInputPtr* output) { output->reset(); }

  static ::mojo::interface_control::RunInput::Tag GetTag(const ::mojo::interface_control::RunInputPtr& input) {
    return input->which();
  }

  static const ::mojo::interface_control::QueryVersionPtr& query_version(const ::mojo::interface_control::RunInputPtr& input) {
    return input->get_query_version();
  }

  static const ::mojo::interface_control::FlushForTestingPtr& flush_for_testing(const ::mojo::interface_control::RunInputPtr& input) {
    return input->get_flush_for_testing();
  }

  static bool Read(::mojo::interface_control::RunInput::DataView input, ::mojo::interface_control::RunInputPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) UnionTraits<::mojo::interface_control::RunOutput::DataView,
                                        ::mojo::interface_control::RunOutputPtr> {
  static bool IsNull(const ::mojo::interface_control::RunOutputPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::RunOutputPtr* output) { output->reset(); }

  static ::mojo::interface_control::RunOutput::Tag GetTag(const ::mojo::interface_control::RunOutputPtr& input) {
    return input->which();
  }

  static const ::mojo::interface_control::QueryVersionResultPtr& query_version_result(const ::mojo::interface_control::RunOutputPtr& input) {
    return input->get_query_version_result();
  }

  static bool Read(::mojo::interface_control::RunOutput::DataView input, ::mojo::interface_control::RunOutputPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) UnionTraits<::mojo::interface_control::RunOrClosePipeInput::DataView,
                                        ::mojo::interface_control::RunOrClosePipeInputPtr> {
  static bool IsNull(const ::mojo::interface_control::RunOrClosePipeInputPtr& input) { return !input; }
  static void SetToNull(::mojo::interface_control::RunOrClosePipeInputPtr* output) { output->reset(); }

  static ::mojo::interface_control::RunOrClosePipeInput::Tag GetTag(const ::mojo::interface_control::RunOrClosePipeInputPtr& input) {
    return input->which();
  }

  static const ::mojo::interface_control::RequireVersionPtr& require_version(const ::mojo::interface_control::RunOrClosePipeInputPtr& input) {
    return input->get_require_version();
  }

  static bool Read(::mojo::interface_control::RunOrClosePipeInput::DataView input, ::mojo::interface_control::RunOrClosePipeInputPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_H_