// Copyright 2015 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cobalt/dom_parser/xml_decoder.h"

#include "cobalt/dom_parser/libxml_xml_parser_wrapper.h"

namespace cobalt {
namespace dom_parser {

XMLDecoder::XMLDecoder(
    const scoped_refptr<dom::XMLDocument>& xml_document,
    const scoped_refptr<dom::Node>& parent_node,
    const scoped_refptr<dom::Node>& reference_node,
    const int dom_max_element_depth, const base::SourceLocation& input_location,
    const loader::Decoder::OnCompleteFunction& load_complete_callback)
    : libxml_xml_parser_wrapper_(new LibxmlXMLParserWrapper(
          xml_document, parent_node, reference_node, dom_max_element_depth,
          input_location, load_complete_callback)),
      load_complete_callback_(load_complete_callback) {}

XMLDecoder::~XMLDecoder() {}

void XMLDecoder::DecodeChunk(const char* data, size_t size) {
  DCHECK(thread_checker_.CalledOnValidThread());
  libxml_xml_parser_wrapper_->DecodeChunk(data, size);
}

void XMLDecoder::Finish() {
      P_LOG("XMLDecoder::Finish 1\n");
  DCHECK(thread_checker_.CalledOnValidThread());
  libxml_xml_parser_wrapper_->Finish();
      P_LOG("XMLDecoder::Finish 2\n");
  if (!load_complete_callback_.is_null()) {
      P_LOG("XMLDecoder::Finish 3\n");
    load_complete_callback_.Run(base::nullopt);
  }
      P_LOG("XMLDecoder::Finish 4\n");
}

}  // namespace dom_parser
}  // namespace cobalt
