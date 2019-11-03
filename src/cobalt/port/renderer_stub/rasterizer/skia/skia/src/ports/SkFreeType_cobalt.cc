// Copyright 2017 The Cobalt Authors. All Rights Reserved.
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

#include "renderer_stub/rasterizer/skia/skia/src/ports/SkFreeType_cobalt.h"

///#include <ft2build.h>
///#include FT_FREETYPE_H
///#include FT_TRUETYPE_TABLES_H
///#include FT_TYPE1_TABLES_H

//#include <freetype2/freetype/ftheader.h>
#if defined(OS_EMSCRIPTEN) || defined(OS_WIN)
#include <ft2build.h>
//#include <freetype/freetype.h>
//// https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/third_party/freetype2/docs/reference/ft2-truetype_tables.html#L127
//#include <freetype/tttables.h>
//// https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/third_party/freetype2/docs/reference/ft2-header_file_macros.html#L359
//#include <freetype/t1tables.h>
#include FT_FREETYPE_H
#include FT_TRUETYPE_TABLES_H
#include FT_TYPE1_TABLES_H
#else
#include <freetype2/ft2build.h>
#include <freetype2/freetype/freetype.h>
// https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/third_party/freetype2/docs/reference/ft2-truetype_tables.html#L127
#include <freetype2/freetype/tttables.h>
// https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/third_party/freetype2/docs/reference/ft2-header_file_macros.html#L359
#include <freetype2/freetype/t1tables.h>
#endif

#include "SkFontStyle.h"
#include "SkTSearch.h"
#include "base/logging.h"
#include "base/trace_event/trace_event.h"

namespace {

// This logic is taken from SkTypeface_FreeType::ScanFont() and should be kept
// in sync with it.
//SkTypeface::Style
SkFontStyle
GenerateSkTypefaceStyleFromFace(FT_Face face) {
  int weight = SkFontStyle::kNormal_Weight;
  if (face->style_flags & FT_STYLE_FLAG_BOLD) {
    weight = SkFontStyle::kBold_Weight;
  }

  PS_FontInfoRec psFontInfo;
  TT_OS2* os2 = static_cast<TT_OS2*>(FT_Get_Sfnt_Table(face, ft_sfnt_os2));
  if (os2 && os2->version != 0xffff) {
    weight = os2->usWeightClass;
  } else if (0 == FT_Get_PS_Font_Info(face, &psFontInfo) && psFontInfo.weight) {
    static const struct {
      char const* const name;
      int const weight;
    } commonWeights[] = {
        // There are probably more common names, but these are known to exist.
        {"all", SkFontStyle::kNormal_Weight},  // Multiple Masters usually
                                               // default to normal.
        {"black", SkFontStyle::kBlack_Weight},
        {"bold", SkFontStyle::kBold_Weight},
        {"book",
         (SkFontStyle::kNormal_Weight + SkFontStyle::kLight_Weight) / 2},
        {"demi", SkFontStyle::kSemiBold_Weight},
        {"demibold", SkFontStyle::kSemiBold_Weight},
        {"extra", SkFontStyle::kExtraBold_Weight},
        {"extrabold", SkFontStyle::kExtraBold_Weight},
        {"extralight", SkFontStyle::kExtraLight_Weight},
        {"hairline", SkFontStyle::kThin_Weight},
        {"heavy", SkFontStyle::kBlack_Weight},
        {"light", SkFontStyle::kLight_Weight},
        {"medium", SkFontStyle::kMedium_Weight},
        {"normal", SkFontStyle::kNormal_Weight},
        {"plain", SkFontStyle::kNormal_Weight},
        {"regular", SkFontStyle::kNormal_Weight},
        {"roman", SkFontStyle::kNormal_Weight},
        {"semibold", SkFontStyle::kSemiBold_Weight},
        {"standard", SkFontStyle::kNormal_Weight},
        {"thin", SkFontStyle::kThin_Weight},
        {"ultra", SkFontStyle::kExtraBold_Weight},
        {"ultrabold", SkFontStyle::kExtraBold_Weight},
        {"ultralight", SkFontStyle::kExtraLight_Weight},
    };
    int const index =
        SkStrLCSearch(&commonWeights[0].name, SK_ARRAY_COUNT(commonWeights),
                      psFontInfo.weight, sizeof(commonWeights[0]));
    if (index >= 0) {
      weight = commonWeights[index].weight;
    } else {
      DLOG(ERROR) << "Do not recognize weight for:" << face->family_name << "("
                  << psFontInfo.weight << ")";
    }
  }

  ///int face_style = SkTypeface::kNormal;
  ///SkFontStyle face_style = SkFontStyle(weight, wid); /// __TODO__
  SkFontStyle face_style = SkFontStyle::Normal(); /// __TODO__
  if (weight > 500) {
    ///face_style |= SkTypeface::kBold;
    face_style = SkFontStyle::Bold();
  }
  if (face->style_flags & FT_STYLE_FLAG_ITALIC) {
    ///face_style |= SkTypeface::kItalic;
    face_style = SkFontStyle::Italic();
  }
  return static_cast<SkFontStyle>(face_style);
  ///return static_cast<SkTypeface::Style>(face_style);
}

void GenerateCharacterMapFromFace(
    FT_Face face, font_character_map::CharacterMap* character_map) {
  TRACE_EVENT0("cobalt::renderer", "GenerateCharacterMapFromFace");

  FT_UInt glyph_index;

  int last_page = -1;
  font_character_map::PageCharacters* page_characters = NULL;

  SkUnichar code_point = FT_Get_First_Char(face, &glyph_index);
  while (glyph_index) {
    int page = font_character_map::GetPage(code_point);
    if (page != last_page) {
      page_characters = &(*character_map)[page];
      last_page = page;
    }
    page_characters->set(font_character_map::GetPageCharacterIndex(code_point));

    code_point = FT_Get_Next_Char(face, code_point, &glyph_index);
  }
}

}  // namespace

