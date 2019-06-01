#include <memory>

//#include "cobalt/script/v8c/v8c_array_buffer.h"
#include "cobalt/script/array_buffer.h"
#include "cobalt/base/polymorphic_downcast.h"

namespace cobalt {
namespace script {

PreallocatedArrayBufferData::PreallocatedArrayBufferData(size_t byte_length) {
    data_ = SbMemoryAllocate(byte_length);
    byte_length_ = byte_length;
}

PreallocatedArrayBufferData::~PreallocatedArrayBufferData() {
    if (data_) {
        SbMemoryDeallocate(data_);
        data_ = nullptr;
        byte_length_ = 0;
    }
}

// static
Handle<ArrayBuffer> ArrayBuffer::New(GlobalEnvironment* global_environment,
                                     size_t byte_length) {
    /*auto* v8c_global_environment =
        base::polymorphic_downcast<v8c::V8cGlobalEnvironment*>(
            global_environment);
    v8::Isolate* isolate = v8c_global_environment->isolate();
    v8c::EntryScope entry_scope(isolate);
    v8::Local<v8::ArrayBuffer> array_buffer =
        v8::ArrayBuffer::New(isolate, byte_length);
    return Handle<ArrayBuffer>(
        new v8c::V8cUserObjectHolder<v8c::V8cArrayBuffer>(isolate, array_buffer));*/
    return Handle<ArrayBuffer>();
}

// static
Handle<ArrayBuffer> ArrayBuffer::New(
    GlobalEnvironment* global_environment,
    std::unique_ptr<PreallocatedArrayBufferData> data) {
    /*auto* v8c_global_environment =
        base::polymorphic_downcast<v8c::V8cGlobalEnvironment*>(
            global_environment);
    v8::Isolate* isolate = v8c_global_environment->isolate();
    v8c::EntryScope entry_scope(isolate);
    v8::Local<v8::ArrayBuffer> array_buffer =
        v8::ArrayBuffer::New(isolate, data->data(), data->byte_length(),
                             v8::ArrayBufferCreationMode::kInternalized);
    data->Release();
    return Handle<ArrayBuffer>(
        new v8c::V8cUserObjectHolder<v8c::V8cArrayBuffer>(isolate, array_buffer));*/
    return Handle<ArrayBuffer>();
}

}  // namespace script
}  // namespace cobalt
