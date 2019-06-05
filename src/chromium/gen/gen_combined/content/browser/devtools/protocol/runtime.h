// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Runtime_h
#define content_protocol_Runtime_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Runtime {

// ------------- Forward and enum declarations.
using ScriptId = String;
using RemoteObjectId = String;
class CallFrame;
class StackTrace;
using UniqueDebuggerId = String;
class StackTraceId;

namespace ConsoleAPICalled {
namespace TypeEnum {
CONTENT_EXPORT extern const char* Log;
CONTENT_EXPORT extern const char* Debug;
CONTENT_EXPORT extern const char* Info;
CONTENT_EXPORT extern const char* Error;
CONTENT_EXPORT extern const char* Warning;
CONTENT_EXPORT extern const char* Dir;
CONTENT_EXPORT extern const char* Dirxml;
CONTENT_EXPORT extern const char* Table;
CONTENT_EXPORT extern const char* Trace;
CONTENT_EXPORT extern const char* Clear;
CONTENT_EXPORT extern const char* StartGroup;
CONTENT_EXPORT extern const char* StartGroupCollapsed;
CONTENT_EXPORT extern const char* EndGroup;
CONTENT_EXPORT extern const char* Assert;
CONTENT_EXPORT extern const char* Profile;
CONTENT_EXPORT extern const char* ProfileEnd;
CONTENT_EXPORT extern const char* Count;
CONTENT_EXPORT extern const char* TimeEnd;
} // TypeEnum
} // ConsoleAPICalled

// ------------- Type and builder declarations.

class CONTENT_EXPORT CallFrame : public Serializable{
    PROTOCOL_DISALLOW_COPY(CallFrame);
public:
    static std::unique_ptr<CallFrame> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~CallFrame() override { }

    String GetFunctionName() { return m_functionName; }
    void SetFunctionName(const String& value) { m_functionName = value; }

    String GetScriptId() { return m_scriptId; }
    void SetScriptId(const String& value) { m_scriptId = value; }

    String GetUrl() { return m_url; }
    void SetUrl(const String& value) { m_url = value; }

    int GetLineNumber() { return m_lineNumber; }
    void SetLineNumber(int value) { m_lineNumber = value; }

    int GetColumnNumber() { return m_columnNumber; }
    void SetColumnNumber(int value) { m_columnNumber = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<CallFrame> clone() const;

    template<int STATE>
    class CallFrameBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            FunctionNameSet = 1 << 1,
            ScriptIdSet = 1 << 2,
            UrlSet = 1 << 3,
            LineNumberSet = 1 << 4,
            ColumnNumberSet = 1 << 5,
            AllFieldsSet = (FunctionNameSet | ScriptIdSet | UrlSet | LineNumberSet | ColumnNumberSet | 0)};


        CallFrameBuilder<STATE | FunctionNameSet>& SetFunctionName(const String& value)
        {
            static_assert(!(STATE & FunctionNameSet), "property functionName should not be set yet");
            m_result->SetFunctionName(value);
            return castState<FunctionNameSet>();
        }

        CallFrameBuilder<STATE | ScriptIdSet>& SetScriptId(const String& value)
        {
            static_assert(!(STATE & ScriptIdSet), "property scriptId should not be set yet");
            m_result->SetScriptId(value);
            return castState<ScriptIdSet>();
        }

        CallFrameBuilder<STATE | UrlSet>& SetUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->SetUrl(value);
            return castState<UrlSet>();
        }

        CallFrameBuilder<STATE | LineNumberSet>& SetLineNumber(int value)
        {
            static_assert(!(STATE & LineNumberSet), "property lineNumber should not be set yet");
            m_result->SetLineNumber(value);
            return castState<LineNumberSet>();
        }

        CallFrameBuilder<STATE | ColumnNumberSet>& SetColumnNumber(int value)
        {
            static_assert(!(STATE & ColumnNumberSet), "property columnNumber should not be set yet");
            m_result->SetColumnNumber(value);
            return castState<ColumnNumberSet>();
        }

        std::unique_ptr<CallFrame> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CallFrame;
        CallFrameBuilder() : m_result(new CallFrame()) { }

        template<int STEP> CallFrameBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CallFrameBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Runtime::CallFrame> m_result;
    };

    static CallFrameBuilder<0> Create()
    {
        return CallFrameBuilder<0>();
    }

private:
    CallFrame()
    {
          m_lineNumber = 0;
          m_columnNumber = 0;
    }

    String m_functionName;
    String m_scriptId;
    String m_url;
    int m_lineNumber;
    int m_columnNumber;
};


class CONTENT_EXPORT StackTrace : public Serializable{
    PROTOCOL_DISALLOW_COPY(StackTrace);
public:
    static std::unique_ptr<StackTrace> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~StackTrace() override { }

