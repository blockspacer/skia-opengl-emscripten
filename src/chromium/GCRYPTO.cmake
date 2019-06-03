
#### --- GCRYPTO ---###

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
set(GCRYPTO_SOURCES
  ${GCRYPTO_DIR}aead.cc
  #${GCRYPTO_DIR}aead.h",
  #${GCRYPTO_DIR}apple_keychain.h",
  #${GCRYPTO_DIR}apple_keychain_ios.mm",
  #${GCRYPTO_DIR}apple_keychain_mac.mm",
  # ${GCRYPTO_DIR}capi_util.cc # is_win
  #${GCRYPTO_DIR}capi_util.h", # is_win
  #${GCRYPTO_DIR}crypto_export.h",
  ${GCRYPTO_DIR}ec_private_key.cc
  #${GCRYPTO_DIR}ec_private_key.h",
  ${GCRYPTO_DIR}ec_signature_creator.cc
  #${GCRYPTO_DIR}ec_signature_creator.h",
  ${GCRYPTO_DIR}ec_signature_creator_impl.cc
  #${GCRYPTO_DIR}ec_signature_creator_impl.h",
  ${GCRYPTO_DIR}encryptor.cc
  #${GCRYPTO_DIR}encryptor.h",
  ${GCRYPTO_DIR}hkdf.cc
  #${GCRYPTO_DIR}hkdf.h",
  ${GCRYPTO_DIR}hmac.cc
  #${GCRYPTO_DIR}hmac.h",
  # ${GCRYPTO_DIR}mac_security_services_lock.cc # is_mac
  #${GCRYPTO_DIR}mac_security_services_lock.h",
  #
  #TODO(brettw) these mocks should be moved to a test_support_crypto target
  #if possible.
  #${GCRYPTO_DIR}mock_apple_keychain.cc
  ##${GCRYPTO_DIR}mock_apple_keychain.h",
  #${GCRYPTO_DIR}mock_apple_keychain_ios.cc
  #${GCRYPTO_DIR}mock_apple_keychain_mac.cc
  #${GCRYPTO_DIR}nss_crypto_module_delegate.h",
  # ${GCRYPTO_DIR}nss_key_util.cc # use_nss_certs
  #${GCRYPTO_DIR}nss_key_util.h",
  #${GCRYPTO_DIR}nss_util.cc # use_nss_certs
  #${GCRYPTO_DIR}nss_util.h",
  #${GCRYPTO_DIR}nss_util_internal.h",
  ${GCRYPTO_DIR}openssl_util.cc
  #${GCRYPTO_DIR}openssl_util.h",
  ${GCRYPTO_DIR}p224.cc
  #${GCRYPTO_DIR}p224.h",
  ${GCRYPTO_DIR}p224_spake.cc
  #${GCRYPTO_DIR}p224_spake.h",
  ${GCRYPTO_DIR}random.cc
  #${GCRYPTO_DIR}random.h",
  ${GCRYPTO_DIR}rsa_private_key.cc
  #${GCRYPTO_DIR}rsa_private_key.h",
  #${GCRYPTO_DIR}scoped_capi_types.h",
  #${GCRYPTO_DIR}scoped_nss_types.h",
  ${GCRYPTO_DIR}secure_hash.cc
  #${GCRYPTO_DIR}secure_hash.h",
  ${GCRYPTO_DIR}secure_util.cc
  #${GCRYPTO_DIR}secure_util.h",
  ${GCRYPTO_DIR}sha2.cc
  #${GCRYPTO_DIR}sha2.h",
  ${GCRYPTO_DIR}signature_creator.cc
  #${GCRYPTO_DIR}signature_creator.h",
  ${GCRYPTO_DIR}signature_verifier.cc
  #${GCRYPTO_DIR}signature_verifier.h",
  ${GCRYPTO_DIR}symmetric_key.cc
  #${GCRYPTO_DIR}symmetric_key.h",
)

add_library(GCRYPTO STATIC
  ${GCRYPTO_SOURCES}
)

target_link_libraries(GCRYPTO PUBLIC
  ${BORINGSSL_LIBS}
  dynamic_annotations
  #${BASE_LIBRARIES}
  base
  GLIBJPEG_TURBO
)

set_property(TARGET GCRYPTO PROPERTY CXX_STANDARD 17)

target_include_directories(GCRYPTO PRIVATE
  ${GCRYPTO_DIR}
  ${GCRYPTO_PARENT_DIR}
)

target_include_directories(GCRYPTO PUBLIC
  ${GCRYPTO_DIR}
)

target_compile_definitions(GCRYPTO PRIVATE
  CRYPTO_IMPLEMENTATION=1
  #USE_SYSTEM_LIBJPEG=1
  USE_LIBJPEG_TURBO=1
)
