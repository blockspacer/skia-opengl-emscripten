// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_WebAudio_h
#define blink_protocol_WebAudio_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace WebAudio {

// ------------- Forward and enum declarations.
using ContextId = String;
using ContextType = String;
using ContextState = String;
class ContextRealtimeData;
class BaseAudioContext;
class ContextCreatedNotification;
class ContextDestroyedNotification;
class ContextChangedNotification;

namespace ContextTypeEnum {
CORE_EXPORT extern const char Realtime[];
CORE_EXPORT extern const char Offline[];
} // namespace ContextTypeEnum

namespace ContextStateEnum {
CORE_EXPORT extern const char Suspended[];
CORE_EXPORT extern const char Running[];
CORE_EXPORT extern const char Closed[];
} // namespace ContextStateEnum

// ------------- Type and builder declarations.

class CORE_EXPORT ContextRealtimeData : public Serializable{
    PROTOCOL_DISALLOW_COPY(ContextRealtimeData);
public:
    static std::unique_ptr<ContextRealtimeData> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ContextRealtimeData() override { }

    bool hasCurrentTime() { return m_currentTime.isJust(); }
    double getCurrentTime(double defaultValue) { return m_currentTime.isJust() ? m_currentTime.fromJust() : defaultValue; }
    void setCurrentTime(double value) { m_currentTime = value; }

    bool hasRenderCapacity() { return m_renderCapacity.isJust(); }
    double getRenderCapacity(double defaultValue) { return m_renderCapacity.isJust() ? m_renderCapacity.fromJust() : defaultValue; }
    void setRenderCapacity(double value) { m_renderCapacity = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<ContextRealtimeData> clone() const;

    template<int STATE>
    class ContextRealtimeDataBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        ContextRealtimeDataBuilder<STATE>& setCurrentTime(double value)
        {
            m_result->setCurrentTime(value);
            return *this;
        }

        ContextRealtimeDataBuilder<STATE>& setRenderCapacity(double value)
        {
            m_result->setRenderCapacity(value);
            return *this;
        }

        std::unique_ptr<ContextRealtimeData> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ContextRealtimeData;
        ContextRealtimeDataBuilder() : m_result(new ContextRealtimeData()) { }

        template<int STEP> ContextRealtimeDataBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ContextRealtimeDataBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::WebAudio::ContextRealtimeData> m_result;
    };

    static ContextRealtimeDataBuilder<0> create()
    {
        return ContextRealtimeDataBuilder<0>();
    }

private:
    ContextRealtimeData()
    {
    }

    Maybe<double> m_currentTime;
    Maybe<double> m_renderCapacity;
};


class CORE_EXPORT BaseAudioContext : public Serializable{
    PROTOCOL_DISALLOW_COPY(BaseAudioContext);
public:
    static std::unique_ptr<BaseAudioContext> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~BaseAudioContext() override { }

    String getContextId() { return m_contextId; }
    void setContextId(const String& value) { m_contextId = value; }

    String getContextType() { return m_contextType; }
    void setContextType(const String& value) { m_contextType = value; }

    String getContextState() { return m_contextState; }
    void setContextState(const String& value) { m_contextState = value; }

    bool hasRealtimeData() { return m_realtimeData.isJust(); }
    protocol::WebAudio::ContextRealtimeData* getRealtimeData(protocol::WebAudio::ContextRealtimeData* defaultValue) { return m_realtimeData.isJust() ? m_realtimeData.fromJust() : defaultValue; }
    void setRealtimeData(std::unique_ptr<protocol::WebAudio::ContextRealtimeData> value) { m_realtimeData = std::move(value); }

    double getCallbackBufferSize() { return m_callbackBufferSize; }
    void setCallbackBufferSize(double value) { m_callbackBufferSize = value; }

    double getMaxOutputChannelCount() { return m_maxOutputChannelCount; }
    void setMaxOutputChannelCount(double value) { m_maxOutputChannelCount = value; }

