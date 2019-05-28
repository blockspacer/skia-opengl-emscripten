// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class DateTimeSuggestionDataView;

class DateTimeDialogValueDataView;

class DateTimeSuggestion;
using DateTimeSuggestionPtr = mojo::StructPtr<DateTimeSuggestion>;

class DateTimeDialogValue;
using DateTimeDialogValuePtr = mojo::StructPtr<DateTimeDialogValue>;

class DateTimeChooser;
using DateTimeChooserPtr = mojo::InterfacePtr<DateTimeChooser>;
using DateTimeChooserPtrInfo = mojo::InterfacePtrInfo<DateTimeChooser>;
using ThreadSafeDateTimeChooserPtr =
    mojo::ThreadSafeInterfacePtr<DateTimeChooser>;
using DateTimeChooserRequest = mojo::InterfaceRequest<DateTimeChooser>;
using DateTimeChooserAssociatedPtr =
    mojo::AssociatedInterfacePtr<DateTimeChooser>;
using ThreadSafeDateTimeChooserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DateTimeChooser>;
using DateTimeChooserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DateTimeChooser>;
using DateTimeChooserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DateTimeChooser>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_FORWARD_H_