// This file is generated by TypeBuilder_cpp.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/Memory.h"

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"

namespace blink {
namespace protocol {
namespace Memory {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Memory";
const char Metainfo::commandPrefix[] = "Memory.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<SamplingProfileNode> SamplingProfileNode::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SamplingProfileNode> result(new SamplingProfileNode());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<double>::fromValue(sizeValue, errors);
    protocol::Value* totalValue = object->get("total");
    errors->setName("total");
    result->m_total = ValueConversions<double>::fromValue(totalValue, errors);
    protocol::Value* stackValue = object->get("stack");
    errors->setName("stack");
    result->m_stack = ValueConversions<protocol::Array<String>>::fromValue(stackValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SamplingProfileNode::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("size", ValueConversions<double>::toValue(m_size));
    result->setValue("total", ValueConversions<double>::toValue(m_total));
    result->setValue("stack", ValueConversions<protocol::Array<String>>::toValue(m_stack.get()));
    return result;
}

std::unique_ptr<SamplingProfileNode> SamplingProfileNode::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SamplingProfile> SamplingProfile::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SamplingProfile> result(new SamplingProfile());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* samplesValue = object->get("samples");
    errors->setName("samples");
    result->m_samples = ValueConversions<protocol::Array<protocol::Memory::SamplingProfileNode>>::fromValue(samplesValue, errors);
    protocol::Value* modulesValue = object->get("modules");
    errors->setName("modules");
    result->m_modules = ValueConversions<protocol::Array<protocol::Memory::Module>>::fromValue(modulesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SamplingProfile::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("samples", ValueConversions<protocol::Array<protocol::Memory::SamplingProfileNode>>::toValue(m_samples.get()));
    result->setValue("modules", ValueConversions<protocol::Array<protocol::Memory::Module>>::toValue(m_modules.get()));
    return result;
}

std::unique_ptr<SamplingProfile> SamplingProfile::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<Module> Module::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Module> result(new Module());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* uuidValue = object->get("uuid");
    errors->setName("uuid");
    result->m_uuid = ValueConversions<String>::fromValue(uuidValue, errors);
    protocol::Value* baseAddressValue = object->get("baseAddress");
    errors->setName("baseAddress");
    result->m_baseAddress = ValueConversions<String>::fromValue(baseAddressValue, errors);
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<double>::fromValue(sizeValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Module::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("uuid", ValueConversions<String>::toValue(m_uuid));
    result->setValue("baseAddress", ValueConversions<String>::toValue(m_baseAddress));
    result->setValue("size", ValueConversions<double>::toValue(m_size));
    return result;
}

std::unique_ptr<Module> Module::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::flush()
{
    m_frontendChannel->flushProtocolNotifications();
}

void Frontend::sendRawJSONNotification(String notification)
{
    m_frontendChannel->sendProtocolNotification(InternalRawNotification::fromJSON(std::move(notification)));
}

void Frontend::sendRawCBORNotification(std::vector<uint8_t> notification)
{
    m_frontendChannel->sendProtocolNotification(InternalRawNotification::fromBinary(std::move(notification)));
}

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
        m_dispatchMap["Memory.getDOMCounters"] = &DispatcherImpl::getDOMCounters;
        m_dispatchMap["Memory.forciblyPurgeJavaScriptMemory"] = &DispatcherImpl::forciblyPurgeJavaScriptMemory;
        m_dispatchMap["Memory.startSampling"] = &DispatcherImpl::startSampling;
        m_dispatchMap["Memory.stopSampling"] = &DispatcherImpl::stopSampling;
        m_dispatchMap["Memory.getAllTimeSamplingProfile"] = &DispatcherImpl::getAllTimeSamplingProfile;
        m_dispatchMap["Memory.getSamplingProfile"] = &DispatcherImpl::getSamplingProfile;
    }
    ~DispatcherImpl() override { }
    bool canDispatch(const String& method) override;
    void dispatch(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    std::unordered_map<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = std::unordered_map<String, CallHandler>;
    DispatchMap m_dispatchMap;
    std::unordered_map<String, String> m_redirects;

    void getDOMCounters(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void forciblyPurgeJavaScriptMemory(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void startSampling(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void stopSampling(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getAllTimeSamplingProfile(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getSamplingProfile(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

    Backend* m_backend;
};

bool DispatcherImpl::canDispatch(const String& method) {
    return m_dispatchMap.find(method) != m_dispatchMap.end();
}

void DispatcherImpl::dispatch(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<protocol::DictionaryValue> messageObject)
{
    std::unordered_map<String, CallHandler>::iterator it = m_dispatchMap.find(method);
    DCHECK(it != m_dispatchMap.end());
    protocol::ErrorSupport errors;
    (this->*(it->second))(callId, method, message, std::move(messageObject), &errors);
}


void DispatcherImpl::getDOMCounters(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    int out_documents;
    int out_nodes;
    int out_jsEventListeners;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getDOMCounters(&out_documents, &out_nodes, &out_jsEventListeners);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("documents", ValueConversions<int>::toValue(out_documents));
        result->setValue("nodes", ValueConversions<int>::toValue(out_nodes));
        result->setValue("jsEventListeners", ValueConversions<int>::toValue(out_jsEventListeners));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return;
}

void DispatcherImpl::forciblyPurgeJavaScriptMemory(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->forciblyPurgeJavaScriptMemory();
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::startSampling(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* samplingIntervalValue = object ? object->get("samplingInterval") : nullptr;
    Maybe<int> in_samplingInterval;
    if (samplingIntervalValue) {
        errors->setName("samplingInterval");
        in_samplingInterval = ValueConversions<int>::fromValue(samplingIntervalValue, errors);
    }
    protocol::Value* suppressRandomnessValue = object ? object->get("suppressRandomness") : nullptr;
    Maybe<bool> in_suppressRandomness;
    if (suppressRandomnessValue) {
        errors->setName("suppressRandomness");
        in_suppressRandomness = ValueConversions<bool>::fromValue(suppressRandomnessValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->startSampling(std::move(in_samplingInterval), std::move(in_suppressRandomness));
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::stopSampling(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->stopSampling();
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::getAllTimeSamplingProfile(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::Memory::SamplingProfile> out_profile;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getAllTimeSamplingProfile(&out_profile);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("profile", ValueConversions<protocol::Memory::SamplingProfile>::toValue(out_profile.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return;
}

void DispatcherImpl::getSamplingProfile(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::Memory::SamplingProfile> out_profile;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getSamplingProfile(&out_profile);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("profile", ValueConversions<protocol::Memory::SamplingProfile>::toValue(out_profile.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return;
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Memory", std::move(dispatcher));
}

} // Memory
} // namespace blink
} // namespace protocol