// These functions are used by FreeType during FT_Open_Face.
extern "C" {

static unsigned long sk_freetype_cobalt_stream_io(FT_Stream ftStream,
                                                  unsigned long offset,
                                                  unsigned char* buffer,
                                                  unsigned long count) {
  SkStreamAsset* stream =
      static_cast<SkStreamAsset*>(ftStream->descriptor.pointer);
  stream->seek(offset);
  return stream->read(buffer, count);
}

static void sk_freetype_cobalt_stream_close(FT_Stream) {}
}

namespace sk_freetype_cobalt {

bool ScanFont(SkStreamAsset* stream, int face_index, SkString* name,
              //SkTypeface::Style* style,
              SkFontStyle* style,
              bool* is_fixed_pitch,
              font_character_map::CharacterMap* maybe_character_map /*=NULL*/) {
  TRACE_EVENT0("cobalt::renderer", "SkFreeTypeUtil::ScanFont()");

  FT_Library freetype_lib;
  if (FT_Init_FreeType(&freetype_lib) != 0) {
    return false;
  }

  FT_StreamRec streamRec;
  memset(&streamRec, 0, sizeof(streamRec));
  streamRec.size = stream->getLength();
  streamRec.descriptor.pointer = stream;
  streamRec.read = sk_freetype_cobalt_stream_io;
  streamRec.close = sk_freetype_cobalt_stream_close;

  FT_Open_Args args;
  memset(&args, 0, sizeof(args));
  args.flags = FT_OPEN_STREAM;
  args.stream = &streamRec;

  FT_Face face;
  FT_Error err = FT_Open_Face(freetype_lib, &args, face_index, &face);
  if (err) {
    FT_Done_FreeType(freetype_lib);
    return false;
  }

  name->set(face->family_name);
  *style = GenerateSkTypefaceStyleFromFace(face);
  *is_fixed_pitch = FT_IS_FIXED_WIDTH(face);

  if (maybe_character_map) {
    GenerateCharacterMapFromFace(face, maybe_character_map);
  }

  // release this font.
  FT_Done_Face(face);

  // shut down FreeType.
  FT_Done_FreeType(freetype_lib);
  return true;
}

}  // namespace sk_freetype_cobalt
