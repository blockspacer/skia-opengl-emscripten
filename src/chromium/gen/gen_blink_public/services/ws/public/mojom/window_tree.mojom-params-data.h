// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_PARAMS_DATA_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_PARAMS_DATA_H_

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
namespace ws {
namespace mojom {
namespace internal {
class  WindowTree_NewWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_NewWindow_Params_Data));
      new (data()) WindowTree_NewWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_NewWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_NewWindow_Params_Data>(index_);
    }
    WindowTree_NewWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> properties;

 private:
  WindowTree_NewWindow_Params_Data();
  ~WindowTree_NewWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_NewWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_NewWindow_Params_Data)");
class  WindowTree_NewTopLevelWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_NewTopLevelWindow_Params_Data));
      new (data()) WindowTree_NewTopLevelWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_NewTopLevelWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_NewTopLevelWindow_Params_Data>(index_);
    }
    WindowTree_NewTopLevelWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> properties;

 private:
  WindowTree_NewTopLevelWindow_Params_Data();
  ~WindowTree_NewTopLevelWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_NewTopLevelWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_NewTopLevelWindow_Params_Data)");
class  WindowTree_DeleteWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_DeleteWindow_Params_Data));
      new (data()) WindowTree_DeleteWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_DeleteWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_DeleteWindow_Params_Data>(index_);
    }
    WindowTree_DeleteWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_DeleteWindow_Params_Data();
  ~WindowTree_DeleteWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_DeleteWindow_Params_Data) == 24,
              "Bad sizeof(WindowTree_DeleteWindow_Params_Data)");
class  WindowTree_SetCapture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetCapture_Params_Data));
      new (data()) WindowTree_SetCapture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetCapture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetCapture_Params_Data>(index_);
    }
    WindowTree_SetCapture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_SetCapture_Params_Data();
  ~WindowTree_SetCapture_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetCapture_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetCapture_Params_Data)");
class  WindowTree_ReleaseCapture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ReleaseCapture_Params_Data));
      new (data()) WindowTree_ReleaseCapture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ReleaseCapture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ReleaseCapture_Params_Data>(index_);
    }
    WindowTree_ReleaseCapture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_ReleaseCapture_Params_Data();
  ~WindowTree_ReleaseCapture_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ReleaseCapture_Params_Data) == 24,
              "Bad sizeof(WindowTree_ReleaseCapture_Params_Data)");
class  WindowTree_ObserveEventTypes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ObserveEventTypes_Params_Data));
      new (data()) WindowTree_ObserveEventTypes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ObserveEventTypes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ObserveEventTypes_Params_Data>(index_);
    }
    WindowTree_ObserveEventTypes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> types;

 private:
  WindowTree_ObserveEventTypes_Params_Data();
  ~WindowTree_ObserveEventTypes_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ObserveEventTypes_Params_Data) == 16,
              "Bad sizeof(WindowTree_ObserveEventTypes_Params_Data)");
class  WindowTree_SetWindowBounds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowBounds_Params_Data));
      new (data()) WindowTree_SetWindowBounds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowBounds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowBounds_Params_Data>(index_);
    }
    WindowTree_SetWindowBounds_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> bounds;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceIdAllocation_Data> local_surface_id_allocation;

 private:
  WindowTree_SetWindowBounds_Params_Data();
  ~WindowTree_SetWindowBounds_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowBounds_Params_Data) == 40,
              "Bad sizeof(WindowTree_SetWindowBounds_Params_Data)");
class  WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data));
      new (data()) WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data>(index_);
    }
    WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceIdAllocation_Data> local_surface_id_allocation;

 private:
  WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data();
  ~WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data) == 24,
              "Bad sizeof(WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data)");
class  WindowTree_AllocateLocalSurfaceId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_AllocateLocalSurfaceId_Params_Data));
      new (data()) WindowTree_AllocateLocalSurfaceId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_AllocateLocalSurfaceId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_AllocateLocalSurfaceId_Params_Data>(index_);
    }
    WindowTree_AllocateLocalSurfaceId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_AllocateLocalSurfaceId_Params_Data();
  ~WindowTree_AllocateLocalSurfaceId_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_AllocateLocalSurfaceId_Params_Data) == 16,
              "Bad sizeof(WindowTree_AllocateLocalSurfaceId_Params_Data)");
class  WindowTree_SetWindowTransform_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowTransform_Params_Data));
      new (data()) WindowTree_SetWindowTransform_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowTransform_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowTransform_Params_Data>(index_);
    }
    WindowTree_SetWindowTransform_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> transform;

 private:
  WindowTree_SetWindowTransform_Params_Data();
  ~WindowTree_SetWindowTransform_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowTransform_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetWindowTransform_Params_Data)");
class  WindowTree_SetClientArea_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetClientArea_Params_Data));
      new (data()) WindowTree_SetClientArea_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetClientArea_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetClientArea_Params_Data>(index_);
    }
    WindowTree_SetClientArea_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Insets_Data> insets;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data>>> additional_client_areas;

 private:
  WindowTree_SetClientArea_Params_Data();
  ~WindowTree_SetClientArea_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetClientArea_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetClientArea_Params_Data)");
class  WindowTree_SetHitTestInsets_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetHitTestInsets_Params_Data));
      new (data()) WindowTree_SetHitTestInsets_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetHitTestInsets_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetHitTestInsets_Params_Data>(index_);
    }
    WindowTree_SetHitTestInsets_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Insets_Data> mouse;
  mojo::internal::Pointer<::gfx::mojom::internal::Insets_Data> touch;

 private:
  WindowTree_SetHitTestInsets_Params_Data();
  ~WindowTree_SetHitTestInsets_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetHitTestInsets_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetHitTestInsets_Params_Data)");
class  WindowTree_SetShape_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetShape_Params_Data));
      new (data()) WindowTree_SetShape_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetShape_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetShape_Params_Data>(index_);
    }
    WindowTree_SetShape_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data>>> shape;

 private:
  WindowTree_SetShape_Params_Data();
  ~WindowTree_SetShape_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetShape_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetShape_Params_Data)");
class  WindowTree_SetCanAcceptDrops_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetCanAcceptDrops_Params_Data));
      new (data()) WindowTree_SetCanAcceptDrops_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetCanAcceptDrops_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetCanAcceptDrops_Params_Data>(index_);
    }
    WindowTree_SetCanAcceptDrops_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint8_t accepts_drops : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_SetCanAcceptDrops_Params_Data();
  ~WindowTree_SetCanAcceptDrops_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetCanAcceptDrops_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetCanAcceptDrops_Params_Data)");
class  WindowTree_SetWindowVisibility_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowVisibility_Params_Data));
      new (data()) WindowTree_SetWindowVisibility_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowVisibility_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowVisibility_Params_Data>(index_);
    }
    WindowTree_SetWindowVisibility_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t visible : 1;
  uint8_t pad1_[3];
  uint64_t window_id;

 private:
  WindowTree_SetWindowVisibility_Params_Data();
  ~WindowTree_SetWindowVisibility_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowVisibility_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetWindowVisibility_Params_Data)");
class  WindowTree_SetWindowProperty_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowProperty_Params_Data));
      new (data()) WindowTree_SetWindowProperty_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowProperty_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowProperty_Params_Data>(index_);
    }
    WindowTree_SetWindowProperty_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WindowTree_SetWindowProperty_Params_Data();
  ~WindowTree_SetWindowProperty_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowProperty_Params_Data) == 40,
              "Bad sizeof(WindowTree_SetWindowProperty_Params_Data)");
class  WindowTree_SetWindowOpacity_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowOpacity_Params_Data));
      new (data()) WindowTree_SetWindowOpacity_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowOpacity_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowOpacity_Params_Data>(index_);
    }
    WindowTree_SetWindowOpacity_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  float opacity;
  uint64_t window_id;

 private:
  WindowTree_SetWindowOpacity_Params_Data();
  ~WindowTree_SetWindowOpacity_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowOpacity_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetWindowOpacity_Params_Data)");
class  WindowTree_SetWindowTransparent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowTransparent_Params_Data));
      new (data()) WindowTree_SetWindowTransparent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowTransparent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowTransparent_Params_Data>(index_);
    }
    WindowTree_SetWindowTransparent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t transparent : 1;
  uint8_t pad1_[3];
  uint64_t window_id;

 private:
  WindowTree_SetWindowTransparent_Params_Data();
  ~WindowTree_SetWindowTransparent_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowTransparent_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetWindowTransparent_Params_Data)");
class  WindowTree_AttachCompositorFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_AttachCompositorFrameSink_Params_Data));
      new (data()) WindowTree_AttachCompositorFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_AttachCompositorFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_AttachCompositorFrameSink_Params_Data>(index_);
    }
    WindowTree_AttachCompositorFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Handle_Data compositor_frame_sink;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  WindowTree_AttachCompositorFrameSink_Params_Data();
  ~WindowTree_AttachCompositorFrameSink_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_AttachCompositorFrameSink_Params_Data) == 32,
              "Bad sizeof(WindowTree_AttachCompositorFrameSink_Params_Data)");
class  WindowTree_AddWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_AddWindow_Params_Data));
      new (data()) WindowTree_AddWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_AddWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_AddWindow_Params_Data>(index_);
    }
    WindowTree_AddWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t parent;
  uint64_t child;

 private:
  WindowTree_AddWindow_Params_Data();
  ~WindowTree_AddWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_AddWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_AddWindow_Params_Data)");
class  WindowTree_RemoveWindowFromParent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_RemoveWindowFromParent_Params_Data));
      new (data()) WindowTree_RemoveWindowFromParent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_RemoveWindowFromParent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_RemoveWindowFromParent_Params_Data>(index_);
    }
    WindowTree_RemoveWindowFromParent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_RemoveWindowFromParent_Params_Data();
  ~WindowTree_RemoveWindowFromParent_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_RemoveWindowFromParent_Params_Data) == 24,
              "Bad sizeof(WindowTree_RemoveWindowFromParent_Params_Data)");
class  WindowTree_AddTransientWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_AddTransientWindow_Params_Data));
      new (data()) WindowTree_AddTransientWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_AddTransientWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_AddTransientWindow_Params_Data>(index_);
    }
    WindowTree_AddTransientWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  uint64_t transient_window_id;

 private:
  WindowTree_AddTransientWindow_Params_Data();
  ~WindowTree_AddTransientWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_AddTransientWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_AddTransientWindow_Params_Data)");
class  WindowTree_RemoveTransientWindowFromParent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_RemoveTransientWindowFromParent_Params_Data));
      new (data()) WindowTree_RemoveTransientWindowFromParent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_RemoveTransientWindowFromParent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_RemoveTransientWindowFromParent_Params_Data>(index_);
    }
    WindowTree_RemoveTransientWindowFromParent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t transient_window_id;

 private:
  WindowTree_RemoveTransientWindowFromParent_Params_Data();
  ~WindowTree_RemoveTransientWindowFromParent_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_RemoveTransientWindowFromParent_Params_Data) == 24,
              "Bad sizeof(WindowTree_RemoveTransientWindowFromParent_Params_Data)");
class  WindowTree_SetModalType_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetModalType_Params_Data));
      new (data()) WindowTree_SetModalType_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetModalType_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetModalType_Params_Data>(index_);
    }
    WindowTree_SetModalType_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  int32_t type;
  uint64_t window_id;

 private:
  WindowTree_SetModalType_Params_Data();
  ~WindowTree_SetModalType_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetModalType_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetModalType_Params_Data)");
class  WindowTree_ReorderWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ReorderWindow_Params_Data));
      new (data()) WindowTree_ReorderWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ReorderWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ReorderWindow_Params_Data>(index_);
    }
    WindowTree_ReorderWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  int32_t direction;
  uint64_t window_id;
  uint64_t relative_window_id;

 private:
  WindowTree_ReorderWindow_Params_Data();
  ~WindowTree_ReorderWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ReorderWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_ReorderWindow_Params_Data)");
class  WindowTree_GetWindowTree_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_GetWindowTree_Params_Data));
      new (data()) WindowTree_GetWindowTree_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_GetWindowTree_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_GetWindowTree_Params_Data>(index_);
    }
    WindowTree_GetWindowTree_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_GetWindowTree_Params_Data();
  ~WindowTree_GetWindowTree_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_GetWindowTree_Params_Data) == 16,
              "Bad sizeof(WindowTree_GetWindowTree_Params_Data)");
class  WindowTree_GetWindowTree_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_GetWindowTree_ResponseParams_Data));
      new (data()) WindowTree_GetWindowTree_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_GetWindowTree_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_GetWindowTree_ResponseParams_Data>(index_);
    }
    WindowTree_GetWindowTree_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ws::mojom::internal::WindowData_Data>>> windows;

 private:
  WindowTree_GetWindowTree_ResponseParams_Data();
  ~WindowTree_GetWindowTree_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_GetWindowTree_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_GetWindowTree_ResponseParams_Data)");
class  WindowTree_Embed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_Embed_Params_Data));
      new (data()) WindowTree_Embed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_Embed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_Embed_Params_Data>(index_);
    }
    WindowTree_Embed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Interface_Data client;
  uint32_t embed_flags;
  uint8_t padfinal_[4];

 private:
  WindowTree_Embed_Params_Data();
  ~WindowTree_Embed_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_Embed_Params_Data) == 32,
              "Bad sizeof(WindowTree_Embed_Params_Data)");
