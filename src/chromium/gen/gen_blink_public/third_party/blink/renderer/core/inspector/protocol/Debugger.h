// This file is generated by Imported_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_Debugger_imported_h
#define blink_protocol_Debugger_imported_h

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
#include <v8-inspector-protocol.h>

namespace blink {
namespace protocol {

using Exported = v8_inspector::protocol::Exported;

#ifndef blink_protocol_imported_imported_h
#define blink_protocol_imported_imported_h

class CORE_EXPORT ImportedValue : public Value {
public:
    static std::unique_ptr<ImportedValue> fromExported(const Exported* value) {
        return std::unique_ptr<ImportedValue>(new ImportedValue(value));
    }

    void writeJSON(StringBuilder* output) const override {
        auto json = m_exported->toJSONString();
        String local_json = (ToCoreString(std::move(json)));
        StringUtil::builderAppend(*output, local_json);
    }
    void writeBinary(std::vector<uint8_t>* output) const override {
        m_exported->writeBinary(output);
    }
    std::unique_ptr<Value> clone() const override {
        return std::unique_ptr<Value>(new ImportedValue(m_exported));
    }

private:
    explicit ImportedValue(const Exported* exported) : Value(TypeImported), m_exported(exported) { }
    const Exported* m_exported;
};

#endif // !defined(blink_protocol_imported_imported_h)


template<>
struct ValueConversions<v8_inspector::protocol::Debugger::API::SearchMatch> {
    static std::unique_ptr<v8_inspector::protocol::Debugger::API::SearchMatch> fromValue(protocol::Value* value, ErrorSupport* errors)
    {
        if (!value) {
            errors->addError("value expected");
            return nullptr;
        }

        std::vector<uint8_t> binary;
        value->writeBinary(&binary);
        auto result = v8_inspector::protocol::Debugger::API::SearchMatch::fromBinary(binary.data(), binary.size());
        if (!result)
            errors->addError("cannot parse");
        return result;
    }

    static std::unique_ptr<protocol::Value> toValue(const v8_inspector::protocol::Debugger::API::SearchMatch* exported)
    {
        return ImportedValue::fromExported(exported);
    }

    static std::unique_ptr<protocol::Value> toValue(const std::unique_ptr<v8_inspector::protocol::Debugger::API::SearchMatch>& value)
    {
        return toValue(value.get());
    }
};


} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_Debugger_imported_h)
