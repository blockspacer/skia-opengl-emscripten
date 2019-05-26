













#ifndef DAWN_DAWNCPP_H_
#define DAWN_DAWNCPP_H_

#include "dawn/dawn.h"
#include "dawn/dawn_export.h"
#include "dawn/EnumClassBitmasks.h"

namespace dawn {

    enum class AddressMode : uint32_t {
        Repeat = 0x00000000,
        MirroredRepeat = 0x00000001,
        ClampToEdge = 0x00000002,
    };

    enum class BindingType : uint32_t {
        UniformBuffer = 0x00000000,
        Sampler = 0x00000001,
        SampledTexture = 0x00000002,
        StorageBuffer = 0x00000003,
        DynamicUniformBuffer = 0x00000004,
        DynamicStorageBuffer = 0x00000005,
    };

    enum class BlendFactor : uint32_t {
        Zero = 0x00000000,
        One = 0x00000001,
        SrcColor = 0x00000002,
        OneMinusSrcColor = 0x00000003,
        SrcAlpha = 0x00000004,
        OneMinusSrcAlpha = 0x00000005,
        DstColor = 0x00000006,
        OneMinusDstColor = 0x00000007,
        DstAlpha = 0x00000008,
        OneMinusDstAlpha = 0x00000009,
        SrcAlphaSaturated = 0x0000000A,
        BlendColor = 0x0000000B,
        OneMinusBlendColor = 0x0000000C,
    };

    enum class BlendOperation : uint32_t {
        Add = 0x00000000,
        Subtract = 0x00000001,
        ReverseSubtract = 0x00000002,
        Min = 0x00000003,
        Max = 0x00000004,
    };

    enum class BufferMapAsyncStatus : uint32_t {
        Success = 0x00000000,
        Error = 0x00000001,
        Unknown = 0x00000002,
        ContextLost = 0x00000003,
    };

    enum class CompareFunction : uint32_t {
        Never = 0x00000000,
        Less = 0x00000001,
        LessEqual = 0x00000002,
        Greater = 0x00000003,
        GreaterEqual = 0x00000004,
        Equal = 0x00000005,
        NotEqual = 0x00000006,
        Always = 0x00000007,
    };

    enum class CullMode : uint32_t {
        None = 0x00000000,
        Front = 0x00000001,
        Back = 0x00000002,
    };

    enum class FenceCompletionStatus : uint32_t {
        Success = 0x00000000,
        Error = 0x00000001,
        Unknown = 0x00000002,
        ContextLost = 0x00000003,
    };

    enum class FilterMode : uint32_t {
        Nearest = 0x00000000,
        Linear = 0x00000001,
    };

    enum class FrontFace : uint32_t {
        CCW = 0x00000000,
        CW = 0x00000001,
    };

    enum class IndexFormat : uint32_t {
        Uint16 = 0x00000000,
        Uint32 = 0x00000001,
    };

    enum class InputStepMode : uint32_t {
        Vertex = 0x00000000,
        Instance = 0x00000001,
    };

    enum class LoadOp : uint32_t {
        Clear = 0x00000000,
        Load = 0x00000001,
    };

    enum class PrimitiveTopology : uint32_t {
        PointList = 0x00000000,
        LineList = 0x00000001,
        LineStrip = 0x00000002,
        TriangleList = 0x00000003,
        TriangleStrip = 0x00000004,
    };

    enum class ShaderStage : uint32_t {
        Vertex = 0x00000000,
        Fragment = 0x00000001,
        Compute = 0x00000002,
    };

    enum class StencilOperation : uint32_t {
        Keep = 0x00000000,
        Zero = 0x00000001,
        Replace = 0x00000002,
        Invert = 0x00000003,
        IncrementClamp = 0x00000004,
        DecrementClamp = 0x00000005,
        IncrementWrap = 0x00000006,
        DecrementWrap = 0x00000007,
    };

    enum class StoreOp : uint32_t {
        Store = 0x00000000,
    };

    enum class TextureDimension : uint32_t {
        e2D = 0x00000000,
    };

    enum class TextureFormat : uint32_t {
        R8G8B8A8Unorm = 0x00000000,
        R8G8Unorm = 0x00000001,
        R8Unorm = 0x00000002,
        R8G8B8A8Uint = 0x00000003,
        R8G8Uint = 0x00000004,
        R8Uint = 0x00000005,
        B8G8R8A8Unorm = 0x00000006,
        D32FloatS8Uint = 0x00000007,
    };