class  WindowTree_Embed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_Embed_ResponseParams_Data));
      new (data()) WindowTree_Embed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_Embed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_Embed_ResponseParams_Data>(index_);
    }
    WindowTree_Embed_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_Embed_ResponseParams_Data();
  ~WindowTree_Embed_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_Embed_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_Embed_ResponseParams_Data)");
class  WindowTree_ScheduleEmbed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ScheduleEmbed_Params_Data));
      new (data()) WindowTree_ScheduleEmbed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ScheduleEmbed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ScheduleEmbed_Params_Data>(index_);
    }
    WindowTree_ScheduleEmbed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  WindowTree_ScheduleEmbed_Params_Data();
  ~WindowTree_ScheduleEmbed_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ScheduleEmbed_Params_Data) == 16,
              "Bad sizeof(WindowTree_ScheduleEmbed_Params_Data)");
class  WindowTree_ScheduleEmbed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ScheduleEmbed_ResponseParams_Data));
      new (data()) WindowTree_ScheduleEmbed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ScheduleEmbed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ScheduleEmbed_ResponseParams_Data>(index_);
    }
    WindowTree_ScheduleEmbed_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;

 private:
  WindowTree_ScheduleEmbed_ResponseParams_Data();
  ~WindowTree_ScheduleEmbed_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_ScheduleEmbed_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_ScheduleEmbed_ResponseParams_Data)");
class  WindowTree_ScheduleEmbedForExistingClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ScheduleEmbedForExistingClient_Params_Data));
      new (data()) WindowTree_ScheduleEmbedForExistingClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ScheduleEmbedForExistingClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ScheduleEmbedForExistingClient_Params_Data>(index_);
    }
    WindowTree_ScheduleEmbedForExistingClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t window_id;
  uint8_t padfinal_[4];

 private:
  WindowTree_ScheduleEmbedForExistingClient_Params_Data();
  ~WindowTree_ScheduleEmbedForExistingClient_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ScheduleEmbedForExistingClient_Params_Data) == 16,
              "Bad sizeof(WindowTree_ScheduleEmbedForExistingClient_Params_Data)");
class  WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data));
      new (data()) WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data>(index_);
    }
    WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;

 private:
  WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data();
  ~WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data)");
class  WindowTree_EmbedUsingToken_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_EmbedUsingToken_Params_Data));
      new (data()) WindowTree_EmbedUsingToken_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_EmbedUsingToken_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_EmbedUsingToken_Params_Data>(index_);
    }
    WindowTree_EmbedUsingToken_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;
  uint32_t embed_flags;
  uint8_t padfinal_[4];

 private:
  WindowTree_EmbedUsingToken_Params_Data();
  ~WindowTree_EmbedUsingToken_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_EmbedUsingToken_Params_Data) == 32,
              "Bad sizeof(WindowTree_EmbedUsingToken_Params_Data)");
class  WindowTree_EmbedUsingToken_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_EmbedUsingToken_ResponseParams_Data));
      new (data()) WindowTree_EmbedUsingToken_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_EmbedUsingToken_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_EmbedUsingToken_ResponseParams_Data>(index_);
    }
    WindowTree_EmbedUsingToken_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_EmbedUsingToken_ResponseParams_Data();
  ~WindowTree_EmbedUsingToken_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_EmbedUsingToken_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_EmbedUsingToken_ResponseParams_Data)");
class  WindowTree_AttachFrameSinkId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_AttachFrameSinkId_Params_Data));
      new (data()) WindowTree_AttachFrameSinkId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_AttachFrameSinkId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_AttachFrameSinkId_Params_Data>(index_);
    }
    WindowTree_AttachFrameSinkId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;

 private:
  WindowTree_AttachFrameSinkId_Params_Data();
  ~WindowTree_AttachFrameSinkId_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_AttachFrameSinkId_Params_Data) == 24,
              "Bad sizeof(WindowTree_AttachFrameSinkId_Params_Data)");
class  WindowTree_UnattachFrameSinkId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_UnattachFrameSinkId_Params_Data));
      new (data()) WindowTree_UnattachFrameSinkId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_UnattachFrameSinkId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_UnattachFrameSinkId_Params_Data>(index_);
    }
    WindowTree_UnattachFrameSinkId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_UnattachFrameSinkId_Params_Data();
  ~WindowTree_UnattachFrameSinkId_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_UnattachFrameSinkId_Params_Data) == 16,
              "Bad sizeof(WindowTree_UnattachFrameSinkId_Params_Data)");
class  WindowTree_SetFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetFocus_Params_Data));
      new (data()) WindowTree_SetFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetFocus_Params_Data>(index_);
    }
    WindowTree_SetFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_SetFocus_Params_Data();
  ~WindowTree_SetFocus_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetFocus_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetFocus_Params_Data)");
class  WindowTree_SetCanFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetCanFocus_Params_Data));
      new (data()) WindowTree_SetCanFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetCanFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetCanFocus_Params_Data>(index_);
    }
    WindowTree_SetCanFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint8_t can_focus : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_SetCanFocus_Params_Data();
  ~WindowTree_SetCanFocus_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetCanFocus_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetCanFocus_Params_Data)");
class  WindowTree_SetCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetCursor_Params_Data));
      new (data()) WindowTree_SetCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetCursor_Params_Data>(index_);
    }
    WindowTree_SetCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<::ui::mojom::internal::Cursor_Data> cursor;

 private:
  WindowTree_SetCursor_Params_Data();
  ~WindowTree_SetCursor_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetCursor_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetCursor_Params_Data)");
class  WindowTree_SetWindowTextInputState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowTextInputState_Params_Data));
      new (data()) WindowTree_SetWindowTextInputState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowTextInputState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowTextInputState_Params_Data>(index_);
    }
    WindowTree_SetWindowTextInputState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::ui::mojom::internal::TextInputState_Data> state;

 private:
  WindowTree_SetWindowTextInputState_Params_Data();
  ~WindowTree_SetWindowTextInputState_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowTextInputState_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetWindowTextInputState_Params_Data)");
class  WindowTree_SetImeVisibility_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetImeVisibility_Params_Data));
      new (data()) WindowTree_SetImeVisibility_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetImeVisibility_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetImeVisibility_Params_Data>(index_);
    }
    WindowTree_SetImeVisibility_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint8_t visible : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::ui::mojom::internal::TextInputState_Data> state;

 private:
  WindowTree_SetImeVisibility_Params_Data();
  ~WindowTree_SetImeVisibility_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetImeVisibility_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetImeVisibility_Params_Data)");
class  WindowTree_SetEventTargetingPolicy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetEventTargetingPolicy_Params_Data));
      new (data()) WindowTree_SetEventTargetingPolicy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetEventTargetingPolicy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetEventTargetingPolicy_Params_Data>(index_);
    }
    WindowTree_SetEventTargetingPolicy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  int32_t policy;
  uint8_t padfinal_[4];

 private:
  WindowTree_SetEventTargetingPolicy_Params_Data();
  ~WindowTree_SetEventTargetingPolicy_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetEventTargetingPolicy_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetEventTargetingPolicy_Params_Data)");
class  WindowTree_OnWindowInputEventAck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_OnWindowInputEventAck_Params_Data));
      new (data()) WindowTree_OnWindowInputEventAck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_OnWindowInputEventAck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_OnWindowInputEventAck_Params_Data>(index_);
    }
    WindowTree_OnWindowInputEventAck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t event_id;
  int32_t result;

 private:
  WindowTree_OnWindowInputEventAck_Params_Data();
  ~WindowTree_OnWindowInputEventAck_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_OnWindowInputEventAck_Params_Data) == 16,
              "Bad sizeof(WindowTree_OnWindowInputEventAck_Params_Data)");
class  WindowTree_DeactivateWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_DeactivateWindow_Params_Data));
      new (data()) WindowTree_DeactivateWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_DeactivateWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_DeactivateWindow_Params_Data>(index_);
    }
    WindowTree_DeactivateWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_DeactivateWindow_Params_Data();
  ~WindowTree_DeactivateWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_DeactivateWindow_Params_Data) == 16,
              "Bad sizeof(WindowTree_DeactivateWindow_Params_Data)");
class  WindowTree_StackAbove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_StackAbove_Params_Data));
      new (data()) WindowTree_StackAbove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_StackAbove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_StackAbove_Params_Data>(index_);
    }
    WindowTree_StackAbove_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t above_id;
  uint64_t below_id;

 private:
  WindowTree_StackAbove_Params_Data();
  ~WindowTree_StackAbove_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_StackAbove_Params_Data) == 32,
              "Bad sizeof(WindowTree_StackAbove_Params_Data)");
class  WindowTree_StackAtTop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_StackAtTop_Params_Data));
      new (data()) WindowTree_StackAtTop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_StackAtTop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_StackAtTop_Params_Data>(index_);
    }
    WindowTree_StackAtTop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_StackAtTop_Params_Data();
  ~WindowTree_StackAtTop_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_StackAtTop_Params_Data) == 24,
              "Bad sizeof(WindowTree_StackAtTop_Params_Data)");
class  WindowTree_BindWindowManagerInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_BindWindowManagerInterface_Params_Data));
      new (data()) WindowTree_BindWindowManagerInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_BindWindowManagerInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_BindWindowManagerInterface_Params_Data>(index_);
    }
    WindowTree_BindWindowManagerInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::AssociatedEndpointHandle_Data window_manager;
  uint8_t padfinal_[4];

 private:
  WindowTree_BindWindowManagerInterface_Params_Data();
  ~WindowTree_BindWindowManagerInterface_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_BindWindowManagerInterface_Params_Data) == 24,
              "Bad sizeof(WindowTree_BindWindowManagerInterface_Params_Data)");
class  WindowTree_GetCursorLocationMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_GetCursorLocationMemory_Params_Data));
      new (data()) WindowTree_GetCursorLocationMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_GetCursorLocationMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_GetCursorLocationMemory_Params_Data>(index_);
    }
    WindowTree_GetCursorLocationMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowTree_GetCursorLocationMemory_Params_Data();
  ~WindowTree_GetCursorLocationMemory_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_GetCursorLocationMemory_Params_Data) == 8,
              "Bad sizeof(WindowTree_GetCursorLocationMemory_Params_Data)");
class  WindowTree_GetCursorLocationMemory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_GetCursorLocationMemory_ResponseParams_Data));
      new (data()) WindowTree_GetCursorLocationMemory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_GetCursorLocationMemory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_GetCursorLocationMemory_ResponseParams_Data>(index_);
    }
    WindowTree_GetCursorLocationMemory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data cursor_buffer;
  uint8_t padfinal_[4];

 private:
  WindowTree_GetCursorLocationMemory_ResponseParams_Data();
  ~WindowTree_GetCursorLocationMemory_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_GetCursorLocationMemory_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_GetCursorLocationMemory_ResponseParams_Data)");
class  WindowTree_PerformWindowMove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_PerformWindowMove_Params_Data));
      new (data()) WindowTree_PerformWindowMove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_PerformWindowMove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_PerformWindowMove_Params_Data>(index_);
    }
    WindowTree_PerformWindowMove_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  int32_t source;
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> cursor;
  int32_t hit_test;
  uint8_t padfinal_[4];

 private:
  WindowTree_PerformWindowMove_Params_Data();
  ~WindowTree_PerformWindowMove_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_PerformWindowMove_Params_Data) == 40,
              "Bad sizeof(WindowTree_PerformWindowMove_Params_Data)");
class  WindowTree_CancelWindowMove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_CancelWindowMove_Params_Data));
      new (data()) WindowTree_CancelWindowMove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_CancelWindowMove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_CancelWindowMove_Params_Data>(index_);
    }
    WindowTree_CancelWindowMove_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_CancelWindowMove_Params_Data();
  ~WindowTree_CancelWindowMove_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_CancelWindowMove_Params_Data) == 16,
              "Bad sizeof(WindowTree_CancelWindowMove_Params_Data)");
class  WindowTree_PerformDragDrop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_PerformDragDrop_Params_Data));
      new (data()) WindowTree_PerformDragDrop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_PerformDragDrop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_PerformDragDrop_Params_Data>(index_);
    }
    WindowTree_PerformDragDrop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint32_t drag_operation;
  uint64_t source_window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> screen_location;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> drag_data;
  mojo::internal::Pointer<::gfx::mojom::internal::ImageSkia_Data> drag_image;
  mojo::internal::Pointer<::gfx::mojom::internal::Vector2d_Data> drag_image_offset;
  int32_t source;
  uint8_t padfinal_[4];

 private:
  WindowTree_PerformDragDrop_Params_Data();
  ~WindowTree_PerformDragDrop_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_PerformDragDrop_Params_Data) == 64,
              "Bad sizeof(WindowTree_PerformDragDrop_Params_Data)");
class  WindowTree_CancelDragDrop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_CancelDragDrop_Params_Data));
      new (data()) WindowTree_CancelDragDrop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_CancelDragDrop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_CancelDragDrop_Params_Data>(index_);
    }
    WindowTree_CancelDragDrop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_CancelDragDrop_Params_Data();
  ~WindowTree_CancelDragDrop_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_CancelDragDrop_Params_Data) == 16,
              "Bad sizeof(WindowTree_CancelDragDrop_Params_Data)");
