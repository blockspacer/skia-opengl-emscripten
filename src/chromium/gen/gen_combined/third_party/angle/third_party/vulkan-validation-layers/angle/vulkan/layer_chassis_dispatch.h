

// This file is ***GENERATED***.  Do Not Edit.
// See layer_chassis_dispatch_generator.py for modifications.

/* Copyright (c) 2015-2019 The Khronos Group Inc.
 * Copyright (c) 2015-2019 Valve Corporation
 * Copyright (c) 2015-2019 LunarG, Inc.
 * Copyright (c) 2015-2019 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Mark Lobodzinski <mark@lunarg.com>
 */
#pragma once

#if defined(LAYER_CHASSIS_CAN_WRAP_HANDLES)
extern bool wrap_handles;
#else
extern const bool wrap_handles;
#endif
VkResult DispatchCreateInstance(ValidationObject *layer_data, 
    const VkInstanceCreateInfo*                 pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkInstance*                                 pInstance);
void DispatchDestroyInstance(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchEnumeratePhysicalDevices(ValidationObject *layer_data, 
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceCount,
    VkPhysicalDevice*                           pPhysicalDevices);
void DispatchGetPhysicalDeviceFeatures(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures*                   pFeatures);
void DispatchGetPhysicalDeviceFormatProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties*                         pFormatProperties);
VkResult DispatchGetPhysicalDeviceImageFormatProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkImageFormatProperties*                    pImageFormatProperties);
void DispatchGetPhysicalDeviceProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties*                 pProperties);
void DispatchGetPhysicalDeviceQueueFamilyProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties*                    pQueueFamilyProperties);
void DispatchGetPhysicalDeviceMemoryProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties*           pMemoryProperties);
PFN_vkVoidFunction DispatchGetInstanceProcAddr(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const char*                                 pName);
PFN_vkVoidFunction DispatchGetDeviceProcAddr(ValidationObject *layer_data, 
    VkDevice                                    device,
    const char*                                 pName);
VkResult DispatchCreateDevice(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkDeviceCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDevice*                                   pDevice);
void DispatchDestroyDevice(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchEnumerateInstanceExtensionProperties(ValidationObject *layer_data, 
    const char*                                 pLayerName,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties);
VkResult DispatchEnumerateDeviceExtensionProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const char*                                 pLayerName,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties);
VkResult DispatchEnumerateInstanceLayerProperties(ValidationObject *layer_data, 
    uint32_t*                                   pPropertyCount,
    VkLayerProperties*                          pProperties);
VkResult DispatchEnumerateDeviceLayerProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkLayerProperties*                          pProperties);
void DispatchGetDeviceQueue(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    VkQueue*                                    pQueue);
VkResult DispatchQueueSubmit(ValidationObject *layer_data, 
    VkQueue                                     queue,
    uint32_t                                    submitCount,
    const VkSubmitInfo*                         pSubmits,
    VkFence                                     fence);
VkResult DispatchQueueWaitIdle(ValidationObject *layer_data, 
    VkQueue                                     queue);
VkResult DispatchDeviceWaitIdle(ValidationObject *layer_data, 
    VkDevice                                    device);
VkResult DispatchAllocateMemory(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkMemoryAllocateInfo*                 pAllocateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDeviceMemory*                             pMemory);
void DispatchFreeMemory(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchMapMemory(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    void**                                      ppData);
void DispatchUnmapMemory(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDeviceMemory                              memory);
VkResult DispatchFlushMappedMemoryRanges(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges);
VkResult DispatchInvalidateMappedMemoryRanges(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges);
void DispatchGetDeviceMemoryCommitment(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize*                               pCommittedMemoryInBytes);
VkResult DispatchBindBufferMemory(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset);
VkResult DispatchBindImageMemory(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkImage                                     image,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset);
void DispatchGetBufferMemoryRequirements(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkMemoryRequirements*                       pMemoryRequirements);
void DispatchGetImageMemoryRequirements(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkImage                                     image,
    VkMemoryRequirements*                       pMemoryRequirements);
void DispatchGetImageSparseMemoryRequirements(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkImage                                     image,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements*            pSparseMemoryRequirements);
void DispatchGetPhysicalDeviceSparseImageFormatProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties*              pProperties);
VkResult DispatchQueueBindSparse(ValidationObject *layer_data, 
    VkQueue                                     queue,
    uint32_t                                    bindInfoCount,
    const VkBindSparseInfo*                     pBindInfo,
    VkFence                                     fence);