    enum class TextureViewDimension : uint32_t {
        e2D = 0x00000000,
        e2DArray = 0x00000001,
        Cube = 0x00000002,
        CubeArray = 0x00000003,
    };

    enum class VertexFormat : uint32_t {
        UChar2 = 0x00000000,
        UChar4 = 0x00000001,
        Char2 = 0x00000002,
        Char4 = 0x00000003,
        UChar2Norm = 0x00000004,
        UChar4Norm = 0x00000005,
        Char2Norm = 0x00000006,
        Char4Norm = 0x00000007,
        UShort2 = 0x00000008,
        UShort4 = 0x00000009,
        Short2 = 0x0000000A,
        Short4 = 0x0000000B,
        UShort2Norm = 0x0000000C,
        UShort4Norm = 0x0000000D,
        Short2Norm = 0x0000000E,
        Short4Norm = 0x0000000F,
        Half2 = 0x00000010,
        Half4 = 0x00000011,
        Float = 0x00000012,
        Float2 = 0x00000013,
        Float3 = 0x00000014,
        Float4 = 0x00000015,
        UInt = 0x00000016,
        UInt2 = 0x00000017,
        UInt3 = 0x00000018,
        UInt4 = 0x00000019,
        Int = 0x0000001A,
        Int2 = 0x0000001B,
        Int3 = 0x0000001C,
        Int4 = 0x0000001D,
    };


    enum class BufferUsageBit : uint32_t {
        None = 0x00000000,
        MapRead = 0x00000001,
        MapWrite = 0x00000002,
        TransferSrc = 0x00000004,
        TransferDst = 0x00000008,
        Index = 0x00000010,
        Vertex = 0x00000020,
        Uniform = 0x00000040,
        Storage = 0x00000080,
    };

    enum class ColorWriteMask : uint32_t {
        None = 0x00000000,
        Red = 0x00000001,
        Green = 0x00000002,
        Blue = 0x00000004,
        Alpha = 0x00000008,
        All = 0x0000000F,
    };

    enum class Face : uint32_t {
        None = 0x00000000,
        Back = 0x00000001,
        Front = 0x00000002,
        Both = 0x00000003,
    };

    enum class ShaderStageBit : uint32_t {
        None = 0x00000000,
        Vertex = 0x00000001,
        Fragment = 0x00000002,
        Compute = 0x00000004,
    };

    enum class TextureAspect : uint32_t {
        Color = 0x00000001,
        Depth = 0x00000002,
        Stencil = 0x00000004,
    };

    enum class TextureUsageBit : uint32_t {
        None = 0x00000000,
        TransferSrc = 0x00000001,
        TransferDst = 0x00000002,
        Sampled = 0x00000004,
        Storage = 0x00000008,
        OutputAttachment = 0x00000010,
        Present = 0x00000020,
    };


    template<>
    struct IsDawnBitmask<BufferUsageBit> {
        static constexpr bool enable = true;
    };

    template<>
    struct IsDawnBitmask<ColorWriteMask> {
        static constexpr bool enable = true;
    };

    template<>
    struct IsDawnBitmask<Face> {
        static constexpr bool enable = true;
    };

    template<>
    struct IsDawnBitmask<ShaderStageBit> {
        static constexpr bool enable = true;
    };

    template<>
    struct IsDawnBitmask<TextureAspect> {
        static constexpr bool enable = true;
    };

    template<>
    struct IsDawnBitmask<TextureUsageBit> {
        static constexpr bool enable = true;
    };


    using BufferMapReadCallback = DawnBufferMapReadCallback;
    using BufferMapWriteCallback = DawnBufferMapWriteCallback;
    using CallbackUserdata = DawnCallbackUserdata;
    using DeviceErrorCallback = DawnDeviceErrorCallback;
    using FenceOnCompletionCallback = DawnFenceOnCompletionCallback;

    class BindGroup;
    class BindGroupLayout;
    class Buffer;
    class CommandBuffer;
    class CommandEncoder;
    class ComputePassEncoder;
    class ComputePipeline;
    class Device;
    class Fence;
    class PipelineLayout;
    class Queue;
    class RenderPassEncoder;
    class RenderPipeline;
    class Sampler;
    class ShaderModule;
    class SwapChain;
    class Texture;
    class TextureView;

