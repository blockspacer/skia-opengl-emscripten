﻿// Copyright 2014 The Cobalt Authors. All Rights Reserved.
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

#include "cobalt/dom/node.h"

#include <memory>
#include <vector>

#include <string>
#include <codecvt> /// \note for UTF-8 on WASM
#include <locale>

#include "cobalt/base/user_log.h"

#include "base/lazy_instance.h"
#include "base/trace_event/trace_event.h"
#include "cobalt/cssom/css_rule_visitor.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/dom/cdata_section.h"
#include "cobalt/dom/comment.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/document_type.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/element.h"
#include "cobalt/dom/global_stats.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/mutation_reporter.h"
#include "cobalt/dom/node_descendants_iterator.h"
#include "cobalt/dom/node_list.h"
#include "cobalt/dom/node_list_live.h"
#include "cobalt/dom/rule_matching.h"
#include "cobalt/dom/text.h"
#include "cobalt/dom/window.h"
#if defined(OS_STARBOARD)
#include "starboard/configuration.h"
#if SB_HAS(CORE_DUMP_HANDLER_SUPPORT)
#define HANDLE_CORE_DUMP
#include "starboard/ps4/core_dump_handler.h"
#endif  // SB_HAS(CORE_DUMP_HANDLER_SUPPORT)
#endif  // defined(OS_STARBOARD)

#if defined(OS_EMSCRIPTEN)
#include <emscripten.h>
#endif

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#include "cobalt/dom/html5_native/html5_elem_queue.h"
#include "cobalt/dom/html5_native/html5_bind.h"

#include "cobalt/dom/html_body_element.h"
#endif

#include "base/logging.h"
#include "base/strings/stringprintf.h"

#include "cobalt/base/event_dispatcher.h"
#include "cobalt/base/tokens.h"
#include "cobalt/dom/event.h"
#include "cobalt/dom/input_event.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/mouse_event_init.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/pointer_state.h"
#include "cobalt/dom/ui_event.h"
#include "cobalt/dom/wheel_event.h"
#include "cobalt/math/vector2d.h"
#include "cobalt/math/vector2d_f.h"
#include "cobalt/system_window/input_event.h"
#include "cobalt/system_window/system_window.h"

#include "starboard/event.h"
#include "starboard/accessibility.h"
#include "starboard/log.h"
#include "starboard/configuration.h"
#include "starboard/window.h"
#include "starboard/decode_target.h"
#include "starboard/file.h"
#include "starboard/double.h"
#include "starboard/system.h"

#include "cobalt/dom/native_events_port/native_event.h"

namespace cobalt {
namespace dom {

// Diagram for DispatchEvent:
//  https://www.w3.org/TR/DOM-Level-3-Events/#event-flow
bool Node::DispatchEvent(const scoped_refptr<Event>& event) {
  DCHECK(event);
  DCHECK(!event->IsBeingDispatched());
  DCHECK(event->initialized_flag());

  TRACE_EVENT1("cobalt::dom", "Node::DispatchEvent", "event",
               event->type().c_str());

  if (!event || event->IsBeingDispatched() || !event->initialized_flag()) {
    return false;
  }

  // The event is now being dispatched. Track it in the global stats.
  GlobalStats::GetInstance()->StartJavaScriptEvent();

  scoped_refptr<Window> window;
  if (IsInDocument()) {
    DCHECK(node_document());
    if(node_document()->default_view()) { // TODO
      //P_LOG("Node::DispatchEvent 2.4\n");
      window = node_document()->default_view();
    }
  }

  if (window) {
    window->OnStartDispatchEvent(event);
  }

  typedef std::vector<scoped_refptr<Node> > Ancestors;
  Ancestors ancestors;
  for (Node* current = this->parent_node(); current != NULL;
       current = current->parent_node()) {
    ancestors.push_back(current);
  }

  event->set_target(this);

  // The capture phase: The event object propagates through the target's
  // ancestors from the Window to the target's parent. This phase is also known
  // as the capturing phase.
  event->set_event_phase(Event::kCapturingPhase);
  if (window) {
    window->FireEventOnListeners(event);
  }
  if (!event->propagation_stopped() && !ancestors.empty()) {
    for (Ancestors::reverse_iterator iter = ancestors.rbegin();
         iter != ancestors.rend() && !event->propagation_stopped(); ++iter) {
      (*iter)->FireEventOnListeners(event);
    }
  }

  if (!event->propagation_stopped()) {
    // The target phase: The event object arrives at the event object's event
    // target. This phase is also known as the at-target phase.
    event->set_event_phase(Event::kAtTarget);
    FireEventOnListeners(event);
  }

  // If the event type indicates that the event doesn't bubble, then the event
  // object will halt after completion of this phase.
  if (!event->propagation_stopped() && event->bubbles()) {
    if (!ancestors.empty()) {
      // The bubble phase: The event object propagates through the target's
      // ancestors in reverse order, starting with the target's parent and
      // ending with the Window. This phase is also known as the bubbling phase.
      event->set_event_phase(Event::kBubblingPhase);
      for (Ancestors::iterator iter = ancestors.begin();
           iter != ancestors.end() && !event->propagation_stopped(); ++iter) {
        (*iter)->FireEventOnListeners(event);
      }
      if (window) {
        window->FireEventOnListeners(event);
      }
    }
  }

  event->set_event_phase(Event::kNone);

  if (window) {
    window->OnStopDispatchEvent(event);
  }

  // The event has completed being dispatched. Stop tracking it in the global
  // stats.
  GlobalStats::GetInstance()->StopJavaScriptEvent();

  return !event->default_prevented();
}

// Algorithm for owner_document:
//   https://www.w3.org/TR/2015/WD-dom-20150618/#dom-node-ownerdocument
Document* Node::owner_document() const {
  // 1. If the context object is a document, return null.
  if (IsDocument()) {
    return NULL;
  }
  // 2. Return the node document.
  return node_document();
}

Element* Node::parent_element() const {
  return parent_ ? parent_->AsElement() : NULL;
}

bool Node::HasChildNodes() const { return first_child_.get() != NULL; }

scoped_refptr<NodeList> Node::child_nodes() const {
  return NodeListLive::CreateWithChildren(this);
}

// Algorithm for CloneNode:
//   https://www.w3.org/TR/2015/WD-dom-20150618/#dom-node-clonenode
scoped_refptr<Node> Node::CloneNode(bool deep) const {
  TRACK_MEMORY_SCOPE("DOM");
  TRACE_EVENT0("cobalt::dom", "Node::CloneNode()");
  scoped_refptr<Node> new_node = Duplicate();
#if !defined(ENABLE_NATIVE_HTML)
  // TODO
#endif // ENABLE_NATIVE_HTML
  DCHECK(new_node);
  if (deep) {
    scoped_refptr<Node> child = first_child_;
    while (child) {
      scoped_refptr<Node> new_child = child->CloneNode(true);
      DCHECK(new_child);
      new_node->AppendChild(new_child);
      child = child->next_sibling_;
    }
  }
  return new_node;
}

bool Node::Contains(const scoped_refptr<Node>& other_node) const {
  const Node* child = first_child_.get();
  while (child) {
    if (child == other_node || child->Contains(other_node)) {
      return true;
    }
    child = child->next_sibling_.get();
  }
  return false;
}

// Algorithm for InsertBefore:
//   https://www.w3.org/TR/dom/#dom-node-insertbefore
scoped_refptr<Node> Node::InsertBefore(
    const scoped_refptr<Node>& new_child,
    const scoped_refptr<Node>& reference_child) {
  TRACE_EVENT0("cobalt::dom", "Node::InsertBefore()");
  // The insertBefore(node, child) method must return the result of
  // pre-inserting node into the context object before child.
  return PreInsert(new_child, reference_child);
}

// Algorithm for AppendChild:
//   https://www.w3.org/TR/dom/#dom-node-appendchild
scoped_refptr<Node> Node::AppendChild(const scoped_refptr<Node>& new_child) {
  TRACE_EVENT0("cobalt::dom", "Node::AppendChild()");
  // The appendChild(node) method must return the result of appending node to
  // the context object.
  // To append a node to a parent, pre-insert node into parent before null.

  // TODO: if it is body tag ->

#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [new_child_em_node = &new_child->em_node_
       , em_node = &em_node_
       //, innerHTMLPrint = inner_html()
       ]
       (const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(new_child_em_node);
      if(new_child_em_node
         && !new_child_em_node->isNull()
         && !new_child_em_node->isUndefined()
         && em_node
         && !em_node->isNull()
         && !em_node->isUndefined())
      {
        printf("Node::AppendChild 1\n");

        DCHECK(em_node
          && !em_node->isNull()
          && !em_node->isUndefined());
        DCHECK(new_child_em_node
          && !new_child_em_node->isNull()
          && !new_child_em_node->isUndefined());
        em_node->call<void>("appendChild", *new_child_em_node);
      } else {
        // TODO: warning
      }
    };