    bool HasDescription() { return m_description.isJust(); }
    String GetDescription(const String& defaultValue) { return m_description.isJust() ? m_description.fromJust() : defaultValue; }
    void SetDescription(const String& value) { m_description = value; }

    protocol::Array<protocol::Runtime::CallFrame>* GetCallFrames() { return m_callFrames.get(); }
    void SetCallFrames(std::unique_ptr<protocol::Array<protocol::Runtime::CallFrame>> value) { m_callFrames = std::move(value); }

    bool HasParent() { return m_parent.isJust(); }
    protocol::Runtime::StackTrace* GetParent(protocol::Runtime::StackTrace* defaultValue) { return m_parent.isJust() ? m_parent.fromJust() : defaultValue; }
    void SetParent(std::unique_ptr<protocol::Runtime::StackTrace> value) { m_parent = std::move(value); }

    bool HasParentId() { return m_parentId.isJust(); }
    protocol::Runtime::StackTraceId* GetParentId(protocol::Runtime::StackTraceId* defaultValue) { return m_parentId.isJust() ? m_parentId.fromJust() : defaultValue; }
    void SetParentId(std::unique_ptr<protocol::Runtime::StackTraceId> value) { m_parentId = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<StackTrace> clone() const;

    template<int STATE>
    class StackTraceBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            CallFramesSet = 1 << 1,
            AllFieldsSet = (CallFramesSet | 0)};


        StackTraceBuilder<STATE>& SetDescription(const String& value)
        {
            m_result->SetDescription(value);
            return *this;
        }

        StackTraceBuilder<STATE | CallFramesSet>& SetCallFrames(std::unique_ptr<protocol::Array<protocol::Runtime::CallFrame>> value)
        {
            static_assert(!(STATE & CallFramesSet), "property callFrames should not be set yet");
            m_result->SetCallFrames(std::move(value));
            return castState<CallFramesSet>();
        }

        StackTraceBuilder<STATE>& SetParent(std::unique_ptr<protocol::Runtime::StackTrace> value)
        {
            m_result->SetParent(std::move(value));
            return *this;
        }

        StackTraceBuilder<STATE>& SetParentId(std::unique_ptr<protocol::Runtime::StackTraceId> value)
        {
            m_result->SetParentId(std::move(value));
            return *this;
        }

        std::unique_ptr<StackTrace> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class StackTrace;
        StackTraceBuilder() : m_result(new StackTrace()) { }

        template<int STEP> StackTraceBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<StackTraceBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Runtime::StackTrace> m_result;
    };

    static StackTraceBuilder<0> Create()
    {
        return StackTraceBuilder<0>();
    }

private:
    StackTrace()
    {
    }

    Maybe<String> m_description;
    std::unique_ptr<protocol::Array<protocol::Runtime::CallFrame>> m_callFrames;
    Maybe<protocol::Runtime::StackTrace> m_parent;
    Maybe<protocol::Runtime::StackTraceId> m_parentId;
};


class CONTENT_EXPORT StackTraceId : public Serializable{
    PROTOCOL_DISALLOW_COPY(StackTraceId);
public:
    static std::unique_ptr<StackTraceId> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~StackTraceId() override { }

    String GetId() { return m_id; }
    void SetId(const String& value) { m_id = value; }

    bool HasDebuggerId() { return m_debuggerId.isJust(); }
    String GetDebuggerId(const String& defaultValue) { return m_debuggerId.isJust() ? m_debuggerId.fromJust() : defaultValue; }
    void SetDebuggerId(const String& value) { m_debuggerId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<StackTraceId> clone() const;

    template<int STATE>
    class StackTraceIdBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            IdSet = 1 << 1,
            AllFieldsSet = (IdSet | 0)};


        StackTraceIdBuilder<STATE | IdSet>& SetId(const String& value)
        {
            static_assert(!(STATE & IdSet), "property id should not be set yet");
            m_result->SetId(value);
            return castState<IdSet>();
        }

        StackTraceIdBuilder<STATE>& SetDebuggerId(const String& value)
        {
            m_result->SetDebuggerId(value);
            return *this;
        }

        std::unique_ptr<StackTraceId> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class StackTraceId;
        StackTraceIdBuilder() : m_result(new StackTraceId()) { }

        template<int STEP> StackTraceIdBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<StackTraceIdBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Runtime::StackTraceId> m_result;
    };

    static StackTraceIdBuilder<0> Create()
    {
        return StackTraceIdBuilder<0>();
    }

private:
    StackTraceId()
    {
    }

    String m_id;
    Maybe<String> m_debuggerId;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }


    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

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

} // namespace Runtime
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Runtime_h)