    double getSampleRate() { return m_sampleRate; }
    void setSampleRate(double value) { m_sampleRate = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<BaseAudioContext> clone() const;

    template<int STATE>
    class BaseAudioContextBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ContextIdSet = 1 << 1,
            ContextTypeSet = 1 << 2,
            ContextStateSet = 1 << 3,
            CallbackBufferSizeSet = 1 << 4,
            MaxOutputChannelCountSet = 1 << 5,
            SampleRateSet = 1 << 6,
            AllFieldsSet = (ContextIdSet | ContextTypeSet | ContextStateSet | CallbackBufferSizeSet | MaxOutputChannelCountSet | SampleRateSet | 0)};


        BaseAudioContextBuilder<STATE | ContextIdSet>& setContextId(const String& value)
        {
            static_assert(!(STATE & ContextIdSet), "property contextId should not be set yet");
            m_result->setContextId(value);
            return castState<ContextIdSet>();
        }

        BaseAudioContextBuilder<STATE | ContextTypeSet>& setContextType(const String& value)
        {
            static_assert(!(STATE & ContextTypeSet), "property contextType should not be set yet");
            m_result->setContextType(value);
            return castState<ContextTypeSet>();
        }

        BaseAudioContextBuilder<STATE | ContextStateSet>& setContextState(const String& value)
        {
            static_assert(!(STATE & ContextStateSet), "property contextState should not be set yet");
            m_result->setContextState(value);
            return castState<ContextStateSet>();
        }

        BaseAudioContextBuilder<STATE>& setRealtimeData(std::unique_ptr<protocol::WebAudio::ContextRealtimeData> value)
        {
            m_result->setRealtimeData(std::move(value));
            return *this;
        }

        BaseAudioContextBuilder<STATE | CallbackBufferSizeSet>& setCallbackBufferSize(double value)
        {
            static_assert(!(STATE & CallbackBufferSizeSet), "property callbackBufferSize should not be set yet");
            m_result->setCallbackBufferSize(value);
            return castState<CallbackBufferSizeSet>();
        }

        BaseAudioContextBuilder<STATE | MaxOutputChannelCountSet>& setMaxOutputChannelCount(double value)
        {
            static_assert(!(STATE & MaxOutputChannelCountSet), "property maxOutputChannelCount should not be set yet");
            m_result->setMaxOutputChannelCount(value);
            return castState<MaxOutputChannelCountSet>();
        }

        BaseAudioContextBuilder<STATE | SampleRateSet>& setSampleRate(double value)
        {
            static_assert(!(STATE & SampleRateSet), "property sampleRate should not be set yet");
            m_result->setSampleRate(value);
            return castState<SampleRateSet>();
        }

        std::unique_ptr<BaseAudioContext> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class BaseAudioContext;
        BaseAudioContextBuilder() : m_result(new BaseAudioContext()) { }

        template<int STEP> BaseAudioContextBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<BaseAudioContextBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::WebAudio::BaseAudioContext> m_result;
    };

    static BaseAudioContextBuilder<0> create()
    {
        return BaseAudioContextBuilder<0>();
    }

private:
    BaseAudioContext()
    {
          m_callbackBufferSize = 0;
          m_maxOutputChannelCount = 0;
          m_sampleRate = 0;
    }

    String m_contextId;
    String m_contextType;
    String m_contextState;
    Maybe<protocol::WebAudio::ContextRealtimeData> m_realtimeData;
    double m_callbackBufferSize;
    double m_maxOutputChannelCount;
    double m_sampleRate;
};