  html_native::NativeHTMLTaskCbParams cbParams{1,2};

  html_native::GlobalHTML5TaskQueue::getInstance()->
    scheduleTaskInMainThread(
      new html_native::NativeHTMLTaskParams{
        std::move(taskCb),
        std::move(cbParams)
      },
      true // async if threads enabled
    );

#endif
#endif // 0

#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [new_child_em_node = &new_child->em_node_
       , em_node = &em_node_
       //, innerHTMLPrint = inner_html()
       ]
       (const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(new_child_em_node);
      if(new_child_em_node
         && !new_child_em_node->isNull()
         && !new_child_em_node->isUndefined())
      {
        // document.getElementsByTagName("body")[0].getElementsByTagName("div")[0]["localName"]
        DCHECK(new_child_em_node->hasOwnProperty("localName"));
        printf("Node::AppendChild localName %s\n", (*new_child_em_node)["localName"].as<std::string>().c_str());
        //
        DCHECK(new_child_em_node
          && !new_child_em_node->isNull()
          && !new_child_em_node->isUndefined());
        DCHECK(new_child_em_node->hasOwnProperty("localName"));
        if((*new_child_em_node)["localName"].as<std::string>() == "div") {
          printf("Node::AppendChild innerHTML\n");
          //(*new_child_em_node)["innerHTML"] // textContent innerHTML
              /// \note make sure that source files are UTF with BOM
          //  = emscripten::val("фывфывывф inner_html.c_str()");
          //  //= emscripten::val(innerHTMLPrint.c_str());
          /*new_child_em_node->set("style", ";width: 50px;height: 50px;border-top-left-radius: 40px;border-top-right-radius: 40px;border-bottom-right-radius: 40px;border-bottom-left-radius: 40px;background-color: rgb(49, 95, 214);transform: translateY(402px)");
          new_child_em_node->set("innerHTML",
            /// \note make sure that source files are UTF with BOM
            html_native::utf8_to_wstring("выавывава iasdasd"));*/
        }
      } else {
      }

      if(new_child_em_node
         && !new_child_em_node->isNull()
         && !new_child_em_node->isUndefined()
         && em_node
         && !em_node->isNull()
         && !em_node->isUndefined())
      {
        printf("Node::AppendChild 1\n");

        DCHECK(em_node
          && !em_node->isNull()
          && !em_node->isUndefined());
        DCHECK(new_child_em_node
          && !new_child_em_node->isNull()
          && !new_child_em_node->isUndefined());
        em_node->call<void>("appendChild", *new_child_em_node);
      } else if (new_child_em_node
         && !new_child_em_node->isNull()
         && !new_child_em_node->isUndefined()) {
        //NOTIMPLEMENTED_LOG_ONCE();

        printf("Node::AppendChild 2\n");

#if 0
        // document.getElementsByTagName("body")[0]
        emscripten::val body_elements
          = emscripten::val::global("document")
            .call<emscripten::val>(
              "getElementsByTagName", emscripten::val("body"));
        emscripten::val body_node
          = body_elements[0];
        DCHECK(!body_node.isNull()
               && !body_node.isUndefined());

        /// \todo make app_root_node configurable
        emscripten::val* app_root_node = &body_node;

        DCHECK(app_root_node
          && !app_root_node->isNull()
          && !app_root_node->isUndefined());
        DCHECK(new_child_em_node
          && !new_child_em_node->isNull()
          && !new_child_em_node->isUndefined());
        app_root_node->call<void>("appendChild", *new_child_em_node);
#endif // 0

      } else {
        // NOTIMPLEMENTED_LOG_ONCE();
      }
    };

  html_native::NativeHTMLTaskCbParams cbParams{1,2};

  html_native::GlobalHTML5TaskQueue::getInstance()->
    scheduleTaskInMainThread(
      new html_native::NativeHTMLTaskParams{
        std::move(taskCb),
        std::move(cbParams)
      },
      true // async if threads enabled
    );

#endif
#endif // 0

#if 0
#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  /// \note we can check result because operation is blocking on WASM ST
  DCHECK(!new_child->em_node_.isNull()
         && !new_child->em_node_.isUndefined());
#endif
#endif // 0

//#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  if(new_child)
  {
    emAppendChildInBrowserThread(getEmNodeGUID(),
      new_child->getEmNodeGUID());
  }
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
//#endif // 0

//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//  /// \note we can check result because operation is blocking on WASM ST
//  DCHECK(!new_child->em_node_.isNull()
//         && !new_child->em_node_.isUndefined());
//#endif

  return PreInsert(new_child, NULL);
}

// Algorithm for ReplaceChild:
//   https://www.w3.org/TR/dom/#dom-node-replacechild
scoped_refptr<Node> Node::ReplaceChild(const scoped_refptr<Node>& node,
                                       const scoped_refptr<Node>& child) {
#if !defined(ENABLE_NATIVE_HTML)
  // TODO
#endif // ENABLE_NATIVE_HTML
  TRACE_EVENT0("cobalt::dom", "Node::ReplaceChild()");
  // The replaceChild(node, child) method must return the result of replacing
  // child with node within the context object.
  // To replace a child with node within a parent, run these steps:
  //   https://www.w3.org/TR/dom/#concept-node-replace

  // Custom, not in any spec.
  if (!node || !child) {
    // TODO: Throw JS ReferenceError.
    return NULL;
  }
  if (child == node) {
    return node;
  }

  // 1. If parent is not a Document, DocumentFragment, or Element node, throw a
  // "HierarchyRequestError".
  if (!IsDocument() && !IsElement()) {
    // TODO: Throw JS HierarchyRequestError.
    return NULL;
  }

  // 2. If node is a host-including inclusive ancestor of parent, throw a
  // "HierarchyRequestError".
  Node* ancestor = this;
  while (ancestor) {
    if (node.get() == ancestor) {
      // TODO: Throw JS HierarchyRequestError.
      return NULL;
    }
    ancestor = ancestor->parent_;
  }

  // 3. If child's parent is not parent, throw a "NotFoundError" exception.
  if (child->parent_ != this) {
    // TODO: Throw JS NotFoundError.
    return NULL;
  }

  // 4. If node is not a DocumentFragment, DocumentType, Element, Text,
  // ProcessingInstruction, or Comment node, throw a "HierarchyRequestError".
  // Note: Since we support CDATASection, it is also included here, so the only
  // type that is excluded is document.
  if (node->IsDocument()) {
    // TODO: Throw JS HierarchyRequestError.
    return NULL;
  }

  // 5. If either node is a Text node and parent is a document, or node is a
  // doctype and parent is not a document, throw a "HierarchyRequestError".
  if ((node->IsText() && IsDocument()) ||
      (node->IsDocumentType() && !IsDocument())) {
    // TODO: Throw JS HierarchyRequestError.
    return NULL;
  }

  // 6. Not needed by Cobalt.

  // 7. Let reference child be child's next sibling.
  scoped_refptr<Node> reference_child = child->next_sibling_;

  // 8. If reference child is node, set it to node's next sibling.
  if (reference_child == node) {
    reference_child = node->next_sibling_;
  }

  // 9. Adopt node into parent's node document.
  node->AdoptIntoDocument(node_document_.get());

  // 10. Remove child from its parent with the suppress observers flag set.
  Remove(child, true);

  // 11. Insert node into parent before reference child with the suppress
  // observers flag set.
  Insert(node, reference_child, true);
#if !defined(ENABLE_NATIVE_HTML)
  // TODO
#endif // ENABLE_NATIVE_HTML

  // 12. Let nodes be node's children if node is a DocumentFragment node, and a
  // list containing solely node otherwise.
  // 13. Queue a mutation record of "childList" for target parent with
  // addedNodes nodes, removedNodes a list solely containing child, nextSibling
  // reference child, and previousSibling child's previous sibling.
  MutationReporter mutation_reporter(this, GatherInclusiveAncestorsObservers());
  scoped_refptr<dom::NodeList> added_nodes = new dom::NodeList();
  added_nodes->AppendNode(node);
  scoped_refptr<dom::NodeList> removed_nodes = new dom::NodeList();
  removed_nodes->AppendNode(child);
  mutation_reporter.ReportChildListMutation(
      added_nodes, removed_nodes,
      child->previous_sibling_ /* previous_sibling */,
      reference_child /* next_sibling */);

  return child;
}