class  WindowTree_ObserveTopmostWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ObserveTopmostWindow_Params_Data));
      new (data()) WindowTree_ObserveTopmostWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ObserveTopmostWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ObserveTopmostWindow_Params_Data>(index_);
    }
    WindowTree_ObserveTopmostWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t source;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_ObserveTopmostWindow_Params_Data();
  ~WindowTree_ObserveTopmostWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ObserveTopmostWindow_Params_Data) == 24,
              "Bad sizeof(WindowTree_ObserveTopmostWindow_Params_Data)");
class  WindowTree_StopObservingTopmostWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_StopObservingTopmostWindow_Params_Data));
      new (data()) WindowTree_StopObservingTopmostWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_StopObservingTopmostWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_StopObservingTopmostWindow_Params_Data>(index_);
    }
    WindowTree_StopObservingTopmostWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowTree_StopObservingTopmostWindow_Params_Data();
  ~WindowTree_StopObservingTopmostWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_StopObservingTopmostWindow_Params_Data) == 8,
              "Bad sizeof(WindowTree_StopObservingTopmostWindow_Params_Data)");
class  WindowTree_SetWindowResizeShadow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowResizeShadow_Params_Data));
      new (data()) WindowTree_SetWindowResizeShadow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowResizeShadow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowResizeShadow_Params_Data>(index_);
    }
    WindowTree_SetWindowResizeShadow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  int32_t hit_test;
  uint8_t padfinal_[4];

 private:
  WindowTree_SetWindowResizeShadow_Params_Data();
  ~WindowTree_SetWindowResizeShadow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowResizeShadow_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetWindowResizeShadow_Params_Data)");
class  WindowTree_CancelActiveTouchesExcept_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_CancelActiveTouchesExcept_Params_Data));
      new (data()) WindowTree_CancelActiveTouchesExcept_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_CancelActiveTouchesExcept_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_CancelActiveTouchesExcept_Params_Data>(index_);
    }
    WindowTree_CancelActiveTouchesExcept_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t not_cancelled_window_id;

 private:
  WindowTree_CancelActiveTouchesExcept_Params_Data();
  ~WindowTree_CancelActiveTouchesExcept_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_CancelActiveTouchesExcept_Params_Data) == 16,
              "Bad sizeof(WindowTree_CancelActiveTouchesExcept_Params_Data)");
class  WindowTree_CancelActiveTouches_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_CancelActiveTouches_Params_Data));
      new (data()) WindowTree_CancelActiveTouches_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_CancelActiveTouches_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_CancelActiveTouches_Params_Data>(index_);
    }
    WindowTree_CancelActiveTouches_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_CancelActiveTouches_Params_Data();
  ~WindowTree_CancelActiveTouches_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_CancelActiveTouches_Params_Data) == 16,
              "Bad sizeof(WindowTree_CancelActiveTouches_Params_Data)");
class  WindowTree_TransferGestureEventsTo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_TransferGestureEventsTo_Params_Data));
      new (data()) WindowTree_TransferGestureEventsTo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_TransferGestureEventsTo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_TransferGestureEventsTo_Params_Data>(index_);
    }
    WindowTree_TransferGestureEventsTo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t current_id;
  uint64_t new_id;
  uint8_t should_cancel : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_TransferGestureEventsTo_Params_Data();
  ~WindowTree_TransferGestureEventsTo_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_TransferGestureEventsTo_Params_Data) == 32,
              "Bad sizeof(WindowTree_TransferGestureEventsTo_Params_Data)");
class  WindowTree_TrackOcclusionState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_TrackOcclusionState_Params_Data));
      new (data()) WindowTree_TrackOcclusionState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_TrackOcclusionState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_TrackOcclusionState_Params_Data>(index_);
    }
    WindowTree_TrackOcclusionState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_TrackOcclusionState_Params_Data();
  ~WindowTree_TrackOcclusionState_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_TrackOcclusionState_Params_Data) == 16,
              "Bad sizeof(WindowTree_TrackOcclusionState_Params_Data)");
class  WindowTree_PauseWindowOcclusionTracking_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_PauseWindowOcclusionTracking_Params_Data));
      new (data()) WindowTree_PauseWindowOcclusionTracking_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_PauseWindowOcclusionTracking_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_PauseWindowOcclusionTracking_Params_Data>(index_);
    }
    WindowTree_PauseWindowOcclusionTracking_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowTree_PauseWindowOcclusionTracking_Params_Data();
  ~WindowTree_PauseWindowOcclusionTracking_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_PauseWindowOcclusionTracking_Params_Data) == 8,
              "Bad sizeof(WindowTree_PauseWindowOcclusionTracking_Params_Data)");
class  WindowTree_UnpauseWindowOcclusionTracking_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_UnpauseWindowOcclusionTracking_Params_Data));
      new (data()) WindowTree_UnpauseWindowOcclusionTracking_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_UnpauseWindowOcclusionTracking_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_UnpauseWindowOcclusionTracking_Params_Data>(index_);
    }
    WindowTree_UnpauseWindowOcclusionTracking_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowTree_UnpauseWindowOcclusionTracking_Params_Data();
  ~WindowTree_UnpauseWindowOcclusionTracking_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_UnpauseWindowOcclusionTracking_Params_Data) == 8,
              "Bad sizeof(WindowTree_UnpauseWindowOcclusionTracking_Params_Data)");
class  WindowTree_ConnectToImeEngine_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ConnectToImeEngine_Params_Data));
      new (data()) WindowTree_ConnectToImeEngine_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ConnectToImeEngine_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ConnectToImeEngine_Params_Data>(index_);
    }
    WindowTree_ConnectToImeEngine_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data engine_request;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  WindowTree_ConnectToImeEngine_Params_Data();
  ~WindowTree_ConnectToImeEngine_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ConnectToImeEngine_Params_Data) == 24,
              "Bad sizeof(WindowTree_ConnectToImeEngine_Params_Data)");
class  WindowTreeClient_OnClientId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnClientId_Params_Data));
      new (data()) WindowTreeClient_OnClientId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnClientId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnClientId_Params_Data>(index_);
    }
    WindowTreeClient_OnClientId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t client_id;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnClientId_Params_Data();
  ~WindowTreeClient_OnClientId_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnClientId_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnClientId_Params_Data)");
class  WindowTreeClient_OnEmbed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnEmbed_Params_Data));
      new (data()) WindowTreeClient_OnEmbed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnEmbed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnEmbed_Params_Data>(index_);
    }
    WindowTreeClient_OnEmbed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ws::mojom::internal::WindowData_Data> root;
  mojo::internal::Interface_Data tree;
  int64_t display_id;
  uint64_t focused_window;
  uint8_t parent_drawn : 1;
  uint8_t pad4_[7];
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceIdAllocation_Data> local_surface_id_allocation;

 private:
  WindowTreeClient_OnEmbed_Params_Data();
  ~WindowTreeClient_OnEmbed_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnEmbed_Params_Data) == 56,
              "Bad sizeof(WindowTreeClient_OnEmbed_Params_Data)");
class  WindowTreeClient_OnEmbedFromToken_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnEmbedFromToken_Params_Data));
      new (data()) WindowTreeClient_OnEmbedFromToken_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnEmbedFromToken_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnEmbedFromToken_Params_Data>(index_);
    }
    WindowTreeClient_OnEmbedFromToken_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;
  mojo::internal::Pointer<::ws::mojom::internal::WindowData_Data> root;
  int64_t display_id;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceIdAllocation_Data> local_surface_id_allocation;

 private:
  WindowTreeClient_OnEmbedFromToken_Params_Data();
  ~WindowTreeClient_OnEmbedFromToken_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnEmbedFromToken_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnEmbedFromToken_Params_Data)");
class  WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data));
      new (data()) WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data>(index_);
    }
    WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;

 private:
  WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data();
  ~WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data)");
class  WindowTreeClient_OnUnembed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnUnembed_Params_Data));
      new (data()) WindowTreeClient_OnUnembed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnUnembed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnUnembed_Params_Data>(index_);
    }
    WindowTreeClient_OnUnembed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;

 private:
  WindowTreeClient_OnUnembed_Params_Data();
  ~WindowTreeClient_OnUnembed_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnUnembed_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnUnembed_Params_Data)");
class  WindowTreeClient_OnCaptureChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnCaptureChanged_Params_Data));
      new (data()) WindowTreeClient_OnCaptureChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnCaptureChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnCaptureChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnCaptureChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t new_capture;
  uint64_t old_capture;

 private:
  WindowTreeClient_OnCaptureChanged_Params_Data();
  ~WindowTreeClient_OnCaptureChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnCaptureChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnCaptureChanged_Params_Data)");
class  WindowTreeClient_OnFrameSinkIdAllocated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnFrameSinkIdAllocated_Params_Data));
      new (data()) WindowTreeClient_OnFrameSinkIdAllocated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnFrameSinkIdAllocated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnFrameSinkIdAllocated_Params_Data>(index_);
    }
    WindowTreeClient_OnFrameSinkIdAllocated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;

 private:
  WindowTreeClient_OnFrameSinkIdAllocated_Params_Data();
  ~WindowTreeClient_OnFrameSinkIdAllocated_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnFrameSinkIdAllocated_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnFrameSinkIdAllocated_Params_Data)");
class  WindowTreeClient_OnTopLevelCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnTopLevelCreated_Params_Data));
      new (data()) WindowTreeClient_OnTopLevelCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnTopLevelCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnTopLevelCreated_Params_Data>(index_);
    }
    WindowTreeClient_OnTopLevelCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t parent_drawn : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<::ws::mojom::internal::WindowData_Data> data;
  int64_t display_id;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceIdAllocation_Data> local_surface_id_allocation;

 private:
  WindowTreeClient_OnTopLevelCreated_Params_Data();
  ~WindowTreeClient_OnTopLevelCreated_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnTopLevelCreated_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnTopLevelCreated_Params_Data)");
class  WindowTreeClient_OnWindowBoundsChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowBoundsChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowBoundsChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowBoundsChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowBoundsChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowBoundsChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> new_bounds;
  int32_t state;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceIdAllocation_Data> local_surface_id_allocation;

 private:
  WindowTreeClient_OnWindowBoundsChanged_Params_Data();
  ~WindowTreeClient_OnWindowBoundsChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowBoundsChanged_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnWindowBoundsChanged_Params_Data)");
class  WindowTreeClient_OnWindowTransformChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowTransformChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowTransformChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowTransformChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowTransformChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowTransformChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> new_transform;

 private:
  WindowTreeClient_OnWindowTransformChanged_Params_Data();
  ~WindowTreeClient_OnWindowTransformChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowTransformChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowTransformChanged_Params_Data)");
class  WindowTreeClient_OnTransientWindowAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnTransientWindowAdded_Params_Data));
      new (data()) WindowTreeClient_OnTransientWindowAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnTransientWindowAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnTransientWindowAdded_Params_Data>(index_);
    }
    WindowTreeClient_OnTransientWindowAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint64_t transient_window_id;

 private:
  WindowTreeClient_OnTransientWindowAdded_Params_Data();
  ~WindowTreeClient_OnTransientWindowAdded_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnTransientWindowAdded_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnTransientWindowAdded_Params_Data)");
class  WindowTreeClient_OnTransientWindowRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnTransientWindowRemoved_Params_Data));
      new (data()) WindowTreeClient_OnTransientWindowRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnTransientWindowRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnTransientWindowRemoved_Params_Data>(index_);
    }
    WindowTreeClient_OnTransientWindowRemoved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint64_t transient_window_id;

 private:
  WindowTreeClient_OnTransientWindowRemoved_Params_Data();
  ~WindowTreeClient_OnTransientWindowRemoved_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnTransientWindowRemoved_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnTransientWindowRemoved_Params_Data)");
class  WindowTreeClient_OnWindowHierarchyChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowHierarchyChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowHierarchyChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowHierarchyChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowHierarchyChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowHierarchyChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint64_t old_parent;
  uint64_t new_parent;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ws::mojom::internal::WindowData_Data>>> windows;

 private:
  WindowTreeClient_OnWindowHierarchyChanged_Params_Data();
  ~WindowTreeClient_OnWindowHierarchyChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowHierarchyChanged_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnWindowHierarchyChanged_Params_Data)");
class  WindowTreeClient_OnWindowReordered_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowReordered_Params_Data));
      new (data()) WindowTreeClient_OnWindowReordered_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowReordered_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowReordered_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowReordered_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint64_t relative_window_id;
  int32_t direction;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnWindowReordered_Params_Data();
  ~WindowTreeClient_OnWindowReordered_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowReordered_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnWindowReordered_Params_Data)");
class  WindowTreeClient_OnWindowDeleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowDeleted_Params_Data));
      new (data()) WindowTreeClient_OnWindowDeleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowDeleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowDeleted_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowDeleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;

 private:
  WindowTreeClient_OnWindowDeleted_Params_Data();
  ~WindowTreeClient_OnWindowDeleted_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowDeleted_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnWindowDeleted_Params_Data)");
class  WindowTreeClient_OnWindowVisibilityChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowVisibilityChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowVisibilityChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowVisibilityChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowVisibilityChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowVisibilityChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint8_t visible : 1;
  uint8_t padfinal_[7];

 private:
  WindowTreeClient_OnWindowVisibilityChanged_Params_Data();
  ~WindowTreeClient_OnWindowVisibilityChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowVisibilityChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowVisibilityChanged_Params_Data)");
