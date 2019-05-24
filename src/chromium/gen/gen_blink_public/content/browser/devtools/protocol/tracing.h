// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Tracing_h
#define content_protocol_Tracing_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "content/browser/devtools/protocol/io.h"

namespace content {
namespace protocol {
namespace Tracing {

// ------------- Forward and enum declarations.
using MemoryDumpConfig = Object;
class TraceConfig;
using StreamFormat = String;
using StreamCompression = String;
class BufferUsageNotification;
class DataCollectedNotification;
class TracingCompleteNotification;

namespace StreamFormatEnum {
CONTENT_EXPORT extern const char Json[];
CONTENT_EXPORT extern const char Proto[];
} // namespace StreamFormatEnum

namespace StreamCompressionEnum {
CONTENT_EXPORT extern const char None[];
CONTENT_EXPORT extern const char Gzip[];
} // namespace StreamCompressionEnum

namespace Start {
namespace TransferModeEnum {
CONTENT_EXPORT extern const char* ReportEvents;
CONTENT_EXPORT extern const char* ReturnAsStream;
} // TransferModeEnum
} // Start

// ------------- Type and builder declarations.

class CONTENT_EXPORT TraceConfig : public Serializable{
    PROTOCOL_DISALLOW_COPY(TraceConfig);
public:
    static std::unique_ptr<TraceConfig> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~TraceConfig() override { }

    struct CONTENT_EXPORT RecordModeEnum {
        static const char* RecordUntilFull;
        static const char* RecordContinuously;
        static const char* RecordAsMuchAsPossible;
        static const char* EchoToConsole;
    }; // RecordModeEnum

    bool HasRecordMode() { return m_recordMode.isJust(); }
    String GetRecordMode(const String& defaultValue) { return m_recordMode.isJust() ? m_recordMode.fromJust() : defaultValue; }
    void SetRecordMode(const String& value) { m_recordMode = value; }

    bool HasEnableSampling() { return m_enableSampling.isJust(); }
    bool GetEnableSampling(bool defaultValue) { return m_enableSampling.isJust() ? m_enableSampling.fromJust() : defaultValue; }
    void SetEnableSampling(bool value) { m_enableSampling = value; }

    bool HasEnableSystrace() { return m_enableSystrace.isJust(); }
    bool GetEnableSystrace(bool defaultValue) { return m_enableSystrace.isJust() ? m_enableSystrace.fromJust() : defaultValue; }
    void SetEnableSystrace(bool value) { m_enableSystrace = value; }

    bool HasEnableArgumentFilter() { return m_enableArgumentFilter.isJust(); }
    bool GetEnableArgumentFilter(bool defaultValue) { return m_enableArgumentFilter.isJust() ? m_enableArgumentFilter.fromJust() : defaultValue; }
    void SetEnableArgumentFilter(bool value) { m_enableArgumentFilter = value; }

    bool HasIncludedCategories() { return m_includedCategories.isJust(); }
    protocol::Array<String>* GetIncludedCategories(protocol::Array<String>* defaultValue) { return m_includedCategories.isJust() ? m_includedCategories.fromJust() : defaultValue; }
    void SetIncludedCategories(std::unique_ptr<protocol::Array<String>> value) { m_includedCategories = std::move(value); }

    bool HasExcludedCategories() { return m_excludedCategories.isJust(); }
    protocol::Array<String>* GetExcludedCategories(protocol::Array<String>* defaultValue) { return m_excludedCategories.isJust() ? m_excludedCategories.fromJust() : defaultValue; }
    void SetExcludedCategories(std::unique_ptr<protocol::Array<String>> value) { m_excludedCategories = std::move(value); }

    bool HasSyntheticDelays() { return m_syntheticDelays.isJust(); }
    protocol::Array<String>* GetSyntheticDelays(protocol::Array<String>* defaultValue) { return m_syntheticDelays.isJust() ? m_syntheticDelays.fromJust() : defaultValue; }
    void SetSyntheticDelays(std::unique_ptr<protocol::Array<String>> value) { m_syntheticDelays = std::move(value); }