// Algorithm for RemoveChild:
//   https://www.w3.org/TR/dom/#dom-node-removechild
scoped_refptr<Node> Node::RemoveChild(const scoped_refptr<Node>& node) {
#if !defined(ENABLE_NATIVE_HTML)
  // TODO
#endif // ENABLE_NATIVE_HTML
  TRACE_EVENT0("cobalt::dom", "Node::RemoveChild()");
  // The removeChild(child) method must return the result of pre-removing child
  // from the context object.
  return PreRemove(node);
}

scoped_refptr<HTMLCollection> Node::children() {
  if (!children_collection_) {
    children_collection_ = HTMLCollection::CreateWithChildElements(this);
  }
  return children_collection_;
}

Element* Node::first_element_child() const {
  Node* child = first_child();
  while (child) {
    if (child->IsElement()) {
      return child->AsElement();
    }
    child = child->next_sibling();
  }
  return NULL;
}

Element* Node::last_element_child() const {
  Node* child = last_child();
  while (child) {
    if (child->IsElement()) {
      return child->AsElement();
    }
    child = child->previous_sibling();
  }
  return NULL;
}

unsigned int Node::child_element_count() const {
  unsigned int num_elements = 0;
  const Node* child = first_child();
  while (child) {
    if (child->IsElement()) {
      ++num_elements;
    }
    child = child->next_sibling();
  }
  return num_elements;
}

scoped_refptr<Element> Node::QuerySelector(const std::string& selectors) {
  return dom::QuerySelector(
      this, selectors, node_document_->html_element_context()->css_parser());
}

scoped_refptr<NodeList> Node::QuerySelectorAll(const std::string& selectors) {
  return dom::QuerySelectorAll(
      this, selectors, node_document_->html_element_context()->css_parser());
}

Element* Node::previous_element_sibling() const {
  Node* sibling = previous_sibling();
  while (sibling) {
    if (sibling->IsElement()) {
      return sibling->AsElement();
    }
    sibling = sibling->previous_sibling();
  }
  return NULL;
}

Element* Node::next_element_sibling() const {
  Node* sibling = next_sibling();
  while (sibling) {
    if (sibling->IsElement()) {
      return sibling->AsElement();
    }
    sibling = sibling->next_sibling();
  }
  return NULL;
}

// Algorithm for AdoptIntoDocument:
//   https://www.w3.org/TR/dom/#concept-node-adopt
void Node::AdoptIntoDocument(Document* document) {
  TRACE_EVENT0("cobalt::dom", "Node::AdoptIntoDocument()");
  DCHECK(!IsDocument());
  if (!document) {
    return;
  }

  // 1, Not needed by Cobalt.

  // 2. If node's parent is not null, remove node from its parent.
  if (parent_) {
    parent_->RemoveChild(this);
  }

  // 3. Set node's inclusive descendants's node document to document.
  node_document_ = base::AsWeakPtr(document);
  NodeDescendantsIterator it(this);
  Node* descendant = it.First();
  while (descendant) {
    descendant->node_document_ = base::AsWeakPtr(document);
    descendant = it.Next();
  }

  // 4. Not needed by Cobalt.
}

Node* Node::GetRootNode() {
  Node* root = this;
  while (root->parent_node()) {
    root = root->parent_node();
  }
  return root;
}

CDATASection* Node::AsCDATASection() { return NULL; }

Comment* Node::AsComment() { return NULL; }

Document* Node::AsDocument() { return NULL; }

DocumentType* Node::AsDocumentType() { return NULL; }

Element* Node::AsElement() { return NULL; }

Text* Node::AsText() { return NULL; }

void Node::TraceMembers(script::Tracer* tracer) {
  EventTarget::TraceMembers(tracer);

  tracer->Trace(node_document_);
  tracer->Trace(parent_);
  tracer->Trace(previous_sibling_);
  tracer->Trace(last_child_);
  tracer->Trace(first_child_);
  tracer->Trace(next_sibling_);
  tracer->Trace(registered_observers_);
  tracer->Trace(children_collection_);
}

Node::Node(Document* document)
    : node_document_(base::AsWeakPtr(document)),
      parent_(NULL),
      previous_sibling_(NULL),
      last_child_(NULL),
      inserted_into_document_(false),
      node_generation_(kInitialNodeGeneration),
      ALLOW_THIS_IN_INITIALIZER_LIST(registered_observers_(this))
//#if 0 // TODO: use lock-free Sequences to post tasks on main browser thread https://chromium.googlesource.com/chromium/src/+/master/docs/threading_and_tasks.md#Using-Sequences-Instead-of-Locks
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
      , em_node_(emscripten::val::null())
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
//#endif // 0
{
// #if 0
// #if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
//         em_node_
//           = emscripten::val::global("document").call<emscripten::val>(
//               "createElement", emscripten::val("div"));
//
//         emscripten::val root_element
//           = emscripten::val::global("document")
//             .call<emscripten::val>(
//               "getElementById", emscripten::val("pendingEmscriptenElements"));
//         DCHECK(!root_element.isNull()
//                && !root_element.isUndefined());
//         root_element.call<void>("appendChild", em_node_);
// #endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
// #endif // 0
  DCHECK(node_document_);
  GlobalStats::GetInstance()->Add(this);
}

Node::~Node() {
  Node* node = last_child_;
  while (node) {
    node->parent_ = NULL;
    node->next_sibling_ = NULL;

    Node* previous_sibling = node->previous_sibling_;
    node->previous_sibling_ = NULL;
    node = previous_sibling;
  }
  GlobalStats::GetInstance()->Remove(this);
}

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)

int Node::getEmNodeGUID() const {
  return em_node_guid_;
}

void Node::setEmNodeAsRoot() {
  html_native::setEmNodeGUIDAsRoot(em_node_guid_);
}

bool Node::isEmNodeRoot() const {
  return html_native::isEmNodeGUIDRoot(getEmNodeGUID());
}

void Node::setEmNodeAsDocument() {
  em_node_guid_
    = html_native::GlobalHTML5TaskQueue::kEmNodeDocumentGUID;
}

bool Node::isEmNodeDocument() const {
  return em_node_guid_
    == html_native::GlobalHTML5TaskQueue::kEmNodeDocumentGUID;
}

void Node::setEmNodeGUID(const int guid) {
  em_node_guid_ = guid;
}

void Node::setEmNodeAsHead() {
  em_node_guid_
    = html_native::GlobalHTML5TaskQueue::kEmNodeHeadGUID;
}

bool Node::isEmNodeHead() const {
  return em_node_guid_
    == html_native::GlobalHTML5TaskQueue::kEmNodeHeadGUID;
}