class  WindowTreeClient_OnWindowDisplayChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowDisplayChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowDisplayChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowDisplayChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowDisplayChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowDisplayChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  int64_t display_id;

 private:
  WindowTreeClient_OnWindowDisplayChanged_Params_Data();
  ~WindowTreeClient_OnWindowDisplayChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowDisplayChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowDisplayChanged_Params_Data)");
class  WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint8_t drawn : 1;
  uint8_t padfinal_[7];

 private:
  WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data();
  ~WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data)");
class  WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> new_data;

 private:
  WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data();
  ~WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data)");
class  WindowTreeClient_OnWindowInputEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowInputEvent_Params_Data));
      new (data()) WindowTreeClient_OnWindowInputEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowInputEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowInputEvent_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowInputEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t event_id;
  uint8_t matches_event_observer : 1;
  uint8_t pad1_[3];
  uint64_t window;
  int64_t display_id;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  WindowTreeClient_OnWindowInputEvent_Params_Data();
  ~WindowTreeClient_OnWindowInputEvent_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowInputEvent_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnWindowInputEvent_Params_Data)");
class  WindowTreeClient_OnObservedInputEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnObservedInputEvent_Params_Data));
      new (data()) WindowTreeClient_OnObservedInputEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnObservedInputEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnObservedInputEvent_Params_Data>(index_);
    }
    WindowTreeClient_OnObservedInputEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  WindowTreeClient_OnObservedInputEvent_Params_Data();
  ~WindowTreeClient_OnObservedInputEvent_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnObservedInputEvent_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnObservedInputEvent_Params_Data)");
class  WindowTreeClient_OnWindowFocused_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowFocused_Params_Data));
      new (data()) WindowTreeClient_OnWindowFocused_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowFocused_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowFocused_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowFocused_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t focused_window_id;

 private:
  WindowTreeClient_OnWindowFocused_Params_Data();
  ~WindowTreeClient_OnWindowFocused_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowFocused_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnWindowFocused_Params_Data)");
class  WindowTreeClient_OnWindowCursorChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowCursorChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowCursorChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowCursorChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowCursorChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowCursorChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::ui::mojom::internal::Cursor_Data> cursor;

 private:
  WindowTreeClient_OnWindowCursorChanged_Params_Data();
  ~WindowTreeClient_OnWindowCursorChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowCursorChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowCursorChanged_Params_Data)");
class  WindowTreeClient_OnDragDropStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragDropStart_Params_Data));
      new (data()) WindowTreeClient_OnDragDropStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragDropStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragDropStart_Params_Data>(index_);
    }
    WindowTreeClient_OnDragDropStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> drag_data;

 private:
  WindowTreeClient_OnDragDropStart_Params_Data();
  ~WindowTreeClient_OnDragDropStart_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragDropStart_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnDragDropStart_Params_Data)");
class  WindowTreeClient_OnDragEnter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragEnter_Params_Data));
      new (data()) WindowTreeClient_OnDragEnter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragEnter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragEnter_Params_Data>(index_);
    }
    WindowTreeClient_OnDragEnter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint32_t key_state;
  uint32_t effect_bitmask;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> location_in_root;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> location;

 private:
  WindowTreeClient_OnDragEnter_Params_Data();
  ~WindowTreeClient_OnDragEnter_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragEnter_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnDragEnter_Params_Data)");
class  WindowTreeClient_OnDragEnter_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragEnter_ResponseParams_Data));
      new (data()) WindowTreeClient_OnDragEnter_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragEnter_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragEnter_ResponseParams_Data>(index_);
    }
    WindowTreeClient_OnDragEnter_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t supported_op_bitmask;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnDragEnter_ResponseParams_Data();
  ~WindowTreeClient_OnDragEnter_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragEnter_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnDragEnter_ResponseParams_Data)");
class  WindowTreeClient_OnDragOver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragOver_Params_Data));
      new (data()) WindowTreeClient_OnDragOver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragOver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragOver_Params_Data>(index_);
    }
    WindowTreeClient_OnDragOver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint32_t key_state;
  uint32_t effect_bitmask;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> location_in_root;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> location;

 private:
  WindowTreeClient_OnDragOver_Params_Data();
  ~WindowTreeClient_OnDragOver_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragOver_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnDragOver_Params_Data)");
class  WindowTreeClient_OnDragOver_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragOver_ResponseParams_Data));
      new (data()) WindowTreeClient_OnDragOver_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragOver_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragOver_ResponseParams_Data>(index_);
    }
    WindowTreeClient_OnDragOver_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t supported_op_bitmask;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnDragOver_ResponseParams_Data();
  ~WindowTreeClient_OnDragOver_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragOver_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnDragOver_ResponseParams_Data)");
class  WindowTreeClient_OnDragLeave_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragLeave_Params_Data));
      new (data()) WindowTreeClient_OnDragLeave_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragLeave_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragLeave_Params_Data>(index_);
    }
    WindowTreeClient_OnDragLeave_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;

 private:
  WindowTreeClient_OnDragLeave_Params_Data();
  ~WindowTreeClient_OnDragLeave_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragLeave_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnDragLeave_Params_Data)");
class  WindowTreeClient_OnCompleteDrop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnCompleteDrop_Params_Data));
      new (data()) WindowTreeClient_OnCompleteDrop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnCompleteDrop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnCompleteDrop_Params_Data>(index_);
    }
    WindowTreeClient_OnCompleteDrop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint32_t key_state;
  uint32_t effect_bitmask;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> location_in_root;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> location;

 private:
  WindowTreeClient_OnCompleteDrop_Params_Data();
  ~WindowTreeClient_OnCompleteDrop_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnCompleteDrop_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnCompleteDrop_Params_Data)");
class  WindowTreeClient_OnCompleteDrop_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnCompleteDrop_ResponseParams_Data));
      new (data()) WindowTreeClient_OnCompleteDrop_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnCompleteDrop_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnCompleteDrop_ResponseParams_Data>(index_);
    }
    WindowTreeClient_OnCompleteDrop_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t action_taken;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnCompleteDrop_ResponseParams_Data();
  ~WindowTreeClient_OnCompleteDrop_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnCompleteDrop_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnCompleteDrop_ResponseParams_Data)");
class  WindowTreeClient_OnPerformDragDropCompleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnPerformDragDropCompleted_Params_Data));
      new (data()) WindowTreeClient_OnPerformDragDropCompleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnPerformDragDropCompleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnPerformDragDropCompleted_Params_Data>(index_);
    }
    WindowTreeClient_OnPerformDragDropCompleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t success : 1;
  uint8_t pad1_[3];
  uint32_t action_taken;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnPerformDragDropCompleted_Params_Data();
  ~WindowTreeClient_OnPerformDragDropCompleted_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnPerformDragDropCompleted_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnPerformDragDropCompleted_Params_Data)");
class  WindowTreeClient_OnDragDropDone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragDropDone_Params_Data));
      new (data()) WindowTreeClient_OnDragDropDone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragDropDone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragDropDone_Params_Data>(index_);
    }
    WindowTreeClient_OnDragDropDone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowTreeClient_OnDragDropDone_Params_Data();
  ~WindowTreeClient_OnDragDropDone_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragDropDone_Params_Data) == 8,
              "Bad sizeof(WindowTreeClient_OnDragDropDone_Params_Data)");
class  WindowTreeClient_OnTopmostWindowChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnTopmostWindowChanged_Params_Data));
      new (data()) WindowTreeClient_OnTopmostWindowChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnTopmostWindowChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnTopmostWindowChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnTopmostWindowChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint64_t>> topmost_ids;

 private:
  WindowTreeClient_OnTopmostWindowChanged_Params_Data();
  ~WindowTreeClient_OnTopmostWindowChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnTopmostWindowChanged_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnTopmostWindowChanged_Params_Data)");
class  WindowTreeClient_OnChangeCompleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnChangeCompleted_Params_Data));
      new (data()) WindowTreeClient_OnChangeCompleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnChangeCompleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnChangeCompleted_Params_Data>(index_);
    }
    WindowTreeClient_OnChangeCompleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t success : 1;
  uint8_t padfinal_[3];

 private:
  WindowTreeClient_OnChangeCompleted_Params_Data();
  ~WindowTreeClient_OnChangeCompleted_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnChangeCompleted_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnChangeCompleted_Params_Data)");
class  WindowTreeClient_RequestClose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_RequestClose_Params_Data));
      new (data()) WindowTreeClient_RequestClose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_RequestClose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_RequestClose_Params_Data>(index_);
    }
    WindowTreeClient_RequestClose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTreeClient_RequestClose_Params_Data();
  ~WindowTreeClient_RequestClose_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_RequestClose_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_RequestClose_Params_Data)");
class  WindowTreeClient_GetScreenProviderObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_GetScreenProviderObserver_Params_Data));
      new (data()) WindowTreeClient_GetScreenProviderObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_GetScreenProviderObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_GetScreenProviderObserver_Params_Data>(index_);
    }
    WindowTreeClient_GetScreenProviderObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data observer;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_GetScreenProviderObserver_Params_Data();
  ~WindowTreeClient_GetScreenProviderObserver_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_GetScreenProviderObserver_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_GetScreenProviderObserver_Params_Data)");
class  WindowTreeClient_OnOcclusionStatesChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnOcclusionStatesChanged_Params_Data));
      new (data()) WindowTreeClient_OnOcclusionStatesChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnOcclusionStatesChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnOcclusionStatesChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnOcclusionStatesChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<uint64_t, int32_t>> occlusion_changes;

 private:
  WindowTreeClient_OnOcclusionStatesChanged_Params_Data();
  ~WindowTreeClient_OnOcclusionStatesChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnOcclusionStatesChanged_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnOcclusionStatesChanged_Params_Data)");
class  WindowTreeClient_CleanupGestureState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_CleanupGestureState_Params_Data));
      new (data()) WindowTreeClient_CleanupGestureState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_CleanupGestureState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_CleanupGestureState_Params_Data>(index_);
    }
    WindowTreeClient_CleanupGestureState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTreeClient_CleanupGestureState_Params_Data();
  ~WindowTreeClient_CleanupGestureState_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_CleanupGestureState_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_CleanupGestureState_Params_Data)");
class  WindowTreeClient_OnWindowResizeLoopStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowResizeLoopStarted_Params_Data));
      new (data()) WindowTreeClient_OnWindowResizeLoopStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowResizeLoopStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowResizeLoopStarted_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowResizeLoopStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTreeClient_OnWindowResizeLoopStarted_Params_Data();
  ~WindowTreeClient_OnWindowResizeLoopStarted_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowResizeLoopStarted_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnWindowResizeLoopStarted_Params_Data)");
class  WindowTreeClient_OnWindowResizeLoopEnded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowResizeLoopEnded_Params_Data));
      new (data()) WindowTreeClient_OnWindowResizeLoopEnded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowResizeLoopEnded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowResizeLoopEnded_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowResizeLoopEnded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTreeClient_OnWindowResizeLoopEnded_Params_Data();
  ~WindowTreeClient_OnWindowResizeLoopEnded_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowResizeLoopEnded_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnWindowResizeLoopEnded_Params_Data)");
class  WindowTreeFactory_CreateWindowTree_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeFactory_CreateWindowTree_Params_Data));
      new (data()) WindowTreeFactory_CreateWindowTree_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeFactory_CreateWindowTree_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeFactory_CreateWindowTree_Params_Data>(index_);
    }
    WindowTreeFactory_CreateWindowTree_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data tree_request;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  WindowTreeFactory_CreateWindowTree_Params_Data();
  ~WindowTreeFactory_CreateWindowTree_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeFactory_CreateWindowTree_Params_Data) == 24,
              "Bad sizeof(WindowTreeFactory_CreateWindowTree_Params_Data)");

}  // namespace internal
class WindowTree_NewWindow_ParamsDataView {
 public:
  WindowTree_NewWindow_ParamsDataView() {}