class CORE_EXPORT ContextCreatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ContextCreatedNotification);
public:
    static std::unique_ptr<ContextCreatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ContextCreatedNotification() override { }

    protocol::WebAudio::BaseAudioContext* getContext() { return m_context.get(); }
    void setContext(std::unique_ptr<protocol::WebAudio::BaseAudioContext> value) { m_context = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<ContextCreatedNotification> clone() const;

    template<int STATE>
    class ContextCreatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ContextSet = 1 << 1,
            AllFieldsSet = (ContextSet | 0)};


        ContextCreatedNotificationBuilder<STATE | ContextSet>& setContext(std::unique_ptr<protocol::WebAudio::BaseAudioContext> value)
        {
            static_assert(!(STATE & ContextSet), "property context should not be set yet");
            m_result->setContext(std::move(value));
            return castState<ContextSet>();
        }

        std::unique_ptr<ContextCreatedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ContextCreatedNotification;
        ContextCreatedNotificationBuilder() : m_result(new ContextCreatedNotification()) { }

        template<int STEP> ContextCreatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ContextCreatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::WebAudio::ContextCreatedNotification> m_result;
    };

    static ContextCreatedNotificationBuilder<0> create()
    {
        return ContextCreatedNotificationBuilder<0>();
    }

private:
    ContextCreatedNotification()
    {
    }

    std::unique_ptr<protocol::WebAudio::BaseAudioContext> m_context;
};


class CORE_EXPORT ContextDestroyedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ContextDestroyedNotification);
public:
    static std::unique_ptr<ContextDestroyedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ContextDestroyedNotification() override { }

    String getContextId() { return m_contextId; }
    void setContextId(const String& value) { m_contextId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<ContextDestroyedNotification> clone() const;

    template<int STATE>
    class ContextDestroyedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ContextIdSet = 1 << 1,
            AllFieldsSet = (ContextIdSet | 0)};


        ContextDestroyedNotificationBuilder<STATE | ContextIdSet>& setContextId(const String& value)
        {
            static_assert(!(STATE & ContextIdSet), "property contextId should not be set yet");
            m_result->setContextId(value);
            return castState<ContextIdSet>();
        }

        std::unique_ptr<ContextDestroyedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ContextDestroyedNotification;
        ContextDestroyedNotificationBuilder() : m_result(new ContextDestroyedNotification()) { }

        template<int STEP> ContextDestroyedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ContextDestroyedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::WebAudio::ContextDestroyedNotification> m_result;
    };

    static ContextDestroyedNotificationBuilder<0> create()
    {
        return ContextDestroyedNotificationBuilder<0>();
    }

private:
    ContextDestroyedNotification()
    {
    }

    String m_contextId;
};


class CORE_EXPORT ContextChangedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ContextChangedNotification);
public:
    static std::unique_ptr<ContextChangedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ContextChangedNotification() override { }

    protocol::WebAudio::BaseAudioContext* getContext() { return m_context.get(); }
    void setContext(std::unique_ptr<protocol::WebAudio::BaseAudioContext> value) { m_context = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<ContextChangedNotification> clone() const;

    template<int STATE>
    class ContextChangedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ContextSet = 1 << 1,
            AllFieldsSet = (ContextSet | 0)};


        ContextChangedNotificationBuilder<STATE | ContextSet>& setContext(std::unique_ptr<protocol::WebAudio::BaseAudioContext> value)
        {
            static_assert(!(STATE & ContextSet), "property context should not be set yet");
            m_result->setContext(std::move(value));
            return castState<ContextSet>();
        }

        std::unique_ptr<ContextChangedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ContextChangedNotification;
        ContextChangedNotificationBuilder() : m_result(new ContextChangedNotification()) { }

        template<int STEP> ContextChangedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ContextChangedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::WebAudio::ContextChangedNotification> m_result;
    };

    static ContextChangedNotificationBuilder<0> create()
    {
        return ContextChangedNotificationBuilder<0>();
    }

private:
    ContextChangedNotification()
    {
    }

    std::unique_ptr<protocol::WebAudio::BaseAudioContext> m_context;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse getRealtimeData(const String& in_contextId, std::unique_ptr<protocol::WebAudio::ContextRealtimeData>* out_realtimeData) = 0;

};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void contextCreated(std::unique_ptr<protocol::WebAudio::BaseAudioContext> context);
    void contextDestroyed(const String& contextId);
    void contextChanged(std::unique_ptr<protocol::WebAudio::BaseAudioContext> context);

    void flush();
    void sendRawJSONNotification(String);
    void sendRawCBORNotification(std::vector<uint8_t>);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace WebAudio
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_WebAudio_h)