VkResult DispatchCreateFence(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkFenceCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);
void DispatchDestroyFence(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkFence                                     fence,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchResetFences(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences);
VkResult DispatchGetFenceStatus(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkFence                                     fence);
VkResult DispatchWaitForFences(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout);
VkResult DispatchCreateSemaphore(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkSemaphoreCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSemaphore*                                pSemaphore);
void DispatchDestroySemaphore(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateEvent(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkEventCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkEvent*                                    pEvent);
void DispatchDestroyEvent(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkEvent                                     event,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchGetEventStatus(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkEvent                                     event);
VkResult DispatchSetEvent(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkEvent                                     event);
VkResult DispatchResetEvent(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkEvent                                     event);
VkResult DispatchCreateQueryPool(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkQueryPoolCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkQueryPool*                                pQueryPool);
void DispatchDestroyQueryPool(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchGetQueryPoolResults(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    void*                                       pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags);
VkResult DispatchCreateBuffer(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkBufferCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBuffer*                                   pBuffer);
void DispatchDestroyBuffer(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkBuffer                                    buffer,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateBufferView(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkBufferViewCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBufferView*                               pView);
void DispatchDestroyBufferView(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkBufferView                                bufferView,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateImage(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImageCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImage*                                    pImage);
void DispatchDestroyImage(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkImage                                     image,
    const VkAllocationCallbacks*                pAllocator);
void DispatchGetImageSubresourceLayout(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkImage                                     image,
    const VkImageSubresource*                   pSubresource,
    VkSubresourceLayout*                        pLayout);
VkResult DispatchCreateImageView(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImageViewCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImageView*                                pView);
void DispatchDestroyImageView(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkImageView                                 imageView,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateShaderModule(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkShaderModuleCreateInfo*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkShaderModule*                             pShaderModule);
void DispatchDestroyShaderModule(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkShaderModule                              shaderModule,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreatePipelineCache(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkPipelineCacheCreateInfo*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineCache*                            pPipelineCache);
void DispatchDestroyPipelineCache(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchGetPipelineCacheData(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    size_t*                                     pDataSize,
    void*                                       pData);
VkResult DispatchMergePipelineCaches(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipelineCache                             dstCache,
    uint32_t                                    srcCacheCount,
    const VkPipelineCache*                      pSrcCaches);
VkResult DispatchCreateGraphicsPipelines(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkGraphicsPipelineCreateInfo*         pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);
VkResult DispatchCreateComputePipelines(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkComputePipelineCreateInfo*          pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);
void DispatchDestroyPipeline(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreatePipelineLayout(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkPipelineLayoutCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineLayout*                           pPipelineLayout);
void DispatchDestroyPipelineLayout(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipelineLayout                            pipelineLayout,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateSampler(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkSamplerCreateInfo*                  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSampler*                                  pSampler);
void DispatchDestroySampler(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSampler                                   sampler,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateDescriptorSetLayout(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorSetLayout*                      pSetLayout);
void DispatchDestroyDescriptorSetLayout(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDescriptorSetLayout                       descriptorSetLayout,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateDescriptorPool(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDescriptorPoolCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorPool*                           pDescriptorPool);
void DispatchDestroyDescriptorPool(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchResetDescriptorPool(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags);
VkResult DispatchAllocateDescriptorSets(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDescriptorSetAllocateInfo*          pAllocateInfo,
    VkDescriptorSet*                            pDescriptorSets);
VkResult DispatchFreeDescriptorSets(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets);
void DispatchUpdateDescriptorSets(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const VkCopyDescriptorSet*                  pDescriptorCopies);
VkResult DispatchCreateFramebuffer(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkFramebufferCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFramebuffer*                              pFramebuffer);
void DispatchDestroyFramebuffer(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkFramebuffer                               framebuffer,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateRenderPass(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkRenderPassCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass);
void DispatchDestroyRenderPass(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    const VkAllocationCallbacks*                pAllocator);
void DispatchGetRenderAreaGranularity(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    VkExtent2D*                                 pGranularity);
VkResult DispatchCreateCommandPool(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkCommandPoolCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCommandPool*                              pCommandPool);
void DispatchDestroyCommandPool(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchResetCommandPool(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolResetFlags                     flags);
VkResult DispatchAllocateCommandBuffers(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkCommandBufferAllocateInfo*          pAllocateInfo,
    VkCommandBuffer*                            pCommandBuffers);
void DispatchFreeCommandBuffers(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers);
VkResult DispatchBeginCommandBuffer(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkCommandBufferBeginInfo*             pBeginInfo);
VkResult DispatchEndCommandBuffer(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer);
VkResult DispatchResetCommandBuffer(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkCommandBufferResetFlags                   flags);
void DispatchCmdBindPipeline(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipeline                                  pipeline);
void DispatchCmdSetViewport(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkViewport*                           pViewports);
void DispatchCmdSetScissor(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const VkRect2D*                             pScissors);
void DispatchCmdSetLineWidth(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    float                                       lineWidth);
void DispatchCmdSetDepthBias(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor);
void DispatchCmdSetBlendConstants(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const float                                 blendConstants[4]);
void DispatchCmdSetDepthBounds(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds);
void DispatchCmdSetStencilCompareMask(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask);
void DispatchCmdSetStencilWriteMask(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask);
void DispatchCmdSetStencilReference(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference);
void DispatchCmdBindDescriptorSets(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const uint32_t*                             pDynamicOffsets);
void DispatchCmdBindIndexBuffer(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType);
void DispatchCmdBindVertexBuffers(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets);
void DispatchCmdDraw(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance);
void DispatchCmdDrawIndexed(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance);
void DispatchCmdDrawIndirect(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride);
void DispatchCmdDrawIndexedIndirect(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride);
void DispatchCmdDispatch(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ);
void DispatchCmdDispatchIndirect(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset);
void DispatchCmdCopyBuffer(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferCopy*                         pRegions);
void DispatchCmdCopyImage(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageCopy*                          pRegions);
void DispatchCmdBlitImage(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageBlit*                          pRegions,
    VkFilter                                    filter);
void DispatchCmdCopyBufferToImage(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions);
void DispatchCmdCopyImageToBuffer(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions);
void DispatchCmdUpdateBuffer(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const void*                                 pData);
void DispatchCmdFillBuffer(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data);
void DispatchCmdClearColorImage(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearColorValue*                    pColor,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges);
void DispatchCmdClearDepthStencilImage(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearDepthStencilValue*             pDepthStencil,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges);
void DispatchCmdClearAttachments(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    attachmentCount,
    const VkClearAttachment*                    pAttachments,
    uint32_t                                    rectCount,
    const VkClearRect*                          pRects);
void DispatchCmdResolveImage(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageResolve*                       pRegions);
void DispatchCmdSetEvent(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask);
void DispatchCmdResetEvent(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask);
void DispatchCmdWaitEvents(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    eventCount,
    const VkEvent*                              pEvents,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers);
void DispatchCmdPipelineBarrier(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers);
void DispatchCmdBeginQuery(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags);
void DispatchCmdEndQuery(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query);
void DispatchCmdResetQueryPool(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount);
void DispatchCmdWriteTimestamp(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    VkQueryPool                                 queryPool,
    uint32_t                                    query);
void DispatchCmdCopyQueryPoolResults(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags);
void DispatchCmdPushConstants(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkPipelineLayout                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const void*                                 pValues);
void DispatchCmdBeginRenderPass(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    VkSubpassContents                           contents);
void DispatchCmdNextSubpass(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkSubpassContents                           contents);
void DispatchCmdEndRenderPass(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer);
void DispatchCmdExecuteCommands(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers);
VkResult DispatchEnumerateInstanceVersion(ValidationObject *layer_data, 
    uint32_t*                                   pApiVersion);
VkResult DispatchBindBufferMemory2(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindBufferMemoryInfo*               pBindInfos);
VkResult DispatchBindImageMemory2(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindImageMemoryInfo*                pBindInfos);
void DispatchGetDeviceGroupPeerMemoryFeatures(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlags*                   pPeerMemoryFeatures);
void DispatchCmdSetDeviceMask(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    deviceMask);
void DispatchCmdDispatchBase(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ);
VkResult DispatchEnumeratePhysicalDeviceGroups(ValidationObject *layer_data, 
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupProperties*            pPhysicalDeviceGroupProperties);
void DispatchGetImageMemoryRequirements2(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImageMemoryRequirementsInfo2*       pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);
void DispatchGetBufferMemoryRequirements2(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkBufferMemoryRequirementsInfo2*      pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);
void DispatchGetImageSparseMemoryRequirements2(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImageSparseMemoryRequirementsInfo2* pInfo,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2*           pSparseMemoryRequirements);
void DispatchGetPhysicalDeviceFeatures2(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures2*                  pFeatures);
void DispatchGetPhysicalDeviceProperties2(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2*                pProperties);
void DispatchGetPhysicalDeviceFormatProperties2(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties2*                        pFormatProperties);
VkResult DispatchGetPhysicalDeviceImageFormatProperties2(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2*     pImageFormatInfo,
    VkImageFormatProperties2*                   pImageFormatProperties);
void DispatchGetPhysicalDeviceQueueFamilyProperties2(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2*                   pQueueFamilyProperties);
void DispatchGetPhysicalDeviceMemoryProperties2(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties2*          pMemoryProperties);
void DispatchGetPhysicalDeviceSparseImageFormatProperties2(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties2*             pProperties);
void DispatchTrimCommandPool(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlags                      flags);
void DispatchGetDeviceQueue2(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDeviceQueueInfo2*                   pQueueInfo,
    VkQueue*                                    pQueue);
VkResult DispatchCreateSamplerYcbcrConversion(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkSamplerYcbcrConversionCreateInfo*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSamplerYcbcrConversion*                   pYcbcrConversion);
void DispatchDestroySamplerYcbcrConversion(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSamplerYcbcrConversion                    ycbcrConversion,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateDescriptorUpdateTemplate(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplate*                 pDescriptorUpdateTemplate);
void DispatchDestroyDescriptorUpdateTemplate(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator);
void DispatchUpdateDescriptorSetWithTemplate(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const void*                                 pData);
void DispatchGetPhysicalDeviceExternalBufferProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalBufferInfo*   pExternalBufferInfo,
    VkExternalBufferProperties*                 pExternalBufferProperties);
void DispatchGetPhysicalDeviceExternalFenceProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalFenceInfo*    pExternalFenceInfo,
    VkExternalFenceProperties*                  pExternalFenceProperties);
void DispatchGetPhysicalDeviceExternalSemaphoreProperties(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties*              pExternalSemaphoreProperties);
void DispatchGetDescriptorSetLayoutSupport(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    VkDescriptorSetLayoutSupport*               pSupport);
void DispatchDestroySurfaceKHR(ValidationObject *layer_data, 
    VkInstance                                  instance,
    VkSurfaceKHR                                surface,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchGetPhysicalDeviceSurfaceSupportKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    VkSurfaceKHR                                surface,
    VkBool32*                                   pSupported);
VkResult DispatchGetPhysicalDeviceSurfaceCapabilitiesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilitiesKHR*                   pSurfaceCapabilities);
VkResult DispatchGetPhysicalDeviceSurfaceFormatsKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormatKHR*                         pSurfaceFormats);
VkResult DispatchGetPhysicalDeviceSurfacePresentModesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pPresentModeCount,
    VkPresentModeKHR*                           pPresentModes);
VkResult DispatchCreateSwapchainKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkSwapchainCreateInfoKHR*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchain);
void DispatchDestroySwapchainKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchGetSwapchainImagesKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pSwapchainImageCount,
    VkImage*                                    pSwapchainImages);
VkResult DispatchAcquireNextImageKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint64_t                                    timeout,
    VkSemaphore                                 semaphore,
    VkFence                                     fence,
    uint32_t*                                   pImageIndex);
VkResult DispatchQueuePresentKHR(ValidationObject *layer_data, 
    VkQueue                                     queue,
    const VkPresentInfoKHR*                     pPresentInfo);
VkResult DispatchGetDeviceGroupPresentCapabilitiesKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDeviceGroupPresentCapabilitiesKHR*        pDeviceGroupPresentCapabilities);
VkResult DispatchGetDeviceGroupSurfacePresentModesKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSurfaceKHR                                surface,
    VkDeviceGroupPresentModeFlagsKHR*           pModes);
VkResult DispatchGetPhysicalDevicePresentRectanglesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pRectCount,
    VkRect2D*                                   pRects);
VkResult DispatchAcquireNextImage2KHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkAcquireNextImageInfoKHR*            pAcquireInfo,
    uint32_t*                                   pImageIndex);
VkResult DispatchGetPhysicalDeviceDisplayPropertiesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPropertiesKHR*                     pProperties);
VkResult DispatchGetPhysicalDeviceDisplayPlanePropertiesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPlanePropertiesKHR*                pProperties);
VkResult DispatchGetDisplayPlaneSupportedDisplaysKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    planeIndex,
    uint32_t*                                   pDisplayCount,
    VkDisplayKHR*                               pDisplays);
VkResult DispatchGetDisplayModePropertiesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    uint32_t*                                   pPropertyCount,
    VkDisplayModePropertiesKHR*                 pProperties);
VkResult DispatchCreateDisplayModeKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    const VkDisplayModeCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDisplayModeKHR*                           pMode);
VkResult DispatchGetDisplayPlaneCapabilitiesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkDisplayModeKHR                            mode,
    uint32_t                                    planeIndex,
    VkDisplayPlaneCapabilitiesKHR*              pCapabilities);