    bool HasMemoryDumpConfig() { return m_memoryDumpConfig.isJust(); }
    protocol::Tracing::MemoryDumpConfig* GetMemoryDumpConfig(protocol::Tracing::MemoryDumpConfig* defaultValue) { return m_memoryDumpConfig.isJust() ? m_memoryDumpConfig.fromJust() : defaultValue; }
    void SetMemoryDumpConfig(std::unique_ptr<protocol::Tracing::MemoryDumpConfig> value) { m_memoryDumpConfig = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<TraceConfig> clone() const;

    template<int STATE>
    class TraceConfigBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        TraceConfigBuilder<STATE>& SetRecordMode(const String& value)
        {
            m_result->SetRecordMode(value);
            return *this;
        }

        TraceConfigBuilder<STATE>& SetEnableSampling(bool value)
        {
            m_result->SetEnableSampling(value);
            return *this;
        }

        TraceConfigBuilder<STATE>& SetEnableSystrace(bool value)
        {
            m_result->SetEnableSystrace(value);
            return *this;
        }

        TraceConfigBuilder<STATE>& SetEnableArgumentFilter(bool value)
        {
            m_result->SetEnableArgumentFilter(value);
            return *this;
        }

        TraceConfigBuilder<STATE>& SetIncludedCategories(std::unique_ptr<protocol::Array<String>> value)
        {
            m_result->SetIncludedCategories(std::move(value));
            return *this;
        }

        TraceConfigBuilder<STATE>& SetExcludedCategories(std::unique_ptr<protocol::Array<String>> value)
        {
            m_result->SetExcludedCategories(std::move(value));
            return *this;
        }

        TraceConfigBuilder<STATE>& SetSyntheticDelays(std::unique_ptr<protocol::Array<String>> value)
        {
            m_result->SetSyntheticDelays(std::move(value));
            return *this;
        }

        TraceConfigBuilder<STATE>& SetMemoryDumpConfig(std::unique_ptr<protocol::Tracing::MemoryDumpConfig> value)
        {
            m_result->SetMemoryDumpConfig(std::move(value));
            return *this;
        }

        std::unique_ptr<TraceConfig> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class TraceConfig;
        TraceConfigBuilder() : m_result(new TraceConfig()) { }

        template<int STEP> TraceConfigBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<TraceConfigBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Tracing::TraceConfig> m_result;
    };

    static TraceConfigBuilder<0> Create()
    {
        return TraceConfigBuilder<0>();
    }

private:
    TraceConfig()
    {
    }

    Maybe<String> m_recordMode;
    Maybe<bool> m_enableSampling;
    Maybe<bool> m_enableSystrace;
    Maybe<bool> m_enableArgumentFilter;
    Maybe<protocol::Array<String>> m_includedCategories;
    Maybe<protocol::Array<String>> m_excludedCategories;
    Maybe<protocol::Array<String>> m_syntheticDelays;
    Maybe<protocol::Tracing::MemoryDumpConfig> m_memoryDumpConfig;
};


class CONTENT_EXPORT BufferUsageNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(BufferUsageNotification);
public:
    static std::unique_ptr<BufferUsageNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~BufferUsageNotification() override { }

    bool HasPercentFull() { return m_percentFull.isJust(); }
    double GetPercentFull(double defaultValue) { return m_percentFull.isJust() ? m_percentFull.fromJust() : defaultValue; }
    void SetPercentFull(double value) { m_percentFull = value; }

    bool HasEventCount() { return m_eventCount.isJust(); }
    double GetEventCount(double defaultValue) { return m_eventCount.isJust() ? m_eventCount.fromJust() : defaultValue; }
    void SetEventCount(double value) { m_eventCount = value; }

    bool HasValue() { return m_value.isJust(); }
    double GetValue(double defaultValue) { return m_value.isJust() ? m_value.fromJust() : defaultValue; }
    void SetValue(double value) { m_value = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<BufferUsageNotification> clone() const;

    template<int STATE>
    class BufferUsageNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        BufferUsageNotificationBuilder<STATE>& SetPercentFull(double value)
        {
            m_result->SetPercentFull(value);
            return *this;
        }

        BufferUsageNotificationBuilder<STATE>& SetEventCount(double value)
        {
            m_result->SetEventCount(value);
            return *this;
        }

        BufferUsageNotificationBuilder<STATE>& SetValue(double value)
        {
            m_result->SetValue(value);
            return *this;
        }

        std::unique_ptr<BufferUsageNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class BufferUsageNotification;
        BufferUsageNotificationBuilder() : m_result(new BufferUsageNotification()) { }

        template<int STEP> BufferUsageNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<BufferUsageNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Tracing::BufferUsageNotification> m_result;
    };

    static BufferUsageNotificationBuilder<0> Create()
    {
        return BufferUsageNotificationBuilder<0>();
    }

private:
    BufferUsageNotification()
    {
    }

    Maybe<double> m_percentFull;
    Maybe<double> m_eventCount;
    Maybe<double> m_value;
};


class CONTENT_EXPORT DataCollectedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(DataCollectedNotification);
public:
    static std::unique_ptr<DataCollectedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~DataCollectedNotification() override { }

    protocol::Array<protocol::DictionaryValue>* GetValue() { return m_value.get(); }
    void SetValue(std::unique_ptr<protocol::Array<protocol::DictionaryValue>> value) { m_value = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<DataCollectedNotification> clone() const;

    template<int STATE>
    class DataCollectedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ValueSet = 1 << 1,
            AllFieldsSet = (ValueSet | 0)};


