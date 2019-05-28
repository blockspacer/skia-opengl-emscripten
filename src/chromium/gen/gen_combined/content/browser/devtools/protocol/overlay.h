// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Overlay_h
#define content_protocol_Overlay_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "content/browser/devtools/protocol/dom.h"
#include "content/browser/devtools/protocol/page.h"
#include "content/browser/devtools/protocol/runtime.h"

namespace content {
namespace protocol {
namespace Overlay {

// ------------- Forward and enum declarations.
class HighlightConfig;
using InspectMode = String;
class InspectNodeRequestedNotification;
class NodeHighlightRequestedNotification;
class ScreenshotRequestedNotification;
using InspectModeCanceledNotification = Object;

namespace InspectModeEnum {
CONTENT_EXPORT extern const char SearchForNode[];
CONTENT_EXPORT extern const char SearchForUAShadowDOM[];
CONTENT_EXPORT extern const char CaptureAreaScreenshot[];
CONTENT_EXPORT extern const char ShowDistances[];
CONTENT_EXPORT extern const char None[];
} // namespace InspectModeEnum

// ------------- Type and builder declarations.

class CONTENT_EXPORT HighlightConfig : public Serializable{
    PROTOCOL_DISALLOW_COPY(HighlightConfig);
public:
    static std::unique_ptr<HighlightConfig> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~HighlightConfig() override { }

    bool HasShowInfo() { return m_showInfo.isJust(); }
    bool GetShowInfo(bool defaultValue) { return m_showInfo.isJust() ? m_showInfo.fromJust() : defaultValue; }
    void SetShowInfo(bool value) { m_showInfo = value; }

    bool HasShowStyles() { return m_showStyles.isJust(); }
    bool GetShowStyles(bool defaultValue) { return m_showStyles.isJust() ? m_showStyles.fromJust() : defaultValue; }
    void SetShowStyles(bool value) { m_showStyles = value; }

    bool HasShowRulers() { return m_showRulers.isJust(); }
    bool GetShowRulers(bool defaultValue) { return m_showRulers.isJust() ? m_showRulers.fromJust() : defaultValue; }
    void SetShowRulers(bool value) { m_showRulers = value; }

    bool HasShowExtensionLines() { return m_showExtensionLines.isJust(); }
    bool GetShowExtensionLines(bool defaultValue) { return m_showExtensionLines.isJust() ? m_showExtensionLines.fromJust() : defaultValue; }
    void SetShowExtensionLines(bool value) { m_showExtensionLines = value; }

    bool HasContentColor() { return m_contentColor.isJust(); }
    protocol::DOM::RGBA* GetContentColor(protocol::DOM::RGBA* defaultValue) { return m_contentColor.isJust() ? m_contentColor.fromJust() : defaultValue; }
    void SetContentColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_contentColor = std::move(value); }

    bool HasPaddingColor() { return m_paddingColor.isJust(); }
    protocol::DOM::RGBA* GetPaddingColor(protocol::DOM::RGBA* defaultValue) { return m_paddingColor.isJust() ? m_paddingColor.fromJust() : defaultValue; }
    void SetPaddingColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_paddingColor = std::move(value); }

    bool HasBorderColor() { return m_borderColor.isJust(); }
    protocol::DOM::RGBA* GetBorderColor(protocol::DOM::RGBA* defaultValue) { return m_borderColor.isJust() ? m_borderColor.fromJust() : defaultValue; }
    void SetBorderColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_borderColor = std::move(value); }

