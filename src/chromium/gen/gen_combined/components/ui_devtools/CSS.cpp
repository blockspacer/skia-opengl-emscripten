// This file is generated by TypeBuilder_cpp.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/ui_devtools/CSS.h"

#include "components/ui_devtools/Protocol.h"

namespace ui_devtools {
namespace protocol {
namespace CSS {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "CSS";
const char Metainfo::commandPrefix[] = "CSS.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<SourceRange> SourceRange::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SourceRange> result(new SourceRange());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* startLineValue = object->get("startLine");
    errors->setName("startLine");
    result->m_startLine = ValueConversions<int>::fromValue(startLineValue, errors);
    protocol::Value* startColumnValue = object->get("startColumn");
    errors->setName("startColumn");
    result->m_startColumn = ValueConversions<int>::fromValue(startColumnValue, errors);
    protocol::Value* endLineValue = object->get("endLine");
    errors->setName("endLine");
    result->m_endLine = ValueConversions<int>::fromValue(endLineValue, errors);
    protocol::Value* endColumnValue = object->get("endColumn");
    errors->setName("endColumn");
    result->m_endColumn = ValueConversions<int>::fromValue(endColumnValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SourceRange::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("startLine", ValueConversions<int>::toValue(m_startLine));
    result->setValue("startColumn", ValueConversions<int>::toValue(m_startColumn));
    result->setValue("endLine", ValueConversions<int>::toValue(m_endLine));
    result->setValue("endColumn", ValueConversions<int>::toValue(m_endColumn));
    return result;
}

std::unique_ptr<SourceRange> SourceRange::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ShorthandEntry> ShorthandEntry::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ShorthandEntry> result(new ShorthandEntry());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* valueValue = object->get("value");
    errors->setName("value");
    result->m_value = ValueConversions<String>::fromValue(valueValue, errors);
    protocol::Value* importantValue = object->get("important");
    if (importantValue) {
        errors->setName("important");
        result->m_important = ValueConversions<bool>::fromValue(importantValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ShorthandEntry::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("value", ValueConversions<String>::toValue(m_value));
    if (m_important.isJust())
        result->setValue("important", ValueConversions<bool>::toValue(m_important.fromJust()));
    return result;
}

std::unique_ptr<ShorthandEntry> ShorthandEntry::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<CSSStyle> CSSStyle::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CSSStyle> result(new CSSStyle());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* styleSheetIdValue = object->get("styleSheetId");
    if (styleSheetIdValue) {
        errors->setName("styleSheetId");
        result->m_styleSheetId = ValueConversions<String>::fromValue(styleSheetIdValue, errors);
    }
    protocol::Value* cssPropertiesValue = object->get("cssProperties");
    errors->setName("cssProperties");
    result->m_cssProperties = ValueConversions<protocol::Array<protocol::CSS::CSSProperty>>::fromValue(cssPropertiesValue, errors);
    protocol::Value* shorthandEntriesValue = object->get("shorthandEntries");
    errors->setName("shorthandEntries");
    result->m_shorthandEntries = ValueConversions<protocol::Array<protocol::CSS::ShorthandEntry>>::fromValue(shorthandEntriesValue, errors);
    protocol::Value* rangeValue = object->get("range");
    if (rangeValue) {
        errors->setName("range");
        result->m_range = ValueConversions<protocol::CSS::SourceRange>::fromValue(rangeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CSSStyle::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_styleSheetId.isJust())
        result->setValue("styleSheetId", ValueConversions<String>::toValue(m_styleSheetId.fromJust()));
    result->setValue("cssProperties", ValueConversions<protocol::Array<protocol::CSS::CSSProperty>>::toValue(m_cssProperties.get()));
    result->setValue("shorthandEntries", ValueConversions<protocol::Array<protocol::CSS::ShorthandEntry>>::toValue(m_shorthandEntries.get()));
    if (m_range.isJust())
        result->setValue("range", ValueConversions<protocol::CSS::SourceRange>::toValue(m_range.fromJust()));
    return result;
}

std::unique_ptr<CSSStyle> CSSStyle::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<CSSProperty> CSSProperty::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CSSProperty> result(new CSSProperty());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* valueValue = object->get("value");
    errors->setName("value");
    result->m_value = ValueConversions<String>::fromValue(valueValue, errors);
    protocol::Value* rangeValue = object->get("range");
    if (rangeValue) {
        errors->setName("range");
        result->m_range = ValueConversions<protocol::CSS::SourceRange>::fromValue(rangeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CSSProperty::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("value", ValueConversions<String>::toValue(m_value));
    if (m_range.isJust())
        result->setValue("range", ValueConversions<protocol::CSS::SourceRange>::toValue(m_range.fromJust()));
    return result;
}

std::unique_ptr<CSSProperty> CSSProperty::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<StyleDeclarationEdit> StyleDeclarationEdit::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<StyleDeclarationEdit> result(new StyleDeclarationEdit());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* styleSheetIdValue = object->get("styleSheetId");
    errors->setName("styleSheetId");
    result->m_styleSheetId = ValueConversions<String>::fromValue(styleSheetIdValue, errors);
    protocol::Value* rangeValue = object->get("range");
    errors->setName("range");
    result->m_range = ValueConversions<protocol::CSS::SourceRange>::fromValue(rangeValue, errors);
    protocol::Value* textValue = object->get("text");
    errors->setName("text");
    result->m_text = ValueConversions<String>::fromValue(textValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> StyleDeclarationEdit::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("styleSheetId", ValueConversions<String>::toValue(m_styleSheetId));
    result->setValue("range", ValueConversions<protocol::CSS::SourceRange>::toValue(m_range.get()));
    result->setValue("text", ValueConversions<String>::toValue(m_text));
    return result;
}

std::unique_ptr<StyleDeclarationEdit> StyleDeclarationEdit::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<StyleSheetChangedNotification> StyleSheetChangedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<StyleSheetChangedNotification> result(new StyleSheetChangedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* styleSheetIdValue = object->get("styleSheetId");
    errors->setName("styleSheetId");
    result->m_styleSheetId = ValueConversions<String>::fromValue(styleSheetIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> StyleSheetChangedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("styleSheetId", ValueConversions<String>::toValue(m_styleSheetId));
    return result;
}

std::unique_ptr<StyleSheetChangedNotification> StyleSheetChangedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::styleSheetChanged(const String& styleSheetId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<StyleSheetChangedNotification> messageData = StyleSheetChangedNotification::create()
        .setStyleSheetId(styleSheetId)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("CSS.styleSheetChanged", std::move(messageData)));
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
        m_dispatchMap["CSS.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["CSS.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["CSS.getMatchedStylesForNode"] = &DispatcherImpl::getMatchedStylesForNode;
        m_dispatchMap["CSS.setStyleTexts"] = &DispatcherImpl::setStyleTexts;
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

    void disable(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void enable(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getMatchedStylesForNode(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setStyleTexts(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::disable(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->disable();
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::enable(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->enable();
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::getMatchedStylesForNode(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* nodeIdValue = object ? object->get("nodeId") : nullptr;
    errors->setName("nodeId");
    int in_nodeId = ValueConversions<int>::fromValue(nodeIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }
    // Declare output parameters.
    Maybe<protocol::CSS::CSSStyle> out_inlineStyle;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getMatchedStylesForNode(in_nodeId, &out_inlineStyle);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        if (out_inlineStyle.isJust())
            result->setValue("inlineStyle", ValueConversions<protocol::CSS::CSSStyle>::toValue(out_inlineStyle.fromJust()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return;
}

void DispatcherImpl::setStyleTexts(int callId, const String& method, const ProtocolMessage& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* editsValue = object ? object->get("edits") : nullptr;
    errors->setName("edits");
    std::unique_ptr<protocol::Array<protocol::CSS::StyleDeclarationEdit>> in_edits = ValueConversions<protocol::Array<protocol::CSS::StyleDeclarationEdit>>::fromValue(editsValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Array<protocol::CSS::CSSStyle>> out_styles;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setStyleTexts(std::move(in_edits), &out_styles);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("styles", ValueConversions<protocol::Array<protocol::CSS::CSSStyle>>::toValue(out_styles.get()));
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
    uber->registerBackend("CSS", std::move(dispatcher));
}

} // CSS
} // namespace ui_devtools
} // namespace protocol