void Node::setEmNodeAsHTML() {
  em_node_guid_
    = html_native::GlobalHTML5TaskQueue::kEmNodeHTMLGUID;
}

bool Node::isEmNodeHTML() const {
  return em_node_guid_
    == html_native::GlobalHTML5TaskQueue::kEmNodeHTMLGUID;
}

void Node::setEmNodeAsBody() {
  em_node_guid_
    = html_native::GlobalHTML5TaskQueue::kEmNodeBodyGUID;
}

bool Node::isEmNodeBody() const {
  return em_node_guid_
    == html_native::GlobalHTML5TaskQueue::kEmNodeBodyGUID;
}

void Node::setEmNodeAsTitle() {
  em_node_guid_
    = html_native::GlobalHTML5TaskQueue::kEmNodeTitleGUID;
}

bool Node::isEmNodeTitle() const {
  return em_node_guid_
    == html_native::GlobalHTML5TaskQueue::kEmNodeTitleGUID;
}

#if !defined(EM_IS_MAIN_THREAD)
#error "need to define EM_IS_MAIN_THREAD"
#endif // EM_IS_MAIN_THREAD

void Node::emCreateElementInBrowserThreadAndSetGUID(
  const std::string& tagName)
{
  auto taskCb
    = [em_node_guid = &this->em_node_guid_ /// \note ref data
       , tagName /// \note copyed data
       , out_node = &em_node_
       ]
       (const html_native::NativeHTMLTaskCbParams&&)
    {
      /// \note must execute only in main browser thread!
      DCHECK(EM_IS_MAIN_THREAD());

      DCHECK(em_node_guid);

      /// \note don`t create same element twice!
      DCHECK(!html_native::isEmNodeGUIDValid(*em_node_guid));

      (*em_node_guid) =
        html_native::createElementAndGetGUID(tagName.c_str());
      DCHECK(em_node_guid);
      DCHECK(html_native::isEmNodeGUIDValid((*em_node_guid)));

      DCHECK(out_node);
      html_native::getElement((*em_node_guid), out_node);
    };

  html_native::runOnMainBrowserThread(std::move(taskCb));
}

void Node::emCreateTextElementInBrowserThreadAndSetGUID(
    const std::string& text)
{
  auto taskCb
    = [em_node_guid = &this->em_node_guid_ /// \note ref data
       , text /// \note copyed data
       , out_node = &em_node_
       ]
       (const html_native::NativeHTMLTaskCbParams&&)
    {
      /// \note must execute only in main browser thread!
      DCHECK(EM_IS_MAIN_THREAD());

      DCHECK(em_node_guid);

      /// \note don`t create same element twice!
      DCHECK(!html_native::isEmNodeGUIDValid(*em_node_guid));

      (*em_node_guid) =
        html_native::createTextElementAndGetGUID(text.c_str());
      DCHECK(em_node_guid);
      DCHECK(html_native::isEmNodeGUIDValid((*em_node_guid)));

      DCHECK(out_node);
      html_native::getElement((*em_node_guid), out_node);
    };

  html_native::runOnMainBrowserThread(std::move(taskCb));
}

void Node::emAppendChildInBrowserThread(
  const int parentGUID, const int childGUID)
{
  /*printf("emAppendChildInBrowserThread %i %i \n",
    parentGUID, childGUID);*/

  auto taskCb
    = [new_child_em_node_guid = childGUID
       , em_node_guid = parentGUID
       //, innerHTMLPrint = inner_html()
       ]
       (const html_native::NativeHTMLTaskCbParams&&)
    {
      if(!html_native::isEmNodeGUIDValid(new_child_em_node_guid)
         || !html_native::isEmNodeGUIDValid(em_node_guid)) {
        printf("WASM: invalid node GUIDs: %i %i \n",
          em_node_guid, new_child_em_node_guid);
        return;
      }

      html_native::appendChild(em_node_guid,
        new_child_em_node_guid);
    };

  html_native::runOnMainBrowserThread(std::move(taskCb));
}

void Node::emGetElementInBrowserThread(
  const int guid, emscripten::val* output)
{
  /*printf("emGetElementInBrowserThread %i \n",
    getEmNodeGUID());*/
  DCHECK(output);

  auto taskCb
    = [em_node_guid = getEmNodeGUID()
       , out_node = output]
      (const html_native::NativeHTMLTaskCbParams&&)
    {
      if(!html_native::isEmNodeGUIDValid(em_node_guid)) {
        printf("WASM: invalid node GUIDs: %i \n",
          em_node_guid);
        return;
      }

      DCHECK(out_node);
      html_native::getElement(em_node_guid, out_node);
      DCHECK(!out_node->isNull()
             && !out_node->isUndefined());
    };

  html_native::runOnMainBrowserThread(std::move(taskCb));
}

void Node::emSetNodeValueInBrowserThread(const std::string& newValue)
{
  printf("emSetNodeValueInBrowserThread %i \n",
    getEmNodeGUID());

  DCHECK(html_native::isEmNodeGUIDValid(em_node_guid_));

  DCHECK(!em_node_.isNull()
         && !em_node_.isUndefined());

  auto taskCb
    = [em_node = &em_node_
       , value = newValue /// \note copyed data
       , node_guid = getEmNodeGUID()
       // , target = this // TODO
       ]
      (const html_native::NativeHTMLTaskCbParams&&)
    {
      if(em_node /// \note may be freed in async/threaded call
         && !em_node->isNull()
         && !em_node->isUndefined())
      {
        em_node->set("nodeValue",
            /// \note make sure that source files are UTF with BOM
            emscripten::val(
              html_native::utf8_to_wstring(value.c_str())
            )
        );
        DCHECK(em_node
               && !em_node->isNull()
               && !em_node->isUndefined());
      } else {
        /// \todo debug-only-check that js object freed properly
        /// \FIXME `check_output` async!!!
//#if !defined(NDEBUG)
//        emscripten::val check_output(emscripten::val::null());
//        DCHECK(target);
//        /// \todo async!!! target->emGetElementInBrowserThread(node_guid, &check_output);
//        CHECK(check_output->isNull() || check_output->isUndefined());
//#endif // NDEBUG
      }
    };

  html_native::runOnMainBrowserThread(std::move(taskCb));
}

#if 0
emscripten::val Node::getEmNode(const int guid) {
  if(em_node_guid_ < 0) {
    return; /// \note -1 for undefined
  }

  /// \note must execute only in main browser thread!
  DCHECK(EM_IS_MAIN_THREAD());

  emscripten::val cxxDomHelpers
    = html_native::getEmCxxDomHelpers();
  DCHECK(!cxxDomHelpers.isNull()
         && !cxxDomHelpers.isUndefined());

  cxxDomHelpers.call<emscripten::val>(
              "getElementsByTagName", emscripten::val("body"));
        emscripten::val body_node
          = body_elements[0];
        DCHECK(!body_node.isNull()
               && !body_node.isUndefined());
}
#endif // 0

#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)