VkResult DispatchCreateDisplayPlaneSurfaceKHR(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkDisplaySurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
VkResult DispatchCreateSharedSwapchainsKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    swapchainCount,
    const VkSwapchainCreateInfoKHR*             pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchains);
#ifdef VK_USE_PLATFORM_XLIB_KHR
VkResult DispatchCreateXlibSurfaceKHR(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkXlibSurfaceCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
VkBool32 DispatchGetPhysicalDeviceXlibPresentationSupportKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    Display*                                    dpy,
    VisualID                                    visualID);
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
VkResult DispatchCreateXcbSurfaceKHR(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkXcbSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
VkBool32 DispatchGetPhysicalDeviceXcbPresentationSupportKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    xcb_connection_t*                           connection,
    xcb_visualid_t                              visual_id);
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
VkResult DispatchCreateWaylandSurfaceKHR(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkWaylandSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
VkBool32 DispatchGetPhysicalDeviceWaylandPresentationSupportKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    struct wl_display*                          display);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
VkResult DispatchCreateAndroidSurfaceKHR(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkAndroidSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchCreateWin32SurfaceKHR(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkWin32SurfaceCreateInfoKHR*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkBool32 DispatchGetPhysicalDeviceWin32PresentationSupportKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex);
#endif // VK_USE_PLATFORM_WIN32_KHR
void DispatchGetPhysicalDeviceFeatures2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures2*                  pFeatures);
void DispatchGetPhysicalDeviceProperties2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2*                pProperties);
void DispatchGetPhysicalDeviceFormatProperties2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties2*                        pFormatProperties);
VkResult DispatchGetPhysicalDeviceImageFormatProperties2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2*     pImageFormatInfo,
    VkImageFormatProperties2*                   pImageFormatProperties);
