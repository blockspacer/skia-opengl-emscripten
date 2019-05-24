// This file is generated by TypeBuilder_cpp.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/overlay.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
namespace protocol {
namespace Overlay {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Overlay";
const char Metainfo::commandPrefix[] = "Overlay.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<HighlightConfig> HighlightConfig::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<HighlightConfig> result(new HighlightConfig());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* showInfoValue = object->get("showInfo");
    if (showInfoValue) {
        errors->setName("showInfo");
        result->m_showInfo = ValueConversions<bool>::fromValue(showInfoValue, errors);
    }
    protocol::Value* showStylesValue = object->get("showStyles");
    if (showStylesValue) {
        errors->setName("showStyles");
        result->m_showStyles = ValueConversions<bool>::fromValue(showStylesValue, errors);
    }
    protocol::Value* showRulersValue = object->get("showRulers");
    if (showRulersValue) {
        errors->setName("showRulers");
        result->m_showRulers = ValueConversions<bool>::fromValue(showRulersValue, errors);
    }
    protocol::Value* showExtensionLinesValue = object->get("showExtensionLines");
    if (showExtensionLinesValue) {
        errors->setName("showExtensionLines");
        result->m_showExtensionLines = ValueConversions<bool>::fromValue(showExtensionLinesValue, errors);
    }
    protocol::Value* contentColorValue = object->get("contentColor");
    if (contentColorValue) {
        errors->setName("contentColor");
        result->m_contentColor = ValueConversions<protocol::DOM::RGBA>::fromValue(contentColorValue, errors);
    }
    protocol::Value* paddingColorValue = object->get("paddingColor");
    if (paddingColorValue) {
        errors->setName("paddingColor");
        result->m_paddingColor = ValueConversions<protocol::DOM::RGBA>::fromValue(paddingColorValue, errors);
    }
    protocol::Value* borderColorValue = object->get("borderColor");
    if (borderColorValue) {
        errors->setName("borderColor");
        result->m_borderColor = ValueConversions<protocol::DOM::RGBA>::fromValue(borderColorValue, errors);
    }
    protocol::Value* marginColorValue = object->get("marginColor");
    if (marginColorValue) {
        errors->setName("marginColor");
        result->m_marginColor = ValueConversions<protocol::DOM::RGBA>::fromValue(marginColorValue, errors);
    }
    protocol::Value* eventTargetColorValue = object->get("eventTargetColor");
    if (eventTargetColorValue) {
        errors->setName("eventTargetColor");
        result->m_eventTargetColor = ValueConversions<protocol::DOM::RGBA>::fromValue(eventTargetColorValue, errors);
    }
    protocol::Value* shapeColorValue = object->get("shapeColor");
    if (shapeColorValue) {
        errors->setName("shapeColor");
        result->m_shapeColor = ValueConversions<protocol::DOM::RGBA>::fromValue(shapeColorValue, errors);
    }
    protocol::Value* shapeMarginColorValue = object->get("shapeMarginColor");
    if (shapeMarginColorValue) {
        errors->setName("shapeMarginColor");
        result->m_shapeMarginColor = ValueConversions<protocol::DOM::RGBA>::fromValue(shapeMarginColorValue, errors);
    }
    protocol::Value* cssGridColorValue = object->get("cssGridColor");
    if (cssGridColorValue) {
        errors->setName("cssGridColor");
        result->m_cssGridColor = ValueConversions<protocol::DOM::RGBA>::fromValue(cssGridColorValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> HighlightConfig::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_showInfo.isJust())
        result->setValue("showInfo", ValueConversions<bool>::toValue(m_showInfo.fromJust()));
    if (m_showStyles.isJust())
        result->setValue("showStyles", ValueConversions<bool>::toValue(m_showStyles.fromJust()));
    if (m_showRulers.isJust())
        result->setValue("showRulers", ValueConversions<bool>::toValue(m_showRulers.fromJust()));
    if (m_showExtensionLines.isJust())
        result->setValue("showExtensionLines", ValueConversions<bool>::toValue(m_showExtensionLines.fromJust()));
    if (m_contentColor.isJust())
        result->setValue("contentColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_contentColor.fromJust()));
    if (m_paddingColor.isJust())
        result->setValue("paddingColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_paddingColor.fromJust()));
    if (m_borderColor.isJust())
        result->setValue("borderColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_borderColor.fromJust()));
    if (m_marginColor.isJust())
        result->setValue("marginColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_marginColor.fromJust()));
    if (m_eventTargetColor.isJust())
        result->setValue("eventTargetColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_eventTargetColor.fromJust()));
    if (m_shapeColor.isJust())
        result->setValue("shapeColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_shapeColor.fromJust()));
    if (m_shapeMarginColor.isJust())
        result->setValue("shapeMarginColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_shapeMarginColor.fromJust()));
    if (m_cssGridColor.isJust())
        result->setValue("cssGridColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_cssGridColor.fromJust()));
    return result;
}

std::unique_ptr<HighlightConfig> HighlightConfig::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

namespace InspectModeEnum {
const char SearchForNode[] = "searchForNode";
const char SearchForUAShadowDOM[] = "searchForUAShadowDOM";
const char CaptureAreaScreenshot[] = "captureAreaScreenshot";
const char ShowDistances[] = "showDistances";
const char None[] = "none";
} // namespace InspectModeEnum

std::unique_ptr<InspectNodeRequestedNotification> InspectNodeRequestedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<InspectNodeRequestedNotification> result(new InspectNodeRequestedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* backendNodeIdValue = object->get("backendNodeId");
    errors->setName("backendNodeId");
    result->m_backendNodeId = ValueConversions<int>::fromValue(backendNodeIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> InspectNodeRequestedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("backendNodeId", ValueConversions<int>::toValue(m_backendNodeId));
    return result;
}

std::unique_ptr<InspectNodeRequestedNotification> InspectNodeRequestedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<NodeHighlightRequestedNotification> NodeHighlightRequestedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<NodeHighlightRequestedNotification> result(new NodeHighlightRequestedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nodeIdValue = object->get("nodeId");
    errors->setName("nodeId");
    result->m_nodeId = ValueConversions<int>::fromValue(nodeIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> NodeHighlightRequestedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("nodeId", ValueConversions<int>::toValue(m_nodeId));
    return result;
}

std::unique_ptr<NodeHighlightRequestedNotification> NodeHighlightRequestedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ScreenshotRequestedNotification> ScreenshotRequestedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ScreenshotRequestedNotification> result(new ScreenshotRequestedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* viewportValue = object->get("viewport");
    errors->setName("viewport");
    result->m_viewport = ValueConversions<protocol::Page::Viewport>::fromValue(viewportValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ScreenshotRequestedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("viewport", ValueConversions<protocol::Page::Viewport>::toValue(m_viewport.get()));
    return result;
}

std::unique_ptr<ScreenshotRequestedNotification> ScreenshotRequestedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::InspectNodeRequested(int backendNodeId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<InspectNodeRequestedNotification> messageData = InspectNodeRequestedNotification::Create()
        .SetBackendNodeId(backendNodeId)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Overlay.inspectNodeRequested", std::move(messageData)));
}

void Frontend::NodeHighlightRequested(int nodeId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<NodeHighlightRequestedNotification> messageData = NodeHighlightRequestedNotification::Create()
        .SetNodeId(nodeId)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Overlay.nodeHighlightRequested", std::move(messageData)));
}

void Frontend::ScreenshotRequested(std::unique_ptr<protocol::Page::Viewport> viewport)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<ScreenshotRequestedNotification> messageData = ScreenshotRequestedNotification::Create()
        .SetViewport(std::move(viewport))
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Overlay.screenshotRequested", std::move(messageData)));
}

void Frontend::InspectModeCanceled()
{
    if (!m_frontendChannel)
        return;
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Overlay.inspectModeCanceled"));
}

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
        m_dispatchMap["Overlay.setInspectMode"] = &DispatcherImpl::setInspectMode;
        m_dispatchMap["Overlay.setPausedInDebuggerMessage"] = &DispatcherImpl::setPausedInDebuggerMessage;
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

    void setInspectMode(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setPausedInDebuggerMessage(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::setInspectMode(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* modeValue = object ? object->get("mode") : nullptr;
    errors->setName("mode");
    String in_mode = ValueConversions<String>::fromValue(modeValue, errors);
    protocol::Value* highlightConfigValue = object ? object->get("highlightConfig") : nullptr;
    Maybe<protocol::Overlay::HighlightConfig> in_highlightConfig;
    if (highlightConfigValue) {
        errors->setName("highlightConfig");
        in_highlightConfig = ValueConversions<protocol::Overlay::HighlightConfig>::fromValue(highlightConfigValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetInspectMode(in_mode, std::move(in_highlightConfig));
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::setPausedInDebuggerMessage(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* messageValue = object ? object->get("message") : nullptr;
    Maybe<String> in_message;
    if (messageValue) {
        errors->setName("message");
        in_message = ValueConversions<String>::fromValue(messageValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetPausedInDebuggerMessage(std::move(in_message));
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Overlay", std::move(dispatcher));
}

} // Overlay
} // namespace content
} // namespace protocol
