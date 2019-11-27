include_guard( DIRECTORY )

list(APPEND compact_enc_det_SOURCES
  ${compact_enc_det_DIR}compact_enc_det/compact_enc_det.cc
  ${compact_enc_det_DIR}compact_enc_det/compact_enc_det_hint_code.cc
  ${compact_enc_det_DIR}util/encodings/encodings.cc
  ${compact_enc_det_DIR}util/languages/languages.cc
)