    struct BindGroupBinding;
    struct BindGroupLayoutBinding;
    struct BlendDescriptor;
    struct BufferCopyView;
    struct BufferDescriptor;
    struct Color;
    struct Extent3D;
    struct FenceDescriptor;
    struct Origin3D;
    struct PipelineLayoutDescriptor;
    struct PipelineStageDescriptor;
    struct RasterizationStateDescriptor;
    struct RenderPassDepthStencilAttachmentDescriptor;
    struct SamplerDescriptor;
    struct ShaderModuleDescriptor;
    struct StencilStateFaceDescriptor;
    struct SwapChainDescriptor;
    struct TextureViewDescriptor;
    struct VertexAttributeDescriptor;
    struct VertexInputDescriptor;
    struct BindGroupDescriptor;
    struct BindGroupLayoutDescriptor;
    struct ColorStateDescriptor;
    struct ComputePipelineDescriptor;
    struct DepthStencilStateDescriptor;
    struct InputStateDescriptor;
    struct RenderPassColorAttachmentDescriptor;
    struct TextureCopyView;
    struct TextureDescriptor;
    struct RenderPassDescriptor;
    struct RenderPipelineDescriptor;

    template<typename Derived, typename CType>
    class ObjectBase {
        public:
            ObjectBase() = default;
            ObjectBase(CType handle): mHandle(handle) {
                if (mHandle) Derived::DawnReference(mHandle);
            }
            ~ObjectBase() {
                if (mHandle) Derived::DawnRelease(mHandle);
            }

            ObjectBase(ObjectBase const& other)
                : ObjectBase(other.Get()) {
            }
            Derived& operator=(ObjectBase const& other) {
                if (&other != this) {
                    if (mHandle) Derived::DawnRelease(mHandle);
                    mHandle = other.mHandle;
                    if (mHandle) Derived::DawnReference(mHandle);
                }

                return static_cast<Derived&>(*this);
            }

            ObjectBase(ObjectBase&& other) {
                mHandle = other.mHandle;
                other.mHandle = 0;
            }
            Derived& operator=(ObjectBase&& other) {
                if (&other != this) {
                    if (mHandle) Derived::DawnRelease(mHandle);
                    mHandle = other.mHandle;
                    other.mHandle = 0;
                }

                return static_cast<Derived&>(*this);
            }

            ObjectBase(std::nullptr_t) {}
            Derived& operator=(std::nullptr_t) {
                if (mHandle != nullptr) {
                    Derived::DawnRelease(mHandle);
                    mHandle = nullptr;
                }
                return static_cast<Derived&>(*this);
            }

            explicit operator bool() const {
                return mHandle != nullptr;
            }
            CType Get() const {
                return mHandle;
            }
            CType Release() {
                CType result = mHandle;
                mHandle = 0;
                return result;
            }
            static Derived Acquire(CType handle) {
                Derived result;
                result.mHandle = handle;
                return result;
            }

        protected:
            CType mHandle = nullptr;
    };


    class BindGroup : public ObjectBase<BindGroup, DawnBindGroup> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;


