// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/element_lookup_trie.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/html_tag_names.json5


#include "third_party/blink/renderer/core/html_element_lookup_trie.h"

#include "third_party/blink/renderer/core/html_names.h"

namespace blink {

using namespace html_names;

const AtomicString& lookupHTMLTag(const UChar* data, unsigned length) {
  DCHECK(data);
  DCHECK(length);
  switch (length) {
    case 1:
        switch (data[0]) {
        case 'a':
            return kATag.LocalName();

        case 'b':
            return kBTag.LocalName();

        case 'i':
            return kITag.LocalName();

        case 'p':
            return kPTag.LocalName();

        case 'q':
            return kQTag.LocalName();

        case 's':
            return kSTag.LocalName();

        case 'u':
            return kUTag.LocalName();

        }
        break;

    case 2:
        switch (data[0]) {
        case 'b':
            if (data[1] == 'r')
                return kBrTag.LocalName();
            break;

        case 'd':
            switch (data[1]) {
            case 'd':
                return kDdTag.LocalName();

            case 'l':
                return kDlTag.LocalName();

            case 't':
                return kDtTag.LocalName();

            }
            break;

        case 'e':
            if (data[1] == 'm')
                return kEmTag.LocalName();
            break;

        case 'h':
            switch (data[1]) {
            case '1':
                return kH1Tag.LocalName();

            case '2':
                return kH2Tag.LocalName();

            case '3':
                return kH3Tag.LocalName();

            case '4':
                return kH4Tag.LocalName();

            case '5':
                return kH5Tag.LocalName();

            case '6':
                return kH6Tag.LocalName();

            case 'r':
                return kHrTag.LocalName();

            }
            break;

        case 'l':
            if (data[1] == 'i')
                return kLiTag.LocalName();
            break;

        case 'o':
            if (data[1] == 'l')
                return kOlTag.LocalName();
            break;

        case 'r':
            switch (data[1]) {
            case 'b':
                return kRbTag.LocalName();

            case 'p':
                return kRpTag.LocalName();

            case 't':
                return kRtTag.LocalName();

            }
            break;

        case 't':
            switch (data[1]) {
            case 'd':
                return kTdTag.LocalName();

            case 'h':
                return kThTag.LocalName();

            case 'r':
                return kTrTag.LocalName();

            case 't':
                return kTtTag.LocalName();

            }
            break;

        case 'u':
            if (data[1] == 'l')
                return kUlTag.LocalName();
            break;

        }
        break;

    case 3:
        switch (data[0]) {
        case 'b':
            switch (data[1]) {
            case 'd':
                switch (data[2]) {
                case 'i':
                    return kBdiTag.LocalName();

                case 'o':
                    return kBdoTag.LocalName();

                }
                break;

            case 'i':
                if (data[2] == 'g')
                    return kBigTag.LocalName();
                break;

            }
            break;

        case 'c':
            if (data[1] == 'o' && data[2] == 'l')
                return kColTag.LocalName();
            break;

        case 'd':
            switch (data[1]) {
            case 'e':
                if (data[2] == 'l')
                    return kDelTag.LocalName();
                break;

            case 'f':
                if (data[2] == 'n')
                    return kDfnTag.LocalName();
                break;

            case 'i':
                switch (data[2]) {
                case 'r':
                    return kDirTag.LocalName();

                case 'v':
                    return kDivTag.LocalName();

                }
                break;

            }
            break;

        case 'i':
            switch (data[1]) {
            case 'm':
                if (data[2] == 'g')
                    return kImgTag.LocalName();
                break;

            case 'n':
                if (data[2] == 's')
                    return kInsTag.LocalName();
                break;

            }
            break;

        case 'k':
            if (data[1] == 'b' && data[2] == 'd')
                return kKbdTag.LocalName();
            break;

        case 'm':
            if (data[1] == 'a' && data[2] == 'p')
                return kMapTag.LocalName();
            break;

        case 'n':
            if (data[1] == 'a' && data[2] == 'v')
                return kNavTag.LocalName();
            break;

        case 'p':
            if (data[1] == 'r' && data[2] == 'e')
                return kPreTag.LocalName();
            break;

        case 'r':
            if (data[1] == 't' && data[2] == 'c')
                return kRTCTag.LocalName();
            break;

        case 's':
            switch (data[1]) {
            case 'u':
                switch (data[2]) {
                case 'b':
                    return kSubTag.LocalName();

                case 'p':
                    return kSupTag.LocalName();

                }
                break;

            }
            break;

        case 'v':
            if (data[1] == 'a' && data[2] == 'r')
                return kVarTag.LocalName();
            break;

        case 'w':
            if (data[1] == 'b' && data[2] == 'r')
                return kWbrTag.LocalName();
            break;

        case 'x':
            if (data[1] == 'm' && data[2] == 'p')
                return kXmpTag.LocalName();
            break;

        }
        break;

    case 4:
        switch (data[0]) {
        case 'a':
            switch (data[1]) {
            case 'b':
                if (data[2] == 'b' && data[3] == 'r')
                    return kAbbrTag.LocalName();
                break;

            case 'r':
                if (data[2] == 'e' && data[3] == 'a')
                    return kAreaTag.LocalName();
                break;

            }
            break;

        case 'b':
            switch (data[1]) {
            case 'a':
                if (data[2] == 's' && data[3] == 'e')
                    return kBaseTag.LocalName();
                break;

            case 'o':
                if (data[2] == 'd' && data[3] == 'y')
                    return kBodyTag.LocalName();
                break;

            }
            break;

        case 'c':
            switch (data[1]) {
            case 'i':
                if (data[2] == 't' && data[3] == 'e')
                    return kCiteTag.LocalName();
                break;

            case 'o':
                if (data[2] == 'd' && data[3] == 'e')
                    return kCodeTag.LocalName();
                break;

            }
            break;

        case 'd':
            if (data[1] == 'a' && data[2] == 't' && data[3] == 'a')
                return kDataTag.LocalName();
            break;

        case 'f':
            switch (data[1]) {
            case 'o':
                switch (data[2]) {
                case 'n':
                    if (data[3] == 't')
                        return kFontTag.LocalName();
                    break;

                case 'r':
                    if (data[3] == 'm')
                        return kFormTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'h':
            switch (data[1]) {
            case 'e':
                if (data[2] == 'a' && data[3] == 'd')
                    return kHeadTag.LocalName();
                break;

            case 't':
                if (data[2] == 'm' && data[3] == 'l')
                    return kHTMLTag.LocalName();
                break;

            }
            break;

        case 'l':
            if (data[1] == 'i' && data[2] == 'n' && data[3] == 'k')
                return kLinkTag.LocalName();
            break;

        case 'm':
            switch (data[1]) {
            case 'a':
                switch (data[2]) {
                case 'i':
                    if (data[3] == 'n')
                        return kMainTag.LocalName();
                    break;

                case 'r':
                    if (data[3] == 'k')
                        return kMarkTag.LocalName();
                    break;

                }
                break;

            case 'e':
                switch (data[2]) {
                case 'n':
                    if (data[3] == 'u')
                        return kMenuTag.LocalName();
                    break;

                case 't':
                    if (data[3] == 'a')
                        return kMetaTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'n':
            if (data[1] == 'o' && data[2] == 'b' && data[3] == 'r')
                return kNobrTag.LocalName();
            break;

        case 'r':
            if (data[1] == 'u' && data[2] == 'b' && data[3] == 'y')
                return kRubyTag.LocalName();
            break;

        case 's':
            switch (data[1]) {
            case 'a':
                if (data[2] == 'm' && data[3] == 'p')
                    return kSampTag.LocalName();
                break;

            case 'l':
                if (data[2] == 'o' && data[3] == 't')
                    return kSlotTag.LocalName();
                break;

            case 'p':
                if (data[2] == 'a' && data[3] == 'n')
                    return kSpanTag.LocalName();
                break;

            }
            break;

        case 't':
            if (data[1] == 'i' && data[2] == 'm' && data[3] == 'e')
                return kTimeTag.LocalName();
            break;

        }
        break;

    case 5:
        switch (data[0]) {
        case 'a':
            switch (data[1]) {
            case 's':
                if (data[2] == 'i' && data[3] == 'd' && data[4] == 'e')
                    return kAsideTag.LocalName();
                break;

            case 'u':
                if (data[2] == 'd' && data[3] == 'i' && data[4] == 'o')
                    return kAudioTag.LocalName();
                break;

            }
            break;

        case 'e':
            if (data[1] == 'm' && data[2] == 'b' && data[3] == 'e' && data[4] == 'd')
                return kEmbedTag.LocalName();
            break;

        case 'f':
            if (data[1] == 'r' && data[2] == 'a' && data[3] == 'm' && data[4] == 'e')
                return kFrameTag.LocalName();
            break;

        case 'i':
            switch (data[1]) {
            case 'm':
                if (data[2] == 'a' && data[3] == 'g' && data[4] == 'e')
                    return kImageTag.LocalName();
                break;

            case 'n':
                if (data[2] == 'p' && data[3] == 'u' && data[4] == 't')
                    return kInputTag.LocalName();
                break;

            }
            break;

        case 'l':
            switch (data[1]) {
            case 'a':
                switch (data[2]) {
                case 'b':
                    if (data[3] == 'e' && data[4] == 'l')
                        return kLabelTag.LocalName();
                    break;

                case 'y':
                    if (data[3] == 'e' && data[4] == 'r')
                        return kLayerTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'm':
            if (data[1] == 'e' && data[2] == 't' && data[3] == 'e' && data[4] == 'r')
                return kMeterTag.LocalName();
            break;

        case 'p':
            if (data[1] == 'a' && data[2] == 'r' && data[3] == 'a' && data[4] == 'm')
                return kParamTag.LocalName();
            break;

        case 's':
            switch (data[1]) {
            case 'm':
                if (data[2] == 'a' && data[3] == 'l' && data[4] == 'l')
                    return kSmallTag.LocalName();
                break;

            case 't':
                if (data[2] == 'y' && data[3] == 'l' && data[4] == 'e')
                    return kStyleTag.LocalName();
                break;

            }
            break;

        case 't':
            switch (data[1]) {
            case 'a':
                if (data[2] == 'b' && data[3] == 'l' && data[4] == 'e')
                    return kTableTag.LocalName();
                break;

            case 'b':
                if (data[2] == 'o' && data[3] == 'd' && data[4] == 'y')
                    return kTbodyTag.LocalName();
                break;

            case 'f':
                if (data[2] == 'o' && data[3] == 'o' && data[4] == 't')
                    return kTfootTag.LocalName();
                break;

            case 'h':
                if (data[2] == 'e' && data[3] == 'a' && data[4] == 'd')
                    return kTheadTag.LocalName();
                break;

            case 'i':
                if (data[2] == 't' && data[3] == 'l' && data[4] == 'e')
                    return kTitleTag.LocalName();
                break;

            case 'r':
                if (data[2] == 'a' && data[3] == 'c' && data[4] == 'k')
                    return kTrackTag.LocalName();
                break;

            }
            break;

        case 'v':
            if (data[1] == 'i' && data[2] == 'd' && data[3] == 'e' && data[4] == 'o')
                return kVideoTag.LocalName();
            break;

        }
        break;

    case 6:
        switch (data[0]) {
        case 'a':
            if (data[1] == 'p' && data[2] == 'p' && data[3] == 'l' && data[4] == 'e' && data[5] == 't')
                return kAppletTag.LocalName();
            break;

        case 'b':
            if (data[1] == 'u' && data[2] == 't' && data[3] == 't' && data[4] == 'o' && data[5] == 'n')
                return kButtonTag.LocalName();
            break;

        case 'c':
            switch (data[1]) {
            case 'a':
                if (data[2] == 'n' && data[3] == 'v' && data[4] == 'a' && data[5] == 's')
                    return kCanvasTag.LocalName();
                break;

            case 'e':
                if (data[2] == 'n' && data[3] == 't' && data[4] == 'e' && data[5] == 'r')
                    return kCenterTag.LocalName();
                break;

            }
            break;

        case 'd':
            if (data[1] == 'i' && data[2] == 'a' && data[3] == 'l' && data[4] == 'o' && data[5] == 'g')
                return kDialogTag.LocalName();
            break;

        case 'f':
            switch (data[1]) {
            case 'i':
                if (data[2] == 'g' && data[3] == 'u' && data[4] == 'r' && data[5] == 'e')
                    return kFigureTag.LocalName();
                break;

            case 'o':
                if (data[2] == 'o' && data[3] == 't' && data[4] == 'e' && data[5] == 'r')
                    return kFooterTag.LocalName();
                break;

            }
            break;

        case 'h':
            switch (data[1]) {
            case 'e':
                if (data[2] == 'a' && data[3] == 'd' && data[4] == 'e' && data[5] == 'r')
                    return kHeaderTag.LocalName();
                break;

            case 'g':
                if (data[2] == 'r' && data[3] == 'o' && data[4] == 'u' && data[5] == 'p')
                    return kHgroupTag.LocalName();
                break;

            }
            break;

        case 'i':
            if (data[1] == 'f' && data[2] == 'r' && data[3] == 'a' && data[4] == 'm' && data[5] == 'e')
                return kIFrameTag.LocalName();
            break;

        case 'k':
            if (data[1] == 'e' && data[2] == 'y' && data[3] == 'g' && data[4] == 'e' && data[5] == 'n')
                return kKeygenTag.LocalName();
            break;

        case 'l':
            if (data[1] == 'e' && data[2] == 'g' && data[3] == 'e' && data[4] == 'n' && data[5] == 'd')
                return kLegendTag.LocalName();
            break;

        case 'o':
            switch (data[1]) {
            case 'b':
                if (data[2] == 'j' && data[3] == 'e' && data[4] == 'c' && data[5] == 't')
                    return kObjectTag.LocalName();
                break;

            case 'p':
                if (data[2] == 't' && data[3] == 'i' && data[4] == 'o' && data[5] == 'n')
                    return kOptionTag.LocalName();
                break;

            case 'u':
                if (data[2] == 't' && data[3] == 'p' && data[4] == 'u' && data[5] == 't')
                    return kOutputTag.LocalName();
                break;

            }
            break;

        case 'p':
            if (data[1] == 'o' && data[2] == 'r' && data[3] == 't' && data[4] == 'a' && data[5] == 'l')
                return kPortalTag.LocalName();
            break;

        case 's':
            switch (data[1]) {
            case 'c':
                if (data[2] == 'r' && data[3] == 'i' && data[4] == 'p' && data[5] == 't')
                    return kScriptTag.LocalName();
                break;

            case 'e':
                if (data[2] == 'l' && data[3] == 'e' && data[4] == 'c' && data[5] == 't')
                    return kSelectTag.LocalName();
                break;

            case 'h':
                if (data[2] == 'a' && data[3] == 'd' && data[4] == 'o' && data[5] == 'w')
                    return kShadowTag.LocalName();
                break;

            case 'o':
                if (data[2] == 'u' && data[3] == 'r' && data[4] == 'c' && data[5] == 'e')
                    return kSourceTag.LocalName();
                break;

            case 't':
                switch (data[2]) {
                case 'r':
                    switch (data[3]) {
                    case 'i':
                        if (data[4] == 'k' && data[5] == 'e')
                            return kStrikeTag.LocalName();
                        break;

                    case 'o':
                        if (data[4] == 'n' && data[5] == 'g')
                            return kStrongTag.LocalName();
                        break;

                    }
                    break;

                }
                break;

            }
            break;

        }
        break;

    case 7:
        switch (data[0]) {
        case 'a':
            switch (data[1]) {
            case 'c':
                if (data[2] == 'r' && data[3] == 'o' && data[4] == 'n' && data[5] == 'y' && data[6] == 'm')
                    return kAcronymTag.LocalName();
                break;

            case 'd':
                if (data[2] == 'd' && data[3] == 'r' && data[4] == 'e' && data[5] == 's' && data[6] == 's')
                    return kAddressTag.LocalName();
                break;

            case 'r':
                if (data[2] == 't' && data[3] == 'i' && data[4] == 'c' && data[5] == 'l' && data[6] == 'e')
                    return kArticleTag.LocalName();
                break;

            }
            break;

        case 'b':
            if (data[1] == 'g' && data[2] == 's' && data[3] == 'o' && data[4] == 'u' && data[5] == 'n' && data[6] == 'd')
                return kBgsoundTag.LocalName();
            break;

        case 'c':
            switch (data[1]) {
            case 'a':
                if (data[2] == 'p' && data[3] == 't' && data[4] == 'i' && data[5] == 'o' && data[6] == 'n')
                    return kCaptionTag.LocalName();
                break;

            case 'o':
                switch (data[2]) {
                case 'm':
                    if (data[3] == 'm' && data[4] == 'a' && data[5] == 'n' && data[6] == 'd')
                        return kCommandTag.LocalName();
                    break;

                case 'n':
                    if (data[3] == 't' && data[4] == 'e' && data[5] == 'n' && data[6] == 't')
                        return kContentTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'd':
            if (data[1] == 'e' && data[2] == 't' && data[3] == 'a' && data[4] == 'i' && data[5] == 'l' && data[6] == 's')
                return kDetailsTag.LocalName();
            break;

        case 'l':
            if (data[1] == 'i' && data[2] == 's' && data[3] == 't' && data[4] == 'i' && data[5] == 'n' && data[6] == 'g')
                return kListingTag.LocalName();
            break;

        case 'm':
            if (data[1] == 'a' && data[2] == 'r' && data[3] == 'q' && data[4] == 'u' && data[5] == 'e' && data[6] == 'e')
                return kMarqueeTag.LocalName();
            break;

        case 'n':
            switch (data[1]) {
            case 'o':
                switch (data[2]) {
                case 'e':
                    if (data[3] == 'm' && data[4] == 'b' && data[5] == 'e' && data[6] == 'd')
                        return kNoembedTag.LocalName();
                    break;

                case 'l':
                    if (data[3] == 'a' && data[4] == 'y' && data[5] == 'e' && data[6] == 'r')
                        return kNolayerTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'p':
            if (data[1] == 'i' && data[2] == 'c' && data[3] == 't' && data[4] == 'u' && data[5] == 'r' && data[6] == 'e')
                return kPictureTag.LocalName();
            break;

        case 's':
            switch (data[1]) {
            case 'e':
                if (data[2] == 'c' && data[3] == 't' && data[4] == 'i' && data[5] == 'o' && data[6] == 'n')
                    return kSectionTag.LocalName();
                break;

            case 'u':
                if (data[2] == 'm' && data[3] == 'm' && data[4] == 'a' && data[5] == 'r' && data[6] == 'y')
                    return kSummaryTag.LocalName();
                break;

            }
            break;

        }
        break;

    case 8:
        switch (data[0]) {
        case 'b':
            if (data[1] == 'a' && data[2] == 's' && data[3] == 'e' && data[4] == 'f' && data[5] == 'o' && data[6] == 'n' && data[7] == 't')
                return kBasefontTag.LocalName();
            break;

        case 'c':
            if (data[1] == 'o' && data[2] == 'l' && data[3] == 'g' && data[4] == 'r' && data[5] == 'o' && data[6] == 'u' && data[7] == 'p')
                return kColgroupTag.LocalName();
            break;

        case 'd':
            if (data[1] == 'a' && data[2] == 't' && data[3] == 'a' && data[4] == 'l' && data[5] == 'i' && data[6] == 's' && data[7] == 't')
                return kDatalistTag.LocalName();
            break;

        case 'f':
            switch (data[1]) {
            case 'i':
                if (data[2] == 'e' && data[3] == 'l' && data[4] == 'd' && data[5] == 's' && data[6] == 'e' && data[7] == 't')
                    return kFieldsetTag.LocalName();
                break;

            case 'r':
                if (data[2] == 'a' && data[3] == 'm' && data[4] == 'e' && data[5] == 's' && data[6] == 'e' && data[7] == 't')
                    return kFramesetTag.LocalName();
                break;

            }
            break;

        case 'n':
            switch (data[1]) {
            case 'o':
                switch (data[2]) {
                case 'f':
                    if (data[3] == 'r' && data[4] == 'a' && data[5] == 'm' && data[6] == 'e' && data[7] == 's')
                        return kNoframesTag.LocalName();
                    break;

                case 's':
                    if (data[3] == 'c' && data[4] == 'r' && data[5] == 'i' && data[6] == 'p' && data[7] == 't')
                        return kNoscriptTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'o':
            if (data[1] == 'p' && data[2] == 't' && data[3] == 'g' && data[4] == 'r' && data[5] == 'o' && data[6] == 'u' && data[7] == 'p')
                return kOptgroupTag.LocalName();
            break;

        case 'p':
            if (data[1] == 'r' && data[2] == 'o' && data[3] == 'g' && data[4] == 'r' && data[5] == 'e' && data[6] == 's' && data[7] == 's')
                return kProgressTag.LocalName();
            break;

        case 't':
            switch (data[1]) {
            case 'e':
                switch (data[2]) {
                case 'm':
                    if (data[3] == 'p' && data[4] == 'l' && data[5] == 'a' && data[6] == 't' && data[7] == 'e')
                        return kTemplateTag.LocalName();
                    break;

                case 'x':
                    if (data[3] == 't' && data[4] == 'a' && data[5] == 'r' && data[6] == 'e' && data[7] == 'a')
                        return kTextareaTag.LocalName();
                    break;

                }
                break;

            }
            break;

        }
        break;

    case 9:
        switch (data[0]) {
        case 'p':
            if (data[1] == 'l' && data[2] == 'a' && data[3] == 'i' && data[4] == 'n' && data[5] == 't' && data[6] == 'e' && data[7] == 'x' && data[8] == 't')
                return kPlaintextTag.LocalName();
            break;

        }
        break;

    case 10:
        switch (data[0]) {
        case 'b':
            if (data[1] == 'l' && data[2] == 'o' && data[3] == 'c' && data[4] == 'k' && data[5] == 'q' && data[6] == 'u' && data[7] == 'o' && data[8] == 't' && data[9] == 'e')
                return kBlockquoteTag.LocalName();
            break;

        case 'f':
            if (data[1] == 'i' && data[2] == 'g' && data[3] == 'c' && data[4] == 'a' && data[5] == 'p' && data[6] == 't' && data[7] == 'i' && data[8] == 'o' && data[9] == 'n')
                return kFigcaptionTag.LocalName();
            break;

        }
        break;

    }

  return g_null_atom;
}

}  // namespace blink