    bool HasMarginColor() { return m_marginColor.isJust(); }
    protocol::DOM::RGBA* GetMarginColor(protocol::DOM::RGBA* defaultValue) { return m_marginColor.isJust() ? m_marginColor.fromJust() : defaultValue; }
    void SetMarginColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_marginColor = std::move(value); }

    bool HasEventTargetColor() { return m_eventTargetColor.isJust(); }
    protocol::DOM::RGBA* GetEventTargetColor(protocol::DOM::RGBA* defaultValue) { return m_eventTargetColor.isJust() ? m_eventTargetColor.fromJust() : defaultValue; }
    void SetEventTargetColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_eventTargetColor = std::move(value); }

    bool HasShapeColor() { return m_shapeColor.isJust(); }
    protocol::DOM::RGBA* GetShapeColor(protocol::DOM::RGBA* defaultValue) { return m_shapeColor.isJust() ? m_shapeColor.fromJust() : defaultValue; }
    void SetShapeColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_shapeColor = std::move(value); }

    bool HasShapeMarginColor() { return m_shapeMarginColor.isJust(); }
    protocol::DOM::RGBA* GetShapeMarginColor(protocol::DOM::RGBA* defaultValue) { return m_shapeMarginColor.isJust() ? m_shapeMarginColor.fromJust() : defaultValue; }
    void SetShapeMarginColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_shapeMarginColor = std::move(value); }

    bool HasCssGridColor() { return m_cssGridColor.isJust(); }
    protocol::DOM::RGBA* GetCssGridColor(protocol::DOM::RGBA* defaultValue) { return m_cssGridColor.isJust() ? m_cssGridColor.fromJust() : defaultValue; }
    void SetCssGridColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_cssGridColor = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<HighlightConfig> clone() const;

    template<int STATE>
    class HighlightConfigBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        HighlightConfigBuilder<STATE>& SetShowInfo(bool value)
        {
            m_result->SetShowInfo(value);
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetShowStyles(bool value)
        {
            m_result->SetShowStyles(value);
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetShowRulers(bool value)
        {
            m_result->SetShowRulers(value);
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetShowExtensionLines(bool value)
        {
            m_result->SetShowExtensionLines(value);
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetContentColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->SetContentColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetPaddingColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->SetPaddingColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetBorderColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->SetBorderColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetMarginColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->SetMarginColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetEventTargetColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->SetEventTargetColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetShapeColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->SetShapeColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetShapeMarginColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->SetShapeMarginColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& SetCssGridColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->SetCssGridColor(std::move(value));
            return *this;
        }

        std::unique_ptr<HighlightConfig> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class HighlightConfig;
        HighlightConfigBuilder() : m_result(new HighlightConfig()) { }

        template<int STEP> HighlightConfigBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<HighlightConfigBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Overlay::HighlightConfig> m_result;
    };

    static HighlightConfigBuilder<0> Create()
    {
        return HighlightConfigBuilder<0>();
    }

private:
    HighlightConfig()
    {
    }

    Maybe<bool> m_showInfo;
    Maybe<bool> m_showStyles;
    Maybe<bool> m_showRulers;
    Maybe<bool> m_showExtensionLines;
    Maybe<protocol::DOM::RGBA> m_contentColor;
    Maybe<protocol::DOM::RGBA> m_paddingColor;
    Maybe<protocol::DOM::RGBA> m_borderColor;
    Maybe<protocol::DOM::RGBA> m_marginColor;
    Maybe<protocol::DOM::RGBA> m_eventTargetColor;
    Maybe<protocol::DOM::RGBA> m_shapeColor;
    Maybe<protocol::DOM::RGBA> m_shapeMarginColor;
    Maybe<protocol::DOM::RGBA> m_cssGridColor;
};


class CONTENT_EXPORT InspectNodeRequestedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(InspectNodeRequestedNotification);
public:
    static std::unique_ptr<InspectNodeRequestedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~InspectNodeRequestedNotification() override { }

    int GetBackendNodeId() { return m_backendNodeId; }
    void SetBackendNodeId(int value) { m_backendNodeId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<InspectNodeRequestedNotification> clone() const;

    template<int STATE>
    class InspectNodeRequestedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            BackendNodeIdSet = 1 << 1,
            AllFieldsSet = (BackendNodeIdSet | 0)};


        InspectNodeRequestedNotificationBuilder<STATE | BackendNodeIdSet>& SetBackendNodeId(int value)
        {
            static_assert(!(STATE & BackendNodeIdSet), "property backendNodeId should not be set yet");
            m_result->SetBackendNodeId(value);
            return castState<BackendNodeIdSet>();
        }

        std::unique_ptr<InspectNodeRequestedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class InspectNodeRequestedNotification;
        InspectNodeRequestedNotificationBuilder() : m_result(new InspectNodeRequestedNotification()) { }

        template<int STEP> InspectNodeRequestedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<InspectNodeRequestedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Overlay::InspectNodeRequestedNotification> m_result;
    };

    static InspectNodeRequestedNotificationBuilder<0> Create()
    {
        return InspectNodeRequestedNotificationBuilder<0>();
    }

