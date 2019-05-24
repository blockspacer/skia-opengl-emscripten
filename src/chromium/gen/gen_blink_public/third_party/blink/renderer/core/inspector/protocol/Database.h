// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_Database_h
#define blink_protocol_Database_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Database {

// ------------- Forward and enum declarations.
using DatabaseId = String;
class Database;
class Error;
class AddDatabaseNotification;

// ------------- Type and builder declarations.

class CORE_EXPORT Database : public Serializable{
    PROTOCOL_DISALLOW_COPY(Database);
public:
    static std::unique_ptr<Database> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Database() override { }

    String getId() { return m_id; }
    void setId(const String& value) { m_id = value; }

    String getDomain() { return m_domain; }
    void setDomain(const String& value) { m_domain = value; }

    String getName() { return m_name; }
    void setName(const String& value) { m_name = value; }

    String getVersion() { return m_version; }
    void setVersion(const String& value) { m_version = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<Database> clone() const;

    template<int STATE>
    class DatabaseBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            IdSet = 1 << 1,
            DomainSet = 1 << 2,
            NameSet = 1 << 3,
            VersionSet = 1 << 4,
            AllFieldsSet = (IdSet | DomainSet | NameSet | VersionSet | 0)};


        DatabaseBuilder<STATE | IdSet>& setId(const String& value)
        {
            static_assert(!(STATE & IdSet), "property id should not be set yet");
            m_result->setId(value);
            return castState<IdSet>();
        }

        DatabaseBuilder<STATE | DomainSet>& setDomain(const String& value)
        {
            static_assert(!(STATE & DomainSet), "property domain should not be set yet");
            m_result->setDomain(value);
            return castState<DomainSet>();
        }

        DatabaseBuilder<STATE | NameSet>& setName(const String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->setName(value);
            return castState<NameSet>();
        }

        DatabaseBuilder<STATE | VersionSet>& setVersion(const String& value)
        {
            static_assert(!(STATE & VersionSet), "property version should not be set yet");
            m_result->setVersion(value);
            return castState<VersionSet>();
        }

        std::unique_ptr<Database> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Database;
        DatabaseBuilder() : m_result(new Database()) { }

        template<int STEP> DatabaseBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<DatabaseBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Database::Database> m_result;
    };

    static DatabaseBuilder<0> create()
    {
        return DatabaseBuilder<0>();
    }

private:
    Database()
    {
    }

    String m_id;
    String m_domain;
    String m_name;
    String m_version;
};


class CORE_EXPORT Error : public Serializable{
    PROTOCOL_DISALLOW_COPY(Error);
public:
    static std::unique_ptr<Error> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Error() override { }

    String getMessage() { return m_message; }
    void setMessage(const String& value) { m_message = value; }

    int getCode() { return m_code; }
    void setCode(int value) { m_code = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<Error> clone() const;

    template<int STATE>
    class ErrorBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            MessageSet = 1 << 1,
            CodeSet = 1 << 2,
            AllFieldsSet = (MessageSet | CodeSet | 0)};


        ErrorBuilder<STATE | MessageSet>& setMessage(const String& value)
        {
            static_assert(!(STATE & MessageSet), "property message should not be set yet");
            m_result->setMessage(value);
            return castState<MessageSet>();
        }

        ErrorBuilder<STATE | CodeSet>& setCode(int value)
        {
            static_assert(!(STATE & CodeSet), "property code should not be set yet");
            m_result->setCode(value);
            return castState<CodeSet>();
        }

        std::unique_ptr<Error> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Error;
        ErrorBuilder() : m_result(new Error()) { }

        template<int STEP> ErrorBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ErrorBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Database::Error> m_result;
    };

    static ErrorBuilder<0> create()
    {
        return ErrorBuilder<0>();
    }

private:
    Error()
    {
          m_code = 0;
    }

    String m_message;
    int m_code;
};


class CORE_EXPORT AddDatabaseNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(AddDatabaseNotification);
public:
    static std::unique_ptr<AddDatabaseNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~AddDatabaseNotification() override { }

    protocol::Database::Database* getDatabase() { return m_database.get(); }
    void setDatabase(std::unique_ptr<protocol::Database::Database> value) { m_database = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serializeToJSON() override { return toValue()->serializeToJSON(); }
    std::vector<uint8_t> serializeToBinary() override { return toValue()->serializeToBinary(); }
    String toJSON() const { return toValue()->toJSONString(); }
    std::unique_ptr<AddDatabaseNotification> clone() const;

    template<int STATE>
    class AddDatabaseNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            DatabaseSet = 1 << 1,
            AllFieldsSet = (DatabaseSet | 0)};


        AddDatabaseNotificationBuilder<STATE | DatabaseSet>& setDatabase(std::unique_ptr<protocol::Database::Database> value)
        {
            static_assert(!(STATE & DatabaseSet), "property database should not be set yet");
            m_result->setDatabase(std::move(value));
            return castState<DatabaseSet>();
        }

        std::unique_ptr<AddDatabaseNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AddDatabaseNotification;
        AddDatabaseNotificationBuilder() : m_result(new AddDatabaseNotification()) { }

        template<int STEP> AddDatabaseNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AddDatabaseNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Database::AddDatabaseNotification> m_result;
    };

    static AddDatabaseNotificationBuilder<0> create()
    {
        return AddDatabaseNotificationBuilder<0>();
    }

private:
    AddDatabaseNotification()
    {
    }

    std::unique_ptr<protocol::Database::Database> m_database;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse enable() = 0;
    class CORE_EXPORT ExecuteSQLCallback {
    public:
        virtual void sendSuccess(Maybe<protocol::Array<String>> columnNames, Maybe<protocol::Array<protocol::Value>> values, Maybe<protocol::Database::Error> sqlError) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~ExecuteSQLCallback() { }
    };
    virtual void executeSQL(const String& in_databaseId, const String& in_query, std::unique_ptr<ExecuteSQLCallback> callback) = 0;
    virtual DispatchResponse getDatabaseTableNames(const String& in_databaseId, std::unique_ptr<protocol::Array<String>>* out_tableNames) = 0;

};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void addDatabase(std::unique_ptr<protocol::Database::Database> database);

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

} // namespace Database
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_Database_h)