  WindowTree_NewWindow_ParamsDataView(
      internal::WindowTree_NewWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_NewWindow_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_NewTopLevelWindow_ParamsDataView {
 public:
  WindowTree_NewTopLevelWindow_ParamsDataView() {}

  WindowTree_NewTopLevelWindow_ParamsDataView(
      internal::WindowTree_NewTopLevelWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_NewTopLevelWindow_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_DeleteWindow_ParamsDataView {
 public:
  WindowTree_DeleteWindow_ParamsDataView() {}

  WindowTree_DeleteWindow_ParamsDataView(
      internal::WindowTree_DeleteWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_DeleteWindow_Params_Data* data_ = nullptr;
};

class WindowTree_SetCapture_ParamsDataView {
 public:
  WindowTree_SetCapture_ParamsDataView() {}

  WindowTree_SetCapture_ParamsDataView(
      internal::WindowTree_SetCapture_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_SetCapture_Params_Data* data_ = nullptr;
};

class WindowTree_ReleaseCapture_ParamsDataView {
 public:
  WindowTree_ReleaseCapture_ParamsDataView() {}

  WindowTree_ReleaseCapture_ParamsDataView(
      internal::WindowTree_ReleaseCapture_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_ReleaseCapture_Params_Data* data_ = nullptr;
};

class WindowTree_ObserveEventTypes_ParamsDataView {
 public:
  WindowTree_ObserveEventTypes_ParamsDataView() {}

  WindowTree_ObserveEventTypes_ParamsDataView(
      internal::WindowTree_ObserveEventTypes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypesDataView(
      mojo::ArrayDataView<::ui::mojom::EventType>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTypes(UserType* output) {
    auto* pointer = data_->types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::EventType>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_ObserveEventTypes_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_SetWindowBounds_ParamsDataView {
 public:
  WindowTree_SetWindowBounds_ParamsDataView() {}

  WindowTree_SetWindowBounds_ParamsDataView(
      internal::WindowTree_SetWindowBounds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBounds(UserType* output) {
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetLocalSurfaceIdAllocationDataView(
      ::viz::mojom::LocalSurfaceIdAllocationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceIdAllocation(UserType* output) {
    auto* pointer = data_->local_surface_id_allocation.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_SetWindowBounds_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_UpdateLocalSurfaceIdFromChild_ParamsDataView {
 public:
  WindowTree_UpdateLocalSurfaceIdFromChild_ParamsDataView() {}

  WindowTree_UpdateLocalSurfaceIdFromChild_ParamsDataView(
      internal::WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetLocalSurfaceIdAllocationDataView(
      ::viz::mojom::LocalSurfaceIdAllocationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceIdAllocation(UserType* output) {
    auto* pointer = data_->local_surface_id_allocation.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_AllocateLocalSurfaceId_ParamsDataView {
 public:
  WindowTree_AllocateLocalSurfaceId_ParamsDataView() {}

  WindowTree_AllocateLocalSurfaceId_ParamsDataView(
      internal::WindowTree_AllocateLocalSurfaceId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_AllocateLocalSurfaceId_Params_Data* data_ = nullptr;
};

class WindowTree_SetWindowTransform_ParamsDataView {
 public:
  WindowTree_SetWindowTransform_ParamsDataView() {}

  WindowTree_SetWindowTransform_ParamsDataView(
      internal::WindowTree_SetWindowTransform_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetTransformDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransform(UserType* output) {
    auto* pointer = data_->transform.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_SetWindowTransform_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_SetClientArea_ParamsDataView {
 public:
  WindowTree_SetClientArea_ParamsDataView() {}

  WindowTree_SetClientArea_ParamsDataView(
      internal::WindowTree_SetClientArea_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetInsetsDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInsets(UserType* output) {
    auto* pointer = data_->insets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsDataView>(
        pointer, output, context_);
  }
  inline void GetAdditionalClientAreasDataView(
      mojo::ArrayDataView<::gfx::mojom::RectDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdditionalClientAreas(UserType* output) {
    auto* pointer = data_->additional_client_areas.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_SetClientArea_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_SetHitTestInsets_ParamsDataView {
 public:
  WindowTree_SetHitTestInsets_ParamsDataView() {}

  WindowTree_SetHitTestInsets_ParamsDataView(
      internal::WindowTree_SetHitTestInsets_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetMouseDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMouse(UserType* output) {
    auto* pointer = data_->mouse.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsDataView>(
        pointer, output, context_);
  }
  inline void GetTouchDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouch(UserType* output) {
    auto* pointer = data_->touch.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_SetHitTestInsets_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_SetShape_ParamsDataView {
 public:
  WindowTree_SetShape_ParamsDataView() {}

  WindowTree_SetShape_ParamsDataView(
      internal::WindowTree_SetShape_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetShapeDataView(
      mojo::ArrayDataView<::gfx::mojom::RectDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShape(UserType* output) {
    auto* pointer = data_->shape.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_SetShape_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_SetCanAcceptDrops_ParamsDataView {
 public:
  WindowTree_SetCanAcceptDrops_ParamsDataView() {}

  WindowTree_SetCanAcceptDrops_ParamsDataView(
      internal::WindowTree_SetCanAcceptDrops_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  bool accepts_drops() const {
    return data_->accepts_drops;
  }
 private:
  internal::WindowTree_SetCanAcceptDrops_Params_Data* data_ = nullptr;
};

class WindowTree_SetWindowVisibility_ParamsDataView {
 public:
  WindowTree_SetWindowVisibility_ParamsDataView() {}

  WindowTree_SetWindowVisibility_ParamsDataView(
      internal::WindowTree_SetWindowVisibility_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::WindowTree_SetWindowVisibility_Params_Data* data_ = nullptr;
};

class WindowTree_SetWindowProperty_ParamsDataView {
 public:
  WindowTree_SetWindowProperty_ParamsDataView() {}

  WindowTree_SetWindowProperty_ParamsDataView(
      internal::WindowTree_SetWindowProperty_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_SetWindowProperty_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_SetWindowOpacity_ParamsDataView {
 public:
  WindowTree_SetWindowOpacity_ParamsDataView() {}

  WindowTree_SetWindowOpacity_ParamsDataView(
      internal::WindowTree_SetWindowOpacity_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  float opacity() const {
    return data_->opacity;
  }
 private:
  internal::WindowTree_SetWindowOpacity_Params_Data* data_ = nullptr;
};

class WindowTree_SetWindowTransparent_ParamsDataView {
 public:
  WindowTree_SetWindowTransparent_ParamsDataView() {}

  WindowTree_SetWindowTransparent_ParamsDataView(
      internal::WindowTree_SetWindowTransparent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  bool transparent() const {
    return data_->transparent;
  }
 private:
  internal::WindowTree_SetWindowTransparent_Params_Data* data_ = nullptr;
};

class WindowTree_AttachCompositorFrameSink_ParamsDataView {
 public:
  WindowTree_AttachCompositorFrameSink_ParamsDataView() {}

  WindowTree_AttachCompositorFrameSink_ParamsDataView(
      internal::WindowTree_AttachCompositorFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  UserType TakeCompositorFrameSink() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
            &data_->compositor_frame_sink, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowTree_AttachCompositorFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_AddWindow_ParamsDataView {
 public:
  WindowTree_AddWindow_ParamsDataView() {}

  WindowTree_AddWindow_ParamsDataView(
      internal::WindowTree_AddWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t parent() const {
    return data_->parent;
  }
  uint64_t child() const {
    return data_->child;
  }
 private:
  internal::WindowTree_AddWindow_Params_Data* data_ = nullptr;
};

class WindowTree_RemoveWindowFromParent_ParamsDataView {
 public:
  WindowTree_RemoveWindowFromParent_ParamsDataView() {}

  WindowTree_RemoveWindowFromParent_ParamsDataView(
      internal::WindowTree_RemoveWindowFromParent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_RemoveWindowFromParent_Params_Data* data_ = nullptr;
};

class WindowTree_AddTransientWindow_ParamsDataView {
 public:
  WindowTree_AddTransientWindow_ParamsDataView() {}

  WindowTree_AddTransientWindow_ParamsDataView(
      internal::WindowTree_AddTransientWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  uint64_t transient_window_id() const {
    return data_->transient_window_id;
  }
 private:
  internal::WindowTree_AddTransientWindow_Params_Data* data_ = nullptr;
};

class WindowTree_RemoveTransientWindowFromParent_ParamsDataView {
 public:
  WindowTree_RemoveTransientWindowFromParent_ParamsDataView() {}

  WindowTree_RemoveTransientWindowFromParent_ParamsDataView(
      internal::WindowTree_RemoveTransientWindowFromParent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t transient_window_id() const {
    return data_->transient_window_id;
  }
 private:
  internal::WindowTree_RemoveTransientWindowFromParent_Params_Data* data_ = nullptr;
};

class WindowTree_SetModalType_ParamsDataView {
 public:
  WindowTree_SetModalType_ParamsDataView() {}

  WindowTree_SetModalType_ParamsDataView(
      internal::WindowTree_SetModalType_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ModalType>(
        data_value, output);
  }

  ::ui::mojom::ModalType type() const {
    return static_cast<::ui::mojom::ModalType>(data_->type);
  }
 private:
  internal::WindowTree_SetModalType_Params_Data* data_ = nullptr;
};

class WindowTree_ReorderWindow_ParamsDataView {
 public:
  WindowTree_ReorderWindow_ParamsDataView() {}

  WindowTree_ReorderWindow_ParamsDataView(
      internal::WindowTree_ReorderWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  uint64_t relative_window_id() const {
    return data_->relative_window_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::ws::mojom::OrderDirection>(
        data_value, output);
  }

  ::ws::mojom::OrderDirection direction() const {
    return static_cast<::ws::mojom::OrderDirection>(data_->direction);
  }
 private:
  internal::WindowTree_ReorderWindow_Params_Data* data_ = nullptr;
};

class WindowTree_GetWindowTree_ParamsDataView {
 public:
  WindowTree_GetWindowTree_ParamsDataView() {}

  WindowTree_GetWindowTree_ParamsDataView(
      internal::WindowTree_GetWindowTree_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_GetWindowTree_Params_Data* data_ = nullptr;
};

class WindowTree_GetWindowTree_ResponseParamsDataView {
 public:
  WindowTree_GetWindowTree_ResponseParamsDataView() {}

  WindowTree_GetWindowTree_ResponseParamsDataView(
      internal::WindowTree_GetWindowTree_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWindowsDataView(
      mojo::ArrayDataView<::ws::mojom::WindowDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWindows(UserType* output) {
    auto* pointer = data_->windows.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ws::mojom::WindowDataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_GetWindowTree_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_Embed_ParamsDataView {
 public:
  WindowTree_Embed_ParamsDataView() {}

  WindowTree_Embed_ParamsDataView(
      internal::WindowTree_Embed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::WindowTreeClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t embed_flags() const {
    return data_->embed_flags;
  }
 private:
  internal::WindowTree_Embed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_Embed_ResponseParamsDataView {
 public:
  WindowTree_Embed_ResponseParamsDataView() {}

  WindowTree_Embed_ResponseParamsDataView(
      internal::WindowTree_Embed_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowTree_Embed_ResponseParams_Data* data_ = nullptr;
};

class WindowTree_ScheduleEmbed_ParamsDataView {
 public:
  WindowTree_ScheduleEmbed_ParamsDataView() {}

  WindowTree_ScheduleEmbed_ParamsDataView(
      internal::WindowTree_ScheduleEmbed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::WindowTreeClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowTree_ScheduleEmbed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_ScheduleEmbed_ResponseParamsDataView {
 public:
  WindowTree_ScheduleEmbed_ResponseParamsDataView() {}

  WindowTree_ScheduleEmbed_ResponseParamsDataView(
      internal::WindowTree_ScheduleEmbed_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_ScheduleEmbed_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_ScheduleEmbedForExistingClient_ParamsDataView {
 public:
  WindowTree_ScheduleEmbedForExistingClient_ParamsDataView() {}

  WindowTree_ScheduleEmbedForExistingClient_ParamsDataView(
      internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data* data_ = nullptr;
};

class WindowTree_ScheduleEmbedForExistingClient_ResponseParamsDataView {
 public:
  WindowTree_ScheduleEmbedForExistingClient_ResponseParamsDataView() {}

  WindowTree_ScheduleEmbedForExistingClient_ResponseParamsDataView(
      internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_EmbedUsingToken_ParamsDataView {
 public:
  WindowTree_EmbedUsingToken_ParamsDataView() {}

  WindowTree_EmbedUsingToken_ParamsDataView(
      internal::WindowTree_EmbedUsingToken_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  uint32_t embed_flags() const {
    return data_->embed_flags;
  }
 private:
  internal::WindowTree_EmbedUsingToken_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_EmbedUsingToken_ResponseParamsDataView {
 public:
  WindowTree_EmbedUsingToken_ResponseParamsDataView() {}

  WindowTree_EmbedUsingToken_ResponseParamsDataView(
      internal::WindowTree_EmbedUsingToken_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowTree_EmbedUsingToken_ResponseParams_Data* data_ = nullptr;
};

class WindowTree_AttachFrameSinkId_ParamsDataView {
 public:
  WindowTree_AttachFrameSinkId_ParamsDataView() {}

  WindowTree_AttachFrameSinkId_ParamsDataView(
      internal::WindowTree_AttachFrameSinkId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_AttachFrameSinkId_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_UnattachFrameSinkId_ParamsDataView {
 public:
  WindowTree_UnattachFrameSinkId_ParamsDataView() {}

  WindowTree_UnattachFrameSinkId_ParamsDataView(
      internal::WindowTree_UnattachFrameSinkId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_UnattachFrameSinkId_Params_Data* data_ = nullptr;
};

class WindowTree_SetFocus_ParamsDataView {
 public:
  WindowTree_SetFocus_ParamsDataView() {}

  WindowTree_SetFocus_ParamsDataView(
      internal::WindowTree_SetFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_SetFocus_Params_Data* data_ = nullptr;
};

class WindowTree_SetCanFocus_ParamsDataView {
 public:
  WindowTree_SetCanFocus_ParamsDataView() {}

  WindowTree_SetCanFocus_ParamsDataView(
      internal::WindowTree_SetCanFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  bool can_focus() const {
    return data_->can_focus;
  }
 private:
  internal::WindowTree_SetCanFocus_Params_Data* data_ = nullptr;
};

class WindowTree_SetCursor_ParamsDataView {
 public:
  WindowTree_SetCursor_ParamsDataView() {}

  WindowTree_SetCursor_ParamsDataView(
      internal::WindowTree_SetCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetCursorDataView(
      ::ui::mojom::CursorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursor(UserType* output) {
    auto* pointer = data_->cursor.Get();
    return mojo::internal::Deserialize<::ui::mojom::CursorDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_SetCursor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_SetWindowTextInputState_ParamsDataView {
 public:
  WindowTree_SetWindowTextInputState_ParamsDataView() {}

  WindowTree_SetWindowTextInputState_ParamsDataView(
      internal::WindowTree_SetWindowTextInputState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetStateDataView(
      ::ui::mojom::TextInputStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::ui::mojom::TextInputStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_SetWindowTextInputState_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_SetImeVisibility_ParamsDataView {
 public:
  WindowTree_SetImeVisibility_ParamsDataView() {}

  WindowTree_SetImeVisibility_ParamsDataView(
      internal::WindowTree_SetImeVisibility_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  bool visible() const {
    return data_->visible;
  }
  inline void GetStateDataView(
      ::ui::mojom::TextInputStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::ui::mojom::TextInputStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTree_SetImeVisibility_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_SetEventTargetingPolicy_ParamsDataView {
 public:
  WindowTree_SetEventTargetingPolicy_ParamsDataView() {}

  WindowTree_SetEventTargetingPolicy_ParamsDataView(
      internal::WindowTree_SetEventTargetingPolicy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPolicy(UserType* output) const {
    auto data_value = data_->policy;
    return mojo::internal::Deserialize<::ws::mojom::EventTargetingPolicy>(
        data_value, output);
  }

  ::ws::mojom::EventTargetingPolicy policy() const {
    return static_cast<::ws::mojom::EventTargetingPolicy>(data_->policy);
  }
 private:
  internal::WindowTree_SetEventTargetingPolicy_Params_Data* data_ = nullptr;
};

class WindowTree_OnWindowInputEventAck_ParamsDataView {
 public:
  WindowTree_OnWindowInputEventAck_ParamsDataView() {}

  WindowTree_OnWindowInputEventAck_ParamsDataView(
      internal::WindowTree_OnWindowInputEventAck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t event_id() const {
    return data_->event_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::ws::mojom::EventResult>(
        data_value, output);
  }

  ::ws::mojom::EventResult result() const {
    return static_cast<::ws::mojom::EventResult>(data_->result);
  }
 private:
  internal::WindowTree_OnWindowInputEventAck_Params_Data* data_ = nullptr;
};

class WindowTree_DeactivateWindow_ParamsDataView {
 public:
  WindowTree_DeactivateWindow_ParamsDataView() {}

  WindowTree_DeactivateWindow_ParamsDataView(
      internal::WindowTree_DeactivateWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_DeactivateWindow_Params_Data* data_ = nullptr;
};

class WindowTree_StackAbove_ParamsDataView {
 public:
  WindowTree_StackAbove_ParamsDataView() {}

  WindowTree_StackAbove_ParamsDataView(
      internal::WindowTree_StackAbove_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t above_id() const {
    return data_->above_id;
  }
  uint64_t below_id() const {
    return data_->below_id;
  }
 private:
  internal::WindowTree_StackAbove_Params_Data* data_ = nullptr;
};

class WindowTree_StackAtTop_ParamsDataView {
 public:
  WindowTree_StackAtTop_ParamsDataView() {}

  WindowTree_StackAtTop_ParamsDataView(
      internal::WindowTree_StackAtTop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_StackAtTop_Params_Data* data_ = nullptr;
};

class WindowTree_BindWindowManagerInterface_ParamsDataView {
 public:
  WindowTree_BindWindowManagerInterface_ParamsDataView() {}

  WindowTree_BindWindowManagerInterface_ParamsDataView(
      internal::WindowTree_BindWindowManagerInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeWindowManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::WindowManagerAssociatedRequestDataView>(
            &data_->window_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowTree_BindWindowManagerInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_GetCursorLocationMemory_ParamsDataView {
 public:
  WindowTree_GetCursorLocationMemory_ParamsDataView() {}

  WindowTree_GetCursorLocationMemory_ParamsDataView(
      internal::WindowTree_GetCursorLocationMemory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowTree_GetCursorLocationMemory_Params_Data* data_ = nullptr;
};

class WindowTree_GetCursorLocationMemory_ResponseParamsDataView {
 public:
  WindowTree_GetCursorLocationMemory_ResponseParamsDataView() {}

  WindowTree_GetCursorLocationMemory_ResponseParamsDataView(
      internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeCursorBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->cursor_buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_PerformWindowMove_ParamsDataView {
 public:
  WindowTree_PerformWindowMove_ParamsDataView() {}

  WindowTree_PerformWindowMove_ParamsDataView(
      internal::WindowTree_PerformWindowMove_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) const {
    auto data_value = data_->source;
    return mojo::internal::Deserialize<::ws::mojom::MoveLoopSource>(
        data_value, output);
  }

  ::ws::mojom::MoveLoopSource source() const {
    return static_cast<::ws::mojom::MoveLoopSource>(data_->source);
  }
  inline void GetCursorDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursor(UserType* output) {
    auto* pointer = data_->cursor.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHitTest(UserType* output) const {
    auto data_value = data_->hit_test;
    return mojo::internal::Deserialize<::ui::mojom::HitTest>(
        data_value, output);
  }

  ::ui::mojom::HitTest hit_test() const {
    return static_cast<::ui::mojom::HitTest>(data_->hit_test);
  }
 private:
  internal::WindowTree_PerformWindowMove_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_CancelWindowMove_ParamsDataView {
 public:
  WindowTree_CancelWindowMove_ParamsDataView() {}

  WindowTree_CancelWindowMove_ParamsDataView(
      internal::WindowTree_CancelWindowMove_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_CancelWindowMove_Params_Data* data_ = nullptr;
};

class WindowTree_PerformDragDrop_ParamsDataView {
 public:
  WindowTree_PerformDragDrop_ParamsDataView() {}

  WindowTree_PerformDragDrop_ParamsDataView(
      internal::WindowTree_PerformDragDrop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t source_window_id() const {
    return data_->source_window_id;
  }
  inline void GetScreenLocationDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScreenLocation(UserType* output) {
    auto* pointer = data_->screen_location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  inline void GetDragDataDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDragData(UserType* output) {
    auto* pointer = data_->drag_data.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
  inline void GetDragImageDataView(
      ::gfx::mojom::ImageSkiaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDragImage(UserType* output) {
    auto* pointer = data_->drag_image.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ImageSkiaDataView>(
        pointer, output, context_);
  }
  inline void GetDragImageOffsetDataView(
      ::gfx::mojom::Vector2dDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDragImageOffset(UserType* output) {
    auto* pointer = data_->drag_image_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dDataView>(
        pointer, output, context_);
  }
  uint32_t drag_operation() const {
    return data_->drag_operation;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) const {
    auto data_value = data_->source;
    return mojo::internal::Deserialize<::ui::mojom::PointerKind>(
        data_value, output);
  }

  ::ui::mojom::PointerKind source() const {
    return static_cast<::ui::mojom::PointerKind>(data_->source);
  }
 private:
  internal::WindowTree_PerformDragDrop_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTree_CancelDragDrop_ParamsDataView {
 public:
  WindowTree_CancelDragDrop_ParamsDataView() {}

  WindowTree_CancelDragDrop_ParamsDataView(
      internal::WindowTree_CancelDragDrop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_CancelDragDrop_Params_Data* data_ = nullptr;
};

class WindowTree_ObserveTopmostWindow_ParamsDataView {
 public:
  WindowTree_ObserveTopmostWindow_ParamsDataView() {}

  WindowTree_ObserveTopmostWindow_ParamsDataView(
      internal::WindowTree_ObserveTopmostWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) const {
    auto data_value = data_->source;
    return mojo::internal::Deserialize<::ws::mojom::MoveLoopSource>(
        data_value, output);
  }

  ::ws::mojom::MoveLoopSource source() const {
    return static_cast<::ws::mojom::MoveLoopSource>(data_->source);
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_ObserveTopmostWindow_Params_Data* data_ = nullptr;
};

class WindowTree_StopObservingTopmostWindow_ParamsDataView {
 public:
  WindowTree_StopObservingTopmostWindow_ParamsDataView() {}

  WindowTree_StopObservingTopmostWindow_ParamsDataView(
      internal::WindowTree_StopObservingTopmostWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowTree_StopObservingTopmostWindow_Params_Data* data_ = nullptr;
};

class WindowTree_SetWindowResizeShadow_ParamsDataView {
 public:
  WindowTree_SetWindowResizeShadow_ParamsDataView() {}

  WindowTree_SetWindowResizeShadow_ParamsDataView(
      internal::WindowTree_SetWindowResizeShadow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHitTest(UserType* output) const {
    auto data_value = data_->hit_test;
    return mojo::internal::Deserialize<::ui::mojom::HitTest>(
        data_value, output);
  }

  ::ui::mojom::HitTest hit_test() const {
    return static_cast<::ui::mojom::HitTest>(data_->hit_test);
  }
 private:
  internal::WindowTree_SetWindowResizeShadow_Params_Data* data_ = nullptr;
};

class WindowTree_CancelActiveTouchesExcept_ParamsDataView {
 public:
  WindowTree_CancelActiveTouchesExcept_ParamsDataView() {}

  WindowTree_CancelActiveTouchesExcept_ParamsDataView(
      internal::WindowTree_CancelActiveTouchesExcept_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t not_cancelled_window_id() const {
    return data_->not_cancelled_window_id;
  }
 private:
  internal::WindowTree_CancelActiveTouchesExcept_Params_Data* data_ = nullptr;
};

class WindowTree_CancelActiveTouches_ParamsDataView {
 public:
  WindowTree_CancelActiveTouches_ParamsDataView() {}

  WindowTree_CancelActiveTouches_ParamsDataView(
      internal::WindowTree_CancelActiveTouches_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_CancelActiveTouches_Params_Data* data_ = nullptr;
};

class WindowTree_TransferGestureEventsTo_ParamsDataView {
 public:
  WindowTree_TransferGestureEventsTo_ParamsDataView() {}

  WindowTree_TransferGestureEventsTo_ParamsDataView(
      internal::WindowTree_TransferGestureEventsTo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t current_id() const {
    return data_->current_id;
  }
  uint64_t new_id() const {
    return data_->new_id;
  }
  bool should_cancel() const {
    return data_->should_cancel;
  }
 private:
  internal::WindowTree_TransferGestureEventsTo_Params_Data* data_ = nullptr;
};

class WindowTree_TrackOcclusionState_ParamsDataView {
 public:
  WindowTree_TrackOcclusionState_ParamsDataView() {}

  WindowTree_TrackOcclusionState_ParamsDataView(
      internal::WindowTree_TrackOcclusionState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTree_TrackOcclusionState_Params_Data* data_ = nullptr;
};

class WindowTree_PauseWindowOcclusionTracking_ParamsDataView {
 public:
  WindowTree_PauseWindowOcclusionTracking_ParamsDataView() {}

  WindowTree_PauseWindowOcclusionTracking_ParamsDataView(
      internal::WindowTree_PauseWindowOcclusionTracking_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowTree_PauseWindowOcclusionTracking_Params_Data* data_ = nullptr;
};

class WindowTree_UnpauseWindowOcclusionTracking_ParamsDataView {
 public:
  WindowTree_UnpauseWindowOcclusionTracking_ParamsDataView() {}

  WindowTree_UnpauseWindowOcclusionTracking_ParamsDataView(
      internal::WindowTree_UnpauseWindowOcclusionTracking_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowTree_UnpauseWindowOcclusionTracking_Params_Data* data_ = nullptr;
};

class WindowTree_ConnectToImeEngine_ParamsDataView {
 public:
  WindowTree_ConnectToImeEngine_ParamsDataView() {}

  WindowTree_ConnectToImeEngine_ParamsDataView(
      internal::WindowTree_ConnectToImeEngine_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeEngineRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ime::mojom::ImeEngineRequestDataView>(
            &data_->engine_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ime::mojom::ImeEngineClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowTree_ConnectToImeEngine_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnClientId_ParamsDataView {
 public:
  WindowTreeClient_OnClientId_ParamsDataView() {}

  WindowTreeClient_OnClientId_ParamsDataView(
      internal::WindowTreeClient_OnClientId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t client_id() const {
    return data_->client_id;
  }
 private:
  internal::WindowTreeClient_OnClientId_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnEmbed_ParamsDataView {
 public:
  WindowTreeClient_OnEmbed_ParamsDataView() {}

  WindowTreeClient_OnEmbed_ParamsDataView(
      internal::WindowTreeClient_OnEmbed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRootDataView(
      ::ws::mojom::WindowDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRoot(UserType* output) {
    auto* pointer = data_->root.Get();
    return mojo::internal::Deserialize<::ws::mojom::WindowDataDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeTree() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::WindowTreePtrDataView>(
            &data_->tree, &result, context_);
    DCHECK(ret);
    return result;
  }
  int64_t display_id() const {
    return data_->display_id;
  }
  uint64_t focused_window() const {
    return data_->focused_window;
  }
  bool parent_drawn() const {
    return data_->parent_drawn;
  }
  inline void GetLocalSurfaceIdAllocationDataView(
      ::viz::mojom::LocalSurfaceIdAllocationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceIdAllocation(UserType* output) {
    auto* pointer = data_->local_surface_id_allocation.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnEmbed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnEmbedFromToken_ParamsDataView {
 public:
  WindowTreeClient_OnEmbedFromToken_ParamsDataView() {}

  WindowTreeClient_OnEmbedFromToken_ParamsDataView(
      internal::WindowTreeClient_OnEmbedFromToken_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetRootDataView(
      ::ws::mojom::WindowDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRoot(UserType* output) {
    auto* pointer = data_->root.Get();
    return mojo::internal::Deserialize<::ws::mojom::WindowDataDataView>(
        pointer, output, context_);
  }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetLocalSurfaceIdAllocationDataView(
      ::viz::mojom::LocalSurfaceIdAllocationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceIdAllocation(UserType* output) {
    auto* pointer = data_->local_surface_id_allocation.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnEmbedFromToken_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnEmbeddedAppDisconnected_ParamsDataView {
 public:
  WindowTreeClient_OnEmbeddedAppDisconnected_ParamsDataView() {}

  WindowTreeClient_OnEmbeddedAppDisconnected_ParamsDataView(
      internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
 private:
  internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnUnembed_ParamsDataView {
 public:
  WindowTreeClient_OnUnembed_ParamsDataView() {}

  WindowTreeClient_OnUnembed_ParamsDataView(
      internal::WindowTreeClient_OnUnembed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
 private:
  internal::WindowTreeClient_OnUnembed_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnCaptureChanged_ParamsDataView {
 public:
  WindowTreeClient_OnCaptureChanged_ParamsDataView() {}

  WindowTreeClient_OnCaptureChanged_ParamsDataView(
      internal::WindowTreeClient_OnCaptureChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t new_capture() const {
    return data_->new_capture;
  }
  uint64_t old_capture() const {
    return data_->old_capture;
  }
 private:
  internal::WindowTreeClient_OnCaptureChanged_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnFrameSinkIdAllocated_ParamsDataView {
 public:
  WindowTreeClient_OnFrameSinkIdAllocated_ParamsDataView() {}

  WindowTreeClient_OnFrameSinkIdAllocated_ParamsDataView(
      internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnTopLevelCreated_ParamsDataView {
 public:
  WindowTreeClient_OnTopLevelCreated_ParamsDataView() {}

  WindowTreeClient_OnTopLevelCreated_ParamsDataView(
      internal::WindowTreeClient_OnTopLevelCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  inline void GetDataDataView(
      ::ws::mojom::WindowDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::ws::mojom::WindowDataDataView>(
        pointer, output, context_);
  }
  int64_t display_id() const {
    return data_->display_id;
  }
  bool parent_drawn() const {
    return data_->parent_drawn;
  }
  inline void GetLocalSurfaceIdAllocationDataView(
      ::viz::mojom::LocalSurfaceIdAllocationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceIdAllocation(UserType* output) {
    auto* pointer = data_->local_surface_id_allocation.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnTopLevelCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnWindowBoundsChanged_ParamsDataView {
 public:
  WindowTreeClient_OnWindowBoundsChanged_ParamsDataView() {}

  WindowTreeClient_OnWindowBoundsChanged_ParamsDataView(
      internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  inline void GetNewBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewBounds(UserType* output) {
    auto* pointer = data_->new_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::ui::mojom::WindowShowState>(
        data_value, output);
  }

  ::ui::mojom::WindowShowState state() const {
    return static_cast<::ui::mojom::WindowShowState>(data_->state);
  }
  inline void GetLocalSurfaceIdAllocationDataView(
      ::viz::mojom::LocalSurfaceIdAllocationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceIdAllocation(UserType* output) {
    auto* pointer = data_->local_surface_id_allocation.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnWindowTransformChanged_ParamsDataView {
 public:
  WindowTreeClient_OnWindowTransformChanged_ParamsDataView() {}

  WindowTreeClient_OnWindowTransformChanged_ParamsDataView(
      internal::WindowTreeClient_OnWindowTransformChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  inline void GetNewTransformDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewTransform(UserType* output) {
    auto* pointer = data_->new_transform.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnWindowTransformChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnTransientWindowAdded_ParamsDataView {
 public:
  WindowTreeClient_OnTransientWindowAdded_ParamsDataView() {}

  WindowTreeClient_OnTransientWindowAdded_ParamsDataView(
      internal::WindowTreeClient_OnTransientWindowAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  uint64_t transient_window_id() const {
    return data_->transient_window_id;
  }
 private:
  internal::WindowTreeClient_OnTransientWindowAdded_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnTransientWindowRemoved_ParamsDataView {
 public:
  WindowTreeClient_OnTransientWindowRemoved_ParamsDataView() {}

  WindowTreeClient_OnTransientWindowRemoved_ParamsDataView(
      internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  uint64_t transient_window_id() const {
    return data_->transient_window_id;
  }
 private:
  internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnWindowHierarchyChanged_ParamsDataView {
 public:
  WindowTreeClient_OnWindowHierarchyChanged_ParamsDataView() {}

  WindowTreeClient_OnWindowHierarchyChanged_ParamsDataView(
      internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  uint64_t old_parent() const {
    return data_->old_parent;
  }
  uint64_t new_parent() const {
    return data_->new_parent;
  }
  inline void GetWindowsDataView(
      mojo::ArrayDataView<::ws::mojom::WindowDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWindows(UserType* output) {
    auto* pointer = data_->windows.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ws::mojom::WindowDataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnWindowReordered_ParamsDataView {
 public:
  WindowTreeClient_OnWindowReordered_ParamsDataView() {}

  WindowTreeClient_OnWindowReordered_ParamsDataView(
      internal::WindowTreeClient_OnWindowReordered_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  uint64_t relative_window_id() const {
    return data_->relative_window_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::ws::mojom::OrderDirection>(
        data_value, output);
  }

  ::ws::mojom::OrderDirection direction() const {
    return static_cast<::ws::mojom::OrderDirection>(data_->direction);
  }
 private:
  internal::WindowTreeClient_OnWindowReordered_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnWindowDeleted_ParamsDataView {
 public:
  WindowTreeClient_OnWindowDeleted_ParamsDataView() {}

  WindowTreeClient_OnWindowDeleted_ParamsDataView(
      internal::WindowTreeClient_OnWindowDeleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
 private:
  internal::WindowTreeClient_OnWindowDeleted_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnWindowVisibilityChanged_ParamsDataView {
 public:
  WindowTreeClient_OnWindowVisibilityChanged_ParamsDataView() {}

  WindowTreeClient_OnWindowVisibilityChanged_ParamsDataView(
      internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnWindowDisplayChanged_ParamsDataView {
 public:
  WindowTreeClient_OnWindowDisplayChanged_ParamsDataView() {}

  WindowTreeClient_OnWindowDisplayChanged_ParamsDataView(
      internal::WindowTreeClient_OnWindowDisplayChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  int64_t display_id() const {
    return data_->display_id;
  }
 private:
  internal::WindowTreeClient_OnWindowDisplayChanged_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnWindowParentDrawnStateChanged_ParamsDataView {
 public:
  WindowTreeClient_OnWindowParentDrawnStateChanged_ParamsDataView() {}

  WindowTreeClient_OnWindowParentDrawnStateChanged_ParamsDataView(
      internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  bool drawn() const {
    return data_->drawn;
  }
 private:
  internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnWindowSharedPropertyChanged_ParamsDataView {
 public:
  WindowTreeClient_OnWindowSharedPropertyChanged_ParamsDataView() {}

  WindowTreeClient_OnWindowSharedPropertyChanged_ParamsDataView(
      internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNewDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewData(UserType* output) {
    auto* pointer = data_->new_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnWindowInputEvent_ParamsDataView {
 public:
  WindowTreeClient_OnWindowInputEvent_ParamsDataView() {}

  WindowTreeClient_OnWindowInputEvent_ParamsDataView(
      internal::WindowTreeClient_OnWindowInputEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t event_id() const {
    return data_->event_id;
  }
  uint64_t window() const {
    return data_->window;
  }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
  bool matches_event_observer() const {
    return data_->matches_event_observer;
  }
 private:
  internal::WindowTreeClient_OnWindowInputEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnObservedInputEvent_ParamsDataView {
 public:
  WindowTreeClient_OnObservedInputEvent_ParamsDataView() {}

  WindowTreeClient_OnObservedInputEvent_ParamsDataView(
      internal::WindowTreeClient_OnObservedInputEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnObservedInputEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnWindowFocused_ParamsDataView {
 public:
  WindowTreeClient_OnWindowFocused_ParamsDataView() {}

  WindowTreeClient_OnWindowFocused_ParamsDataView(
      internal::WindowTreeClient_OnWindowFocused_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t focused_window_id() const {
    return data_->focused_window_id;
  }
 private:
  internal::WindowTreeClient_OnWindowFocused_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnWindowCursorChanged_ParamsDataView {
 public:
  WindowTreeClient_OnWindowCursorChanged_ParamsDataView() {}

  WindowTreeClient_OnWindowCursorChanged_ParamsDataView(
      internal::WindowTreeClient_OnWindowCursorChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetCursorDataView(
      ::ui::mojom::CursorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursor(UserType* output) {
    auto* pointer = data_->cursor.Get();
    return mojo::internal::Deserialize<::ui::mojom::CursorDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnWindowCursorChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnDragDropStart_ParamsDataView {
 public:
  WindowTreeClient_OnDragDropStart_ParamsDataView() {}

  WindowTreeClient_OnDragDropStart_ParamsDataView(
      internal::WindowTreeClient_OnDragDropStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDragDataDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDragData(UserType* output) {
    auto* pointer = data_->drag_data.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnDragDropStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnDragEnter_ParamsDataView {
 public:
  WindowTreeClient_OnDragEnter_ParamsDataView() {}

  WindowTreeClient_OnDragEnter_ParamsDataView(
      internal::WindowTreeClient_OnDragEnter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  uint32_t key_state() const {
    return data_->key_state;
  }
  inline void GetLocationInRootDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocationInRoot(UserType* output) {
    auto* pointer = data_->location_in_root.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetLocationDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  uint32_t effect_bitmask() const {
    return data_->effect_bitmask;
  }
 private:
  internal::WindowTreeClient_OnDragEnter_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnDragEnter_ResponseParamsDataView {
 public:
  WindowTreeClient_OnDragEnter_ResponseParamsDataView() {}

  WindowTreeClient_OnDragEnter_ResponseParamsDataView(
      internal::WindowTreeClient_OnDragEnter_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t supported_op_bitmask() const {
    return data_->supported_op_bitmask;
  }
 private:
  internal::WindowTreeClient_OnDragEnter_ResponseParams_Data* data_ = nullptr;
};

class WindowTreeClient_OnDragOver_ParamsDataView {
 public:
  WindowTreeClient_OnDragOver_ParamsDataView() {}

  WindowTreeClient_OnDragOver_ParamsDataView(
      internal::WindowTreeClient_OnDragOver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  uint32_t key_state() const {
    return data_->key_state;
  }
  inline void GetLocationInRootDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocationInRoot(UserType* output) {
    auto* pointer = data_->location_in_root.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetLocationDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  uint32_t effect_bitmask() const {
    return data_->effect_bitmask;
  }
 private:
  internal::WindowTreeClient_OnDragOver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnDragOver_ResponseParamsDataView {
 public:
  WindowTreeClient_OnDragOver_ResponseParamsDataView() {}

  WindowTreeClient_OnDragOver_ResponseParamsDataView(
      internal::WindowTreeClient_OnDragOver_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t supported_op_bitmask() const {
    return data_->supported_op_bitmask;
  }
 private:
  internal::WindowTreeClient_OnDragOver_ResponseParams_Data* data_ = nullptr;
};

class WindowTreeClient_OnDragLeave_ParamsDataView {
 public:
  WindowTreeClient_OnDragLeave_ParamsDataView() {}

  WindowTreeClient_OnDragLeave_ParamsDataView(
      internal::WindowTreeClient_OnDragLeave_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
 private:
  internal::WindowTreeClient_OnDragLeave_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnCompleteDrop_ParamsDataView {
 public:
  WindowTreeClient_OnCompleteDrop_ParamsDataView() {}

  WindowTreeClient_OnCompleteDrop_ParamsDataView(
      internal::WindowTreeClient_OnCompleteDrop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window() const {
    return data_->window;
  }
  uint32_t key_state() const {
    return data_->key_state;
  }
  inline void GetLocationInRootDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocationInRoot(UserType* output) {
    auto* pointer = data_->location_in_root.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetLocationDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  uint32_t effect_bitmask() const {
    return data_->effect_bitmask;
  }
 private:
  internal::WindowTreeClient_OnCompleteDrop_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnCompleteDrop_ResponseParamsDataView {
 public:
  WindowTreeClient_OnCompleteDrop_ResponseParamsDataView() {}

  WindowTreeClient_OnCompleteDrop_ResponseParamsDataView(
      internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t action_taken() const {
    return data_->action_taken;
  }
 private:
  internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data* data_ = nullptr;
};

class WindowTreeClient_OnPerformDragDropCompleted_ParamsDataView {
 public:
  WindowTreeClient_OnPerformDragDropCompleted_ParamsDataView() {}

  WindowTreeClient_OnPerformDragDropCompleted_ParamsDataView(
      internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  bool success() const {
    return data_->success;
  }
  uint32_t action_taken() const {
    return data_->action_taken;
  }
 private:
  internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnDragDropDone_ParamsDataView {
 public:
  WindowTreeClient_OnDragDropDone_ParamsDataView() {}

  WindowTreeClient_OnDragDropDone_ParamsDataView(
      internal::WindowTreeClient_OnDragDropDone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowTreeClient_OnDragDropDone_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnTopmostWindowChanged_ParamsDataView {
 public:
  WindowTreeClient_OnTopmostWindowChanged_ParamsDataView() {}

  WindowTreeClient_OnTopmostWindowChanged_ParamsDataView(
      internal::WindowTreeClient_OnTopmostWindowChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTopmostIdsDataView(
      mojo::ArrayDataView<uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTopmostIds(UserType* output) {
    auto* pointer = data_->topmost_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint64_t>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnTopmostWindowChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnChangeCompleted_ParamsDataView {
 public:
  WindowTreeClient_OnChangeCompleted_ParamsDataView() {}

  WindowTreeClient_OnChangeCompleted_ParamsDataView(
      internal::WindowTreeClient_OnChangeCompleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowTreeClient_OnChangeCompleted_Params_Data* data_ = nullptr;
};

class WindowTreeClient_RequestClose_ParamsDataView {
 public:
  WindowTreeClient_RequestClose_ParamsDataView() {}

  WindowTreeClient_RequestClose_ParamsDataView(
      internal::WindowTreeClient_RequestClose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTreeClient_RequestClose_Params_Data* data_ = nullptr;
};

class WindowTreeClient_GetScreenProviderObserver_ParamsDataView {
 public:
  WindowTreeClient_GetScreenProviderObserver_ParamsDataView() {}

  WindowTreeClient_GetScreenProviderObserver_ParamsDataView(
      internal::WindowTreeClient_GetScreenProviderObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::ScreenProviderObserverAssociatedRequestDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowTreeClient_GetScreenProviderObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_OnOcclusionStatesChanged_ParamsDataView {
 public:
  WindowTreeClient_OnOcclusionStatesChanged_ParamsDataView() {}

  WindowTreeClient_OnOcclusionStatesChanged_ParamsDataView(
      internal::WindowTreeClient_OnOcclusionStatesChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOcclusionChangesDataView(
      mojo::MapDataView<uint64_t, ::ws::mojom::OcclusionState>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOcclusionChanges(UserType* output) {
    auto* pointer = data_->occlusion_changes.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint64_t, ::ws::mojom::OcclusionState>>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeClient_OnOcclusionStatesChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowTreeClient_CleanupGestureState_ParamsDataView {
 public:
  WindowTreeClient_CleanupGestureState_ParamsDataView() {}

  WindowTreeClient_CleanupGestureState_ParamsDataView(
      internal::WindowTreeClient_CleanupGestureState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTreeClient_CleanupGestureState_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnWindowResizeLoopStarted_ParamsDataView {
 public:
  WindowTreeClient_OnWindowResizeLoopStarted_ParamsDataView() {}

  WindowTreeClient_OnWindowResizeLoopStarted_ParamsDataView(
      internal::WindowTreeClient_OnWindowResizeLoopStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTreeClient_OnWindowResizeLoopStarted_Params_Data* data_ = nullptr;
};

class WindowTreeClient_OnWindowResizeLoopEnded_ParamsDataView {
 public:
  WindowTreeClient_OnWindowResizeLoopEnded_ParamsDataView() {}

  WindowTreeClient_OnWindowResizeLoopEnded_ParamsDataView(
      internal::WindowTreeClient_OnWindowResizeLoopEnded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowTreeClient_OnWindowResizeLoopEnded_Params_Data* data_ = nullptr;
};

class WindowTreeFactory_CreateWindowTree_ParamsDataView {
 public:
  WindowTreeFactory_CreateWindowTree_ParamsDataView() {}

  WindowTreeFactory_CreateWindowTree_ParamsDataView(
      internal::WindowTreeFactory_CreateWindowTree_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeTreeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::WindowTreeRequestDataView>(
            &data_->tree_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::WindowTreeClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowTreeFactory_CreateWindowTree_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowTree_NewWindow_ParamsDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}


inline void WindowTree_NewTopLevelWindow_ParamsDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}








inline void WindowTree_ObserveEventTypes_ParamsDataView::GetTypesDataView(
    mojo::ArrayDataView<::ui::mojom::EventType>* output) {
  auto pointer = data_->types.Get();
  *output = mojo::ArrayDataView<::ui::mojom::EventType>(pointer, context_);
}


inline void WindowTree_SetWindowBounds_ParamsDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void WindowTree_SetWindowBounds_ParamsDataView::GetLocalSurfaceIdAllocationDataView(
    ::viz::mojom::LocalSurfaceIdAllocationDataView* output) {
  auto pointer = data_->local_surface_id_allocation.Get();
  *output = ::viz::mojom::LocalSurfaceIdAllocationDataView(pointer, context_);
}


inline void WindowTree_UpdateLocalSurfaceIdFromChild_ParamsDataView::GetLocalSurfaceIdAllocationDataView(
    ::viz::mojom::LocalSurfaceIdAllocationDataView* output) {
  auto pointer = data_->local_surface_id_allocation.Get();
  *output = ::viz::mojom::LocalSurfaceIdAllocationDataView(pointer, context_);
}




inline void WindowTree_SetWindowTransform_ParamsDataView::GetTransformDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->transform.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}


inline void WindowTree_SetClientArea_ParamsDataView::GetInsetsDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->insets.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}
inline void WindowTree_SetClientArea_ParamsDataView::GetAdditionalClientAreasDataView(
    mojo::ArrayDataView<::gfx::mojom::RectDataView>* output) {
  auto pointer = data_->additional_client_areas.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::RectDataView>(pointer, context_);
}


inline void WindowTree_SetHitTestInsets_ParamsDataView::GetMouseDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->mouse.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}
inline void WindowTree_SetHitTestInsets_ParamsDataView::GetTouchDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->touch.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}


inline void WindowTree_SetShape_ParamsDataView::GetShapeDataView(
    mojo::ArrayDataView<::gfx::mojom::RectDataView>* output) {
  auto pointer = data_->shape.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::RectDataView>(pointer, context_);
}






inline void WindowTree_SetWindowProperty_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WindowTree_SetWindowProperty_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






















inline void WindowTree_GetWindowTree_ResponseParamsDataView::GetWindowsDataView(
    mojo::ArrayDataView<::ws::mojom::WindowDataDataView>* output) {
  auto pointer = data_->windows.Get();
  *output = mojo::ArrayDataView<::ws::mojom::WindowDataDataView>(pointer, context_);
}








inline void WindowTree_ScheduleEmbed_ResponseParamsDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}




inline void WindowTree_ScheduleEmbedForExistingClient_ResponseParamsDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void WindowTree_EmbedUsingToken_ParamsDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}




inline void WindowTree_AttachFrameSinkId_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}








inline void WindowTree_SetCursor_ParamsDataView::GetCursorDataView(
    ::ui::mojom::CursorDataView* output) {
  auto pointer = data_->cursor.Get();
  *output = ::ui::mojom::CursorDataView(pointer, context_);
}


inline void WindowTree_SetWindowTextInputState_ParamsDataView::GetStateDataView(
    ::ui::mojom::TextInputStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = ::ui::mojom::TextInputStateDataView(pointer, context_);
}


inline void WindowTree_SetImeVisibility_ParamsDataView::GetStateDataView(
    ::ui::mojom::TextInputStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = ::ui::mojom::TextInputStateDataView(pointer, context_);
}












inline void WindowTree_BindWindowManagerInterface_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void WindowTree_PerformWindowMove_ParamsDataView::GetCursorDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->cursor.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}




inline void WindowTree_PerformDragDrop_ParamsDataView::GetScreenLocationDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->screen_location.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void WindowTree_PerformDragDrop_ParamsDataView::GetDragDataDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->drag_data.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}
inline void WindowTree_PerformDragDrop_ParamsDataView::GetDragImageDataView(
    ::gfx::mojom::ImageSkiaDataView* output) {
  auto pointer = data_->drag_image.Get();
  *output = ::gfx::mojom::ImageSkiaDataView(pointer, context_);
}
inline void WindowTree_PerformDragDrop_ParamsDataView::GetDragImageOffsetDataView(
    ::gfx::mojom::Vector2dDataView* output) {
  auto pointer = data_->drag_image_offset.Get();
  *output = ::gfx::mojom::Vector2dDataView(pointer, context_);
}


























inline void WindowTreeClient_OnEmbed_ParamsDataView::GetRootDataView(
    ::ws::mojom::WindowDataDataView* output) {
  auto pointer = data_->root.Get();
  *output = ::ws::mojom::WindowDataDataView(pointer, context_);
}
inline void WindowTreeClient_OnEmbed_ParamsDataView::GetLocalSurfaceIdAllocationDataView(
    ::viz::mojom::LocalSurfaceIdAllocationDataView* output) {
  auto pointer = data_->local_surface_id_allocation.Get();
  *output = ::viz::mojom::LocalSurfaceIdAllocationDataView(pointer, context_);
}


inline void WindowTreeClient_OnEmbedFromToken_ParamsDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void WindowTreeClient_OnEmbedFromToken_ParamsDataView::GetRootDataView(
    ::ws::mojom::WindowDataDataView* output) {
  auto pointer = data_->root.Get();
  *output = ::ws::mojom::WindowDataDataView(pointer, context_);
}
inline void WindowTreeClient_OnEmbedFromToken_ParamsDataView::GetLocalSurfaceIdAllocationDataView(
    ::viz::mojom::LocalSurfaceIdAllocationDataView* output) {
  auto pointer = data_->local_surface_id_allocation.Get();
  *output = ::viz::mojom::LocalSurfaceIdAllocationDataView(pointer, context_);
}








inline void WindowTreeClient_OnFrameSinkIdAllocated_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void WindowTreeClient_OnTopLevelCreated_ParamsDataView::GetDataDataView(
    ::ws::mojom::WindowDataDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::ws::mojom::WindowDataDataView(pointer, context_);
}
inline void WindowTreeClient_OnTopLevelCreated_ParamsDataView::GetLocalSurfaceIdAllocationDataView(
    ::viz::mojom::LocalSurfaceIdAllocationDataView* output) {
  auto pointer = data_->local_surface_id_allocation.Get();
  *output = ::viz::mojom::LocalSurfaceIdAllocationDataView(pointer, context_);
}


inline void WindowTreeClient_OnWindowBoundsChanged_ParamsDataView::GetNewBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->new_bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void WindowTreeClient_OnWindowBoundsChanged_ParamsDataView::GetLocalSurfaceIdAllocationDataView(
    ::viz::mojom::LocalSurfaceIdAllocationDataView* output) {
  auto pointer = data_->local_surface_id_allocation.Get();
  *output = ::viz::mojom::LocalSurfaceIdAllocationDataView(pointer, context_);
}


inline void WindowTreeClient_OnWindowTransformChanged_ParamsDataView::GetNewTransformDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->new_transform.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}






inline void WindowTreeClient_OnWindowHierarchyChanged_ParamsDataView::GetWindowsDataView(
    mojo::ArrayDataView<::ws::mojom::WindowDataDataView>* output) {
  auto pointer = data_->windows.Get();
  *output = mojo::ArrayDataView<::ws::mojom::WindowDataDataView>(pointer, context_);
}












inline void WindowTreeClient_OnWindowSharedPropertyChanged_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WindowTreeClient_OnWindowSharedPropertyChanged_ParamsDataView::GetNewDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->new_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void WindowTreeClient_OnWindowInputEvent_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}


inline void WindowTreeClient_OnObservedInputEvent_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}




inline void WindowTreeClient_OnWindowCursorChanged_ParamsDataView::GetCursorDataView(
    ::ui::mojom::CursorDataView* output) {
  auto pointer = data_->cursor.Get();
  *output = ::ui::mojom::CursorDataView(pointer, context_);
}


inline void WindowTreeClient_OnDragDropStart_ParamsDataView::GetDragDataDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->drag_data.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}


inline void WindowTreeClient_OnDragEnter_ParamsDataView::GetLocationInRootDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->location_in_root.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void WindowTreeClient_OnDragEnter_ParamsDataView::GetLocationDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->location.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}




inline void WindowTreeClient_OnDragOver_ParamsDataView::GetLocationInRootDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->location_in_root.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void WindowTreeClient_OnDragOver_ParamsDataView::GetLocationDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->location.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}






inline void WindowTreeClient_OnCompleteDrop_ParamsDataView::GetLocationInRootDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->location_in_root.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void WindowTreeClient_OnCompleteDrop_ParamsDataView::GetLocationDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->location.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}








inline void WindowTreeClient_OnTopmostWindowChanged_ParamsDataView::GetTopmostIdsDataView(
    mojo::ArrayDataView<uint64_t>* output) {
  auto pointer = data_->topmost_ids.Get();
  *output = mojo::ArrayDataView<uint64_t>(pointer, context_);
}








inline void WindowTreeClient_OnOcclusionStatesChanged_ParamsDataView::GetOcclusionChangesDataView(
    mojo::MapDataView<uint64_t, ::ws::mojom::OcclusionState>* output) {
  auto pointer = data_->occlusion_changes.Get();
  *output = mojo::MapDataView<uint64_t, ::ws::mojom::OcclusionState>(pointer, context_);
}









}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_PARAMS_DATA_H_