void Node::OnInsertedIntoDocument() {
  DCHECK(node_document_);
  DCHECK(!inserted_into_document_);
  inserted_into_document_ = true;

  /*printf("Node::OnInsertedIntoDocument %i \n",
    getEmNodeGUID());*/

#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  if(child)
  {
    emAppendChildInBrowserThread(getEmNodeGUID(),
      getEmNodeGUID());
  }
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#endif // 0

#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  //if(child)
  {
    auto taskCb
      = [new_child_em_node = &this->em_node_
         , em_node = &this->em_node_
         //, innerHTMLPrint = inner_html()
         ]
         (const html_native::NativeHTMLTaskCbParams&&)
      {

      DCHECK(new_child_em_node->hasOwnProperty("localName"));
      if((*new_child_em_node)["localName"].as<std::string>() == "div") {
          // TODO
          DCHECK(em_node
            && !em_node->isNull()
            && !em_node->isUndefined());
          DCHECK(new_child_em_node
            && !new_child_em_node->isNull()
            && !new_child_em_node->isUndefined());
      }

        DCHECK(em_node);
        DCHECK(new_child_em_node);
        if(new_child_em_node
           && !new_child_em_node->isNull()
           && !new_child_em_node->isUndefined()
           && em_node
           && !em_node->isNull()
           && !em_node->isUndefined())
        {
          //printf("Node::AppendChild 1\n");

          DCHECK(em_node
            && !em_node->isNull()
            && !em_node->isUndefined());
          DCHECK(new_child_em_node
            && !new_child_em_node->isNull()
            && !new_child_em_node->isUndefined());

            // TODO: == "div" ????????
          if((*new_child_em_node)["localName"].as<std::string>() == "div") {
            em_node->call<void>("appendChild", *new_child_em_node);
          } else {
            // DCHECK(false); // TODO
          }
        } else {
          // TODO: warning
        }
      };

    html_native::NativeHTMLTaskCbParams cbParams{1,2};

    html_native::GlobalHTML5TaskQueue::getInstance()->
      scheduleTaskInMainThread(
        new html_native::NativeHTMLTaskParams{
          std::move(taskCb),
          std::move(cbParams)
        },
        true // async if threads enabled
      );
  }
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#endif // 0

  Node* child = first_child_.get();

  while (child) {
    child->OnInsertedIntoDocument();
    child = child->next_sibling_.get();
  }
}

void Node::OnRemovedFromDocument() {
  DCHECK(inserted_into_document_);
  inserted_into_document_ = false;

  Node* child = first_child_.get();
  while (child) {
    child->OnRemovedFromDocument();
    child = child->next_sibling_.get();
  }
}

void Node::MarkNotDisplayedOnNodeAndDescendants() {
  MarkNotDisplayedOnDescendants();
}

void Node::PurgeCachedBackgroundImagesOfNodeAndDescendants() {
  PurgeCachedBackgroundImagesOfDescendants();
}

void Node::InvalidateComputedStylesOfNodeAndDescendants() {
  InvalidateComputedStylesOfDescendants();
}

void Node::InvalidateLayoutBoxesOfNodeAndAncestors() {
  InvalidateLayoutBoxesOfAncestors();
}

void Node::InvalidateLayoutBoxesOfNodeAndDescendants() {
  InvalidateLayoutBoxesOfDescendants();
}

void Node::MarkNotDisplayedOnDescendants() {
  Node* child = first_child_.get();
  while (child) {
    child->MarkNotDisplayedOnNodeAndDescendants();
    child = child->next_sibling_.get();
  }
}

void Node::PurgeCachedBackgroundImagesOfDescendants() {
  Node* child = first_child_.get();
  while (child) {
    child->PurgeCachedBackgroundImagesOfNodeAndDescendants();
    child = child->next_sibling_.get();
  }
}

void Node::InvalidateComputedStylesOfDescendants() {
  Node* child = first_child_.get();
  while (child) {
    child->InvalidateComputedStylesOfNodeAndDescendants();
    child = child->next_sibling_.get();
  }
}

void Node::InvalidateLayoutBoxesOfAncestors() {
  if (parent_) {
    parent_->InvalidateLayoutBoxesOfNodeAndAncestors();
  }
}

void Node::InvalidateLayoutBoxesOfDescendants() {
  Node* child = first_child_.get();
  while (child) {
    child->InvalidateLayoutBoxesOfNodeAndDescendants();
    child = child->next_sibling_.get();
  }
}

void Node::UpdateGenerationForNodeAndAncestors() {
  if (++node_generation_ == kInvalidNodeGeneration) {
    node_generation_ = kInitialNodeGeneration;
  }
  if (parent_) {
    parent_->UpdateGenerationForNodeAndAncestors();
  }
}

std::unique_ptr<Node::RegisteredObserverVector>
Node::GatherInclusiveAncestorsObservers() {
  std::unique_ptr<RegisteredObserverVector> inclusive_observers(
      new RegisteredObserverVector());
  Node* current = this;
  while (current) {
    const RegisteredObserverList::RegisteredObserverVector& node_observers =
        current->registered_observers_.registered_observers();
    inclusive_observers->insert(inclusive_observers->end(),
                                node_observers.begin(), node_observers.end());
    current = current->parent_;
  }
  return inclusive_observers;
}

#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
// In browsers, KeyDown events do not carry a "character code" for most characters, but KeyPresses do.
// For WSAD input, we'd like to know the character code of the button press already at KeyDown time, so
// use the following method to interpret it from the event structure already at KeyDown event.
static int InterpretCharCode(const emscripten::val keyEvent)
{
  if (keyEvent["which"].as<int>()) return keyEvent["which"].as<int>();
  if (keyEvent["charCode"].as<int>()) return keyEvent["charCode"].as<int>();
  if (strlen(keyEvent["key"].as<std::string>().c_str()) == 1) return (int)tolower(keyEvent["key"].as<std::string>().c_str()[0]);
  return (keyEvent["keyCode"].as<int>());
}
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#endif //0