void DispatchGetPhysicalDeviceQueueFamilyProperties2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2*                   pQueueFamilyProperties);
void DispatchGetPhysicalDeviceMemoryProperties2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties2*          pMemoryProperties);
void DispatchGetPhysicalDeviceSparseImageFormatProperties2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties2*             pProperties);
void DispatchGetDeviceGroupPeerMemoryFeaturesKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlags*                   pPeerMemoryFeatures);
void DispatchCmdSetDeviceMaskKHR(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    deviceMask);
void DispatchCmdDispatchBaseKHR(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ);
void DispatchTrimCommandPoolKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlags                      flags);
VkResult DispatchEnumeratePhysicalDeviceGroupsKHR(ValidationObject *layer_data, 
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupProperties*            pPhysicalDeviceGroupProperties);
void DispatchGetPhysicalDeviceExternalBufferPropertiesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalBufferInfo*   pExternalBufferInfo,
    VkExternalBufferProperties*                 pExternalBufferProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchGetMemoryWin32HandleKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkMemoryGetWin32HandleInfoKHR*        pGetWin32HandleInfo,
    HANDLE*                                     pHandle);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchGetMemoryWin32HandlePropertiesKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    HANDLE                                      handle,
    VkMemoryWin32HandlePropertiesKHR*           pMemoryWin32HandleProperties);
