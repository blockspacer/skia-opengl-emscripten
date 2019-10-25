var cxxDomNodes = { /*0: null*/ };
var lastPtr = 0;

var addPtr = function addPtr(node) {
  if (node === null) return 0;
  if (node.cxxDomPtr !== undefined) return node.cxxDomPtr;
  cxxDomNodes[++lastPtr] = node;
  // eslint-disable-next-line
  return node.cxxDomPtr = lastPtr;
};

/// \todo use array and we can get globals from WASM
var kEmNodeRootGUID = -1000;
var kEmNodeHeadGUID = -1001;
var kEmNodeTitleGUID = -1002;
var kEmNodeHtmlGUID = -1003;
var kEmNodeBodyGUID = -1004;
var kEmNodeDocumentGUID = -1005;

// see https://github.com/mbasso/asm-dom/blob/master/cpp/domApi.js

document.cxxDomHelpers = {
  getPredefinedElement(nodePtr) {
    //console.log("js: getPredefinedElement: ", nodePtr);
    if(nodePtr == kEmNodeRootGUID) {
      return document.body; // TODO: body?
    } else if(nodePtr == kEmNodeHeadGUID) {
      return document.head;
    } else if(nodePtr == kEmNodeTitleGUID) {
      return document.title;
    } else if(nodePtr == kEmNodeHtmlGUID) {
      return document.documentElement;
    } else if(nodePtr == kEmNodeBodyGUID) {
      return document.body;
    } else if(nodePtr == kEmNodeDocumentGUID) {
      return document;
    }
    /// \note may be null or undefined
    return null;
  },
  getElement(nodePtr) {
    //console.log("js: getElement: ", nodePtr);
    /// \note may be null or undefined
    return cxxDomNodes[nodePtr];
  },
  createElement(elemName) {
    //console.log("js: createElement start for ", elemName);
    if(elemName === ""
       || elemName == "document"
       || elemName == "body"
       || elemName == "html"
       || elemName == "head"
       || elemName == "title") {
      return;
    }
    //console.log("js: createElement done");

    if(elemName === "#text") {
      //console.log("js: createTextNode done");
      /// \note contents of text node can be updated using nodeValue
      return addPtr(document.createTextNode(""));
    }

    //else if(elemName === "#NS") {
    //  return addPtr(document.createElementNS(...));
    //}

    //else if(elemName === "#comment") {
    //  return addPtr(document.createComment(...));
    //}

    return addPtr(document.createElement(elemName));
  },
  createTextElement(text) {
    //console.log("js: createTextElement with text = ", text);

    /// \note contents of text node can be updated using nodeValue
    return addPtr(document.createTextNode(text));
  },
  appendChild(parentPtr, childPtr) {
    //console.log("js: appendChild: ", parentPtr, " ", childPtr);

    if (parentPtr === null || parentPtr === undefined) return;
    if (childPtr === null || childPtr === undefined) return;

    if(parentPtr === childPtr) {
      return;
    }

    if(childPtr == kEmNodeRootGUID) {
      return; // TODO: body?
    } else if(childPtr == kEmNodeHeadGUID) {
      return;
    } else if(childPtr == kEmNodeTitleGUID) {
      return;
    } else if(childPtr == kEmNodeHtmlGUID) {
      return;
    } else if(childPtr == kEmNodeBodyGUID) {
      return;
    } else if(childPtr == kEmNodeDocumentGUID) {
      return;
    }

    var childElm = cxxDomNodes[childPtr];
    if (childElm === null || childElm === undefined) return;

    // Nodes of type '#text' may not be inserted inside nodes of type '#document'.
    if(parentPtr === kEmNodeDocumentGUID
       && childElm.nodeName === "#text") {
      return;
    }

    //console.log("js: add child is ", childElm);

    //if(parentPtr === kEmNodeRootGUID) {
    //  document.body.appendChild(childElm); // TODO: body?
    //  console.log("js: appendChild to body");
    //} else
    {
      var parentElm = document.cxxDomHelpers.getPredefinedElement(parentPtr);
      if (parentElm === null || parentElm === undefined) {
        parentElm = document.cxxDomHelpers.getElement(parentPtr);
      }
      if (parentElm === null || parentElm === undefined) return;

      //console.log("js: add parentElm is ", parentElm);

    if(typeof parentElm.appendChild !== 'function') return;

      parentElm
        .appendChild(childElm);
    }

    //console.log("js: appendChild done");
  },
  removeChild(childPtr) {
    //console.log("js: removeChild: ", childPtr);
    var node = cxxDomNodes[childPtr];
    if (node === null || node === undefined) return;

    //console.log("js: remove child is ", node);

    var parent = node.parentNode;
    if (parent !== null) {
      if(childPtr == kEmNodeRootGUID) {
        console.log("js: can't remove kEmNodeRootGUID node");
        return;
      } else if(childPtr == kEmNodeHTMLGUID) {
        console.log("js: can't remove kEmNodeHTMLGUID node");
        return;
      }  else if(childPtr == kEmNodeHeadGUID) {
        console.log("js: can't remove kEmNodeHeadGUID node");
        return;
      } else if(childPtr == kEmNodeBodyGUID) {
        console.log("js: can't remove kEmNodeBodyGUID node");
        return;
      } else if(childPtr == kEmNodeTitleGUID) {
        console.log("js: can't remove kEmNodeTitleGUID node");
        return;
      } else if(childPtr == kEmNodeDocumentGUID) {
        console.log("js: can't remove kEmNodeDocumentGUID node");
        return;
      }
      parent.removeChild(node);
    }
    //_domRecycler2['default'].collect(node);
    //console.log("js: removeChild done");
  },
  setAttribute(nodePtr, name, value) {
    //console.log("js: setAttribute: ", name, " ", value);

    /*if(nodePtr == kEmNodeRootGUID) {
      return;
    }*/

    var parentElm = document.cxxDomHelpers.getPredefinedElement(nodePtr);
    if (parentElm === null || parentElm === undefined) {
      parentElm = document.cxxDomHelpers.getElement(nodePtr);
    }
    if (parentElm === null || parentElm === undefined) return;

    //console.log("js: add parentElm is ", parentElm);

    if(typeof parentElm.setAttribute !== 'function') return;

    parentElm
      .setAttribute(name, value);

    //console.log("js: setAttribute done");
  },
};