// custom modification
void Node::AddEventListener(const std::string& type,
                      const EventTarget::EventListenerScriptValue& listener,
                      bool use_capture) {
  EventTarget::AddEventListener(type, listener, use_capture);

  std::cout << "EventTarget::AddEventListener " << type << std::endl;

  DCHECK(!type.empty());

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [this,
       &type,
       cb_listener = &listener, /// \note ref data
       em_node = &em_node_, /// \note ref data
       em_node_guid = &this->em_node_guid_ /// \note ref data
      ]
      (const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(em_node_guid);
      DCHECK(cb_listener);

      if(!html_native::isEmNodeGUIDValid(*em_node_guid)) {
        printf("WASM: (AddEventListener) invalid node GUIDs: %i \n",
          *em_node_guid);
        std::cout << "onEvent  !isEmNodeGUIDValid" << std::endl;
        return;
      }

      if(em_node->isNull() || em_node->isUndefined()) {
          std::cout << "onEvent target isNull" << std::endl;
          return;
      }

      std::cout << "add onEventCb target = "
        << em_node->call<emscripten::val>("toString")
           .as<std::string>() << std::endl;

      auto onEventCb = [this](emscripten::val event) {
          std::cout << "onEvent event = " << event.call<emscripten::val>("toString").as<std::string>() << std::endl;

          DCHECK(!event["type"].isNull() && !event["type"].isUndefined());

          std::cout << "onEventCb target type " << event["type"].as<std::string>() << std::endl;

          if(!html_native::isEmNodeGUIDValid(em_node_guid_)) {
            printf("WASM: (AddEventListener) invalid node GUIDs: %i \n",
              em_node_guid_);
            std::cout << "onEventCb !isEmNodeGUIDValid" << std::endl;
            return;
          }

          /// \note "keypress" event will give you a charCode property whenever you press a character key.
          /// \note "keydown" event will capture every keystroke, but it doesn't have a charCode property
          bool isControlCharacter = event["charCode"].isNull()
            || event["charCode"].isUndefined()
            || event["charCode"].as<int>() == 0;

          if(!event["charCode"].isNull() && !event["charCode"].isUndefined()) {
            printf("event[charCode].as<int>() %d\n", event["charCode"].as<int>());
          }

          if(em_node_.isNull() || em_node_.isUndefined()) {
            std::cout << "onEventCb target isNull" << std::endl;
            return;
          }

          const std::string type = event["type"].as<std::string>();
          DCHECK(!type.empty());

          auto* primary_window
            = cobalt::system_window::SystemWindow::PrimaryWindow();
          auto* starboard_window
            = primary_window ? primary_window->GetSbWindow() : nullptr;
          const float wasm_dpi_scale = 1.0f;

          scoped_refptr<Window> window;
          if (IsInDocument()) {
            DCHECK(node_document());
            if(node_document()->default_view()) { // TODO
              //P_LOG("Node::DispatchEvent 2.4\n");
              window = node_document()->default_view();
            }
          }

          // TODO: more web events https://developer.mozilla.org/en-US/docs/Web/API/Element

          // TODO: map events from HTML5 to native
          // https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/src/cobalt/src/cobalt/input/input_device_manager_desktop.cc#L362

          if(type == "mousedown"
             || type == "mouseup"
             || type == "mouseover"
             || type == "mouseout"
             || type == "mousemove"
             || type == "mouseenter"
             || type == "mouseleave"
             || type == "pointerdown"
             || type == "pointerup"
             || type == "pointerenter"
             || type == "pointerleave"
             || type == "pointermove"
             || type == "pointerout"
             || type == "pointerover"
             || type == "click"
             /*|| type == "dblclick"
             || type == "auxclick"
             || type == "contextmenu"
             || type == "touchcancel"
             || type == "touchend"
             || type == "touchmove"
             || type == "touchstart"*/)
          {

            const float mouse_x = (event["clientX"].as<float>() * wasm_dpi_scale);
            const float mouse_y = (event["clientY"].as<float>() * wasm_dpi_scale);

            const unsigned int button_modifiers
              = native_event::EmscMouseEventToSbButtonModifiers(event["button"].as<unsigned short>());

            SbInputEventType sbInputEventType;
            if(type == "mousedown" || type == "pointerdown") {
              sbInputEventType= SbInputEventType::kSbInputEventTypePress;
            }
            else if(type == "mouseup" || type == "pointerup") {
              sbInputEventType= SbInputEventType::kSbInputEventTypeUnpress;
            }
            else if(type == "mousemove" || type == "pointermove") {
              sbInputEventType= SbInputEventType::kSbInputEventTypeMove;
            }
            else if(type == "mouseover" || type == "mouseout"
                    || type == "pointerover" || type == "pointerout") {
              sbInputEventType= SbInputEventType::kSbInputEventTypeMove;
            }
            else if(type == "mouseenter" || type == "mouseleave"
                    || type == "pointerenter" || type == "pointerleave") {
              sbInputEventType= SbInputEventType::kSbInputEventTypeMove;
            }
            else if(type == "click" || type == "dblclick" || type == "auxclick") {
              sbInputEventType= SbInputEventType::kSbInputEventTypePress;
            } else {
              NOTIMPLEMENTED_LOG_ONCE();
              DCHECK(false);
            }

            std::unique_ptr<SbEvent> sb_ev
              = native_event::createSbMouseEvent(
                  SbEventType::kSbEventTypeInput,
                  sbInputEventType,
                  starboard_window,
                  event["button"].as<unsigned short>(),
                  event["altKey"].as<bool>(),
                  event["ctrlKey"].as<bool>(),
                  event["metaKey"].as<bool>(),
                  event["shiftKey"].as<bool>(),
                  mouse_x,
                  mouse_y,
                  button_modifiers,
                  native_event::EmscMouseEventToSbKey(event["button"].as<unsigned short>())
              );

            std::unique_ptr<cobalt::system_window::InputEvent> input_event
              = native_event::SbEventToInputEvent(sb_ev.get());
            DCHECK(input_event);

            cobalt::dom::Event* dom_event
              = native_event::InputEventToDomEvent(type, input_event.get(), window);

            std::cout << "(mouse) DispatchEvent dom_event type: "
              << dom_event->type() << std::endl;

            // see https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/src/cobalt/port/cobalt/base/tokens.h#L30
            this->DispatchEvent(dom_event);
          }
          else if(type == "wheel"
                  //|| type == "scroll"
                  )
          {
            const float mouse_x = (event["clientX"].as<float>() * wasm_dpi_scale);
            const float mouse_y = (event["clientY"].as<float>() * wasm_dpi_scale);

            const unsigned int button_modifiers
              = native_event::EmscMouseEventToSbButtonModifiers(event["button"].as<unsigned short>());

            std::cout << "(wheel) event[deltaX].as<float>(): "
              << event["deltaX"].as<float>() << std::endl;
            std::cout << "(wheel) event[deltaY].as<float>(): "
              << event["deltaY"].as<float>() << std::endl;

            std::unique_ptr<SbEvent> sb_ev
              = native_event::createSbWheelEvent(
                  SbEventType::kSbEventTypeInput,
                  SbInputEventType::kSbInputEventTypeWheel,
                  starboard_window,
                  event["button"].as<unsigned short>(),
                  event["altKey"].as<bool>(),
                  event["ctrlKey"].as<bool>(),
                  event["metaKey"].as<bool>(),
                  event["shiftKey"].as<bool>(),
                  mouse_x,
                  mouse_y,
                  event["deltaX"].as<float>(),
                  event["deltaY"].as<float>(),
                  button_modifiers,
                  native_event::EmscMouseEventToSbKey(event["button"].as<unsigned short>())
              );

            std::unique_ptr<cobalt::system_window::InputEvent> input_event
              = native_event::SbEventToInputEvent(sb_ev.get());
            DCHECK(input_event);

            cobalt::dom::Event* dom_event
              = native_event::InputEventToDomEvent(type, input_event.get(), window);

            std::cout << "(wheel) DispatchEvent dom_event type: "
              << dom_event->type() << std::endl;

            // see https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/src/cobalt/port/cobalt/base/tokens.h#L30
            this->DispatchEvent(dom_event);
          }
          else if(type == "keydown"
                  || type == "keyup"
                  || type == "keypress") {

            SbInputEventType sbInputEventType;

            DCHECK(!event["which"].isNull() && !event["which"].isUndefined());

            DCHECK(!event["code"].isNull() && !event["code"].isUndefined());

            DCHECK(!event["key"].isNull() && !event["key"].isUndefined());
            DCHECK(!event["altKey"].isNull() && !event["altKey"].isUndefined());

            /// \note skips shiftKey
            const bool hasModifier = event["altKey"].as<bool>()
                    || event["ctrlKey"].as<bool>()
                    || event["metaKey"].as<bool>();

            // see https://github.com/emscripten-core/emscripten/blob/fb8a9847c1584cbdbd59bd3d03dab484fd0a9132/src/library_html5.js#L238

            emscripten::val moduleEm = emscripten::val::global("Module");
            DCHECK(!moduleEm.isNull() && !moduleEm.isUndefined());

            emscripten::val whichEm = event["which"];

            emscripten::val stringEm = emscripten::val::global("String");
            DCHECK(!stringEm.isNull() && !stringEm.isUndefined());

            emscripten::val whichAsStrEm = stringEm.call<emscripten::val>("fromCharCode", event["which"]);

            //emscripten::val whichAsUTF8Str = moduleEm.call<emscripten::val>("stringToUTF8", whichAsStrEm);

            std::string keyUTF = whichAsStrEm.as<std::string>();

            //std::string keyUTF = whichAsUTF8Str.as<std::string>();

            /*const size_t whichAsUTF8StrSize = 128;
            char* whichAsUTF8Str = nullptr;
            EM_ASM({
              var buffer = _malloc($2);
              stringToUTF8($1, buffer, $2);
            }, whichAsStrEm.as<std::string>().c_str(), whichAsUTF8Str, sizeof(char)*whichAsUTF8StrSize);*/

            /*std::string keyUTF = whichAsUTF8Str;
            delete[] whichAsUTF8Str;*/

            /*const size_t whichAsUTF8StrSize = 128;
            char* whichAsUTF8Str = new char[whichAsUTF8StrSize];
            emscripten::val numBytesWritten = moduleEm.call<emscripten::val>("stringToUTF8",
              whichAsStrEm,
              emscripten::val(whichAsUTF8Str),
              emscripten::val(whichAsUTF8StrSize));*/

            /*const size_t whichAsUTF8StrSize = 128;
            char whichAsUTF8Str[whichAsUTF8StrSize];
            EM_ASM({
              var numBytesWritten = Module.stringToUTF8($0, $1, $2);
            }, whichAsStrEm.as<std::string>().c_str(), whichAsUTF8Str, whichAsUTF8StrSize);

            std::string keyUTF = whichAsUTF8Str; //.as<std::string>();

            delete[] whichAsUTF8Str;*/

            //std::string keyUTF = event["key"].as<std::string>();

            // Heuristic: Assume all printables are represented by
            // a string that has exactly one character, other are control characters.
            bool is_printable = true;//native_event::number_of_characters_in_utf8_string(keyUTF.c_str()) == 1;

            printf("keyUTF: %s\n",
              keyUTF.c_str());

            //printf("is_printable: %s\n", (is_printable ? "1" : "0"));

            const int dom_pk_code = emscripten_compute_dom_pk_code(event["code"].as<std::string>().c_str());
            wchar_t Character
              //= (wchar_t)keyUTF.c_str()[0];
              = native_event::Utf8CharToUtf32((const unsigned char*)keyUTF.c_str());
            const SbKey key = native_event::EmscKeycodeToSbKey(dom_pk_code);
            const SbKeyLocation key_location = native_event::EmscKeycodeToSbKeyLocation(dom_pk_code);

            auto pressKey = [&]()
            {
              std::unique_ptr<SbEvent> sb_ev
                = native_event::createSbKeyboardEvent(
                    SbEventType::kSbEventTypeInput,
                    sbInputEventType,
                    starboard_window,
                    event["altKey"].as<bool>(),
                    event["ctrlKey"].as<bool>(),
                    event["metaKey"].as<bool>(),
                    event["shiftKey"].as<bool>(),
                    SbInputDeviceType::kSbInputDeviceTypeKeyboard,
                    key,
                    key_location,
                    Character,
                    Character,
                    keyUTF,
                    is_printable
                );

              std::unique_ptr<cobalt::system_window::InputEvent> input_event
                = native_event::SbEventToInputEvent(sb_ev.get());
              DCHECK(input_event);

              cobalt::dom::Event* dom_event
                = native_event::InputEventToDomEvent(type, input_event.get(), window);

              std::cout << "(key) DispatchEvent dom_event type: "
                << dom_event->type() << std::endl;

              // see https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/src/cobalt/port/cobalt/base/tokens.h#L30
              this->DispatchEvent(dom_event);
            };

            if(type == "keydown") {
              if(!isControlCharacter) {
                return;
              }
              sbInputEventType= SbInputEventType::kSbInputEventTypePress;
              is_printable = false;
              pressKey();
            }
            else if(type == "keyup") {
              if(!isControlCharacter) {
                return;
              }
              sbInputEventType= SbInputEventType::kSbInputEventTypeUnpress;
              is_printable = false;
              pressKey();
            }
            /// \note keypress supports Unicode
            /// \note KeyPress event is invoked only for character (printable) keys,
            /// but KeyDown event is raised for all including nonprintable such as Control, Shift, Alt, BackSpace, etc.
            else if(type == "keypress") {
              if(isControlCharacter || hasModifier) {
                return;
              }
              is_printable = true;
              // Heuristic: Assume all printables are represented by
              // a string that has exactly one character, other are control characters.
              /// \todo does not work with emojis or Unicode astral https://stackoverflow.com/a/44052348
              if (native_event::NumCharsInUTF8String((const unsigned char*)event["key"].as<std::string>().c_str()) != 1) {
                return;
              }

              /*if (native_event::NumCharsInUTF8String((const unsigned char*)event["key"].as<std::string>().c_str()) == 1)
              {
                sbInputEventType = SbInputEventType::kSbInputEventTypePress;
                isKeyEvent = true;
              } else {
                isKeyEvent = false;
              }*/

              is_printable = true;

              {
                sbInputEventType = SbInputEventType::kSbInputEventTypePress;
                pressKey();
              }

              {
                sbInputEventType = SbInputEventType::kSbInputEventTypeUnpress;
                pressKey();
              }
            } else {
              NOTIMPLEMENTED_LOG_ONCE();
              DCHECK(false);
            }
          }

      };

      printf("HTML5 AddEventListener %s\n", type.c_str());

      em_node->call<emscripten::val>(
        "addEventListener",
        emscripten::val(type.c_str()),
        embinder::bind(onEventCb, std::placeholders::_1),
        emscripten::val(false) /*passive: if true, will never call preventDefault()*/
      );
    };

  html_native::runOnMainBrowserThread(std::move(taskCb));
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
}

