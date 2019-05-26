﻿/*
 * Copyright 2016 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef PNGPREFIX_H
#define PNGPREFIX_H

/*
 * This is necessary to build multiple copies of libpng.  We need this while pdfium has
 * its own copy of libpng.
 */

#if defined(__TODO__)

#define png_access_version_number cr_png_access_version_number
#define png_app_error cr_png_app_error
#define png_app_warning cr_png_app_warning
#define png_ascii_from_fixed cr_png_ascii_from_fixed
#define png_ascii_from_fp cr_png_ascii_from_fp
#define png_benign_error cr_png_benign_error
#define png_build_gamma_table cr_png_build_gamma_table
#define png_build_grayscale_palette cr_png_build_grayscale_palette
#define png_calculate_crc cr_png_calculate_crc
#define png_calloc cr_png_calloc
#define png_check_IHDR cr_png_check_IHDR
#define png_check_chunk_length cr_png_check_chunk_length
#define png_check_chunk_name cr_png_check_chunk_name
#define png_check_fp_number cr_png_check_fp_number
#define png_check_fp_string cr_png_check_fp_string
#define png_check_keyword cr_png_check_keyword
#define png_chunk_benign_error cr_png_chunk_benign_error
#define png_chunk_error cr_png_chunk_error
#define png_chunk_report cr_png_chunk_report
#define png_chunk_unknown_handling cr_png_chunk_unknown_handling
#define png_chunk_warning cr_png_chunk_warning
#define png_colorspace_set_ICC cr_png_colorspace_set_ICC
#define png_colorspace_set_chromaticities cr_png_colorspace_set_chromaticities
#define png_colorspace_set_endpoints cr_png_colorspace_set_endpoints
#define png_colorspace_set_gamma cr_png_colorspace_set_gamma
#define png_colorspace_set_rgb_coefficients cr_png_colorspace_set_rgb_coefficients
#define png_colorspace_set_sRGB cr_png_colorspace_set_sRGB
#define png_colorspace_sync cr_png_colorspace_sync
#define png_colorspace_sync_info cr_png_colorspace_sync_info
#define png_combine_row cr_png_combine_row
#define png_compress_IDAT cr_png_compress_IDAT
#define png_convert_from_struct_tm cr_png_convert_from_struct_tm
#define png_convert_from_time_t cr_png_convert_from_time_t
#define png_convert_to_rfc1123 cr_png_convert_to_rfc1123
#define png_convert_to_rfc1123_buffer cr_png_convert_to_rfc1123_buffer
#define png_crc_error cr_png_crc_error
#define png_crc_finish cr_png_crc_finish
#define png_crc_read cr_png_crc_read
#define png_create_info_struct cr_png_create_info_struct
#define png_create_png_struct cr_png_create_png_struct
#define png_create_read_struct cr_png_create_read_struct
#define png_create_read_struct_2 cr_png_create_read_struct_2
#define png_create_write_struct cr_png_create_write_struct
#define png_create_write_struct_2 cr_png_create_write_struct_2
#define png_data_freer cr_png_data_freer
#define png_default_flush cr_png_default_flush
#define png_default_read_data cr_png_default_read_data
#define png_default_write_data cr_png_default_write_data
#define png_destroy_gamma_table cr_png_destroy_gamma_table
#define png_destroy_info_struct cr_png_destroy_info_struct
#define png_destroy_png_struct cr_png_destroy_png_struct
#define png_destroy_read_struct cr_png_destroy_read_struct
#define png_destroy_write_struct cr_png_destroy_write_struct
#define png_do_bgr cr_png_do_bgr
#define png_do_check_palette_indexes cr_png_do_check_palette_indexes
#define png_do_chop cr_png_do_chop
#define png_do_compose cr_png_do_compose
#define png_do_encode_alpha cr_png_do_encode_alpha
#define png_do_expand cr_png_do_expand
#define png_do_expand_16 cr_png_do_expand_16
#define png_do_expand_palette cr_png_do_expand_palette
#define png_do_expand_palette_rgb8_neon cr_png_do_expand_palette_rgb8_neon
#define png_do_expand_palette_rgba8_neon cr_png_do_expand_palette_rgba8_neon
#define png_do_gamma cr_png_do_gamma
#define png_do_gray_to_rgb cr_png_do_gray_to_rgb
#define png_do_invert cr_png_do_invert
#define png_do_pack cr_png_do_pack
#define png_do_packswap cr_png_do_packswap
#define png_do_quantize cr_png_do_quantize
#define png_do_read_filler cr_png_do_read_filler
#define png_do_read_interlace cr_png_do_read_interlace
#define png_do_read_intrapixel cr_png_do_read_intrapixel
#define png_do_read_invert_alpha cr_png_do_read_invert_alpha
#define png_do_read_swap_alpha cr_png_do_read_swap_alpha
#define png_do_read_transformations cr_png_do_read_transformations
#define png_do_rgb_to_gray cr_png_do_rgb_to_gray
#define png_do_scale_16_to_8 cr_png_do_scale_16_to_8
#define png_do_shift cr_png_do_shift
#define png_do_strip_channel cr_png_do_strip_channel
#define png_do_swap cr_png_do_swap
#define png_do_unpack cr_png_do_unpack
#define png_do_unshift cr_png_do_unshift
#define png_do_write_interlace cr_png_do_write_interlace
#define png_do_write_intrapixel cr_png_do_write_intrapixel
#define png_do_write_invert_alpha cr_png_do_write_invert_alpha
#define png_do_write_swap_alpha cr_png_do_write_swap_alpha
#define png_do_write_transformations cr_png_do_write_transformations
#define png_error cr_png_error
#define png_fixed cr_png_fixed
#define png_fixed_error cr_png_fixed_error
#define png_flush cr_png_flush
#define png_format_number cr_png_format_number
#define png_formatted_warning cr_png_formatted_warning
#define png_free cr_png_free
#define png_free_buffer_list cr_png_free_buffer_list
#define png_free_data cr_png_free_data
#define png_free_default cr_png_free_default
#define png_free_jmpbuf cr_png_free_jmpbuf
#define png_gamma_16bit_correct cr_png_gamma_16bit_correct
#define png_gamma_8bit_correct cr_png_gamma_8bit_correct
#define png_gamma_correct cr_png_gamma_correct
#define png_gamma_significant cr_png_gamma_significant
#define png_get_IHDR cr_png_get_IHDR
#define png_get_PLTE cr_png_get_PLTE
#define png_get_bKGD cr_png_get_bKGD
#define png_get_bit_depth cr_png_get_bit_depth
#define png_get_cHRM cr_png_get_cHRM
#define png_get_cHRM_XYZ cr_png_get_cHRM_XYZ
#define png_get_cHRM_XYZ_fixed cr_png_get_cHRM_XYZ_fixed
#define png_get_cHRM_fixed cr_png_get_cHRM_fixed
#define png_get_channels cr_png_get_channels
#define png_get_chunk_cache_max cr_png_get_chunk_cache_max
#define png_get_chunk_malloc_max cr_png_get_chunk_malloc_max
#define png_get_color_type cr_png_get_color_type
#define png_get_compression_buffer_size cr_png_get_compression_buffer_size
#define png_get_compression_type cr_png_get_compression_type
#define png_get_copyright cr_png_get_copyright
#define png_get_current_pass_number cr_png_get_current_pass_number
#define png_get_current_row_number cr_png_get_current_row_number
#define png_get_eXIf cr_png_get_eXIf
#define png_get_eXIf_1 cr_png_get_eXIf_1
#define png_get_error_ptr cr_png_get_error_ptr
#define png_get_filter_type cr_png_get_filter_type
#define png_get_gAMA cr_png_get_gAMA
#define png_get_gAMA_fixed cr_png_get_gAMA_fixed
#define png_get_hIST cr_png_get_hIST
#define png_get_header_ver cr_png_get_header_ver
#define png_get_header_version cr_png_get_header_version
#define png_get_iCCP cr_png_get_iCCP
#define png_get_image_height cr_png_get_image_height
#define png_get_image_width cr_png_get_image_width
#define png_get_int_32 cr_png_get_int_32
#define png_get_interlace_type cr_png_get_interlace_type
#define png_get_io_chunk_type cr_png_get_io_chunk_type
#define png_get_io_ptr cr_png_get_io_ptr
#define png_get_io_state cr_png_get_io_state
#define png_get_libpng_ver cr_png_get_libpng_ver
#define png_get_mem_ptr cr_png_get_mem_ptr
#define png_get_oFFs cr_png_get_oFFs
#define png_get_pCAL cr_png_get_pCAL
#define png_get_pHYs cr_png_get_pHYs
#define png_get_pHYs_dpi cr_png_get_pHYs_dpi
#define png_get_palette_max cr_png_get_palette_max
#define png_get_pixel_aspect_ratio cr_png_get_pixel_aspect_ratio
#define png_get_pixel_aspect_ratio_fixed cr_png_get_pixel_aspect_ratio_fixed
#define png_get_pixels_per_inch cr_png_get_pixels_per_inch
#define png_get_pixels_per_meter cr_png_get_pixels_per_meter
#define png_get_progressive_ptr cr_png_get_progressive_ptr
#define png_get_rgb_to_gray_status cr_png_get_rgb_to_gray_status
#define png_get_rowbytes cr_png_get_rowbytes
#define png_get_rows cr_png_get_rows
#define png_get_sBIT cr_png_get_sBIT
#define png_get_sCAL cr_png_get_sCAL
#define png_get_sCAL_fixed cr_png_get_sCAL_fixed
#define png_get_sCAL_s cr_png_get_sCAL_s
#define png_get_sPLT cr_png_get_sPLT
#define png_get_sRGB cr_png_get_sRGB
#define png_get_signature cr_png_get_signature
#define png_get_tIME cr_png_get_tIME
#define png_get_tRNS cr_png_get_tRNS
#define png_get_text cr_png_get_text
#define png_get_uint_16 cr_png_get_uint_16
#define png_get_uint_31 cr_png_get_uint_31
#define png_get_uint_32 cr_png_get_uint_32
#define png_get_unknown_chunks cr_png_get_unknown_chunks
#define png_get_user_chunk_ptr cr_png_get_user_chunk_ptr
#define png_get_user_height_max cr_png_get_user_height_max
#define png_get_user_transform_ptr cr_png_get_user_transform_ptr
#define png_get_user_width_max cr_png_get_user_width_max
#define png_get_valid cr_png_get_valid
#define png_get_x_offset_inches cr_png_get_x_offset_inches
#define png_get_x_offset_inches_fixed cr_png_get_x_offset_inches_fixed
#define png_get_x_offset_microns cr_png_get_x_offset_microns
#define png_get_x_offset_pixels cr_png_get_x_offset_pixels
#define png_get_x_pixels_per_inch cr_png_get_x_pixels_per_inch
#define png_get_x_pixels_per_meter cr_png_get_x_pixels_per_meter
#define png_get_y_offset_inches cr_png_get_y_offset_inches
#define png_get_y_offset_inches_fixed cr_png_get_y_offset_inches_fixed
#define png_get_y_offset_microns cr_png_get_y_offset_microns
#define png_get_y_offset_pixels cr_png_get_y_offset_pixels
#define png_get_y_pixels_per_inch cr_png_get_y_pixels_per_inch
#define png_get_y_pixels_per_meter cr_png_get_y_pixels_per_meter
#define png_handle_IEND cr_png_handle_IEND
#define png_handle_IHDR cr_png_handle_IHDR
#define png_handle_PLTE cr_png_handle_PLTE
#define png_handle_as_unknown cr_png_handle_as_unknown
#define png_handle_bKGD cr_png_handle_bKGD
#define png_handle_cHRM cr_png_handle_cHRM
#define png_handle_gAMA cr_png_handle_gAMA
#define png_handle_hIST cr_png_handle_hIST
#define png_handle_iCCP cr_png_handle_iCCP
#define png_handle_iTXt cr_png_handle_iTXt
#define png_handle_oFFs cr_png_handle_oFFs
#define png_handle_pCAL cr_png_handle_pCAL
#define png_handle_pHYs cr_png_handle_pHYs
#define png_handle_sBIT cr_png_handle_sBIT
#define png_handle_sCAL cr_png_handle_sCAL
#define png_handle_sPLT cr_png_handle_sPLT
#define png_handle_sRGB cr_png_handle_sRGB
#define png_handle_tEXt cr_png_handle_tEXt
#define png_handle_tIME cr_png_handle_tIME
#define png_handle_tRNS cr_png_handle_tRNS
#define png_handle_unknown cr_png_handle_unknown
#define png_handle_zTXt cr_png_handle_zTXt
#define png_icc_check_header cr_png_icc_check_header
#define png_icc_check_length cr_png_icc_check_length
#define png_icc_check_tag_table cr_png_icc_check_tag_table
#define png_icc_set_sRGB cr_png_icc_set_sRGB
#define png_image_begin_read_from_file cr_png_image_begin_read_from_file
#define png_image_begin_read_from_memory cr_png_image_begin_read_from_memory
#define png_image_begin_read_from_stdio cr_png_image_begin_read_from_stdio
#define png_image_error cr_png_image_error
#define png_image_finish_read cr_png_image_finish_read
#define png_image_free cr_png_image_free
#define png_image_write_to_file cr_png_image_write_to_file
#define png_image_write_to_memory cr_png_image_write_to_memory
#define png_image_write_to_stdio cr_png_image_write_to_stdio
#define png_info_init_3 cr_png_info_init_3
#define png_init_filter_functions_neon cr_png_init_filter_functions_neon
#define png_init_filter_functions_sse2 cr_png_init_filter_functions_sse2
#define png_init_io cr_png_init_io
#define png_init_read_transformations cr_png_init_read_transformations
#define png_longjmp cr_png_longjmp
#define png_malloc cr_png_malloc
#define png_malloc_array cr_png_malloc_array
#define png_malloc_base cr_png_malloc_base
#define png_malloc_default cr_png_malloc_default
#define png_malloc_warn cr_png_malloc_warn
#define png_muldiv cr_png_muldiv
#define png_muldiv_warn cr_png_muldiv_warn
#define png_permit_mng_features cr_png_permit_mng_features
#define png_process_IDAT_data cr_png_process_IDAT_data
#define png_process_data cr_png_process_data
#define png_process_data_pause cr_png_process_data_pause
#define png_process_data_skip cr_png_process_data_skip
#define png_process_some_data cr_png_process_some_data
#define png_progressive_combine_row cr_png_progressive_combine_row
#define png_push_check_crc cr_png_push_check_crc
#define png_push_crc_finish cr_png_push_crc_finish
#define png_push_crc_skip cr_png_push_crc_skip
#define png_push_fill_buffer cr_png_push_fill_buffer
#define png_push_handle_iTXt cr_png_push_handle_iTXt
#define png_push_handle_tEXt cr_png_push_handle_tEXt
#define png_push_handle_unknown cr_png_push_handle_unknown
#define png_push_handle_zTXt cr_png_push_handle_zTXt
#define png_push_have_end cr_png_push_have_end
#define png_push_have_info cr_png_push_have_info
#define png_push_have_row cr_png_push_have_row
#define png_push_process_row cr_png_push_process_row
#define png_push_read_IDAT cr_png_push_read_IDAT
#define png_push_read_chunk cr_png_push_read_chunk
#define png_push_read_end cr_png_push_read_end
#define png_push_read_iTXt cr_png_push_read_iTXt
#define png_push_read_sig cr_png_push_read_sig
#define png_push_read_tEXt cr_png_push_read_tEXt
#define png_push_read_zTXt cr_png_push_read_zTXt
#define png_push_restore_buffer cr_png_push_restore_buffer
#define png_push_save_buffer cr_png_push_save_buffer
#define png_read_IDAT_data cr_png_read_IDAT_data
#define png_read_chunk_header cr_png_read_chunk_header
#define png_read_data cr_png_read_data
#define png_read_end cr_png_read_end
#define png_read_filter_row cr_png_read_filter_row
#define png_read_filter_row_avg3_neon cr_png_read_filter_row_avg3_neon
#define png_read_filter_row_avg3_sse2 cr_png_read_filter_row_avg3_sse2
#define png_read_filter_row_avg4_neon cr_png_read_filter_row_avg4_neon
#define png_read_filter_row_avg4_sse2 cr_png_read_filter_row_avg4_sse2
#define png_read_filter_row_paeth3_neon cr_png_read_filter_row_paeth3_neon
#define png_read_filter_row_paeth3_sse2 cr_png_read_filter_row_paeth3_sse2
#define png_read_filter_row_paeth4_neon cr_png_read_filter_row_paeth4_neon
#define png_read_filter_row_paeth4_sse2 cr_png_read_filter_row_paeth4_sse2
#define png_read_filter_row_sub3_neon cr_png_read_filter_row_sub3_neon
#define png_read_filter_row_sub3_sse2 cr_png_read_filter_row_sub3_sse2
#define png_read_filter_row_sub4_neon cr_png_read_filter_row_sub4_neon
#define png_read_filter_row_sub4_sse2 cr_png_read_filter_row_sub4_sse2
#define png_read_filter_row_up_neon cr_png_read_filter_row_up_neon
#define png_read_finish_IDAT cr_png_read_finish_IDAT
#define png_read_finish_row cr_png_read_finish_row
#define png_read_image cr_png_read_image
#define png_read_info cr_png_read_info
#define png_read_png cr_png_read_png
#define png_read_push_finish_row cr_png_read_push_finish_row
#define png_read_row cr_png_read_row
#define png_read_rows cr_png_read_rows
#define png_read_sig cr_png_read_sig
#define png_read_start_row cr_png_read_start_row
#define png_read_transform_info cr_png_read_transform_info
#define png_read_update_info cr_png_read_update_info
#define png_realloc_array cr_png_realloc_array
#define png_reciprocal cr_png_reciprocal
#define png_reciprocal2 cr_png_reciprocal2
#define png_reset_crc cr_png_reset_crc
#define png_reset_zstream cr_png_reset_zstream
#define png_riffle_palette_neon cr_png_riffle_palette_neon
#define png_sRGB_base cr_png_sRGB_base
#define png_sRGB_delta cr_png_sRGB_delta
#define png_sRGB_table cr_png_sRGB_table
#define png_safe_error cr_png_safe_error
#define png_safe_execute cr_png_safe_execute
#define png_safe_warning cr_png_safe_warning
#define png_safecat cr_png_safecat
#define png_save_int_32 cr_png_save_int_32
#define png_save_uint_16 cr_png_save_uint_16
#define png_save_uint_32 cr_png_save_uint_32
#define png_set_IHDR cr_png_set_IHDR
#define png_set_PLTE cr_png_set_PLTE
#define png_set_add_alpha cr_png_set_add_alpha
#define png_set_alpha_mode cr_png_set_alpha_mode
#define png_set_alpha_mode_fixed cr_png_set_alpha_mode_fixed
#define png_set_bKGD cr_png_set_bKGD
#define png_set_background cr_png_set_background
#define png_set_background_fixed cr_png_set_background_fixed
#define png_set_benign_errors cr_png_set_benign_errors
#define png_set_bgr cr_png_set_bgr
#define png_set_cHRM cr_png_set_cHRM
#define png_set_cHRM_XYZ cr_png_set_cHRM_XYZ
#define png_set_cHRM_XYZ_fixed cr_png_set_cHRM_XYZ_fixed
#define png_set_cHRM_fixed cr_png_set_cHRM_fixed
#define png_set_check_for_invalid_index cr_png_set_check_for_invalid_index
#define png_set_chunk_cache_max cr_png_set_chunk_cache_max
#define png_set_chunk_malloc_max cr_png_set_chunk_malloc_max
#define png_set_compression_buffer_size cr_png_set_compression_buffer_size
#define png_set_compression_level cr_png_set_compression_level
#define png_set_compression_mem_level cr_png_set_compression_mem_level
#define png_set_compression_method cr_png_set_compression_method
#define png_set_compression_strategy cr_png_set_compression_strategy
#define png_set_compression_window_bits cr_png_set_compression_window_bits
#define png_set_crc_action cr_png_set_crc_action
#define png_set_eXIf cr_png_set_eXIf
#define png_set_eXIf_1 cr_png_set_eXIf_1
#define png_set_error_fn cr_png_set_error_fn
#define png_set_expand cr_png_set_expand
#define png_set_expand_16 cr_png_set_expand_16
#define png_set_expand_gray_1_2_4_to_8 cr_png_set_expand_gray_1_2_4_to_8
#define png_set_filler cr_png_set_filler
#define png_set_filter cr_png_set_filter
#define png_set_filter_heuristics cr_png_set_filter_heuristics
#define png_set_filter_heuristics_fixed cr_png_set_filter_heuristics_fixed
#define png_set_flush cr_png_set_flush
#define png_set_gAMA cr_png_set_gAMA
#define png_set_gAMA_fixed cr_png_set_gAMA_fixed
#define png_set_gamma cr_png_set_gamma
#define png_set_gamma_fixed cr_png_set_gamma_fixed
#define png_set_gray_to_rgb cr_png_set_gray_to_rgb
#define png_set_hIST cr_png_set_hIST
#define png_set_iCCP cr_png_set_iCCP
#define png_set_interlace_handling cr_png_set_interlace_handling
#define png_set_invalid cr_png_set_invalid
#define png_set_invert_alpha cr_png_set_invert_alpha
#define png_set_invert_mono cr_png_set_invert_mono
#define png_set_keep_unknown_chunks cr_png_set_keep_unknown_chunks
#define png_set_longjmp_fn cr_png_set_longjmp_fn
#define png_set_mem_fn cr_png_set_mem_fn
#define png_set_oFFs cr_png_set_oFFs
#define png_set_option cr_png_set_option
#define png_set_pCAL cr_png_set_pCAL
#define png_set_pHYs cr_png_set_pHYs
#define png_set_packing cr_png_set_packing
#define png_set_packswap cr_png_set_packswap
#define png_set_palette_to_rgb cr_png_set_palette_to_rgb
#define png_set_progressive_read_fn cr_png_set_progressive_read_fn
#define png_set_quantize cr_png_set_quantize
#define png_set_read_fn cr_png_set_read_fn
#define png_set_read_status_fn cr_png_set_read_status_fn
#define png_set_read_user_chunk_fn cr_png_set_read_user_chunk_fn
#define png_set_read_user_transform_fn cr_png_set_read_user_transform_fn
#define png_set_rgb_to_gray cr_png_set_rgb_to_gray
#define png_set_rgb_to_gray_fixed cr_png_set_rgb_to_gray_fixed
#define png_set_rows cr_png_set_rows
#define png_set_sBIT cr_png_set_sBIT
#define png_set_sCAL cr_png_set_sCAL
#define png_set_sCAL_fixed cr_png_set_sCAL_fixed
#define png_set_sCAL_s cr_png_set_sCAL_s
#define png_set_sPLT cr_png_set_sPLT
#define png_set_sRGB cr_png_set_sRGB
#define png_set_sRGB_gAMA_and_cHRM cr_png_set_sRGB_gAMA_and_cHRM
#define png_set_scale_16 cr_png_set_scale_16
#define png_set_shift cr_png_set_shift
#define png_set_sig_bytes cr_png_set_sig_bytes
#define png_set_strip_16 cr_png_set_strip_16
#define png_set_strip_alpha cr_png_set_strip_alpha
#define png_set_swap cr_png_set_swap
#define png_set_swap_alpha cr_png_set_swap_alpha
#define png_set_tIME cr_png_set_tIME
#define png_set_tRNS cr_png_set_tRNS
#define png_set_tRNS_to_alpha cr_png_set_tRNS_to_alpha
#define png_set_text cr_png_set_text
#define png_set_text_2 cr_png_set_text_2
#define png_set_text_compression_level cr_png_set_text_compression_level
#define png_set_text_compression_mem_level cr_png_set_text_compression_mem_level
#define png_set_text_compression_method cr_png_set_text_compression_method
#define png_set_text_compression_strategy cr_png_set_text_compression_strategy
#define png_set_text_compression_window_bits cr_png_set_text_compression_window_bits
#define png_set_unknown_chunk_location cr_png_set_unknown_chunk_location
#define png_set_unknown_chunks cr_png_set_unknown_chunks
#define png_set_user_limits cr_png_set_user_limits
#define png_set_user_transform_info cr_png_set_user_transform_info
#define png_set_write_fn cr_png_set_write_fn
#define png_set_write_status_fn cr_png_set_write_status_fn
#define png_set_write_user_transform_fn cr_png_set_write_user_transform_fn
#define png_sig_cmp cr_png_sig_cmp
#define png_start_read_image cr_png_start_read_image
#define png_user_version_check cr_png_user_version_check
#define png_warning cr_png_warning
#define png_warning_parameter cr_png_warning_parameter
#define png_warning_parameter_signed cr_png_warning_parameter_signed
#define png_warning_parameter_unsigned cr_png_warning_parameter_unsigned
#define png_write_IEND cr_png_write_IEND
#define png_write_IHDR cr_png_write_IHDR
#define png_write_PLTE cr_png_write_PLTE
#define png_write_bKGD cr_png_write_bKGD
#define png_write_cHRM_fixed cr_png_write_cHRM_fixed
#define png_write_chunk cr_png_write_chunk
#define png_write_chunk_data cr_png_write_chunk_data
#define png_write_chunk_end cr_png_write_chunk_end
#define png_write_chunk_start cr_png_write_chunk_start
#define png_write_data cr_png_write_data
#define png_write_end cr_png_write_end
#define png_write_find_filter cr_png_write_find_filter
#define png_write_finish_row cr_png_write_finish_row
#define png_write_flush cr_png_write_flush
#define png_write_gAMA_fixed cr_png_write_gAMA_fixed
#define png_write_hIST cr_png_write_hIST
#define png_write_iCCP cr_png_write_iCCP
#define png_write_iTXt cr_png_write_iTXt
#define png_write_image cr_png_write_image
#define png_write_info cr_png_write_info
#define png_write_info_before_PLTE cr_png_write_info_before_PLTE
#define png_write_oFFs cr_png_write_oFFs
#define png_write_pCAL cr_png_write_pCAL
#define png_write_pHYs cr_png_write_pHYs
#define png_write_png cr_png_write_png
#define png_write_row cr_png_write_row
#define png_write_rows cr_png_write_rows
#define png_write_sBIT cr_png_write_sBIT
#define png_write_sCAL_s cr_png_write_sCAL_s
#define png_write_sPLT cr_png_write_sPLT
#define png_write_sRGB cr_png_write_sRGB
#define png_write_sig cr_png_write_sig
#define png_write_start_row cr_png_write_start_row
#define png_write_tEXt cr_png_write_tEXt
#define png_write_tIME cr_png_write_tIME
#define png_write_tRNS cr_png_write_tRNS
#define png_write_zTXt cr_png_write_zTXt
#define png_zalloc cr_png_zalloc
#define png_zfree cr_png_zfree
#define png_zlib_inflate cr_png_zlib_inflate
#define png_zstream_error cr_png_zstream_error
#endif // __TODO__

#endif  // PNGPREFIX_H