#endif // VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchGetMemoryFdKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkMemoryGetFdInfoKHR*                 pGetFdInfo,
    int*                                        pFd);
VkResult DispatchGetMemoryFdPropertiesKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    VkMemoryFdPropertiesKHR*                    pMemoryFdProperties);
void DispatchGetPhysicalDeviceExternalSemaphorePropertiesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties*              pExternalSemaphoreProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchImportSemaphoreWin32HandleKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImportSemaphoreWin32HandleInfoKHR*  pImportSemaphoreWin32HandleInfo);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchGetSemaphoreWin32HandleKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkSemaphoreGetWin32HandleInfoKHR*     pGetWin32HandleInfo,
    HANDLE*                                     pHandle);
#endif // VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchImportSemaphoreFdKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImportSemaphoreFdInfoKHR*           pImportSemaphoreFdInfo);
VkResult DispatchGetSemaphoreFdKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkSemaphoreGetFdInfoKHR*              pGetFdInfo,
    int*                                        pFd);
void DispatchCmdPushDescriptorSetKHR(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites);
void DispatchCmdPushDescriptorSetWithTemplateKHR(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    const void*                                 pData);
VkResult DispatchCreateDescriptorUpdateTemplateKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplate*                 pDescriptorUpdateTemplate);
void DispatchDestroyDescriptorUpdateTemplateKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator);
void DispatchUpdateDescriptorSetWithTemplateKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const void*                                 pData);
VkResult DispatchCreateRenderPass2KHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkRenderPassCreateInfo2KHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass);
void DispatchCmdBeginRenderPass2KHR(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    const VkSubpassBeginInfoKHR*                pSubpassBeginInfo);
void DispatchCmdNextSubpass2KHR(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkSubpassBeginInfoKHR*                pSubpassBeginInfo,
    const VkSubpassEndInfoKHR*                  pSubpassEndInfo);
void DispatchCmdEndRenderPass2KHR(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkSubpassEndInfoKHR*                  pSubpassEndInfo);
VkResult DispatchGetSwapchainStatusKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain);
void DispatchGetPhysicalDeviceExternalFencePropertiesKHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalFenceInfo*    pExternalFenceInfo,
    VkExternalFenceProperties*                  pExternalFenceProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchImportFenceWin32HandleKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImportFenceWin32HandleInfoKHR*      pImportFenceWin32HandleInfo);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchGetFenceWin32HandleKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkFenceGetWin32HandleInfoKHR*         pGetWin32HandleInfo,
    HANDLE*                                     pHandle);
#endif // VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchImportFenceFdKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImportFenceFdInfoKHR*               pImportFenceFdInfo);
VkResult DispatchGetFenceFdKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkFenceGetFdInfoKHR*                  pGetFdInfo,
    int*                                        pFd);
VkResult DispatchGetPhysicalDeviceSurfaceCapabilities2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    VkSurfaceCapabilities2KHR*                  pSurfaceCapabilities);
VkResult DispatchGetPhysicalDeviceSurfaceFormats2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormat2KHR*                        pSurfaceFormats);
VkResult DispatchGetPhysicalDeviceDisplayProperties2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayProperties2KHR*                    pProperties);
VkResult DispatchGetPhysicalDeviceDisplayPlaneProperties2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPlaneProperties2KHR*               pProperties);
VkResult DispatchGetDisplayModeProperties2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    uint32_t*                                   pPropertyCount,
    VkDisplayModeProperties2KHR*                pProperties);
VkResult DispatchGetDisplayPlaneCapabilities2KHR(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    const VkDisplayPlaneInfo2KHR*               pDisplayPlaneInfo,
    VkDisplayPlaneCapabilities2KHR*             pCapabilities);
