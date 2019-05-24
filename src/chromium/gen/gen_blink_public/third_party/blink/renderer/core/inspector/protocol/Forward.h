// This file is generated by Forward_h.template.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_Forward_h
#define blink_protocol_Forward_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/v8_inspector_string.h"

#include <cstddef>
#include <memory>
#include <vector>
#include <unordered_map>
#include <unordered_set>

namespace blink {
namespace protocol {

template<typename T> class Array;
class DictionaryValue;
class DispatchResponse;
class ErrorSupport;
class FundamentalValue;
class ListValue;
template<typename T> class Maybe;
class Object;
using Response = DispatchResponse;
class SerializedValue;
class StringValue;
class UberDispatcher;
class Value;

} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_Forward_h)


// This file is generated by Allocator_h.template.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_Allocator_h
#define blink_protocol_Allocator_h

namespace blink {
namespace protocol {

enum NotNullTagEnum { NotNullLiteral };

#define PROTOCOL_DISALLOW_COPY(ClassName) \
    private: \
        ClassName(const ClassName&) = delete; \
        ClassName& operator=(const ClassName&) = delete

} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_Allocator_h)


// This file is generated by FrontendChannel_h.template.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_FrontendChannel_h
#define blink_protocol_FrontendChannel_h

namespace blink {
namespace protocol {

class CORE_EXPORT Serializable {
public:
    ProtocolMessage serialize(bool binary) {
      if (binary)
        return StringUtil::binaryToMessage(serializeToBinary());
      else
        return StringUtil::jsonToMessage(serializeToJSON());
    }
    virtual String serializeToJSON() = 0;
    virtual std::vector<uint8_t> serializeToBinary() = 0;
    virtual ~Serializable() = default;
};

class CORE_EXPORT FrontendChannel {
public:
    virtual ~FrontendChannel() { }
    virtual void sendProtocolResponse(int callId, std::unique_ptr<Serializable> message) = 0;
    virtual void sendProtocolNotification(std::unique_ptr<Serializable> message) = 0;
    virtual void fallThrough(int callId, const String& method, const ProtocolMessage& message) = 0;
    virtual void flushProtocolNotifications() = 0;
};

} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_FrontendChannel_h)