        DataCollectedNotificationBuilder<STATE | ValueSet>& SetValue(std::unique_ptr<protocol::Array<protocol::DictionaryValue>> value)
        {
            static_assert(!(STATE & ValueSet), "property value should not be set yet");
            m_result->SetValue(std::move(value));
            return castState<ValueSet>();
        }

        std::unique_ptr<DataCollectedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class DataCollectedNotification;
        DataCollectedNotificationBuilder() : m_result(new DataCollectedNotification()) { }

        template<int STEP> DataCollectedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<DataCollectedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Tracing::DataCollectedNotification> m_result;
    };

    static DataCollectedNotificationBuilder<0> Create()
    {
        return DataCollectedNotificationBuilder<0>();
    }

private:
    DataCollectedNotification()
    {
    }

    std::unique_ptr<protocol::Array<protocol::DictionaryValue>> m_value;
};


class CONTENT_EXPORT TracingCompleteNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(TracingCompleteNotification);
public:
    static std::unique_ptr<TracingCompleteNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~TracingCompleteNotification() override { }

    bool HasStream() { return m_stream.isJust(); }
    String GetStream(const String& defaultValue) { return m_stream.isJust() ? m_stream.fromJust() : defaultValue; }
    void SetStream(const String& value) { m_stream = value; }

    bool HasTraceFormat() { return m_traceFormat.isJust(); }
    String GetTraceFormat(const String& defaultValue) { return m_traceFormat.isJust() ? m_traceFormat.fromJust() : defaultValue; }
    void SetTraceFormat(const String& value) { m_traceFormat = value; }

    bool HasStreamCompression() { return m_streamCompression.isJust(); }
    String GetStreamCompression(const String& defaultValue) { return m_streamCompression.isJust() ? m_streamCompression.fromJust() : defaultValue; }
    void SetStreamCompression(const String& value) { m_streamCompression = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<TracingCompleteNotification> clone() const;

    template<int STATE>
    class TracingCompleteNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        TracingCompleteNotificationBuilder<STATE>& SetStream(const String& value)
        {
            m_result->SetStream(value);
            return *this;
        }

        TracingCompleteNotificationBuilder<STATE>& SetTraceFormat(const String& value)
        {
            m_result->SetTraceFormat(value);
            return *this;
        }

        TracingCompleteNotificationBuilder<STATE>& SetStreamCompression(const String& value)
        {
            m_result->SetStreamCompression(value);
            return *this;
        }

        std::unique_ptr<TracingCompleteNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class TracingCompleteNotification;
        TracingCompleteNotificationBuilder() : m_result(new TracingCompleteNotification()) { }

        template<int STEP> TracingCompleteNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<TracingCompleteNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Tracing::TracingCompleteNotification> m_result;
    };

    static TracingCompleteNotificationBuilder<0> Create()
    {
        return TracingCompleteNotificationBuilder<0>();
    }

private:
    TracingCompleteNotification()
    {
    }

    Maybe<String> m_stream;
    Maybe<String> m_traceFormat;
    Maybe<String> m_streamCompression;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse End() = 0;
    class CONTENT_EXPORT GetCategoriesCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::Array<String>> categories) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~GetCategoriesCallback() { }
    };
    virtual void GetCategories(std::unique_ptr<GetCategoriesCallback> callback) = 0;
    virtual DispatchResponse RecordClockSyncMarker(const String& in_syncId) = 0;
    class CONTENT_EXPORT RequestMemoryDumpCallback {
    public:
        virtual void sendSuccess(const String& dumpGuid, bool success) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~RequestMemoryDumpCallback() { }
    };
    virtual void RequestMemoryDump(std::unique_ptr<RequestMemoryDumpCallback> callback) = 0;
    class CONTENT_EXPORT StartCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~StartCallback() { }
    };
    virtual void Start(Maybe<String> in_categories, Maybe<String> in_options, Maybe<double> in_bufferUsageReportingInterval, Maybe<String> in_transferMode, Maybe<String> in_streamFormat, Maybe<String> in_streamCompression, Maybe<protocol::Tracing::TraceConfig> in_traceConfig, std::unique_ptr<StartCallback> callback) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void BufferUsage(Maybe<double> percentFull = Maybe<double>(), Maybe<double> eventCount = Maybe<double>(), Maybe<double> value = Maybe<double>());
    void DataCollected(std::unique_ptr<protocol::Array<protocol::DictionaryValue>> value);
    void TracingComplete(Maybe<String> stream = Maybe<String>(), Maybe<String> traceFormat = Maybe<String>(), Maybe<String> streamCompression = Maybe<String>());

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

} // namespace Tracing
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Tracing_h)