// custom modification
void Node::RemoveEventListener(const std::string& type,
                         const EventTarget::EventListenerScriptValue& listener,
                         bool use_capture) {
  EventTarget::RemoveEventListener(type, listener, use_capture);

  // TODO
}

// Algorithm for EnsurePreInsertionValidity:
//   https://www.w3.org/TR/dom/#concept-node-ensure-pre-insertion-validity
bool Node::EnsurePreInsertionValidity(const scoped_refptr<Node>& node,
                                      const scoped_refptr<Node>& child) {
  if (!node) {
    return false;
  }

  // 1. If parent is not a Document, DocumentFragment, or Element node, throw a
  // "HierarchyRequestError".
  if (!IsDocument() && !IsElement()) {
    // TODO: Throw JS HierarchyRequestError.
    return false;
  }

  // 2. If node is a host-including inclusive ancestor of parent, throw a
  // "HierarchyRequestError".
  Node* ancestor = this;
  while (ancestor) {
    if (node.get() == ancestor) {
      // TODO: Throw JS HierarchyRequestError.
      return false;
    }
    ancestor = ancestor->parent_;
  }

  // 3. If child is not null and its parent is not parent, throw a
  // "NotFoundError" exception.
  if (child && child->parent_ != this) {
    // TODO: Throw JS NotFoundError.
    return false;
  }

  // 4. If node is not a DocumentFragment, DocumentType, Element, Text,
  // ProcessingInstruction, or Comment node, throw a "HierarchyRequestError".
  // Note: Since we support CDATASection, it is also included here, so the only
  // type that is excluded is document.
  if (node->IsDocument()) {
    // TODO: Throw JS HierarchyRequestError.
    return false;
  }

  // 5. If either node is a Text node and parent is a document, or node is a
  // doctype and parent is not a document, throw a "HierarchyRequestError".
  if ((node->IsText() && IsDocument()) ||
      (node->IsDocumentType() && !IsDocument())) {
    // TODO: Throw JS HierarchyRequestError.
    return false;
  }

  // 6. Not needed by Cobalt.

  return true;
}

// Algorithm for PreInsert:
//   https://www.w3.org/TR/dom/#concept-node-pre-insert
scoped_refptr<Node> Node::PreInsert(const scoped_refptr<Node>& node,
                                    const scoped_refptr<Node>& child) {
  TRACE_EVENT0("cobalt::dom", "Node::PreInsert()");
  // 1. Ensure pre-insertion validity of node into parent before child.
  if (!EnsurePreInsertionValidity(node, child)) {
    return NULL;
  }

  // 2. Let reference child be child.
  // 3. If reference child is node, set it to node's next sibling.
  // 4. Adopt node into parent's node document.
  // 5. Insert node into parent before reference child.
  node->AdoptIntoDocument(node_document_.get());
  Insert(node, child == node ? child->next_sibling_ : child, false);

  // 6. Return node.
  return node;
}