private:
    InspectNodeRequestedNotification()
    {
          m_backendNodeId = 0;
    }

    int m_backendNodeId;
};


class CONTENT_EXPORT NodeHighlightRequestedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(NodeHighlightRequestedNotification);
public:
    static std::unique_ptr<NodeHighlightRequestedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~NodeHighlightRequestedNotification() override { }

    int GetNodeId() { return m_nodeId; }
    void SetNodeId(int value) { m_nodeId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<NodeHighlightRequestedNotification> clone() const;

    template<int STATE>
    class NodeHighlightRequestedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NodeIdSet = 1 << 1,
            AllFieldsSet = (NodeIdSet | 0)};


        NodeHighlightRequestedNotificationBuilder<STATE | NodeIdSet>& SetNodeId(int value)
        {
            static_assert(!(STATE & NodeIdSet), "property nodeId should not be set yet");
            m_result->SetNodeId(value);
            return castState<NodeIdSet>();
        }

        std::unique_ptr<NodeHighlightRequestedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class NodeHighlightRequestedNotification;
        NodeHighlightRequestedNotificationBuilder() : m_result(new NodeHighlightRequestedNotification()) { }

        template<int STEP> NodeHighlightRequestedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<NodeHighlightRequestedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Overlay::NodeHighlightRequestedNotification> m_result;
    };

    static NodeHighlightRequestedNotificationBuilder<0> Create()
    {
        return NodeHighlightRequestedNotificationBuilder<0>();
    }

private:
    NodeHighlightRequestedNotification()
    {
          m_nodeId = 0;
    }

    int m_nodeId;
};


class CONTENT_EXPORT ScreenshotRequestedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ScreenshotRequestedNotification);
public:
    static std::unique_ptr<ScreenshotRequestedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ScreenshotRequestedNotification() override { }

    protocol::Page::Viewport* GetViewport() { return m_viewport.get(); }
    void SetViewport(std::unique_ptr<protocol::Page::Viewport> value) { m_viewport = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<ScreenshotRequestedNotification> clone() const;

    template<int STATE>
    class ScreenshotRequestedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ViewportSet = 1 << 1,
            AllFieldsSet = (ViewportSet | 0)};


        ScreenshotRequestedNotificationBuilder<STATE | ViewportSet>& SetViewport(std::unique_ptr<protocol::Page::Viewport> value)
        {
            static_assert(!(STATE & ViewportSet), "property viewport should not be set yet");
            m_result->SetViewport(std::move(value));
            return castState<ViewportSet>();
        }

        std::unique_ptr<ScreenshotRequestedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ScreenshotRequestedNotification;
        ScreenshotRequestedNotificationBuilder() : m_result(new ScreenshotRequestedNotification()) { }

        template<int STEP> ScreenshotRequestedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ScreenshotRequestedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Overlay::ScreenshotRequestedNotification> m_result;
    };

    static ScreenshotRequestedNotificationBuilder<0> Create()
    {
        return ScreenshotRequestedNotificationBuilder<0>();
    }

private:
    ScreenshotRequestedNotification()
    {
    }

    std::unique_ptr<protocol::Page::Viewport> m_viewport;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse SetInspectMode(const String& in_mode, Maybe<protocol::Overlay::HighlightConfig> in_highlightConfig) = 0;
    virtual DispatchResponse SetPausedInDebuggerMessage(Maybe<String> in_message) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void InspectNodeRequested(int backendNodeId);
    void NodeHighlightRequested(int nodeId);
    void ScreenshotRequested(std::unique_ptr<protocol::Page::Viewport> viewport);
    void InspectModeCanceled();

    void flush();
    void sendRawJSONNotification(String);
    void sendRawCBORNotification(std::vector<uint8_t>);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CONTENT_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CONTENT_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Overlay
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Overlay_h)
