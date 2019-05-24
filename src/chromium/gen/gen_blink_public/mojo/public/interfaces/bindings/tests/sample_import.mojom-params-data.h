// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace imported {
namespace internal {
class  ImportedInterface_DoSomething_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImportedInterface_DoSomething_Params_Data));
      new (data()) ImportedInterface_DoSomething_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImportedInterface_DoSomething_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImportedInterface_DoSomething_Params_Data>(index_);
    }
    ImportedInterface_DoSomething_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ImportedInterface_DoSomething_Params_Data();
  ~ImportedInterface_DoSomething_Params_Data() = delete;
};
static_assert(sizeof(ImportedInterface_DoSomething_Params_Data) == 8,
              "Bad sizeof(ImportedInterface_DoSomething_Params_Data)");

}  // namespace internal
class ImportedInterface_DoSomething_ParamsDataView {
 public:
  ImportedInterface_DoSomething_ParamsDataView() {}

  ImportedInterface_DoSomething_ParamsDataView(
      internal::ImportedInterface_DoSomething_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ImportedInterface_DoSomething_Params_Data* data_ = nullptr;
};



}  // namespace imported

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_PARAMS_DATA_H_