// Algorithm for Insert:
//   https://www.w3.org/TR/dom/#concept-node-insert
void Node::Insert(const scoped_refptr<Node>& node,
                  const scoped_refptr<Node>& child, bool suppress_observers) {
  TRACE_EVENT0("cobalt::dom", "Node::Insert()");
  // 1. 2. Not needed by Cobalt.
  // 3. Let nodes be node's children if node is a DocumentFragment node, and a
  // list containing solely node otherwise.
  // 4. 5. Not needed by Cobalt.
  // 6. If suppress observers flag is unset, queue a mutation record of
  //    "childList" for parent with addedNodes nodes, nextSibling child, and
  //    previousSibling child's previous sibling or parent's last child if
  //    child is null.
  // 7. For each newNode in nodes, in tree order, run these substeps:
  //   1. Insert newNode into parent before child or at the end of parent if
  //   child is null.
  //   2. Run the insertion steps with newNode.

  if (!suppress_observers) {
    std::unique_ptr<RegisteredObserverVector> observers =
        GatherInclusiveAncestorsObservers();
    if (!observers->empty()) {
      MutationReporter mutation_reporter(this, std::move(observers));
      scoped_refptr<dom::NodeList> added_nodes = new dom::NodeList();
      added_nodes->AppendNode(node);
      mutation_reporter.ReportChildListMutation(
          added_nodes, NULL,
          child ? child->previous_sibling_
                : this->last_child_ /* previous_sibling */,
          child /* next_sibling */);
    }
  }

  node->parent_ = this;

  scoped_refptr<Node> next_sibling = child;
  Node* previous_sibling =
      next_sibling ? next_sibling->previous_sibling_ : last_child_;

  if (previous_sibling) {
    previous_sibling->next_sibling_ = node;
  } else {
    first_child_ = node;
  }
  node->previous_sibling_ = previous_sibling;

  if (next_sibling) {
    next_sibling->previous_sibling_ = node.get();
  } else {
    last_child_ = node.get();
  }
  node->next_sibling_ = next_sibling;

  // Custom, not in any spec.

  OnMutation();
  node->UpdateGenerationForNodeAndAncestors();

  // Invalidate the layout boxes of the new parent as a result of its children
  // being changed.
  // NOTE: The added node does not have any invalidations done, because they
  // occur on the remove and are guaranteed to not be needed at this point.
  InvalidateLayoutBoxesOfNodeAndAncestors();

  if (inserted_into_document_) {
    node->OnInsertedIntoDocument();
    Document* document = node_document();
    if (document) {
      document->OnDOMMutation();
    }

// TODO
//#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
//  //if(new_child)
//  {
//    DCHECK(node);
//    DCHECK(node->parent_);
//    emAppendChildInBrowserThread(node->parent_->getEmNodeGUID(),
//      node->getEmNodeGUID());
//  }
//#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)

  }

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  //if(new_child)
  {
    DCHECK(node);
    DCHECK(node->parent_);
    emAppendChildInBrowserThread(node->parent_->getEmNodeGUID(),
      node->getEmNodeGUID());
  }
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
}

// Algorithm for PreRemove:
//   https://www.w3.org/TR/dom/#concept-node-pre-remove
scoped_refptr<Node> Node::PreRemove(const scoped_refptr<Node>& child) {
  TRACE_EVENT0("cobalt::dom", "Node::PreRemove()");
  // 1. If child's parent is not parent, throw a "NotFoundError" exception.
  if (!child || child->parent_ != this) {
    // TODO: Throw JS NotFoundError.
    return NULL;
  }

  // 2. Remove child from parent.
  Remove(child, false);

  // 3. Return child.
  return child;
}

// Algorithm for Remove:
//   https://www.w3.org/TR/dom/#concept-node-remove
void Node::Remove(const scoped_refptr<Node>& node, bool suppress_observers) {
  DCHECK(node);
  TRACE_EVENT0("cobalt::dom", "Node::Remove()");

  OnMutation();
  node->UpdateGenerationForNodeAndAncestors();

  // Invalidate the layout boxes of the previous parent as a result of its
  // children being changed.
  InvalidateLayoutBoxesOfNodeAndAncestors();

  // Purge any cached background images now that this node and its descendants
  // are no longer in the tree, so that the images can be released from the
  // resource cache.
  node->PurgeCachedBackgroundImagesOfNodeAndDescendants();

  // Invalidate the styles and layout boxes of the node being removed from
  // the tree. These are no longer valid as a result of the child and its
  // descendants losing their inherited styles.
  node->InvalidateComputedStylesOfNodeAndDescendants();
  node->InvalidateLayoutBoxesOfNodeAndDescendants();

  bool was_inserted_to_document = node->inserted_into_document_;
  if (was_inserted_to_document) {
    node->OnRemovedFromDocument();
    node->MarkNotDisplayedOnNodeAndDescendants();
  }

  // 1. 5. Not needed by Cobalt.
  // 6. Let oldPreviousSibling be node's previous sibling
  // 7. If suppress observers flag is unset, queue a mutation record of
  // "childList" for parent with removedNodes a list solely containing node,
  // nextSibling node's next sibling, and previousSibling oldPreviousSibling.
  // 8. For each ancestor ancestor of node, if ancestor has any registered
  // observers whose options's subtree is true, then for each such registered
  // observer registered, append a transient registered observer whose observer
  // and options are identical to those of registered and source which is
  // registered to node's list of registered observers.
  // 9. Remove node from its parent.
  // 10. Run the removing steps with node, parent, and oldPreviousSibling.

  std::unique_ptr<RegisteredObserverVector> observers =
      GatherInclusiveAncestorsObservers();
  if (!observers->empty()) {
    // Step 7 - Queue a mutation record.
    if (!suppress_observers) {
      MutationReporter mutation_reporter(this, std::move(observers));
      scoped_refptr<dom::NodeList> removed_nodes = new dom::NodeList();
      removed_nodes->AppendNode(node);
      mutation_reporter.ReportChildListMutation(
          NULL, removed_nodes, node->previous_sibling_ /* previous_sibling */,
          node->next_sibling_ /* next_sibling */);
    }
    // TODO: transient registered observers.
  }

  if (node->previous_sibling_) {
    node->previous_sibling_->next_sibling_ = node->next_sibling_;
  } else {
    first_child_ = node->next_sibling_;
  }
  if (node->next_sibling_) {
    node->next_sibling_->previous_sibling_ = node->previous_sibling_;
  } else {
    last_child_ = node->previous_sibling_;
  }
  node->parent_ = NULL;
  node->previous_sibling_ = NULL;
  node->next_sibling_ = NULL;

  // Custom, not in any spec.

  if (was_inserted_to_document) {
    scoped_refptr<Document> document = node->owner_document();
    if (document) {
      document->OnDOMMutation();
#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
      //if(new_child)
      {
        DCHECK(node);
        DCHECK(!node->parent_); /// \note parent undefined
        emRemoveChildInBrowserThread(node->getEmNodeGUID());
      }
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#endif // 0
    }
  }
}

// Algorithm for ReplaceAll:
//   https://www.w3.org/TR/dom/#concept-node-replace-all
void Node::ReplaceAll(const scoped_refptr<Node>& node) {
  TRACE_EVENT0("cobalt::dom", "Node::ReplaceAll()");
  // 1. If node is not null, adopt node into parent's node document.
  if (node) {
    node->AdoptIntoDocument(this->node_document());
  }

  // 2. Let removedNodes be parent's children.
  scoped_refptr<NodeList> removed_nodes = new NodeList();
  scoped_refptr<Node> next_child = first_child_;
  while (next_child) {
    removed_nodes->AppendNode(next_child);
    next_child = next_child->next_sibling();
  }

  // 3. Let addedNodes be the empty list if node is null, node's children if
  //    node is a DocumentFragment node, and a list containing node otherwise.
  scoped_refptr<NodeList> added_nodes = new NodeList();
  if (node) {
    added_nodes->AppendNode(node);
  }

  // 4. Remove all parent's children, in tree order, with the suppress observers
  //    flag set.
  while (HasChildNodes()) {
    Remove(first_child(), true);
  }

  // 5. If node is not null, insert node into parent before null with the
  //    suppress observers flag set.
  if (node) {
    Insert(node, NULL, true);
  }

  // 6. Queue a mutation record of "childList" for parent with addedNodes
  //    addedNodes and removedNodes removedNodes.
  std::unique_ptr<RegisteredObserverVector> observers =
      GatherInclusiveAncestorsObservers();
  if (!observers->empty()) {
    MutationReporter mutation_reporter(this, std::move(observers));
    scoped_refptr<dom::NodeList> new_added_nodes = new dom::NodeList();
    if (node) {
      new_added_nodes->AppendNode(node);
    }
    if (new_added_nodes->length() > 0 || removed_nodes->length() > 0) {
      mutation_reporter.ReportChildListMutation(new_added_nodes, removed_nodes,
                                                NULL /* previous_sibling */,
                                                NULL /* next_sibling */);
    }
  }
}

}  // namespace dom
}  // namespace cobalt