void DispatchGetImageMemoryRequirements2KHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImageMemoryRequirementsInfo2*       pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);
void DispatchGetBufferMemoryRequirements2KHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkBufferMemoryRequirementsInfo2*      pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements);
void DispatchGetImageSparseMemoryRequirements2KHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImageSparseMemoryRequirementsInfo2* pInfo,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2*           pSparseMemoryRequirements);
VkResult DispatchCreateSamplerYcbcrConversionKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkSamplerYcbcrConversionCreateInfo*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSamplerYcbcrConversion*                   pYcbcrConversion);
void DispatchDestroySamplerYcbcrConversionKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSamplerYcbcrConversion                    ycbcrConversion,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchBindBufferMemory2KHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindBufferMemoryInfo*               pBindInfos);
VkResult DispatchBindImageMemory2KHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindImageMemoryInfo*                pBindInfos);
void DispatchGetDescriptorSetLayoutSupportKHR(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    VkDescriptorSetLayoutSupport*               pSupport);
void DispatchCmdDrawIndirectCountKHR(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride);
void DispatchCmdDrawIndexedIndirectCountKHR(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride);
VkResult DispatchCreateDebugReportCallbackEXT(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkDebugReportCallbackCreateInfoEXT*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDebugReportCallbackEXT*                   pCallback);
void DispatchDestroyDebugReportCallbackEXT(ValidationObject *layer_data, 
    VkInstance                                  instance,
    VkDebugReportCallbackEXT                    callback,
    const VkAllocationCallbacks*                pAllocator);
void DispatchDebugReportMessageEXT(ValidationObject *layer_data, 
    VkInstance                                  instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const char*                                 pLayerPrefix,
    const char*                                 pMessage);
VkResult DispatchDebugMarkerSetObjectTagEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDebugMarkerObjectTagInfoEXT*        pTagInfo);
VkResult DispatchDebugMarkerSetObjectNameEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDebugMarkerObjectNameInfoEXT*       pNameInfo);
void DispatchCmdDebugMarkerBeginEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkDebugMarkerMarkerInfoEXT*           pMarkerInfo);
void DispatchCmdDebugMarkerEndEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer);
void DispatchCmdDebugMarkerInsertEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkDebugMarkerMarkerInfoEXT*           pMarkerInfo);
void DispatchCmdBindTransformFeedbackBuffersEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets,
    const VkDeviceSize*                         pSizes);
void DispatchCmdBeginTransformFeedbackEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const VkBuffer*                             pCounterBuffers,
    const VkDeviceSize*                         pCounterBufferOffsets);
void DispatchCmdEndTransformFeedbackEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const VkBuffer*                             pCounterBuffers,
    const VkDeviceSize*                         pCounterBufferOffsets);
void DispatchCmdBeginQueryIndexedEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags,
    uint32_t                                    index);
void DispatchCmdEndQueryIndexedEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    uint32_t                                    index);
void DispatchCmdDrawIndirectByteCountEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    VkBuffer                                    counterBuffer,
    VkDeviceSize                                counterBufferOffset,
    uint32_t                                    counterOffset,
    uint32_t                                    vertexStride);
uint32_t DispatchGetImageViewHandleNVX(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkImageViewHandleInfoNVX*             pInfo);
void DispatchCmdDrawIndirectCountAMD(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride);
void DispatchCmdDrawIndexedIndirectCountAMD(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride);
VkResult DispatchGetShaderInfoAMD(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    size_t*                                     pInfoSize,
    void*                                       pInfo);
VkResult DispatchGetPhysicalDeviceExternalImageFormatPropertiesNV(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    VkExternalImageFormatPropertiesNV*          pExternalImageFormatProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult DispatchGetMemoryWin32HandleNV(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    HANDLE*                                     pHandle);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_VI_NN
VkResult DispatchCreateViSurfaceNN(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkViSurfaceCreateInfoNN*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_VI_NN
void DispatchCmdBeginConditionalRenderingEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkConditionalRenderingBeginInfoEXT*   pConditionalRenderingBegin);
void DispatchCmdEndConditionalRenderingEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer);
void DispatchCmdProcessCommandsNVX(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkCmdProcessCommandsInfoNVX*          pProcessCommandsInfo);
void DispatchCmdReserveSpaceForCommandsNVX(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkCmdReserveSpaceForCommandsInfoNVX*  pReserveSpaceInfo);
VkResult DispatchCreateIndirectCommandsLayoutNVX(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkIndirectCommandsLayoutNVX*                pIndirectCommandsLayout);
void DispatchDestroyIndirectCommandsLayoutNVX(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkIndirectCommandsLayoutNVX                 indirectCommandsLayout,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchCreateObjectTableNVX(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkObjectTableCreateInfoNVX*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkObjectTableNVX*                           pObjectTable);
void DispatchDestroyObjectTableNVX(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchRegisterObjectsNVX(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectTableEntryNVX* const*         ppObjectTableEntries,
    const uint32_t*                             pObjectIndices);
VkResult DispatchUnregisterObjectsNVX(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectEntryTypeNVX*                 pObjectEntryTypes,
    const uint32_t*                             pObjectIndices);
void DispatchGetPhysicalDeviceGeneratedCommandsPropertiesNVX(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkDeviceGeneratedCommandsFeaturesNVX*       pFeatures,
    VkDeviceGeneratedCommandsLimitsNVX*         pLimits);
void DispatchCmdSetViewportWScalingNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkViewportWScalingNV*                 pViewportWScalings);
VkResult DispatchReleaseDisplayEXT(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display);
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
VkResult DispatchAcquireXlibDisplayEXT(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    VkDisplayKHR                                display);
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
VkResult DispatchGetRandROutputDisplayEXT(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    RROutput                                    rrOutput,
    VkDisplayKHR*                               pDisplay);
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
VkResult DispatchGetPhysicalDeviceSurfaceCapabilities2EXT(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilities2EXT*                  pSurfaceCapabilities);
VkResult DispatchDisplayPowerControlEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayPowerInfoEXT*                pDisplayPowerInfo);
VkResult DispatchRegisterDeviceEventEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDeviceEventInfoEXT*                 pDeviceEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);
VkResult DispatchRegisterDisplayEventEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayEventInfoEXT*                pDisplayEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);
VkResult DispatchGetSwapchainCounterEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    uint64_t*                                   pCounterValue);
VkResult DispatchGetRefreshCycleDurationGOOGLE(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkRefreshCycleDurationGOOGLE*               pDisplayTimingProperties);
VkResult DispatchGetPastPresentationTimingGOOGLE(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pPresentationTimingCount,
    VkPastPresentationTimingGOOGLE*             pPresentationTimings);
void DispatchCmdSetDiscardRectangleEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const VkRect2D*                             pDiscardRectangles);
void DispatchSetHdrMetadataEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    swapchainCount,
    const VkSwapchainKHR*                       pSwapchains,
    const VkHdrMetadataEXT*                     pMetadata);
#ifdef VK_USE_PLATFORM_IOS_MVK
VkResult DispatchCreateIOSSurfaceMVK(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkIOSSurfaceCreateInfoMVK*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
VkResult DispatchCreateMacOSSurfaceMVK(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkMacOSSurfaceCreateInfoMVK*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_MACOS_MVK
VkResult DispatchSetDebugUtilsObjectNameEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDebugUtilsObjectNameInfoEXT*        pNameInfo);
VkResult DispatchSetDebugUtilsObjectTagEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkDebugUtilsObjectTagInfoEXT*         pTagInfo);
void DispatchQueueBeginDebugUtilsLabelEXT(ValidationObject *layer_data, 
    VkQueue                                     queue,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);
void DispatchQueueEndDebugUtilsLabelEXT(ValidationObject *layer_data, 
    VkQueue                                     queue);
void DispatchQueueInsertDebugUtilsLabelEXT(ValidationObject *layer_data, 
    VkQueue                                     queue,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);
void DispatchCmdBeginDebugUtilsLabelEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);
void DispatchCmdEndDebugUtilsLabelEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer);
void DispatchCmdInsertDebugUtilsLabelEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);
VkResult DispatchCreateDebugUtilsMessengerEXT(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkDebugUtilsMessengerCreateInfoEXT*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDebugUtilsMessengerEXT*                   pMessenger);
void DispatchDestroyDebugUtilsMessengerEXT(ValidationObject *layer_data, 
    VkInstance                                  instance,
    VkDebugUtilsMessengerEXT                    messenger,
    const VkAllocationCallbacks*                pAllocator);
void DispatchSubmitDebugUtilsMessageEXT(ValidationObject *layer_data, 
    VkInstance                                  instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
VkResult DispatchGetAndroidHardwareBufferPropertiesANDROID(ValidationObject *layer_data, 
    VkDevice                                    device,
    const struct AHardwareBuffer*               buffer,
    VkAndroidHardwareBufferPropertiesANDROID*   pProperties);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
VkResult DispatchGetMemoryAndroidHardwareBufferANDROID(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo,
    struct AHardwareBuffer**                    pBuffer);
#endif // VK_USE_PLATFORM_ANDROID_KHR
void DispatchCmdSetSampleLocationsEXT(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkSampleLocationsInfoEXT*             pSampleLocationsInfo);
void DispatchGetPhysicalDeviceMultisamplePropertiesEXT(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    VkMultisamplePropertiesEXT*                 pMultisampleProperties);
VkResult DispatchGetImageDrmFormatModifierPropertiesEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkImage                                     image,
    VkImageDrmFormatModifierPropertiesEXT*      pProperties);
VkResult DispatchCreateValidationCacheEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkValidationCacheCreateInfoEXT*       pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkValidationCacheEXT*                       pValidationCache);
void DispatchDestroyValidationCacheEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkValidationCacheEXT                        validationCache,
    const VkAllocationCallbacks*                pAllocator);
VkResult DispatchMergeValidationCachesEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkValidationCacheEXT                        dstCache,
    uint32_t                                    srcCacheCount,
    const VkValidationCacheEXT*                 pSrcCaches);
VkResult DispatchGetValidationCacheDataEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkValidationCacheEXT                        validationCache,
    size_t*                                     pDataSize,
    void*                                       pData);
void DispatchCmdBindShadingRateImageNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkImageView                                 imageView,
    VkImageLayout                               imageLayout);
