## --- GNET ---###

# TODO https://github.com/Tarnyko/chromium-lite/blob/master/03a-net/CMakeLists.txt

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
set(GNET_SOURCES
  ${GNET_DIR}base/address_family.cc
  #${GNET_DIR}base/address_family.h
  ${GNET_DIR}base/address_list.cc
  #${GNET_DIR}base/address_list.h
  ${GNET_DIR}base/auth.cc
  #${GNET_DIR}base/auth.h
  #${GNET_DIR}base/completion_once_callback.h
  #${GNET_DIR}base/completion_repeating_callback.h
  ${GNET_DIR}base/datagram_buffer.cc
  #${GNET_DIR}base/datagram_buffer.h
  ${GNET_DIR}base/escape.cc
  #${GNET_DIR}base/escape.h
  ${GNET_DIR}base/features.cc
  #${GNET_DIR}base/features.h
  ${GNET_DIR}base/hash_value.cc
  #${GNET_DIR}base/hash_value.h
  ${GNET_DIR}base/host_port_pair.cc
  #${GNET_DIR}base/host_port_pair.h
  #${GNET_DIR}base/interval.h
  #${GNET_DIR}base/interval_set.h
  ${GNET_DIR}base/io_buffer.cc
  #${GNET_DIR}base/io_buffer.h
  ${GNET_DIR}base/ip_address.cc
  #${GNET_DIR}base/ip_address.h
  ${GNET_DIR}base/ip_endpoint.cc
  #${GNET_DIR}base/ip_endpoint.h
  ${GNET_DIR}base/load_timing_info.cc
  #${GNET_DIR}base/load_timing_info.h
  ${GNET_DIR}base/lookup_string_in_fixed_set.cc
  #${GNET_DIR}base/lookup_string_in_fixed_set.h
  #${GNET_DIR}base/net_error_details.h
  #${GNET_DIR}base/net_error_list.h
  ${GNET_DIR}base/net_errors.cc
  #${GNET_DIR}base/net_errors.h
  ${GNET_DIR}base/net_module.cc
  #${GNET_DIR}base/net_module.h
  #${GNET_DIR}base/net_string_util.h
  ${GNET_DIR}base/network_interfaces.cc
  #${GNET_DIR}base/network_interfaces.h
  ${GNET_DIR}base/parse_number.cc
  #${GNET_DIR}base/parse_number.h
  ${GNET_DIR}base/port_util.cc
  #${GNET_DIR}base/port_util.h
  #${GNET_DIR}base/privacy_mode.h
  #${GNET_DIR}base/rand_callback.h
  # TODO # requires gen/net/base/registry_controlled_domains/effective_tld_names-inc.cc
  ${GNET_DIR}base/registry_controlled_domains/registry_controlled_domain.cc
  #${GNET_DIR}base/registry_controlled_domains/registry_controlled_domain.h
  ${GNET_DIR}base/sockaddr_storage.cc
  #${GNET_DIR}base/sockaddr_storage.h
  #${GNET_DIR}base/sys_addrinfo.h
  ${GNET_DIR}base/url_util.cc
  #${GNET_DIR}base/url_util.h
  ${GNET_DIR}cert/asn1_util.cc
  #${GNET_DIR}cert/asn1_util.h
  ${GNET_DIR}cert/cert_database.cc
  #${GNET_DIR}cert/cert_database.h
  ${GNET_DIR}cert/cert_status_flags.cc
  #${GNET_DIR}cert/cert_status_flags.h
  #${GNET_DIR}cert/cert_status_flags_list.h
  ${GNET_DIR}cert/cert_verifier.cc
  #${GNET_DIR}cert/cert_verifier.h
  ${GNET_DIR}cert/cert_verify_result.cc
  #${GNET_DIR}cert/cert_verify_result.h
  #${GNET_DIR}cert/client_cert_verifier.h
  ${GNET_DIR}cert/crl_set.cc
  #${GNET_DIR}cert/crl_set.h
  ${GNET_DIR}cert/ct_policy_enforcer.cc
  #${GNET_DIR}cert/ct_policy_enforcer.h
  #${GNET_DIR}cert/ct_policy_status.h
  #${GNET_DIR}cert/ct_verifier.h
  ${GNET_DIR}cert/ct_verify_result.cc
  #${GNET_DIR}cert/ct_verify_result.h
  ${GNET_DIR}cert/do_nothing_ct_verifier.cc
  #${GNET_DIR}cert/do_nothing_ct_verifier.h
  ${GNET_DIR}cert/internal/cert_error_id.cc
  #${GNET_DIR}cert/internal/cert_error_id.h
  ${GNET_DIR}cert/internal/cert_error_params.cc
  #${GNET_DIR}cert/internal/cert_error_params.h
  ${GNET_DIR}cert/internal/cert_errors.cc
  #${GNET_DIR}cert/internal/cert_errors.h
  #${GNET_DIR}cert/internal/cert_issuer_source.h
  ${GNET_DIR}cert/internal/cert_issuer_source_aia.cc
  #${GNET_DIR}cert/internal/cert_issuer_source_aia.h
  ${GNET_DIR}cert/internal/cert_issuer_source_static.cc
  #${GNET_DIR}cert/internal/cert_issuer_source_static.h
  ${GNET_DIR}cert/internal/certificate_policies.cc
  #${GNET_DIR}cert/internal/certificate_policies.h
  ${GNET_DIR}cert/internal/common_cert_errors.cc
  #${GNET_DIR}cert/internal/common_cert_errors.h
  ${GNET_DIR}cert/internal/extended_key_usage.cc
  #${GNET_DIR}cert/internal/extended_key_usage.h
  ${GNET_DIR}cert/internal/general_names.cc
  #${GNET_DIR}cert/internal/general_names.h
  ${GNET_DIR}cert/internal/name_constraints.cc
  #${GNET_DIR}cert/internal/name_constraints.h
  ${GNET_DIR}cert/internal/ocsp.cc
  #${GNET_DIR}cert/internal/ocsp.h
  ${GNET_DIR}cert/internal/parse_certificate.cc
  #${GNET_DIR}cert/internal/parse_certificate.h
  ${GNET_DIR}cert/internal/parse_name.cc
  #${GNET_DIR}cert/internal/parse_name.h
  ${GNET_DIR}cert/internal/parsed_certificate.cc
  #${GNET_DIR}cert/internal/parsed_certificate.h
  ${GNET_DIR}cert/internal/path_builder.cc
  #${GNET_DIR}cert/internal/path_builder.h
  ${GNET_DIR}cert/internal/revocation_checker.cc
  #${GNET_DIR}cert/internal/revocation_checker.h
  ${GNET_DIR}cert/internal/signature_algorithm.cc
  #${GNET_DIR}cert/internal/signature_algorithm.h
  ${GNET_DIR}cert/internal/simple_path_builder_delegate.cc
  #${GNET_DIR}cert/internal/simple_path_builder_delegate.h
  ${GNET_DIR}cert/internal/trust_store.cc
  #${GNET_DIR}cert/internal/trust_store.h
  ${GNET_DIR}cert/internal/trust_store_collection.cc
  #${GNET_DIR}cert/internal/trust_store_collection.h
  ${GNET_DIR}cert/internal/trust_store_in_memory.cc
  #${GNET_DIR}cert/internal/trust_store_in_memory.h
  ${GNET_DIR}cert/internal/verify_certificate_chain.cc
  #${GNET_DIR}cert/internal/verify_certificate_chain.h
  ${GNET_DIR}cert/internal/verify_name_match.cc
  #${GNET_DIR}cert/internal/verify_name_match.h
  ${GNET_DIR}cert/internal/verify_signed_data.cc
  #${GNET_DIR}cert/internal/verify_signed_data.h
  #${GNET_DIR}cert/ocsp_revocation_status.h
  ${GNET_DIR}cert/ocsp_verify_result.cc
  #${GNET_DIR}cert/ocsp_verify_result.h
  ${GNET_DIR}cert/pem_tokenizer.cc
  #${GNET_DIR}cert/pem_tokenizer.h
  ${GNET_DIR}cert/sct_status_flags.cc
  #${GNET_DIR}cert/sct_status_flags.h
  ${GNET_DIR}cert/signed_certificate_timestamp.cc
  #${GNET_DIR}cert/signed_certificate_timestamp.h
  ${GNET_DIR}cert/signed_certificate_timestamp_and_status.cc
  #${GNET_DIR}cert/signed_certificate_timestamp_and_status.h
  ${GNET_DIR}cert/signed_tree_head.cc
  #${GNET_DIR}cert/signed_tree_head.h
  ${GNET_DIR}cert/symantec_certs.cc
  #${GNET_DIR}cert/symantec_certs.h
  ${GNET_DIR}cert/x509_cert_types.cc
  #${GNET_DIR}cert/x509_cert_types.h
  ${GNET_DIR}cert/x509_certificate.cc
  #${GNET_DIR}cert/x509_certificate.h
  ${GNET_DIR}cert/x509_certificate_net_log_param.cc
  #${GNET_DIR}cert/x509_certificate_net_log_param.h
  ${GNET_DIR}cert/x509_util.cc
  #${GNET_DIR}cert/x509_util.h
  ${GNET_DIR}der/encode_values.cc
  #${GNET_DIR}der/encode_values.h
  ${GNET_DIR}der/input.cc
  #${GNET_DIR}der/input.h
  ${GNET_DIR}der/parse_values.cc
  #${GNET_DIR}der/parse_values.h
  ${GNET_DIR}der/parser.cc
  #${GNET_DIR}der/parser.h
  ${GNET_DIR}der/tag.cc
  #${GNET_DIR}der/tag.h
  # TODO #
  # ${GNET_DIR}http/http_auth_challenge_tokenizer.cc
  # #${GNET_DIR}http/http_auth_challenge_tokenizer.h
  # ${GNET_DIR}http/http_auth_scheme.cc
  # #${GNET_DIR}http/http_auth_scheme.h
  ${GNET_DIR}http/http_byte_range.cc
  # #${GNET_DIR}http/http_byte_range.h
  # ${GNET_DIR}http/http_log_util.cc
  # #${GNET_DIR}http/http_log_util.h
  # ${GNET_DIR}http/http_raw_request_headers.cc
  # #${GNET_DIR}http/http_raw_request_headers.h
  # ${GNET_DIR}http/http_request_headers.cc
  # #${GNET_DIR}http/http_request_headers.h
  # ${GNET_DIR}http/http_response_headers.cc
  # #${GNET_DIR}http/http_response_headers.h
  # ${GNET_DIR}http/http_response_info.cc
  # #${GNET_DIR}http/http_response_info.h
  # ${GNET_DIR}http/http_security_headers.cc
  # #${GNET_DIR}http/http_security_headers.h
  # #${GNET_DIR}http/http_status_code_list.h
  ${GNET_DIR}http/http_util.cc
  # #${GNET_DIR}http/http_util.h
  # ${GNET_DIR}http/http_vary_data.cc
  # #${GNET_DIR}http/http_vary_data.h
  # #${GNET_DIR}http/transport_security_state.h
  # ${GNET_DIR}http/transport_security_state_source.cc
  # #${GNET_DIR}http/transport_security_state_source.h
  ${GNET_DIR}log/net_log.cc
  #${GNET_DIR}log/net_log.h
  ${GNET_DIR}log/net_log_capture_mode.cc
  #${GNET_DIR}log/net_log_capture_mode.h
  ${GNET_DIR}log/net_log_entry.cc
  #${GNET_DIR}log/net_log_entry.h
  #${GNET_DIR}log/net_log_event_type.h
  #${GNET_DIR}log/net_log_event_type_list.h
  #${GNET_DIR}log/net_log_parameters_callback.h
  ${GNET_DIR}log/net_log_source.cc
  #${GNET_DIR}log/net_log_source.h
  #${GNET_DIR}log/net_log_source_type.h
  #${GNET_DIR}log/net_log_source_type_list.h
  ${GNET_DIR}log/net_log_with_source.cc
  #${GNET_DIR}log/net_log_with_source.h
  # # TODO #
  # ${GNET_DIR}socket/client_socket_handle.cc
  # #${GNET_DIR}socket/client_socket_handle.h
  # ${GNET_DIR}socket/connect_job.cc
  # #${GNET_DIR}socket/connect_job.h
  # #${GNET_DIR}socket/connection_attempts.h
  # ${GNET_DIR}socket/next_proto.cc
  # #${GNET_DIR}socket/next_proto.h
  # ${GNET_DIR}socket/socket.cc
  # #${GNET_DIR}socket/socket.h
  # ${GNET_DIR}socket/socket_bio_adapter.cc
  # #${GNET_DIR}socket/socket_bio_adapter.h
  # #${GNET_DIR}socket/socket_performance_watcher.h
  # #${GNET_DIR}socket/socket_performance_watcher_factory.h
  # ${GNET_DIR}socket/ssl_client_socket.cc
  # #${GNET_DIR}socket/ssl_client_socket.h
  # ${GNET_DIR}socket/ssl_client_socket_impl.cc
  # #${GNET_DIR}socket/ssl_client_socket_impl.h
  # #${GNET_DIR}socket/ssl_socket.h
  # ${GNET_DIR}socket/stream_socket.cc
  # #${GNET_DIR}socket/stream_socket.h
  #
  ${GNET_DIR}ssl/client_cert_identity.cc
  #${GNET_DIR}ssl/client_cert_identity.h
  # TODO # ${GNET_DIR}ssl/client_cert_identity_mac.cc
  #${GNET_DIR}ssl/client_cert_identity_mac.h
  ${GNET_DIR}ssl/openssl_ssl_util.cc
  #${GNET_DIR}ssl/openssl_ssl_util.h
  ${GNET_DIR}ssl/ssl_cert_request_info.cc
  #${GNET_DIR}ssl/ssl_cert_request_info.h
  ${GNET_DIR}ssl/ssl_cipher_suite_names.cc
  #${GNET_DIR}ssl/ssl_cipher_suite_names.h
  ${GNET_DIR}ssl/ssl_client_auth_cache.cc
  #${GNET_DIR}ssl/ssl_client_auth_cache.h
  #${GNET_DIR}ssl/ssl_client_cert_type.h
  ${GNET_DIR}ssl/ssl_client_session_cache.cc
  #${GNET_DIR}ssl/ssl_client_session_cache.h
  ${GNET_DIR}ssl/ssl_config.cc
  #${GNET_DIR}ssl/ssl_config.h
  ${GNET_DIR}ssl/ssl_config_service.cc
  #${GNET_DIR}ssl/ssl_config_service.h
  #${GNET_DIR}ssl/ssl_connection_status_flags.h
  ${GNET_DIR}ssl/ssl_info.cc
  #${GNET_DIR}ssl/ssl_info.h
  #${GNET_DIR}ssl/ssl_key_logger.h
  ${GNET_DIR}ssl/ssl_private_key.cc
  #${GNET_DIR}ssl/ssl_private_key.h
  ${GNET_DIR}ssl/ssl_server_config.cc
  #${GNET_DIR}ssl/ssl_server_config.h
  ${GNET_DIR}third_party/quiche/src/quic/core/quic_error_codes.cc
  #${GNET_DIR}third_party/quiche/src/quic/core/quic_error_codes.h
  ${GNET_DIR}third_party/uri_template/uri_template.cc
  #${GNET_DIR}third_party/uri_template/uri_template.h
  #
  ${GNET_DIR}base/net_errors_posix.cc # is_posix || is_fuchsia
  #
  # !is_nacl
  #
  # "android/android_http_util.cc
  # "android/cellular_signal_strength.cc
  # "android/cellular_signal_strength.h
  # "android/cert_verify_result_android.cc
  # "android/cert_verify_result_android.h
  # "android/gurl_utils.cc
  # "android/http_auth_negotiate_android.cc
  # "android/http_auth_negotiate_android.h
  # "android/keystore.cc
  # "android/keystore.h
  # "android/network_change_notifier_android.cc
  # "android/network_change_notifier_android.h
  # "android/network_change_notifier_delegate_android.cc
  # "android/network_change_notifier_delegate_android.h
  # "android/network_change_notifier_factory_android.cc
  # "android/network_change_notifier_factory_android.h
  # "android/network_library.cc
  # "android/network_library.h
  # "android/traffic_stats.cc
  # "android/traffic_stats.h
  # "base/address_tracker_linux.cc
  # "base/address_tracker_linux.h
  # "base/backoff_entry.cc
  # "base/backoff_entry.h
  # "base/backoff_entry_serializer.cc
  # "base/backoff_entry_serializer.h
  # "base/cache_type.h
  # "base/chunked_upload_data_stream.cc
  # "base/chunked_upload_data_stream.h
  # "base/data_url.cc
  # "base/data_url.h
  # "base/elements_upload_data_stream.cc
  # "base/elements_upload_data_stream.h
  # "base/expiring_cache.h
  # "base/file_stream.cc
  # "base/file_stream.h
  # "base/file_stream_context.cc
  # "base/file_stream_context.h
  # "base/file_stream_context_win.cc
  # "base/filename_util.cc
  # "base/filename_util.h
  # "base/filename_util_internal.cc
  # "base/filename_util_internal.h
  # "base/hex_utils.cc
  # "base/hex_utils.h
  # "base/host_mapping_rules.cc
  # "base/host_mapping_rules.h
  # "base/http_user_agent_settings.h
  # "base/ip_pattern.cc
  # "base/ip_pattern.h
  # "base/layered_network_delegate.cc
  # "base/layered_network_delegate.h
  # "base/load_flags.h
  # "base/load_flags_list.h
  # "base/load_states.h
  # "base/load_states_list.h
  # "base/logging_network_change_observer.cc
  # "base/logging_network_change_observer.h
  #${GNET_DIR}base/mime_sniffer.cc
  #${GNET_DIR}base/mime_sniffer.h
  ${GNET_DIR}base/mime_util.cc
  #${GNET_DIR}base/mime_util.h
  # "base/net_errors_win.cc
  # "base/net_info_source_list.h
  # "base/network_activity_monitor.cc
  # "base/network_activity_monitor.h
  # "base/network_change_notifier.cc
  # "base/network_change_notifier.h
  # "base/network_change_notifier_factory.h
  # "base/network_change_notifier_linux.cc
  # "base/network_change_notifier_linux.h
  # "base/network_change_notifier_mac.cc
  # "base/network_change_notifier_mac.h
  # "base/network_change_notifier_win.cc
  # "base/network_change_notifier_win.h
  # "base/network_config_watcher_mac.cc
  # "base/network_config_watcher_mac.h
  # "base/network_delegate.cc
  # "base/network_delegate.h
  # "base/network_delegate_impl.cc
  # "base/network_delegate_impl.h
  # "base/network_interfaces_linux.cc
  # "base/network_interfaces_linux.h
  # "base/network_interfaces_nacl.cc
  # "base/network_interfaces_win.cc
  # "base/network_interfaces_win.h
  # "base/platform_mime_util.h
  ${GNET_DIR}base/platform_mime_util_linux.cc
  # "base/platform_mime_util_mac.mm",
  # "base/platform_mime_util_win.cc
  # "base/prioritized_dispatcher.cc
  # "base/prioritized_dispatcher.h
  # "base/prioritized_task_runner.cc
  # "base/prioritized_task_runner.h
  # "base/priority_queue.h
  # "base/proxy_delegate.h
  # "base/proxy_server.cc
  # "base/proxy_server.h
  # "base/proxy_server_mac.cc
  ${GNET_DIR}base/request_priority.cc
  # "base/request_priority.h
  # "base/static_cookie_policy.cc
  # "base/static_cookie_policy.h
  # "base/test_data_stream.cc
  # "base/test_data_stream.h
  # "base/upload_bytes_element_reader.cc
  # "base/upload_bytes_element_reader.h
  # "base/upload_data_stream.cc
  # "base/upload_data_stream.h
  # "base/upload_element_reader.cc
  # "base/upload_element_reader.h
  # "base/upload_file_element_reader.cc
  # "base/upload_file_element_reader.h
  # "base/upload_progress.h
  # "base/winsock_init.cc
  # "base/winsock_init.h
  # "base/winsock_util.cc
  # "base/winsock_util.h
  # "cert/caching_cert_verifier.cc
  # "cert/caching_cert_verifier.h
  # "cert/cert_database_mac.cc
  # "cert/cert_net_fetcher.h
  # "cert/cert_verify_proc.cc
  # "cert/cert_verify_proc.h
  # "cert/cert_verify_proc_android.cc
  # "cert/cert_verify_proc_android.h
  # "cert/cert_verify_proc_builtin.cc
  # "cert/cert_verify_proc_builtin.h
  # "cert/cert_verify_proc_ios.cc
  # "cert/cert_verify_proc_ios.h
  # "cert/cert_verify_proc_mac.cc
  # "cert/cert_verify_proc_mac.h
  # "cert/cert_verify_proc_nss.cc
  # "cert/cert_verify_proc_nss.h
  # "cert/cert_verify_proc_win.cc
  # "cert/cert_verify_proc_win.h
  # "cert/ct_log_response_parser.cc
  # "cert/ct_log_response_parser.h
  # "cert/ct_log_verifier.cc
  # "cert/ct_log_verifier.h
  # "cert/ct_log_verifier_util.cc
  # "cert/ct_log_verifier_util.h
  # "cert/ct_objects_extractor.cc
  # "cert/ct_objects_extractor.h
  # "cert/ct_sct_to_string.cc
  # "cert/ct_sct_to_string.h
  # "cert/ct_serialization.cc
  # "cert/ct_serialization.h
  # "cert/ct_signed_certificate_timestamp_log_param.cc
  # "cert/ct_signed_certificate_timestamp_log_param.h
  # "cert/ev_root_ca_metadata.cc
  # "cert/ev_root_ca_metadata.h
  # "cert/internal/system_trust_store.cc
  # "cert/internal/system_trust_store.h
  # "cert/internal/trust_store_mac.cc
  # "cert/internal/trust_store_mac.h
  # "cert/internal/trust_store_nss.cc
  # "cert/internal/trust_store_nss.h
  # "cert/jwk_serializer.cc
  # "cert/jwk_serializer.h
  # "cert/known_roots.cc
  # "cert/known_roots.h
  # "cert/known_roots_mac.cc
  # "cert/known_roots_mac.h
  # "cert/known_roots_nss.cc
  # "cert/known_roots_nss.h
  # "cert/known_roots_win.cc
  # "cert/known_roots_win.h
  # "cert/merkle_audit_proof.cc
  # "cert/merkle_audit_proof.h
  # "cert/merkle_consistency_proof.cc
  # "cert/merkle_consistency_proof.h
  # "cert/merkle_tree_leaf.cc
  # "cert/merkle_tree_leaf.h
  # "cert/multi_log_ct_verifier.cc
  # "cert/multi_log_ct_verifier.h
  # "cert/multi_threaded_cert_verifier.cc
  # "cert/multi_threaded_cert_verifier.h
  # "cert/nss_cert_database.cc
  # "cert/nss_cert_database.h
  # "cert/nss_cert_database_chromeos.cc
  # "cert/nss_cert_database_chromeos.h
  # "cert/nss_profile_filter_chromeos.cc
  # "cert/nss_profile_filter_chromeos.h
  # "cert/root_cert_list_generated.h
  # "cert/test_keychain_search_list_mac.cc
  # "cert/test_keychain_search_list_mac.h
  # "cert/test_root_certs.cc
  # "cert/test_root_certs.h
  # "cert/test_root_certs_android.cc
  # "cert/test_root_certs_mac.cc
  # "cert/test_root_certs_nss.cc
  # "cert/test_root_certs_win.cc
  # "cert/x509_util_android.cc
  # "cert/x509_util_ios.cc
  # "cert/x509_util_ios.h
  # "cert/x509_util_ios_and_mac.cc
  # "cert/x509_util_ios_and_mac.h
  # "cert/x509_util_mac.cc
  # "cert/x509_util_mac.h
  # "cert/x509_util_nss.cc
  # "cert/x509_util_nss.h
  # "cert/x509_util_win.cc
  # "cert/x509_util_win.h
  # "cert_net/cert_net_fetcher_impl.cc
  # "cert_net/cert_net_fetcher_impl.h
  # "cert_net/nss_ocsp.cc
  # "cert_net/nss_ocsp.h
  # "cookies/canonical_cookie.cc
  # "cookies/canonical_cookie.h
  # "cookies/cookie_change_dispatcher.cc
  # "cookies/cookie_change_dispatcher.h
  # "cookies/cookie_constants.cc
  # "cookies/cookie_constants.h
  # "cookies/cookie_deletion_info.cc
  # "cookies/cookie_deletion_info.h
  # "cookies/cookie_monster.cc
  # "cookies/cookie_monster.h
  # "cookies/cookie_monster_change_dispatcher.cc
  # "cookies/cookie_monster_change_dispatcher.h
  # "cookies/cookie_monster_netlog_params.cc
  # "cookies/cookie_monster_netlog_params.h
  # "cookies/cookie_options.cc
  # "cookies/cookie_options.h
  # "cookies/cookie_store.cc
  # "cookies/cookie_store.h
  # "cookies/cookie_util.cc
  # "cookies/cookie_util.h
  # "cookies/parsed_cookie.cc
  # "cookies/parsed_cookie.h
  # "disk_cache/backend_cleanup_tracker.cc
  # "disk_cache/backend_cleanup_tracker.h
  # "disk_cache/blockfile/addr.cc
  # "disk_cache/blockfile/addr.h
  # "disk_cache/blockfile/backend_impl.cc
  # "disk_cache/blockfile/backend_impl.h
  # "disk_cache/blockfile/bitmap.cc
  # "disk_cache/blockfile/bitmap.h
  # "disk_cache/blockfile/block_files.cc
  # "disk_cache/blockfile/block_files.h
  # "disk_cache/blockfile/disk_format.cc
  # "disk_cache/blockfile/disk_format.h
  # "disk_cache/blockfile/disk_format_base.h
  # "disk_cache/blockfile/entry_impl.cc
  # "disk_cache/blockfile/entry_impl.h
  # "disk_cache/blockfile/errors.h
  # "disk_cache/blockfile/eviction.cc
  # "disk_cache/blockfile/eviction.h
  # "disk_cache/blockfile/experiments.h
  # "disk_cache/blockfile/file.cc
  # "disk_cache/blockfile/file.h
  # "disk_cache/blockfile/file_block.h
  # "disk_cache/blockfile/file_ios.cc
  # "disk_cache/blockfile/file_lock.cc
  # "disk_cache/blockfile/file_lock.h
  # "disk_cache/blockfile/file_win.cc
  # "disk_cache/blockfile/histogram_macros.h
  # "disk_cache/blockfile/in_flight_backend_io.cc
  # "disk_cache/blockfile/in_flight_backend_io.h
  # "disk_cache/blockfile/in_flight_io.cc
  # "disk_cache/blockfile/in_flight_io.h
  # "disk_cache/blockfile/mapped_file.cc
  # "disk_cache/blockfile/mapped_file.h
  # "disk_cache/blockfile/mapped_file_win.cc
  # "disk_cache/blockfile/rankings.cc
  # "disk_cache/blockfile/rankings.h
  # "disk_cache/blockfile/sparse_control.cc
  # "disk_cache/blockfile/sparse_control.h
  # "disk_cache/blockfile/stats.cc
  # "disk_cache/blockfile/stats.h
  # "disk_cache/blockfile/storage_block-inl.h
  # "disk_cache/blockfile/storage_block.h
  # "disk_cache/blockfile/stress_support.h
  # "disk_cache/blockfile/trace.cc
  # "disk_cache/blockfile/trace.h
  # "disk_cache/blockfile/webfonts_histogram.cc
  # "disk_cache/blockfile/webfonts_histogram.h
  # "disk_cache/cache_util.cc
  # "disk_cache/cache_util.h
  # "disk_cache/cache_util_win.cc
  # "disk_cache/disk_cache.cc
  # "disk_cache/disk_cache.h
  # "disk_cache/memory/mem_backend_impl.cc
  # "disk_cache/memory/mem_backend_impl.h
  # "disk_cache/memory/mem_entry_impl.cc
  # "disk_cache/memory/mem_entry_impl.h
  # "disk_cache/net_log_parameters.cc
  # "disk_cache/net_log_parameters.h
  # "disk_cache/simple/simple_backend_impl.cc
  # "disk_cache/simple/simple_backend_impl.h
  # "disk_cache/simple/simple_backend_version.h
  # "disk_cache/simple/simple_entry_format.cc
  # "disk_cache/simple/simple_entry_format.h
  # "disk_cache/simple/simple_entry_format_history.h
  # "disk_cache/simple/simple_entry_impl.cc
  # "disk_cache/simple/simple_entry_impl.h
  # "disk_cache/simple/simple_entry_operation.cc
  # "disk_cache/simple/simple_entry_operation.h
  # "disk_cache/simple/simple_file_tracker.cc
  # "disk_cache/simple/simple_file_tracker.h
  # "disk_cache/simple/simple_histogram_macros.h
  # "disk_cache/simple/simple_index.cc
  # "disk_cache/simple/simple_index.h
  # "disk_cache/simple/simple_index_delegate.h
  # "disk_cache/simple/simple_index_file.cc
  # "disk_cache/simple/simple_index_file.h
  # "disk_cache/simple/simple_index_file_win.cc
  # "disk_cache/simple/simple_net_log_parameters.cc
  # "disk_cache/simple/simple_net_log_parameters.h
  # "disk_cache/simple/simple_synchronous_entry.cc
  # "disk_cache/simple/simple_synchronous_entry.h
  # "disk_cache/simple/simple_util.cc
  # "disk_cache/simple/simple_util.h
  # "disk_cache/simple/simple_util_win.cc
  # "disk_cache/simple/simple_version_upgrade.cc
  # "disk_cache/simple/simple_version_upgrade.h
  # "filter/filter_source_stream.cc
  # "filter/filter_source_stream.h
  # "filter/gzip_header.cc
  # "filter/gzip_header.h
  # "filter/gzip_source_stream.cc
  # "filter/gzip_source_stream.h
  # "filter/source_stream.cc
  # "filter/source_stream.h
  # "filter/source_stream_type_list.h
  # "http/bidirectional_stream.cc
  # "http/bidirectional_stream.h
  # "http/bidirectional_stream_impl.cc
  # "http/bidirectional_stream_impl.h
  # "http/bidirectional_stream_request_info.cc
  # "http/bidirectional_stream_request_info.h
  # "http/broken_alternative_services.cc
  # "http/broken_alternative_services.h
  # "http/failing_http_transaction_factory.cc
  # "http/failing_http_transaction_factory.h
  # "http/http_auth.cc
  # "http/http_auth.h
  # "http/http_auth_cache.cc
  # "http/http_auth_cache.h
  # "http/http_auth_controller.cc
  # "http/http_auth_controller.h
  # "http/http_auth_filter.cc
  # "http/http_auth_filter.h
  # "http/http_auth_handler.cc
  # "http/http_auth_handler.h
  # "http/http_auth_handler_basic.cc
  # "http/http_auth_handler_basic.h
  # "http/http_auth_handler_digest.cc
  # "http/http_auth_handler_digest.h
  # "http/http_auth_handler_factory.cc
  # "http/http_auth_handler_factory.h
  # "http/http_auth_handler_negotiate.cc
  # "http/http_auth_handler_negotiate.h
  # "http/http_auth_handler_ntlm.cc
  # "http/http_auth_handler_ntlm.h
  # "http/http_auth_handler_ntlm_portable.cc
  # "http/http_auth_handler_ntlm_win.cc
  # "http/http_auth_multi_round_parse.cc
  # "http/http_auth_multi_round_parse.h
  # "http/http_auth_preferences.cc
  # "http/http_auth_preferences.h
  # "http/http_auth_sspi_win.cc
  # "http/http_auth_sspi_win.h
  # "http/http_basic_state.cc
  # "http/http_basic_state.h
  # "http/http_basic_stream.cc
  # "http/http_basic_stream.h
  # "http/http_cache.cc
  # "http/http_cache.h
  # "http/http_cache_lookup_manager.cc
  # "http/http_cache_lookup_manager.h
  # "http/http_cache_transaction.cc
  # "http/http_cache_transaction.h
  # "http/http_cache_writers.cc
  # "http/http_cache_writers.h
  # "http/http_chunked_decoder.cc
  # "http/http_chunked_decoder.h
  # "http/http_content_disposition.cc
  # "http/http_content_disposition.h
  # "http/http_negotiate_auth_system.h
  # "http/http_network_layer.cc
  # "http/http_network_layer.h
  # "http/http_network_session.cc
  # "http/http_network_session.h
  # "http/http_network_session_peer.cc
  # "http/http_network_session_peer.h
  # "http/http_network_transaction.cc
  # "http/http_network_transaction.h
  # "http/http_proxy_client_socket.cc
  # "http/http_proxy_client_socket.h
  # "http/http_proxy_connect_job.cc
  # "http/http_proxy_connect_job.h
  # "http/http_request_info.cc
  # "http/http_request_info.h
  # "http/http_response_body_drainer.cc
  # "http/http_response_body_drainer.h
  # "http/http_server_properties.cc
  # "http/http_server_properties.h
  # "http/http_server_properties_impl.cc
  # "http/http_server_properties_impl.h
  # "http/http_server_properties_manager.cc
  # "http/http_server_properties_manager.h
  # "http/http_status_code.cc
  # "http/http_status_code.h
  # "http/http_stream.h
  # "http/http_stream_factory.cc
  # "http/http_stream_factory.h
  # "http/http_stream_factory_job.cc
  # "http/http_stream_factory_job.h
  # "http/http_stream_factory_job_controller.cc
  # "http/http_stream_factory_job_controller.h
  # "http/http_stream_parser.cc
  # "http/http_stream_parser.h
  # "http/http_stream_request.cc
  # "http/http_stream_request.h
  # "http/http_transaction.h
  # "http/http_transaction_factory.h
  # "http/http_version.h
  # "http/partial_data.cc
  # "http/partial_data.h
  # "http/proxy_client_socket.cc
  # "http/proxy_client_socket.h
  # "http/proxy_fallback.cc
  # "http/proxy_fallback.h
  # "http/transport_security_persister.cc
  # "http/transport_security_persister.h
  # "http/url_security_manager.cc
  # "http/url_security_manager.h
  # "http/url_security_manager_win.cc
  # "http2/platform/impl/http2_arraysize_impl.h
  # "http2/platform/impl/http2_bug_tracker_impl.h
  # "http2/platform/impl/http2_containers_impl.h
  # "http2/platform/impl/http2_estimate_memory_usage_impl.h
  # "http2/platform/impl/http2_export_impl.h
  # "http2/platform/impl/http2_flag_utils_impl.h
  # "http2/platform/impl/http2_flags_impl.cc
  # "http2/platform/impl/http2_flags_impl.h
  # "http2/platform/impl/http2_logging_impl.h
  # "http2/platform/impl/http2_macros_impl.h
  # "http2/platform/impl/http2_optional_impl.h
  # "http2/platform/impl/http2_ptr_util_impl.h
  # "http2/platform/impl/http2_reconstruct_object_impl.h
  # "http2/platform/impl/http2_string_impl.h
  # "http2/platform/impl/http2_string_piece_impl.h
  # "http2/platform/impl/http2_string_utils_impl.h
  # "log/file_net_log_observer.cc
  # "log/file_net_log_observer.h
  # "log/net_log_util.cc
  # "log/net_log_util.h
  # "log/trace_net_log_observer.cc
  # "log/trace_net_log_observer.h
  # "nqe/cached_network_quality.cc
  # "nqe/cached_network_quality.h
  # "nqe/effective_connection_type.cc
  # "nqe/effective_connection_type.h
  # "nqe/effective_connection_type_observer.h
  # "nqe/event_creator.cc
  # "nqe/event_creator.h
  # "nqe/network_id.cc
  # "nqe/network_id.h
  # "nqe/network_qualities_prefs_manager.cc
  # "nqe/network_qualities_prefs_manager.h
  # "nqe/network_quality.cc
  # "nqe/network_quality.h
  # "nqe/network_quality_estimator.cc
  # "nqe/network_quality_estimator.h
  # "nqe/network_quality_estimator_params.cc
  # "nqe/network_quality_estimator_params.h
  # "nqe/network_quality_estimator_util.cc
  # "nqe/network_quality_estimator_util.h
  # "nqe/network_quality_observation.cc
  # "nqe/network_quality_observation.h
  # "nqe/network_quality_observation_source.cc
  # "nqe/network_quality_observation_source.h
  # "nqe/network_quality_store.cc
  # "nqe/network_quality_store.h
  # "nqe/observation_buffer.cc
  # "nqe/observation_buffer.h
  # "nqe/rtt_throughput_estimates_observer.h
  # "nqe/socket_watcher.cc
  # "nqe/socket_watcher.h
  # "nqe/socket_watcher_factory.cc
  # "nqe/socket_watcher_factory.h
  # "nqe/throughput_analyzer.cc
  # "nqe/throughput_analyzer.h
  # "nqe/weighted_observation.h
  # "ntlm/ntlm.cc
  # "ntlm/ntlm.h
  # "ntlm/ntlm_buffer_reader.cc
  # "ntlm/ntlm_buffer_reader.h
  # "ntlm/ntlm_buffer_writer.cc
  # "ntlm/ntlm_buffer_writer.h
  # "ntlm/ntlm_client.cc
  # "ntlm/ntlm_client.h
  # "ntlm/ntlm_constants.cc
  # "ntlm/ntlm_constants.h
  # "proxy_resolution/dhcp_pac_file_adapter_fetcher_win.cc
  # "proxy_resolution/dhcp_pac_file_adapter_fetcher_win.h
  # "proxy_resolution/dhcp_pac_file_fetcher.cc
  # "proxy_resolution/dhcp_pac_file_fetcher.h
  # "proxy_resolution/dhcp_pac_file_fetcher_factory.cc
  # "proxy_resolution/dhcp_pac_file_fetcher_factory.h
  # "proxy_resolution/dhcp_pac_file_fetcher_win.cc
  # "proxy_resolution/dhcp_pac_file_fetcher_win.h
  # "proxy_resolution/dhcpcsvc_init_win.cc
  # "proxy_resolution/dhcpcsvc_init_win.h
  # "proxy_resolution/multi_threaded_proxy_resolver.cc
  # "proxy_resolution/multi_threaded_proxy_resolver.h
  # "proxy_resolution/network_delegate_error_observer.cc
  # "proxy_resolution/network_delegate_error_observer.h
  # "proxy_resolution/pac_file_data.cc
  # "proxy_resolution/pac_file_data.h
  # "proxy_resolution/pac_file_decider.cc
  # "proxy_resolution/pac_file_decider.h
  # "proxy_resolution/pac_file_fetcher.h
  # "proxy_resolution/pac_file_fetcher_impl.cc
  # "proxy_resolution/pac_file_fetcher_impl.h
  # "proxy_resolution/pac_js_library.h
  # "proxy_resolution/pac_library.cc
  # "proxy_resolution/pac_library.h
  # "proxy_resolution/polling_proxy_config_service.cc
  # "proxy_resolution/polling_proxy_config_service.h
  # "proxy_resolution/proxy_bypass_rules.cc
  # "proxy_resolution/proxy_bypass_rules.h
  # "proxy_resolution/proxy_config.cc
  # "proxy_resolution/proxy_config.h
  # "proxy_resolution/proxy_config_service.h
  # "proxy_resolution/proxy_config_service_android.cc
  # "proxy_resolution/proxy_config_service_android.h
  # "proxy_resolution/proxy_config_service_fixed.cc
  # "proxy_resolution/proxy_config_service_fixed.h
  # "proxy_resolution/proxy_config_service_ios.cc
  # "proxy_resolution/proxy_config_service_ios.h
  # "proxy_resolution/proxy_config_service_linux.cc
  # "proxy_resolution/proxy_config_service_linux.h
  # "proxy_resolution/proxy_config_service_mac.cc
  # "proxy_resolution/proxy_config_service_mac.h
  # "proxy_resolution/proxy_config_service_win.cc
  # "proxy_resolution/proxy_config_service_win.h
  # "proxy_resolution/proxy_config_with_annotation.cc
  # "proxy_resolution/proxy_config_with_annotation.h
  # "proxy_resolution/proxy_info.cc
  # "proxy_resolution/proxy_info.h
  # "proxy_resolution/proxy_list.cc
  # "proxy_resolution/proxy_list.h
  # "proxy_resolution/proxy_resolution_service.cc
  # "proxy_resolution/proxy_resolution_service.h
  # "proxy_resolution/proxy_resolve_dns_operation.h
  # "proxy_resolution/proxy_resolver.h
  # "proxy_resolution/proxy_resolver_error_observer.h
  # "proxy_resolution/proxy_resolver_factory.cc
  # "proxy_resolution/proxy_resolver_factory.h
  # "proxy_resolution/proxy_resolver_mac.cc
  # "proxy_resolution/proxy_resolver_mac.h
  # "proxy_resolution/proxy_resolver_winhttp.cc
  # "proxy_resolution/proxy_resolver_winhttp.h
  # "proxy_resolution/proxy_retry_info.h
  # "quic/bidirectional_stream_quic_impl.cc
  # "quic/bidirectional_stream_quic_impl.h
  # "quic/crypto/proof_source_chromium.cc
  # "quic/crypto/proof_source_chromium.h
  # "quic/crypto/proof_verifier_chromium.cc
  # "quic/crypto/proof_verifier_chromium.h
  # "quic/network_connection.cc
  # "quic/network_connection.h
  # "quic/platform/impl/quic_aligned_impl.h
  # "quic/platform/impl/quic_arraysize_impl.h
  # "quic/platform/impl/quic_bug_tracker_impl.h
  # "quic/platform/impl/quic_cert_utils_impl.h
  # "quic/platform/impl/quic_chromium_clock.cc
  # "quic/platform/impl/quic_chromium_clock.h
  # "quic/platform/impl/quic_client_stats_impl.h
  # "quic/platform/impl/quic_containers_impl.h
  # "quic/platform/impl/quic_endian_impl.h
  # "quic/platform/impl/quic_error_code_wrappers_impl.h
  # "quic/platform/impl/quic_estimate_memory_usage_impl.h
  # "quic/platform/impl/quic_export_impl.h
  # "quic/platform/impl/quic_fallthrough_impl.h
  # "quic/platform/impl/quic_file_utils_impl.h
  # "quic/platform/impl/quic_flag_utils_impl.h
  # "quic/platform/impl/quic_flags_impl.cc
  # "quic/platform/impl/quic_flags_impl.h
  # "quic/platform/impl/quic_hostname_utils_impl.cc
  # "quic/platform/impl/quic_hostname_utils_impl.h
  # "quic/platform/impl/quic_iovec_impl.h
  # "quic/platform/impl/quic_ip_address_impl.cc
  # "quic/platform/impl/quic_ip_address_impl.h
  # "quic/platform/impl/quic_logging_impl.h
  # "quic/platform/impl/quic_macros_impl.h
  # "quic/platform/impl/quic_map_util_impl.h
  # "quic/platform/impl/quic_mem_slice_impl.cc
  # "quic/platform/impl/quic_mem_slice_impl.h
  # "quic/platform/impl/quic_mem_slice_span_impl.cc
  # "quic/platform/impl/quic_mem_slice_span_impl.h
  # "quic/platform/impl/quic_mem_slice_storage_impl.cc
  # "quic/platform/impl/quic_mem_slice_storage_impl.h
  # "quic/platform/impl/quic_mutex_impl.cc
  # "quic/platform/impl/quic_mutex_impl.h
  # "quic/platform/impl/quic_pcc_sender_impl.h
  # "quic/platform/impl/quic_prefetch_impl.h
  # "quic/platform/impl/quic_ptr_util_impl.h
  # "quic/platform/impl/quic_reference_counted_impl.h
  # "quic/platform/impl/quic_server_stats_impl.h
  # "quic/platform/impl/quic_sleep_impl.h
  # "quic/platform/impl/quic_socket_address_impl.cc
  # "quic/platform/impl/quic_socket_address_impl.h
  # "quic/platform/impl/quic_stack_trace_impl.h
  # "quic/platform/impl/quic_str_cat_impl.h
  # "quic/platform/impl/quic_string_piece_impl.h
  # "quic/platform/impl/quic_text_utils_impl.h
  # "quic/properties_based_quic_server_info.cc
  # "quic/properties_based_quic_server_info.h
  # "quic/quic_address_mismatch.cc
  # "quic/quic_address_mismatch.h
  # "quic/quic_chromium_alarm_factory.cc
  # "quic/quic_chromium_alarm_factory.h
  # "quic/quic_chromium_client_session.cc
  # "quic/quic_chromium_client_session.h
  # "quic/quic_chromium_client_stream.cc
  # "quic/quic_chromium_client_stream.h
  # "quic/quic_chromium_connection_helper.cc
  # "quic/quic_chromium_connection_helper.h
  # "quic/quic_chromium_packet_reader.cc
  # "quic/quic_chromium_packet_reader.h
  # "quic/quic_chromium_packet_writer.cc
  # "quic/quic_chromium_packet_writer.h
  # "quic/quic_clock_skew_detector.cc
  # "quic/quic_clock_skew_detector.h
  # "quic/quic_connection_logger.cc
  # "quic/quic_connection_logger.h
  # "quic/quic_connectivity_probing_manager.cc
  # "quic/quic_connectivity_probing_manager.h
  # "quic/quic_crypto_client_stream_factory.cc
  # "quic/quic_crypto_client_stream_factory.h
  # "quic/quic_flags_list.h
  # "quic/quic_http_stream.cc
  # "quic/quic_http_stream.h
  # "quic/quic_http_utils.cc
  # "quic/quic_http_utils.h
  # "quic/quic_proxy_client_socket.cc
  # "quic/quic_proxy_client_socket.h
  # "quic/quic_server_info.cc
  # "quic/quic_server_info.h
  # "quic/quic_session_key.cc
  # "quic/quic_session_key.h
  # "quic/quic_stream_factory.cc
  # "quic/quic_stream_factory.h
  # "quic/quic_utils_chromium.cc
  # "quic/quic_utils_chromium.h
  # "quiche/common/platform/impl/quiche_logging_impl.h
  # "quiche/common/platform/impl/quiche_ptr_util_impl.h
  # "quiche/common/platform/impl/quiche_unordered_containers_impl.h
  # "socket/client_socket_factory.cc
  # "socket/client_socket_factory.h
  # "socket/client_socket_pool.cc
  # "socket/client_socket_pool.h
  # "socket/client_socket_pool_manager.cc
  # "socket/client_socket_pool_manager.h
  # "socket/client_socket_pool_manager_impl.cc
  # "socket/client_socket_pool_manager_impl.h
  # "socket/datagram_client_socket.h
  # "socket/datagram_server_socket.h
  # "socket/datagram_socket.h
  # "socket/diff_serv_code_point.h
  # "socket/server_socket.cc
  # "socket/server_socket.h
  # "socket/socket_descriptor.cc
  # "socket/socket_descriptor.h
  # "socket/socket_net_log_params.cc
  # "socket/socket_net_log_params.h
  # "socket/socket_options.cc
  # "socket/socket_options.h
  # "socket/socket_tag.cc
  # "socket/socket_tag.h
  # "socket/socks5_client_socket.cc
  # "socket/socks5_client_socket.h
  # "socket/socks_client_socket.cc
  # "socket/socks_client_socket.h
  # "socket/socks_connect_job.cc
  # "socket/socks_connect_job.h
  # "socket/ssl_connect_job.cc
  # "socket/ssl_connect_job.h
  # "socket/ssl_server_socket.h
  # "socket/ssl_server_socket_impl.cc
  # "socket/ssl_server_socket_impl.h
  # "socket/tcp_client_socket.cc
  # "socket/tcp_client_socket.h
  # "socket/tcp_server_socket.cc
  # "socket/tcp_server_socket.h
  # "socket/tcp_socket.h
  # "socket/tcp_socket_win.cc
  # "socket/tcp_socket_win.h
  # "socket/transport_client_socket.cc
  # "socket/transport_client_socket.h
  # "socket/transport_client_socket_pool.cc
  # "socket/transport_client_socket_pool.h
  # "socket/transport_connect_job.cc
  # "socket/transport_connect_job.h
  # "socket/udp_client_socket.cc
  # "socket/udp_client_socket.h
  # "socket/udp_net_log_parameters.cc
  # "socket/udp_net_log_parameters.h
  # "socket/udp_server_socket.cc
  # "socket/udp_server_socket.h
  # "socket/udp_socket.h
  # "socket/udp_socket_win.cc
  # "socket/udp_socket_win.h
  # "socket/websocket_endpoint_lock_manager.cc
  # "socket/websocket_endpoint_lock_manager.h
  # "socket/websocket_transport_client_socket_pool.cc
  # "socket/websocket_transport_client_socket_pool.h
  # "socket/websocket_transport_connect_job.cc
  # "socket/websocket_transport_connect_job.h
  # "socket/websocket_transport_connect_sub_job.cc
  # "socket/websocket_transport_connect_sub_job.h
  # "spdy/bidirectional_stream_spdy_impl.cc
  # "spdy/bidirectional_stream_spdy_impl.h
  # "spdy/buffered_spdy_framer.cc
  # "spdy/buffered_spdy_framer.h
  # "spdy/header_coalescer.cc
  # "spdy/header_coalescer.h
  # "spdy/http2_priority_dependencies.cc
  # "spdy/http2_priority_dependencies.h
  # "spdy/http2_push_promise_index.cc
  # "spdy/http2_push_promise_index.h
  # "spdy/multiplexed_http_stream.cc
  # "spdy/multiplexed_http_stream.h
  # "spdy/multiplexed_session.cc
  # "spdy/multiplexed_session.h
  # "spdy/platform/impl/spdy_arraysize_impl.h
  # "spdy/platform/impl/spdy_bug_tracker_impl.h
  # "spdy/platform/impl/spdy_containers_impl.h
  # "spdy/platform/impl/spdy_endianness_util_impl.h
  # "spdy/platform/impl/spdy_estimate_memory_usage_impl.h
  # "spdy/platform/impl/spdy_export_impl.h
  # "spdy/platform/impl/spdy_flags_impl.cc
  # "spdy/platform/impl/spdy_flags_impl.h
  # "spdy/platform/impl/spdy_logging_impl.h
  # "spdy/platform/impl/spdy_macros_impl.h
  # "spdy/platform/impl/spdy_mem_slice_impl.cc
  # "spdy/platform/impl/spdy_mem_slice_impl.h
  # "spdy/platform/impl/spdy_ptr_util_impl.h
  # "spdy/platform/impl/spdy_string_impl.h
  # "spdy/platform/impl/spdy_string_piece_impl.h
  # "spdy/platform/impl/spdy_string_utils_impl.cc
  # "spdy/platform/impl/spdy_string_utils_impl.h
  # "spdy/platform/impl/spdy_test_utils_prod_impl.h
  # "spdy/platform/impl/spdy_unsafe_arena_impl.h
  # "spdy/server_push_delegate.h
  # "spdy/spdy_buffer.cc
  # "spdy/spdy_buffer.h
  # "spdy/spdy_buffer_producer.cc
  # "spdy/spdy_buffer_producer.h
  # "spdy/spdy_http_stream.cc
  # "spdy/spdy_http_stream.h
  # "spdy/spdy_http_utils.cc
  # "spdy/spdy_http_utils.h
  # "spdy/spdy_log_util.cc
  # "spdy/spdy_log_util.h
  # "spdy/spdy_proxy_client_socket.cc
  # "spdy/spdy_proxy_client_socket.h
  # "spdy/spdy_read_queue.cc
  # "spdy/spdy_read_queue.h
  # "spdy/spdy_session.cc
  # "spdy/spdy_session.h
  # "spdy/spdy_session_key.cc
  # "spdy/spdy_session_key.h
  # "spdy/spdy_session_pool.cc
  # "spdy/spdy_session_pool.h
  # "spdy/spdy_stream.cc
  # "spdy/spdy_stream.h
  # "spdy/spdy_write_queue.cc
  # "spdy/spdy_write_queue.h
  # "ssl/client_cert_store.h
  # "ssl/client_cert_store_mac.cc
  # "ssl/client_cert_store_mac.h
  # "ssl/client_cert_store_nss.cc
  # "ssl/client_cert_store_nss.h
  # "ssl/client_cert_store_win.cc
  # "ssl/client_cert_store_win.h
  # "ssl/ssl_config_service_defaults.cc
  # "ssl/ssl_config_service_defaults.h
  # "ssl/ssl_key_logger_impl.cc
  # "ssl/ssl_key_logger_impl.h
  # "ssl/ssl_platform_key_android.cc
  # "ssl/ssl_platform_key_android.h
  # "ssl/ssl_platform_key_mac.cc
  # "ssl/ssl_platform_key_mac.h
  # "ssl/ssl_platform_key_nss.cc
  # "ssl/ssl_platform_key_nss.h
  # "ssl/ssl_platform_key_util.cc
  # "ssl/ssl_platform_key_util.h
  # "ssl/ssl_platform_key_win.cc
  # "ssl/test_ssl_private_key.cc
  # "ssl/test_ssl_private_key.h
  # "ssl/threaded_ssl_private_key.cc
  # "ssl/threaded_ssl_private_key.h
  # "third_party/mozilla_security_manager/nsNSSCertificateDB.cpp",
  # "third_party/mozilla_security_manager/nsNSSCertificateDB.h
  # "third_party/mozilla_security_manager/nsPKCS12Blob.cpp",
  # "third_party/mozilla_security_manager/nsPKCS12Blob.h
  # "third_party/quiche/src/common/platform/api/quiche_logging.h
  # "third_party/quiche/src/common/platform/api/quiche_ptr_util.h
  # "third_party/quiche/src/common/platform/api/quiche_unordered_containers.h
  # "third_party/quiche/src/common/simple_linked_hash_map.h
  # "third_party/quiche/src/http2/decoder/decode_buffer.cc
  # "third_party/quiche/src/http2/decoder/decode_buffer.h
  # "third_party/quiche/src/http2/decoder/decode_http2_structures.cc
  # "third_party/quiche/src/http2/decoder/decode_http2_structures.h
  # "third_party/quiche/src/http2/decoder/decode_status.cc
  # "third_party/quiche/src/http2/decoder/decode_status.h
  # "third_party/quiche/src/http2/decoder/frame_decoder_state.cc
  # "third_party/quiche/src/http2/decoder/frame_decoder_state.h
  # "third_party/quiche/src/http2/decoder/http2_frame_decoder.cc
  # "third_party/quiche/src/http2/decoder/http2_frame_decoder.h
  # "third_party/quiche/src/http2/decoder/http2_frame_decoder_listener.cc
  # "third_party/quiche/src/http2/decoder/http2_frame_decoder_listener.h
  # "third_party/quiche/src/http2/decoder/http2_structure_decoder.cc
  # "third_party/quiche/src/http2/decoder/http2_structure_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/altsvc_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/altsvc_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/continuation_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/continuation_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/data_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/data_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/goaway_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/goaway_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/headers_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/headers_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/ping_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/ping_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/priority_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/priority_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/push_promise_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/push_promise_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/rst_stream_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/rst_stream_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/settings_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/settings_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/unknown_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/unknown_payload_decoder.h
  # "third_party/quiche/src/http2/decoder/payload_decoders/window_update_payload_decoder.cc
  # "third_party/quiche/src/http2/decoder/payload_decoders/window_update_payload_decoder.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_block_decoder.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_block_decoder.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder_listener.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder_listener.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder_state.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder_state.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder_string_buffer.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder_string_buffer.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder_tables.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_decoder_tables.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_entry_decoder.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_entry_decoder.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_entry_decoder_listener.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_entry_decoder_listener.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_entry_type_decoder.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_entry_type_decoder.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_string_decoder.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_string_decoder.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_string_decoder_listener.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_string_decoder_listener.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_whole_entry_buffer.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_whole_entry_buffer.h
  # "third_party/quiche/src/http2/hpack/decoder/hpack_whole_entry_listener.cc
  # "third_party/quiche/src/http2/hpack/decoder/hpack_whole_entry_listener.h
  # "third_party/quiche/src/http2/hpack/hpack_static_table_entries.inc",
  # "third_party/quiche/src/http2/hpack/hpack_string.cc
  # "third_party/quiche/src/http2/hpack/hpack_string.h
  # "third_party/quiche/src/http2/hpack/http2_hpack_constants.cc
  # "third_party/quiche/src/http2/hpack/http2_hpack_constants.h
  # "third_party/quiche/src/http2/hpack/huffman/hpack_huffman_decoder.cc
  # "third_party/quiche/src/http2/hpack/huffman/hpack_huffman_decoder.h
  # "third_party/quiche/src/http2/hpack/huffman/hpack_huffman_encoder.cc
  # "third_party/quiche/src/http2/hpack/huffman/hpack_huffman_encoder.h
  # "third_party/quiche/src/http2/hpack/huffman/huffman_spec_tables.cc
  # "third_party/quiche/src/http2/hpack/huffman/huffman_spec_tables.h
  # "third_party/quiche/src/http2/hpack/varint/hpack_varint_decoder.cc
  # "third_party/quiche/src/http2/hpack/varint/hpack_varint_decoder.h
  # "third_party/quiche/src/http2/hpack/varint/hpack_varint_encoder.cc
  # "third_party/quiche/src/http2/hpack/varint/hpack_varint_encoder.h
  # "third_party/quiche/src/http2/http2_constants.cc
  # "third_party/quiche/src/http2/http2_constants.h
  # "third_party/quiche/src/http2/http2_structures.cc
  # "third_party/quiche/src/http2/http2_structures.h
  # "third_party/quiche/src/http2/platform/api/http2_arraysize.h
  # "third_party/quiche/src/http2/platform/api/http2_bug_tracker.h
  # "third_party/quiche/src/http2/platform/api/http2_containers.h
  # "third_party/quiche/src/http2/platform/api/http2_estimate_memory_usage.h
  # "third_party/quiche/src/http2/platform/api/http2_export.h
  # "third_party/quiche/src/http2/platform/api/http2_flag_utils.h
  # "third_party/quiche/src/http2/platform/api/http2_flags.h
  # "third_party/quiche/src/http2/platform/api/http2_logging.h
  # "third_party/quiche/src/http2/platform/api/http2_macros.h
  # "third_party/quiche/src/http2/platform/api/http2_optional.h
  # "third_party/quiche/src/http2/platform/api/http2_ptr_util.h
  # "third_party/quiche/src/http2/platform/api/http2_reconstruct_object.h
  # "third_party/quiche/src/http2/platform/api/http2_string.h
  # "third_party/quiche/src/http2/platform/api/http2_string_piece.h
  # "third_party/quiche/src/http2/platform/api/http2_string_utils.h
  # "third_party/quiche/src/quic/core/congestion_control/bandwidth_sampler.cc
  # "third_party/quiche/src/quic/core/congestion_control/bandwidth_sampler.h
  # "third_party/quiche/src/quic/core/congestion_control/bbr_sender.cc
  # "third_party/quiche/src/quic/core/congestion_control/bbr_sender.h
  # "third_party/quiche/src/quic/core/congestion_control/cubic_bytes.cc
  # "third_party/quiche/src/quic/core/congestion_control/cubic_bytes.h
  # "third_party/quiche/src/quic/core/congestion_control/general_loss_algorithm.cc
  # "third_party/quiche/src/quic/core/congestion_control/general_loss_algorithm.h
  # "third_party/quiche/src/quic/core/congestion_control/hybrid_slow_start.cc
  # "third_party/quiche/src/quic/core/congestion_control/hybrid_slow_start.h
  # "third_party/quiche/src/quic/core/congestion_control/loss_detection_interface.h
  # "third_party/quiche/src/quic/core/congestion_control/pacing_sender.cc
  # "third_party/quiche/src/quic/core/congestion_control/pacing_sender.h
  # "third_party/quiche/src/quic/core/congestion_control/prr_sender.cc
  # "third_party/quiche/src/quic/core/congestion_control/prr_sender.h
  # "third_party/quiche/src/quic/core/congestion_control/rtt_stats.cc
  # "third_party/quiche/src/quic/core/congestion_control/rtt_stats.h
  # "third_party/quiche/src/quic/core/congestion_control/send_algorithm_interface.cc
  # "third_party/quiche/src/quic/core/congestion_control/send_algorithm_interface.h
  # "third_party/quiche/src/quic/core/congestion_control/tcp_cubic_sender_bytes.cc
  # "third_party/quiche/src/quic/core/congestion_control/tcp_cubic_sender_bytes.h
  # "third_party/quiche/src/quic/core/congestion_control/uber_loss_algorithm.cc
  # "third_party/quiche/src/quic/core/congestion_control/uber_loss_algorithm.h
  # "third_party/quiche/src/quic/core/congestion_control/windowed_filter.h
  # "third_party/quiche/src/quic/core/crypto/aead_base_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aead_base_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/aead_base_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aead_base_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/aes_128_gcm_12_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aes_128_gcm_12_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/aes_128_gcm_12_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aes_128_gcm_12_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/aes_128_gcm_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aes_128_gcm_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/aes_128_gcm_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aes_128_gcm_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/aes_256_gcm_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aes_256_gcm_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/aes_256_gcm_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aes_256_gcm_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/aes_base_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aes_base_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/aes_base_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/aes_base_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/cert_compressor.cc
  # "third_party/quiche/src/quic/core/crypto/cert_compressor.h
  # "third_party/quiche/src/quic/core/crypto/chacha20_poly1305_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/chacha20_poly1305_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/chacha20_poly1305_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/chacha20_poly1305_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/chacha20_poly1305_tls_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/chacha20_poly1305_tls_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/chacha20_poly1305_tls_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/chacha20_poly1305_tls_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/chacha_base_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/chacha_base_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/chacha_base_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/chacha_base_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/channel_id.cc
  # "third_party/quiche/src/quic/core/crypto/channel_id.h
  # "third_party/quiche/src/quic/core/crypto/common_cert_set.cc
  # "third_party/quiche/src/quic/core/crypto/common_cert_set.h
  # "third_party/quiche/src/quic/core/crypto/crypto_framer.cc
  # "third_party/quiche/src/quic/core/crypto/crypto_framer.h
  # "third_party/quiche/src/quic/core/crypto/crypto_handshake.cc
  # "third_party/quiche/src/quic/core/crypto/crypto_handshake.h
  # "third_party/quiche/src/quic/core/crypto/crypto_handshake_message.cc
  # "third_party/quiche/src/quic/core/crypto/crypto_handshake_message.h
  # "third_party/quiche/src/quic/core/crypto/crypto_message_parser.h
  # "third_party/quiche/src/quic/core/crypto/crypto_protocol.h
  # "third_party/quiche/src/quic/core/crypto/crypto_secret_boxer.cc
  # "third_party/quiche/src/quic/core/crypto/crypto_secret_boxer.h
  # "third_party/quiche/src/quic/core/crypto/crypto_utils.cc
  # "third_party/quiche/src/quic/core/crypto/crypto_utils.h
  # "third_party/quiche/src/quic/core/crypto/curve25519_key_exchange.cc
  # "third_party/quiche/src/quic/core/crypto/curve25519_key_exchange.h
  # "third_party/quiche/src/quic/core/crypto/key_exchange.cc
  # "third_party/quiche/src/quic/core/crypto/key_exchange.h
  # "third_party/quiche/src/quic/core/crypto/null_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/null_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/null_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/null_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/p256_key_exchange.cc
  # "third_party/quiche/src/quic/core/crypto/p256_key_exchange.h
  # "third_party/quiche/src/quic/core/crypto/proof_source.cc
  # "third_party/quiche/src/quic/core/crypto/proof_source.h
  # "third_party/quiche/src/quic/core/crypto/proof_verifier.h
  # "third_party/quiche/src/quic/core/crypto/quic_compressed_certs_cache.cc
  # "third_party/quiche/src/quic/core/crypto/quic_compressed_certs_cache.h
  # "third_party/quiche/src/quic/core/crypto/quic_crypter.h
  # "third_party/quiche/src/quic/core/crypto/quic_crypto_client_config.cc
  # "third_party/quiche/src/quic/core/crypto/quic_crypto_client_config.h
  # "third_party/quiche/src/quic/core/crypto/quic_crypto_proof.cc
  # "third_party/quiche/src/quic/core/crypto/quic_crypto_proof.h
  # "third_party/quiche/src/quic/core/crypto/quic_crypto_server_config.cc
  # "third_party/quiche/src/quic/core/crypto/quic_crypto_server_config.h
  # "third_party/quiche/src/quic/core/crypto/quic_decrypter.cc
  # "third_party/quiche/src/quic/core/crypto/quic_decrypter.h
  # "third_party/quiche/src/quic/core/crypto/quic_encrypter.cc
  # "third_party/quiche/src/quic/core/crypto/quic_encrypter.h
  # "third_party/quiche/src/quic/core/crypto/quic_hkdf.cc
  # "third_party/quiche/src/quic/core/crypto/quic_hkdf.h
  # "third_party/quiche/src/quic/core/crypto/quic_random.cc
  # "third_party/quiche/src/quic/core/crypto/quic_random.h
  # "third_party/quiche/src/quic/core/crypto/transport_parameters.cc
  # "third_party/quiche/src/quic/core/crypto/transport_parameters.h
  # "third_party/quiche/src/quic/core/frames/quic_ack_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_ack_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_blocked_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_blocked_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_connection_close_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_connection_close_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_crypto_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_crypto_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_goaway_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_goaway_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_inlined_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_max_streams_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_max_streams_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_message_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_message_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_mtu_discovery_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_new_connection_id_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_new_connection_id_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_new_token_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_new_token_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_padding_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_padding_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_path_challenge_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_path_challenge_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_path_response_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_path_response_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_ping_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_ping_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_retire_connection_id_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_retire_connection_id_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_rst_stream_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_rst_stream_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_stop_sending_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_stop_sending_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_stop_waiting_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_stop_waiting_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_stream_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_stream_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_streams_blocked_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_streams_blocked_frame.h
  # "third_party/quiche/src/quic/core/frames/quic_window_update_frame.cc
  # "third_party/quiche/src/quic/core/frames/quic_window_update_frame.h
  # "third_party/quiche/src/quic/core/http/http_decoder.cc
  # "third_party/quiche/src/quic/core/http/http_decoder.h
  # "third_party/quiche/src/quic/core/http/http_encoder.cc
  # "third_party/quiche/src/quic/core/http/http_encoder.h
  # "third_party/quiche/src/quic/core/http/http_frames.h
  # "third_party/quiche/src/quic/core/http/quic_client_promised_info.cc
  # "third_party/quiche/src/quic/core/http/quic_client_promised_info.h
  # "third_party/quiche/src/quic/core/http/quic_client_push_promise_index.cc
  # "third_party/quiche/src/quic/core/http/quic_client_push_promise_index.h
  # "third_party/quiche/src/quic/core/http/quic_header_list.cc
  # "third_party/quiche/src/quic/core/http/quic_header_list.h
  # "third_party/quiche/src/quic/core/http/quic_headers_stream.cc
  # "third_party/quiche/src/quic/core/http/quic_headers_stream.h
  # "third_party/quiche/src/quic/core/http/quic_receive_control_stream.cc
  # "third_party/quiche/src/quic/core/http/quic_receive_control_stream.h
  # "third_party/quiche/src/quic/core/http/quic_send_control_stream.cc
  # "third_party/quiche/src/quic/core/http/quic_send_control_stream.h
  # "third_party/quiche/src/quic/core/http/quic_server_session_base.cc
  # "third_party/quiche/src/quic/core/http/quic_server_session_base.h
  # "third_party/quiche/src/quic/core/http/quic_spdy_client_session_base.cc
  # "third_party/quiche/src/quic/core/http/quic_spdy_client_session_base.h
  # "third_party/quiche/src/quic/core/http/quic_spdy_session.cc
  # "third_party/quiche/src/quic/core/http/quic_spdy_session.h
  # "third_party/quiche/src/quic/core/http/quic_spdy_stream.cc
  # "third_party/quiche/src/quic/core/http/quic_spdy_stream.h
  # "third_party/quiche/src/quic/core/http/quic_spdy_stream_body_buffer.cc
  # "third_party/quiche/src/quic/core/http/quic_spdy_stream_body_buffer.h
  # "third_party/quiche/src/quic/core/http/spdy_utils.cc
  # "third_party/quiche/src/quic/core/http/spdy_utils.h
  # "third_party/quiche/src/quic/core/legacy_quic_stream_id_manager.cc
  # "third_party/quiche/src/quic/core/legacy_quic_stream_id_manager.h
  # "third_party/quiche/src/quic/core/packet_number_indexed_queue.h
  # "third_party/quiche/src/quic/core/qpack/qpack_constants.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_constants.h
  # "third_party/quiche/src/quic/core/qpack/qpack_decoded_headers_accumulator.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_decoded_headers_accumulator.h
  # "third_party/quiche/src/quic/core/qpack/qpack_decoder.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_decoder.h
  # "third_party/quiche/src/quic/core/qpack/qpack_decoder_stream_receiver.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_decoder_stream_receiver.h
  # "third_party/quiche/src/quic/core/qpack/qpack_decoder_stream_sender.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_decoder_stream_sender.h
  # "third_party/quiche/src/quic/core/qpack/qpack_encoder.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_encoder.h
  # "third_party/quiche/src/quic/core/qpack/qpack_encoder_stream_receiver.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_encoder_stream_receiver.h
  # "third_party/quiche/src/quic/core/qpack/qpack_encoder_stream_sender.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_encoder_stream_sender.h
  # "third_party/quiche/src/quic/core/qpack/qpack_header_table.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_header_table.h
  # "third_party/quiche/src/quic/core/qpack/qpack_instruction_decoder.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_instruction_decoder.h
  # "third_party/quiche/src/quic/core/qpack/qpack_instruction_encoder.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_instruction_encoder.h
  # "third_party/quiche/src/quic/core/qpack/qpack_progressive_decoder.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_progressive_decoder.h
  # "third_party/quiche/src/quic/core/qpack/qpack_progressive_encoder.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_progressive_encoder.h
  # "third_party/quiche/src/quic/core/qpack/qpack_static_table.cc
  # "third_party/quiche/src/quic/core/qpack/qpack_static_table.h
  # "third_party/quiche/src/quic/core/qpack/value_splitting_header_list.cc
  # "third_party/quiche/src/quic/core/qpack/value_splitting_header_list.h
  # "third_party/quiche/src/quic/core/quic_ack_listener_interface.cc
  # "third_party/quiche/src/quic/core/quic_ack_listener_interface.h
  # "third_party/quiche/src/quic/core/quic_alarm.cc
  # "third_party/quiche/src/quic/core/quic_alarm.h
  # "third_party/quiche/src/quic/core/quic_alarm_factory.h
  # "third_party/quiche/src/quic/core/quic_arena_scoped_ptr.h
  # "third_party/quiche/src/quic/core/quic_bandwidth.cc
  # "third_party/quiche/src/quic/core/quic_bandwidth.h
  # "third_party/quiche/src/quic/core/quic_blocked_writer_interface.h
  # "third_party/quiche/src/quic/core/quic_buffer_allocator.cc
  # "third_party/quiche/src/quic/core/quic_buffer_allocator.h
  # "third_party/quiche/src/quic/core/quic_buffered_packet_store.cc
  # "third_party/quiche/src/quic/core/quic_buffered_packet_store.h
  # "third_party/quiche/src/quic/core/quic_config.cc
  # "third_party/quiche/src/quic/core/quic_config.h
  # "third_party/quiche/src/quic/core/quic_connection.cc
  # "third_party/quiche/src/quic/core/quic_connection.h
  # "third_party/quiche/src/quic/core/quic_connection_id.cc
  # "third_party/quiche/src/quic/core/quic_connection_id.h
  # "third_party/quiche/src/quic/core/quic_connection_stats.cc
  # "third_party/quiche/src/quic/core/quic_connection_stats.h
  # "third_party/quiche/src/quic/core/quic_constants.cc
  # "third_party/quiche/src/quic/core/quic_constants.h
  # "third_party/quiche/src/quic/core/quic_control_frame_manager.cc
  # "third_party/quiche/src/quic/core/quic_control_frame_manager.h
  # "third_party/quiche/src/quic/core/quic_crypto_client_handshaker.cc
  # "third_party/quiche/src/quic/core/quic_crypto_client_handshaker.h
  # "third_party/quiche/src/quic/core/quic_crypto_client_stream.cc
  # "third_party/quiche/src/quic/core/quic_crypto_client_stream.h
  # "third_party/quiche/src/quic/core/quic_crypto_handshaker.cc
  # "third_party/quiche/src/quic/core/quic_crypto_handshaker.h
  # "third_party/quiche/src/quic/core/quic_crypto_server_handshaker.cc
  # "third_party/quiche/src/quic/core/quic_crypto_server_handshaker.h
  # "third_party/quiche/src/quic/core/quic_crypto_server_stream.cc
  # "third_party/quiche/src/quic/core/quic_crypto_server_stream.h
  # "third_party/quiche/src/quic/core/quic_crypto_stream.cc
  # "third_party/quiche/src/quic/core/quic_crypto_stream.h
  # "third_party/quiche/src/quic/core/quic_data_reader.cc
  # "third_party/quiche/src/quic/core/quic_data_reader.h
  # "third_party/quiche/src/quic/core/quic_data_writer.cc
  # "third_party/quiche/src/quic/core/quic_data_writer.h
  # "third_party/quiche/src/quic/core/quic_flow_controller.cc
  # "third_party/quiche/src/quic/core/quic_flow_controller.h
  # "third_party/quiche/src/quic/core/quic_framer.cc
  # "third_party/quiche/src/quic/core/quic_framer.h
  # "third_party/quiche/src/quic/core/quic_interval.h
  # "third_party/quiche/src/quic/core/quic_interval_set.h
  # "third_party/quiche/src/quic/core/quic_lru_cache.h
  # "third_party/quiche/src/quic/core/quic_one_block_arena.h
  # "third_party/quiche/src/quic/core/quic_packet_creator.cc
  # "third_party/quiche/src/quic/core/quic_packet_creator.h
  # "third_party/quiche/src/quic/core/quic_packet_generator.cc
  # "third_party/quiche/src/quic/core/quic_packet_generator.h
  # "third_party/quiche/src/quic/core/quic_packet_number.cc
  # "third_party/quiche/src/quic/core/quic_packet_number.h
  # "third_party/quiche/src/quic/core/quic_packet_writer.h
  # "third_party/quiche/src/quic/core/quic_packets.cc
  # "third_party/quiche/src/quic/core/quic_packets.h
  # "third_party/quiche/src/quic/core/quic_pending_retransmission.h
  # "third_party/quiche/src/quic/core/quic_received_packet_manager.cc
  # "third_party/quiche/src/quic/core/quic_received_packet_manager.h
  # "third_party/quiche/src/quic/core/quic_sent_packet_manager.cc
  # "third_party/quiche/src/quic/core/quic_sent_packet_manager.h
  # "third_party/quiche/src/quic/core/quic_server_id.cc
  # "third_party/quiche/src/quic/core/quic_server_id.h
  # "third_party/quiche/src/quic/core/quic_session.cc
  # "third_party/quiche/src/quic/core/quic_session.h
  # "third_party/quiche/src/quic/core/quic_simple_buffer_allocator.cc
  # "third_party/quiche/src/quic/core/quic_simple_buffer_allocator.h
  # "third_party/quiche/src/quic/core/quic_socket_address_coder.cc
  # "third_party/quiche/src/quic/core/quic_socket_address_coder.h
  # "third_party/quiche/src/quic/core/quic_stream.cc
  # "third_party/quiche/src/quic/core/quic_stream.h
  # "third_party/quiche/src/quic/core/quic_stream_frame_data_producer.h
  # "third_party/quiche/src/quic/core/quic_stream_id_manager.cc
  # "third_party/quiche/src/quic/core/quic_stream_id_manager.h
  # "third_party/quiche/src/quic/core/quic_stream_send_buffer.cc
  # "third_party/quiche/src/quic/core/quic_stream_send_buffer.h
  # "third_party/quiche/src/quic/core/quic_stream_sequencer.cc
  # "third_party/quiche/src/quic/core/quic_stream_sequencer.h
  # "third_party/quiche/src/quic/core/quic_stream_sequencer_buffer.cc
  # "third_party/quiche/src/quic/core/quic_stream_sequencer_buffer.h
  # "third_party/quiche/src/quic/core/quic_sustained_bandwidth_recorder.cc
  # "third_party/quiche/src/quic/core/quic_sustained_bandwidth_recorder.h
  # "third_party/quiche/src/quic/core/quic_tag.cc
  # "third_party/quiche/src/quic/core/quic_tag.h
  # "third_party/quiche/src/quic/core/quic_time.cc
  # "third_party/quiche/src/quic/core/quic_time.h
  # "third_party/quiche/src/quic/core/quic_transmission_info.cc
  # "third_party/quiche/src/quic/core/quic_transmission_info.h
  # "third_party/quiche/src/quic/core/quic_types.cc
  # "third_party/quiche/src/quic/core/quic_types.h
  # "third_party/quiche/src/quic/core/quic_unacked_packet_map.cc
  # "third_party/quiche/src/quic/core/quic_unacked_packet_map.h
  # "third_party/quiche/src/quic/core/quic_utils.cc
  # "third_party/quiche/src/quic/core/quic_utils.h
  # "third_party/quiche/src/quic/core/quic_version_manager.cc
  # "third_party/quiche/src/quic/core/quic_version_manager.h
  # "third_party/quiche/src/quic/core/quic_versions.cc
  # "third_party/quiche/src/quic/core/quic_versions.h
  # "third_party/quiche/src/quic/core/quic_write_blocked_list.cc
  # "third_party/quiche/src/quic/core/quic_write_blocked_list.h
  # "third_party/quiche/src/quic/core/session_notifier_interface.h
  # "third_party/quiche/src/quic/core/tls_client_handshaker.cc
  # "third_party/quiche/src/quic/core/tls_client_handshaker.h
  # "third_party/quiche/src/quic/core/tls_handshaker.cc
  # "third_party/quiche/src/quic/core/tls_handshaker.h
  # "third_party/quiche/src/quic/core/tls_server_handshaker.cc
  # "third_party/quiche/src/quic/core/tls_server_handshaker.h
  # "third_party/quiche/src/quic/core/uber_quic_stream_id_manager.cc
  # "third_party/quiche/src/quic/core/uber_quic_stream_id_manager.h
  # "third_party/quiche/src/quic/core/uber_received_packet_manager.cc
  # "third_party/quiche/src/quic/core/uber_received_packet_manager.h
  # "third_party/quiche/src/quic/platform/api/quic_aligned.h
  # "third_party/quiche/src/quic/platform/api/quic_arraysize.h
  # "third_party/quiche/src/quic/platform/api/quic_bug_tracker.h
  # "third_party/quiche/src/quic/platform/api/quic_cert_utils.h
  # "third_party/quiche/src/quic/platform/api/quic_client_stats.h
  # "third_party/quiche/src/quic/platform/api/quic_clock.cc
  # "third_party/quiche/src/quic/platform/api/quic_clock.h
  # "third_party/quiche/src/quic/platform/api/quic_containers.h
  # "third_party/quiche/src/quic/platform/api/quic_endian.h
  # "third_party/quiche/src/quic/platform/api/quic_error_code_wrappers.h
  # "third_party/quiche/src/quic/platform/api/quic_estimate_memory_usage.h
  # "third_party/quiche/src/quic/platform/api/quic_export.h
  # "third_party/quiche/src/quic/platform/api/quic_exported_stats.h
  # "third_party/quiche/src/quic/platform/api/quic_fallthrough.h
  # "third_party/quiche/src/quic/platform/api/quic_file_utils.cc
  # "third_party/quiche/src/quic/platform/api/quic_file_utils.h
  # "third_party/quiche/src/quic/platform/api/quic_flag_utils.h
  # "third_party/quiche/src/quic/platform/api/quic_flags.h
  # "third_party/quiche/src/quic/platform/api/quic_hostname_utils.cc
  # "third_party/quiche/src/quic/platform/api/quic_hostname_utils.h
  # "third_party/quiche/src/quic/platform/api/quic_iovec.h
  # "third_party/quiche/src/quic/platform/api/quic_ip_address.cc
  # "third_party/quiche/src/quic/platform/api/quic_ip_address.h
  # "third_party/quiche/src/quic/platform/api/quic_ip_address_family.h
  # "third_party/quiche/src/quic/platform/api/quic_logging.h
  # "third_party/quiche/src/quic/platform/api/quic_macros.h
  # "third_party/quiche/src/quic/platform/api/quic_map_util.h
  # "third_party/quiche/src/quic/platform/api/quic_mem_slice.h
  # "third_party/quiche/src/quic/platform/api/quic_mem_slice_span.h
  # "third_party/quiche/src/quic/platform/api/quic_mem_slice_storage.h
  # "third_party/quiche/src/quic/platform/api/quic_mutex.cc
  # "third_party/quiche/src/quic/platform/api/quic_mutex.h
  # "third_party/quiche/src/quic/platform/api/quic_pcc_sender.h
  # "third_party/quiche/src/quic/platform/api/quic_prefetch.h
  # "third_party/quiche/src/quic/platform/api/quic_ptr_util.h
  # "third_party/quiche/src/quic/platform/api/quic_reference_counted.h
  # "third_party/quiche/src/quic/platform/api/quic_server_stats.h
  # "third_party/quiche/src/quic/platform/api/quic_sleep.h
  # "third_party/quiche/src/quic/platform/api/quic_socket_address.cc
  # "third_party/quiche/src/quic/platform/api/quic_socket_address.h
  # "third_party/quiche/src/quic/platform/api/quic_stack_trace.h
  # "third_party/quiche/src/quic/platform/api/quic_str_cat.h
  # "third_party/quiche/src/quic/platform/api/quic_string_piece.h
  # "third_party/quiche/src/quic/platform/api/quic_string_utils.h
  # "third_party/quiche/src/quic/platform/api/quic_text_utils.h
  # "third_party/quiche/src/quic/platform/api/quic_thread.h
  # "third_party/quiche/src/quic/platform/api/quic_uint128.h
  # "third_party/quiche/src/spdy/core/hpack/hpack_constants.cc
  # "third_party/quiche/src/spdy/core/hpack/hpack_constants.h
  # "third_party/quiche/src/spdy/core/hpack/hpack_decoder_adapter.cc
  # "third_party/quiche/src/spdy/core/hpack/hpack_decoder_adapter.h
  # "third_party/quiche/src/spdy/core/hpack/hpack_encoder.cc
  # "third_party/quiche/src/spdy/core/hpack/hpack_encoder.h
  # "third_party/quiche/src/spdy/core/hpack/hpack_entry.cc
  # "third_party/quiche/src/spdy/core/hpack/hpack_entry.h
  # "third_party/quiche/src/spdy/core/hpack/hpack_header_table.cc
  # "third_party/quiche/src/spdy/core/hpack/hpack_header_table.h
  # "third_party/quiche/src/spdy/core/hpack/hpack_huffman_table.cc
  # "third_party/quiche/src/spdy/core/hpack/hpack_huffman_table.h
  # "third_party/quiche/src/spdy/core/hpack/hpack_output_stream.cc
  # "third_party/quiche/src/spdy/core/hpack/hpack_output_stream.h
  # "third_party/quiche/src/spdy/core/hpack/hpack_static_table.cc
  # "third_party/quiche/src/spdy/core/hpack/hpack_static_table.h
  # "third_party/quiche/src/spdy/core/http2_frame_decoder_adapter.cc
  # "third_party/quiche/src/spdy/core/http2_frame_decoder_adapter.h
  # "third_party/quiche/src/spdy/core/priority_write_scheduler.h
  # "third_party/quiche/src/spdy/core/spdy_alt_svc_wire_format.cc
  # "third_party/quiche/src/spdy/core/spdy_alt_svc_wire_format.h
  # "third_party/quiche/src/spdy/core/spdy_bitmasks.h
  # "third_party/quiche/src/spdy/core/spdy_frame_builder.cc
  # "third_party/quiche/src/spdy/core/spdy_frame_builder.h
  # "third_party/quiche/src/spdy/core/spdy_frame_reader.cc
  # "third_party/quiche/src/spdy/core/spdy_frame_reader.h
  # "third_party/quiche/src/spdy/core/spdy_framer.cc
  # "third_party/quiche/src/spdy/core/spdy_framer.h
  # "third_party/quiche/src/spdy/core/spdy_header_block.cc
  # "third_party/quiche/src/spdy/core/spdy_header_block.h
  # "third_party/quiche/src/spdy/core/spdy_headers_handler_interface.h
  # "third_party/quiche/src/spdy/core/spdy_pinnable_buffer_piece.cc
  # "third_party/quiche/src/spdy/core/spdy_pinnable_buffer_piece.h
  # "third_party/quiche/src/spdy/core/spdy_prefixed_buffer_reader.cc
  # "third_party/quiche/src/spdy/core/spdy_prefixed_buffer_reader.h
  # "third_party/quiche/src/spdy/core/spdy_protocol.cc
  # "third_party/quiche/src/spdy/core/spdy_protocol.h
  # "third_party/quiche/src/spdy/core/spdy_simple_arena.cc
  # "third_party/quiche/src/spdy/core/spdy_simple_arena.h
  # "third_party/quiche/src/spdy/core/write_scheduler.h
  # "third_party/quiche/src/spdy/core/zero_copy_output_buffer.h
  # "third_party/quiche/src/spdy/platform/api/spdy_arraysize.h
  # "third_party/quiche/src/spdy/platform/api/spdy_bug_tracker.h
  # "third_party/quiche/src/spdy/platform/api/spdy_containers.h
  # "third_party/quiche/src/spdy/platform/api/spdy_endianness_util.h
  # "third_party/quiche/src/spdy/platform/api/spdy_estimate_memory_usage.h
  # "third_party/quiche/src/spdy/platform/api/spdy_export.h
  # "third_party/quiche/src/spdy/platform/api/spdy_flags.h
  # "third_party/quiche/src/spdy/platform/api/spdy_logging.h
  # "third_party/quiche/src/spdy/platform/api/spdy_macros.h
  # "third_party/quiche/src/spdy/platform/api/spdy_mem_slice.h
  # "third_party/quiche/src/spdy/platform/api/spdy_ptr_util.h
  # "third_party/quiche/src/spdy/platform/api/spdy_string.h
  # "third_party/quiche/src/spdy/platform/api/spdy_string_piece.h
  # "third_party/quiche/src/spdy/platform/api/spdy_string_utils.h
  # "third_party/quiche/src/spdy/platform/api/spdy_unsafe_arena.h
  # "url_request/data_protocol_handler.cc
  # "url_request/data_protocol_handler.h
  # "url_request/redirect_info.cc
  # "url_request/redirect_info.h
  # "url_request/redirect_util.cc
  # "url_request/redirect_util.h
  # "url_request/report_sender.cc
  # "url_request/report_sender.h
  # "url_request/static_http_user_agent_settings.cc
  # "url_request/static_http_user_agent_settings.h
  # "url_request/url_fetcher.cc
  # "url_request/url_fetcher.h
  # "url_request/url_fetcher_core.cc
  # "url_request/url_fetcher_core.h
  # "url_request/url_fetcher_delegate.cc
  # "url_request/url_fetcher_delegate.h
  # "url_request/url_fetcher_factory.h
  # "url_request/url_fetcher_impl.cc
  # "url_request/url_fetcher_impl.h
  # "url_request/url_fetcher_response_writer.cc
  # "url_request/url_fetcher_response_writer.h
  # "url_request/url_range_request_job.cc
  # "url_request/url_range_request_job.h
  # "url_request/url_request.cc
  # "url_request/url_request.h
  # "url_request/url_request_context.cc
  # "url_request/url_request_context.h
  # "url_request/url_request_context_builder.cc
  # "url_request/url_request_context_builder.h
  # "url_request/url_request_context_getter.cc
  # "url_request/url_request_context_getter.h
  # "url_request/url_request_context_getter_observer.h
  # "url_request/url_request_context_storage.cc
  # "url_request/url_request_context_storage.h
  # "url_request/url_request_data_job.cc
  # "url_request/url_request_data_job.h
  # "url_request/url_request_error_job.cc
  # "url_request/url_request_error_job.h
  # "url_request/url_request_filter.cc
  # "url_request/url_request_filter.h
  # "url_request/url_request_http_job.cc
  # "url_request/url_request_http_job.h
  # "url_request/url_request_http_job_histogram.h
  # "url_request/url_request_intercepting_job_factory.cc
  # "url_request/url_request_intercepting_job_factory.h
  # "url_request/url_request_interceptor.cc
  # "url_request/url_request_interceptor.h
  # "url_request/url_request_job.cc
  # "url_request/url_request_job.h
  # "url_request/url_request_job_factory.cc
  # "url_request/url_request_job_factory.h
  # "url_request/url_request_job_factory_impl.cc
  # "url_request/url_request_job_factory_impl.h
  # "url_request/url_request_job_manager.cc
  # "url_request/url_request_job_manager.h
  # "url_request/url_request_netlog_params.cc
  # "url_request/url_request_netlog_params.h
  # "url_request/url_request_redirect_job.cc
  # "url_request/url_request_redirect_job.h
  # "url_request/url_request_simple_job.cc
  # "url_request/url_request_simple_job.h
  # "url_request/url_request_status.cc
  # "url_request/url_request_status.h
  # "url_request/url_request_test_job.cc
  # "url_request/url_request_test_job.h
  # "url_request/url_request_throttler_entry.cc
  # "url_request/url_request_throttler_entry.h
  # "url_request/url_request_throttler_entry_interface.h
  # "url_request/url_request_throttler_manager.cc
  # "url_request/url_request_throttler_manager.h
  # "url_request/view_cache_helper.cc
  # "url_request/view_cache_helper.h
  # "url_request/websocket_handshake_userdata_key.cc
  # "url_request/websocket_handshake_userdata_key.h
  #
  # !use_kerberos
  #
  # TODO # ${GNET_DIR}http/http_auth_handler_negotiate.cc
  #${GNET_DIR}http/http_auth_handler_negotiate.h
  #
  # is_posix || is_fuchsia
  #
  ${GNET_DIR}base/file_stream_context_posix.cc
  ${GNET_DIR}base/network_interfaces_posix.cc
  #"base/network_interfaces_posix.h
  # TODO # ${GNET_DIR}disk_cache/blockfile/file_posix.cc
  # TODO # ${GNET_DIR}disk_cache/cache_util_posix.cc
  # TODO # ${GNET_DIR}disk_cache/simple/simple_index_file_posix.cc
  # TODO # ${GNET_DIR}disk_cache/simple/simple_util_posix.cc
  # TODO # ${GNET_DIR}http/url_security_manager_posix.cc
  # TODO # ${GNET_DIR}socket/socket_posix.cc
  #"socket/socket_posix.h
  # TODO # ${GNET_DIR}socket/tcp_socket_posix.cc
  #"socket/tcp_socket_posix.h
  # TODO # ${GNET_DIR}socket/udp_socket_posix.cc
  #"socket/udp_socket_posix.h
  #
  # if (posix_avoid_mmap)
  #
  # TODO # ${GNET_DIR}disk_cache/blockfile/mapped_file_avoid_mmap_posix.cc
  #
  # !use_nss_certs
  #
  #${GNET_DIR}third_party/nss/ssl/cmpcert.cc
  #third_party/nss/ssl/cmpcert.h

)

add_library(GNET STATIC
  ${GNET_SOURCES}
)

target_link_libraries(GNET PUBLIC
  #${BASE_LIBRARIES}
  base
  GCRYPTO
  GURL
  # sql
  # protobuf
  # libnss or boringssl
  # libnspr
  # open-vcdiff
  #dynamic_annotations
)

set_property(TARGET GNET PROPERTY CXX_STANDARD 17)

target_include_directories(GNET PRIVATE
  ${GNET_DIR}
  ${BASE_DIR}
  ${GEN_COMBINED_DIR} # requires net/base/registry_controlled_domains/effective_tld_names-inc.cc
)

target_compile_definitions(GNET PRIVATE
  NET_DISABLE_BROTLI=1
  NET_IMPLEMENTATION=1
  #IS_NET_EXTRAS_IMPL
  #DLOPEN_KERBEROS
  #ENABLE_BUILT_IN_DNS
)
