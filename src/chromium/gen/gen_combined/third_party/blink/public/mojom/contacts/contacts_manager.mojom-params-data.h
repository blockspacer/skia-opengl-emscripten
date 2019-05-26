// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_PARAMS_DATA_H_

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
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ContactsManager_Select_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContactsManager_Select_Params_Data));
      new (data()) ContactsManager_Select_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContactsManager_Select_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContactsManager_Select_Params_Data>(index_);
    }
    ContactsManager_Select_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t multiple : 1;
  uint8_t include_names : 1;
  uint8_t include_emails : 1;
  uint8_t include_tel : 1;
  uint8_t padfinal_[7];

 private:
  ContactsManager_Select_Params_Data();
  ~ContactsManager_Select_Params_Data() = delete;
};
static_assert(sizeof(ContactsManager_Select_Params_Data) == 16,
              "Bad sizeof(ContactsManager_Select_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ContactsManager_Select_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContactsManager_Select_ResponseParams_Data));
      new (data()) ContactsManager_Select_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContactsManager_Select_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContactsManager_Select_ResponseParams_Data>(index_);
    }
    ContactsManager_Select_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ContactInfo_Data>>> contacts;

 private:
  ContactsManager_Select_ResponseParams_Data();
  ~ContactsManager_Select_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContactsManager_Select_ResponseParams_Data) == 16,
              "Bad sizeof(ContactsManager_Select_ResponseParams_Data)");

}  // namespace internal
class ContactsManager_Select_ParamsDataView {
 public:
  ContactsManager_Select_ParamsDataView() {}

  ContactsManager_Select_ParamsDataView(
      internal::ContactsManager_Select_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool multiple() const {
    return data_->multiple;
  }
  bool include_names() const {
    return data_->include_names;
  }
  bool include_emails() const {
    return data_->include_emails;
  }
  bool include_tel() const {
    return data_->include_tel;
  }
 private:
  internal::ContactsManager_Select_Params_Data* data_ = nullptr;
};

class ContactsManager_Select_ResponseParamsDataView {
 public:
  ContactsManager_Select_ResponseParamsDataView() {}

  ContactsManager_Select_ResponseParamsDataView(
      internal::ContactsManager_Select_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetContactsDataView(
      mojo::ArrayDataView<ContactInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContacts(UserType* output) {
    auto* pointer = data_->contacts.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ContactInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ContactsManager_Select_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void ContactsManager_Select_ResponseParamsDataView::GetContactsDataView(
    mojo::ArrayDataView<ContactInfoDataView>* output) {
  auto pointer = data_->contacts.Get();
  *output = mojo::ArrayDataView<ContactInfoDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_PARAMS_DATA_H_