void DispatchCmdSetViewportShadingRatePaletteNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkShadingRatePaletteNV*               pShadingRatePalettes);
void DispatchCmdSetCoarseSampleOrderNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    const VkCoarseSampleOrderCustomNV*          pCustomSampleOrders);
VkResult DispatchCreateAccelerationStructureNV(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkAccelerationStructureCreateInfoNV*  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkAccelerationStructureNV*                  pAccelerationStructure);
void DispatchDestroyAccelerationStructureNV(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkAccelerationStructureNV                   accelerationStructure,
    const VkAllocationCallbacks*                pAllocator);
void DispatchGetAccelerationStructureMemoryRequirementsNV(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo,
    VkMemoryRequirements2KHR*                   pMemoryRequirements);
VkResult DispatchBindAccelerationStructureMemoryNV(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindAccelerationStructureMemoryInfoNV* pBindInfos);
void DispatchCmdBuildAccelerationStructureNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const VkAccelerationStructureInfoNV*        pInfo,
    VkBuffer                                    instanceData,
    VkDeviceSize                                instanceOffset,
    VkBool32                                    update,
    VkAccelerationStructureNV                   dst,
    VkAccelerationStructureNV                   src,
    VkBuffer                                    scratch,
    VkDeviceSize                                scratchOffset);
void DispatchCmdCopyAccelerationStructureNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkAccelerationStructureNV                   dst,
    VkAccelerationStructureNV                   src,
    VkCopyAccelerationStructureModeNV           mode);
void DispatchCmdTraceRaysNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    raygenShaderBindingTableBuffer,
    VkDeviceSize                                raygenShaderBindingOffset,
    VkBuffer                                    missShaderBindingTableBuffer,
    VkDeviceSize                                missShaderBindingOffset,
    VkDeviceSize                                missShaderBindingStride,
    VkBuffer                                    hitShaderBindingTableBuffer,
    VkDeviceSize                                hitShaderBindingOffset,
    VkDeviceSize                                hitShaderBindingStride,
    VkBuffer                                    callableShaderBindingTableBuffer,
    VkDeviceSize                                callableShaderBindingOffset,
    VkDeviceSize                                callableShaderBindingStride,
    uint32_t                                    width,
    uint32_t                                    height,
    uint32_t                                    depth);
VkResult DispatchCreateRayTracingPipelinesNV(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkRayTracingPipelineCreateInfoNV*     pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);
VkResult DispatchGetRayTracingShaderGroupHandlesNV(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    void*                                       pData);
VkResult DispatchGetAccelerationStructureHandleNV(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkAccelerationStructureNV                   accelerationStructure,
    size_t                                      dataSize,
    void*                                       pData);
void DispatchCmdWriteAccelerationStructuresPropertiesNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    accelerationStructureCount,
    const VkAccelerationStructureNV*            pAccelerationStructures,
    VkQueryType                                 queryType,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery);
VkResult DispatchCompileDeferredNV(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    uint32_t                                    shader);
VkResult DispatchGetMemoryHostPointerPropertiesEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    const void*                                 pHostPointer,
    VkMemoryHostPointerPropertiesEXT*           pMemoryHostPointerProperties);
void DispatchCmdWriteBufferMarkerAMD(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker);
VkResult DispatchGetPhysicalDeviceCalibrateableTimeDomainsEXT(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pTimeDomainCount,
    VkTimeDomainEXT*                            pTimeDomains);
VkResult DispatchGetCalibratedTimestampsEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    uint32_t                                    timestampCount,
    const VkCalibratedTimestampInfoEXT*         pTimestampInfos,
    uint64_t*                                   pTimestamps,
    uint64_t*                                   pMaxDeviation);
void DispatchCmdDrawMeshTasksNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask);
void DispatchCmdDrawMeshTasksIndirectNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride);
void DispatchCmdDrawMeshTasksIndirectCountNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride);
void DispatchCmdSetExclusiveScissorNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    const VkRect2D*                             pExclusiveScissors);
void DispatchCmdSetCheckpointNV(ValidationObject *layer_data, 
    VkCommandBuffer                             commandBuffer,
    const void*                                 pCheckpointMarker);
void DispatchGetQueueCheckpointDataNV(ValidationObject *layer_data, 
    VkQueue                                     queue,
    uint32_t*                                   pCheckpointDataCount,
    VkCheckpointDataNV*                         pCheckpointData);
#ifdef VK_USE_PLATFORM_FUCHSIA
VkResult DispatchCreateImagePipeSurfaceFUCHSIA(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkImagePipeSurfaceCreateInfoFUCHSIA*  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
VkResult DispatchCreateMetalSurfaceEXT(ValidationObject *layer_data, 
    VkInstance                                  instance,
    const VkMetalSurfaceCreateInfoEXT*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif // VK_USE_PLATFORM_METAL_EXT
VkDeviceAddress DispatchGetBufferDeviceAddressEXT(ValidationObject *layer_data, 
    VkDevice                                    device,
    const VkBufferDeviceAddressInfoEXT*         pInfo);
VkResult DispatchGetPhysicalDeviceCooperativeMatrixPropertiesNV(ValidationObject *layer_data, 
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkCooperativeMatrixPropertiesNV*            pProperties);