        private:
            friend ObjectBase<BindGroup, DawnBindGroup>;
            static DAWN_EXPORT void DawnReference(DawnBindGroup handle);
            static DAWN_EXPORT void DawnRelease(DawnBindGroup handle);
    };

    class BindGroupLayout : public ObjectBase<BindGroupLayout, DawnBindGroupLayout> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;


        private:
            friend ObjectBase<BindGroupLayout, DawnBindGroupLayout>;
            static DAWN_EXPORT void DawnReference(DawnBindGroupLayout handle);
            static DAWN_EXPORT void DawnRelease(DawnBindGroupLayout handle);
    };

    class Buffer : public ObjectBase<Buffer, DawnBuffer> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;

                    DAWN_EXPORT void SetSubData(uint64_t start, uint64_t count, uint8_t const * data) const;
                    DAWN_EXPORT void Unmap() const;
                    DAWN_EXPORT void Destroy() const;
                    DAWN_EXPORT void MapReadAsync(BufferMapReadCallback callback, CallbackUserdata userdata) const;
                    DAWN_EXPORT void MapWriteAsync(BufferMapWriteCallback callback, CallbackUserdata userdata) const;

        private:
            friend ObjectBase<Buffer, DawnBuffer>;
            static DAWN_EXPORT void DawnReference(DawnBuffer handle);
            static DAWN_EXPORT void DawnRelease(DawnBuffer handle);
    };

    class CommandBuffer : public ObjectBase<CommandBuffer, DawnCommandBuffer> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;


        private:
            friend ObjectBase<CommandBuffer, DawnCommandBuffer>;
            static DAWN_EXPORT void DawnReference(DawnCommandBuffer handle);
            static DAWN_EXPORT void DawnRelease(DawnCommandBuffer handle);
    };

    class CommandEncoder : public ObjectBase<CommandEncoder, DawnCommandEncoder> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;

                    DAWN_EXPORT CommandBuffer Finish() const;
                    DAWN_EXPORT ComputePassEncoder BeginComputePass() const;
                    DAWN_EXPORT RenderPassEncoder BeginRenderPass(RenderPassDescriptor const * info) const;
                    DAWN_EXPORT void CopyBufferToBuffer(Buffer const& source, uint64_t sourceOffset, Buffer const& destination, uint64_t destinationOffset, uint64_t size) const;
                    DAWN_EXPORT void CopyBufferToTexture(BufferCopyView const * source, TextureCopyView const * destination, Extent3D const * copySize) const;
                    DAWN_EXPORT void CopyTextureToBuffer(TextureCopyView const * source, BufferCopyView const * destination, Extent3D const * copySize) const;
                    DAWN_EXPORT void CopyTextureToTexture(TextureCopyView const * source, TextureCopyView const * destination, Extent3D const * copySize) const;

        private:
            friend ObjectBase<CommandEncoder, DawnCommandEncoder>;
            static DAWN_EXPORT void DawnReference(DawnCommandEncoder handle);
            static DAWN_EXPORT void DawnRelease(DawnCommandEncoder handle);
    };

    class ComputePassEncoder : public ObjectBase<ComputePassEncoder, DawnComputePassEncoder> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;

                    DAWN_EXPORT void InsertDebugMarker(char const * groupLabel) const;
                    DAWN_EXPORT void PopDebugGroup() const;
                    DAWN_EXPORT void PushDebugGroup(char const * groupLabel) const;
                    DAWN_EXPORT void SetPipeline(ComputePipeline const& pipeline) const;
                    DAWN_EXPORT void SetPushConstants(ShaderStageBit stages, uint32_t offset, uint32_t count, uint32_t const * data) const;
                    DAWN_EXPORT void SetBindGroup(uint32_t groupIndex, BindGroup const& group, uint32_t dynamicOffsetCount, uint64_t const * dynamicOffsets) const;
                    DAWN_EXPORT void Dispatch(uint32_t x, uint32_t y, uint32_t z) const;
                    DAWN_EXPORT void EndPass() const;

        private:
            friend ObjectBase<ComputePassEncoder, DawnComputePassEncoder>;
            static DAWN_EXPORT void DawnReference(DawnComputePassEncoder handle);
            static DAWN_EXPORT void DawnRelease(DawnComputePassEncoder handle);
    };

    class ComputePipeline : public ObjectBase<ComputePipeline, DawnComputePipeline> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;


        private:
            friend ObjectBase<ComputePipeline, DawnComputePipeline>;
            static DAWN_EXPORT void DawnReference(DawnComputePipeline handle);
            static DAWN_EXPORT void DawnRelease(DawnComputePipeline handle);
    };

    class Device : public ObjectBase<Device, DawnDevice> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;

                    DAWN_EXPORT BindGroup CreateBindGroup(BindGroupDescriptor const * descriptor) const;
                    DAWN_EXPORT BindGroupLayout CreateBindGroupLayout(BindGroupLayoutDescriptor const * descriptor) const;
                    DAWN_EXPORT Buffer CreateBuffer(BufferDescriptor const * descriptor) const;
                    DAWN_EXPORT CommandEncoder CreateCommandEncoder() const;
                    DAWN_EXPORT ComputePipeline CreateComputePipeline(ComputePipelineDescriptor const * descriptor) const;
                    DAWN_EXPORT RenderPipeline CreateRenderPipeline(RenderPipelineDescriptor const * descriptor) const;
                    DAWN_EXPORT PipelineLayout CreatePipelineLayout(PipelineLayoutDescriptor const * descriptor) const;
                    DAWN_EXPORT Queue CreateQueue() const;
                    DAWN_EXPORT Sampler CreateSampler(SamplerDescriptor const * descriptor) const;
                    DAWN_EXPORT ShaderModule CreateShaderModule(ShaderModuleDescriptor const * descriptor) const;
                    DAWN_EXPORT SwapChain CreateSwapChain(SwapChainDescriptor const * descriptor) const;
                    DAWN_EXPORT Texture CreateTexture(TextureDescriptor const * descriptor) const;
                    DAWN_EXPORT void Tick() const;
                    DAWN_EXPORT void SetErrorCallback(DeviceErrorCallback callback, CallbackUserdata userdata) const;

        private:
            friend ObjectBase<Device, DawnDevice>;
            static DAWN_EXPORT void DawnReference(DawnDevice handle);
            static DAWN_EXPORT void DawnRelease(DawnDevice handle);
    };

    class Fence : public ObjectBase<Fence, DawnFence> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;

                    DAWN_EXPORT uint64_t GetCompletedValue() const;
                    DAWN_EXPORT void OnCompletion(uint64_t value, FenceOnCompletionCallback callback, CallbackUserdata userdata) const;

        private:
            friend ObjectBase<Fence, DawnFence>;
            static DAWN_EXPORT void DawnReference(DawnFence handle);
            static DAWN_EXPORT void DawnRelease(DawnFence handle);
    };

    class PipelineLayout : public ObjectBase<PipelineLayout, DawnPipelineLayout> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;


        private:
            friend ObjectBase<PipelineLayout, DawnPipelineLayout>;
            static DAWN_EXPORT void DawnReference(DawnPipelineLayout handle);
            static DAWN_EXPORT void DawnRelease(DawnPipelineLayout handle);
    };

    class Queue : public ObjectBase<Queue, DawnQueue> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;

                    DAWN_EXPORT void Submit(uint32_t commandCount, CommandBuffer const * commands) const;
                    DAWN_EXPORT void Signal(Fence const& fence, uint64_t signalValue) const;
                    DAWN_EXPORT Fence CreateFence(FenceDescriptor const * descriptor) const;

        private:
            friend ObjectBase<Queue, DawnQueue>;
            static DAWN_EXPORT void DawnReference(DawnQueue handle);
            static DAWN_EXPORT void DawnRelease(DawnQueue handle);
    };

    class RenderPassEncoder : public ObjectBase<RenderPassEncoder, DawnRenderPassEncoder> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;

                    DAWN_EXPORT void SetPipeline(RenderPipeline const& pipeline) const;
                    DAWN_EXPORT void SetPushConstants(ShaderStageBit stages, uint32_t offset, uint32_t count, uint32_t const * data) const;
                    DAWN_EXPORT void SetBindGroup(uint32_t groupIndex, BindGroup const& group, uint32_t dynamicOffsetCount, uint64_t const * dynamicOffsets) const;
                    DAWN_EXPORT void Draw(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) const;
                    DAWN_EXPORT void DrawIndexed(uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t baseVertex, uint32_t firstInstance) const;
                    DAWN_EXPORT void InsertDebugMarker(char const * groupLabel) const;
                    DAWN_EXPORT void PopDebugGroup() const;
                    DAWN_EXPORT void PushDebugGroup(char const * groupLabel) const;
                    DAWN_EXPORT void SetStencilReference(uint32_t reference) const;
                    DAWN_EXPORT void SetBlendColor(Color const * color) const;
                    DAWN_EXPORT void SetScissorRect(uint32_t x, uint32_t y, uint32_t width, uint32_t height) const;
                    DAWN_EXPORT void SetVertexBuffers(uint32_t startSlot, uint32_t count, Buffer const * buffers, uint64_t const * offsets) const;
                    DAWN_EXPORT void SetIndexBuffer(Buffer const& buffer, uint64_t offset) const;
                    DAWN_EXPORT void EndPass() const;

        private:
            friend ObjectBase<RenderPassEncoder, DawnRenderPassEncoder>;
            static DAWN_EXPORT void DawnReference(DawnRenderPassEncoder handle);
            static DAWN_EXPORT void DawnRelease(DawnRenderPassEncoder handle);
    };

    class RenderPipeline : public ObjectBase<RenderPipeline, DawnRenderPipeline> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;


        private:
            friend ObjectBase<RenderPipeline, DawnRenderPipeline>;
            static DAWN_EXPORT void DawnReference(DawnRenderPipeline handle);
            static DAWN_EXPORT void DawnRelease(DawnRenderPipeline handle);
    };

    class Sampler : public ObjectBase<Sampler, DawnSampler> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;


        private:
            friend ObjectBase<Sampler, DawnSampler>;
            static DAWN_EXPORT void DawnReference(DawnSampler handle);
            static DAWN_EXPORT void DawnRelease(DawnSampler handle);
    };

    class ShaderModule : public ObjectBase<ShaderModule, DawnShaderModule> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;


        private:
            friend ObjectBase<ShaderModule, DawnShaderModule>;
            static DAWN_EXPORT void DawnReference(DawnShaderModule handle);
            static DAWN_EXPORT void DawnRelease(DawnShaderModule handle);
    };

    class SwapChain : public ObjectBase<SwapChain, DawnSwapChain> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;

                    DAWN_EXPORT void Configure(TextureFormat format, TextureUsageBit allowedUsage, uint32_t width, uint32_t height) const;
                    DAWN_EXPORT Texture GetNextTexture() const;
                    DAWN_EXPORT void Present(Texture const& texture) const;

        private:
            friend ObjectBase<SwapChain, DawnSwapChain>;
            static DAWN_EXPORT void DawnReference(DawnSwapChain handle);
            static DAWN_EXPORT void DawnRelease(DawnSwapChain handle);
    };

    class Texture : public ObjectBase<Texture, DawnTexture> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;

                    DAWN_EXPORT TextureView CreateDefaultView() const;
                    DAWN_EXPORT TextureView CreateView(TextureViewDescriptor const * descriptor) const;
                    DAWN_EXPORT void Destroy() const;

        private:
            friend ObjectBase<Texture, DawnTexture>;
            static DAWN_EXPORT void DawnReference(DawnTexture handle);
            static DAWN_EXPORT void DawnRelease(DawnTexture handle);
    };

    class TextureView : public ObjectBase<TextureView, DawnTextureView> {
        public:
            using ObjectBase::ObjectBase;
            using ObjectBase::operator=;


        private:
            friend ObjectBase<TextureView, DawnTextureView>;
            static DAWN_EXPORT void DawnReference(DawnTextureView handle);
            static DAWN_EXPORT void DawnRelease(DawnTextureView handle);
    };


    struct BindGroupBinding {
        uint32_t binding;
        Buffer buffer;
        uint64_t offset;
        uint64_t size;
        Sampler sampler;
        TextureView textureView;
    };

    struct BindGroupLayoutBinding {
        uint32_t binding;
        ShaderStageBit visibility;
        BindingType type;
    };

    struct BlendDescriptor {
        BlendOperation operation;
        BlendFactor srcFactor;
        BlendFactor dstFactor;
    };

    struct BufferCopyView {
        const void* nextInChain = nullptr;
        Buffer buffer;
        uint64_t offset;
        uint32_t rowPitch;
        uint32_t imageHeight;
    };

    struct BufferDescriptor {
        const void* nextInChain = nullptr;
        BufferUsageBit usage;
        uint64_t size;
    };

    struct Color {
        float r;
        float g;
        float b;
        float a;
    };

    struct Extent3D {
        uint32_t width;
        uint32_t height;
        uint32_t depth;
    };

    struct FenceDescriptor {
        const void* nextInChain = nullptr;
        uint64_t initialValue;
    };

    struct Origin3D {
        uint32_t x;
        uint32_t y;
        uint32_t z;
    };

    struct PipelineLayoutDescriptor {
        const void* nextInChain = nullptr;
        uint32_t bindGroupLayoutCount;
        BindGroupLayout const * bindGroupLayouts;
    };

    struct PipelineStageDescriptor {
        const void* nextInChain = nullptr;
        ShaderModule module;
        char const * entryPoint;
    };

    struct RasterizationStateDescriptor {
        const void* nextInChain = nullptr;
        FrontFace frontFace;
        CullMode cullMode;
        int32_t depthBias;
        float depthBiasSlopeScale;
        float depthBiasClamp;
    };

    struct RenderPassDepthStencilAttachmentDescriptor {
        TextureView attachment;
        LoadOp depthLoadOp;
        StoreOp depthStoreOp;
        float clearDepth;
        LoadOp stencilLoadOp;
        StoreOp stencilStoreOp;
        uint32_t clearStencil;
    };

    struct SamplerDescriptor {
        const void* nextInChain = nullptr;
        AddressMode addressModeU;
        AddressMode addressModeV;
        AddressMode addressModeW;
        FilterMode magFilter;
        FilterMode minFilter;
        FilterMode mipmapFilter;
        float lodMinClamp;
        float lodMaxClamp;
        CompareFunction compareFunction;
    };

    struct ShaderModuleDescriptor {
        const void* nextInChain = nullptr;
        uint32_t codeSize;
        uint32_t const * code;
    };

    struct StencilStateFaceDescriptor {
        CompareFunction compare;
        StencilOperation failOp;
        StencilOperation depthFailOp;
        StencilOperation passOp;
    };

    struct SwapChainDescriptor {
        const void* nextInChain = nullptr;
        uint64_t implementation;
    };

    struct TextureViewDescriptor {
        const void* nextInChain = nullptr;
        TextureFormat format;
        TextureViewDimension dimension;
        uint32_t baseMipLevel;
        uint32_t mipLevelCount;
        uint32_t baseArrayLayer;
        uint32_t arrayLayerCount;
    };

    struct VertexAttributeDescriptor {
        uint32_t shaderLocation;
        uint32_t inputSlot;
        uint64_t offset;
        VertexFormat format;
    };

    struct VertexInputDescriptor {
        uint32_t inputSlot;
        uint64_t stride;
        InputStepMode stepMode;
    };

    struct BindGroupDescriptor {
        const void* nextInChain = nullptr;
        BindGroupLayout layout;
        uint32_t bindingCount;
        BindGroupBinding const * bindings;
    };

    struct BindGroupLayoutDescriptor {
        const void* nextInChain = nullptr;
        uint32_t bindingCount;
        BindGroupLayoutBinding const * bindings;
    };

    struct ColorStateDescriptor {
        const void* nextInChain = nullptr;
        TextureFormat format;
        BlendDescriptor alphaBlend;
        BlendDescriptor colorBlend;
        ColorWriteMask writeMask;
    };

    struct ComputePipelineDescriptor {
        const void* nextInChain = nullptr;
        PipelineLayout layout;
        PipelineStageDescriptor const * computeStage;
    };

    struct DepthStencilStateDescriptor {
        const void* nextInChain = nullptr;
        TextureFormat format;
        bool depthWriteEnabled;
        CompareFunction depthCompare;
        StencilStateFaceDescriptor stencilFront;
        StencilStateFaceDescriptor stencilBack;
        uint32_t stencilReadMask;
        uint32_t stencilWriteMask;
    };

    struct InputStateDescriptor {
        const void* nextInChain = nullptr;
        IndexFormat indexFormat;
        uint32_t numAttributes;
        VertexAttributeDescriptor const * attributes;
        uint32_t numInputs;
        VertexInputDescriptor const * inputs;
    };

    struct RenderPassColorAttachmentDescriptor {
        TextureView attachment;
        TextureView resolveTarget;
        LoadOp loadOp;
        StoreOp storeOp;
        Color clearColor;
    };

    struct TextureCopyView {
        const void* nextInChain = nullptr;
        Texture texture;
        uint32_t level;
        uint32_t slice;
        Origin3D origin;
    };

    struct TextureDescriptor {
        const void* nextInChain = nullptr;
        TextureUsageBit usage;
        TextureDimension dimension;
        Extent3D size;
        uint32_t arrayLayerCount;
        TextureFormat format;
        uint32_t mipLevelCount;
        uint32_t sampleCount;
    };

    struct RenderPassDescriptor {
        uint32_t colorAttachmentCount;
        const RenderPassColorAttachmentDescriptor* const * colorAttachments;
        RenderPassDepthStencilAttachmentDescriptor const * depthStencilAttachment;
    };

    struct RenderPipelineDescriptor {
        const void* nextInChain = nullptr;
        PipelineLayout layout;
        PipelineStageDescriptor const * vertexStage;
        PipelineStageDescriptor const * fragmentStage;
        InputStateDescriptor const * inputState;
        PrimitiveTopology primitiveTopology;
        RasterizationStateDescriptor const * rasterizationState;
        uint32_t sampleCount;
        DepthStencilStateDescriptor const * depthStencilState;
        uint32_t colorStateCount;
        const ColorStateDescriptor* const * colorStates;
    };


} // namespace dawn

#endif // DAWN_DAWNCPP_H_
