// Copyright (c) 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by the QUICHE Copybara export script.

QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_abort_qpack_on_stream_reset, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_accept_empty_stream_frame_with_no_fin, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_ack_delay_alarm_granularity, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_add_stream_info_to_idle_close_detail, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_allocate_stream_sequencer_buffer_blocks_on_demand, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_allow_client_enabled_bbr_v2, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_alps_include_scheme_in_origin, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_and_tls_allow_sni_without_dots, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_avoid_too_low_probe_bw_cwnd, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_fewer_startup_round_trips, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_can_send_ack_frequency, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_close_connection_with_too_many_outstanding_packets, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_connection_support_multiple_cids_v2, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_bursts, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_cwnd_and_pacing_gains, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_count_bytes_on_alternative_path_seperately, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_crypto_postpone_cert_validate_for_server, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_enable_5rto_blackhole_detection2, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_on_pto, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr_v2, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_delay_initial_ack, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_server_blackhole_detection, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_draft_29, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q043, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q046, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q050, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_t051, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_discard_initial_packet_with_key_dropped, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_do_not_synthesize_source_cid_for_short_header, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_donot_reset_ideal_next_packet_send_time, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_alps_client, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_alps_server, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_mtu_discovery_at_server, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_server_on_wire_ping, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_token_based_address_validation, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_version_rfcv1, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_encrypted_control_frames, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_encrypted_goaway, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_dispatcher_sent_error_code, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_key_update_on_first_packet, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_on_stream_reset, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_stateless_reset, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_willing_and_able_to_write2, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_h3_datagram, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_pass_path_response_to_validator, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_preempt_stream_data_with_handshake_packet, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_reject_unexpected_ietf_frame_types, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_require_handshake_confirmation, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_path_response2, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_timestamps, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_tls_crypto_error_code, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_server_reverse_validate_new_path2, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_single_ack_in_packet2, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_start_peer_migration_earlier, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_stateless_reset_faster_random, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_false, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_true, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_use_normalized_sni_for_cert_selectioon, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_use_per_handshaker_proof_source, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_unified_iw_options, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_unify_stop_sending, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_use_encryption_level_context, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_use_write_or_buffer_data_at_level, false)
QUIC_FLAG(FLAGS_quic_restart_flag_dont_fetch_quic_private_keys_from_leto, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_dispatcher_support_multiple_cid_per_connection_v2, true)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_offload_pacing_to_usps2, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_session_tickets_always_enabled, true)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_support_release_time_for_gso, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_false, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_true, true)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_time_wait_list_support_multiple_cid_v2, true)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_use_reference_counted_sesssion_map, true)
