// auto-generated by cxsdk.py
#include "cx_stubs.h"
#include "libcxng.h"
#include "cx_crc.h"
#include "cx_rsa.h"
#include "cx_hkdf.h"
#include "cx_hash.h"
#include "cx_rng.h"
#include "cx_rng_rfc6979.h"
#include "cx_ecfp.h"
#include "cx_sha256.h"
#include "cx_hmac.h"
#include "cx_pbkdf2.h"
#include "cx_blake2.h"
#include "cx_eddsa.h"
#include "cx_ripemd160.h"
#include "cx_selftests.h"
#include "cx_math.h"
#include "cx_ecdsa.h"
#include "cx_sha512.h"
#include "cx_utils.h"
#include "cx_ram.h"
#include "cx_sha3.h"
#include "cx_blake2b.h"

unsigned long __attribute((section ("._cx_exported_functions"))) cx_exported_functions[] = {
  [_NR_cx_aes_dec_block] = (unsigned long)cx_aes_dec_block,
  [_NR_cx_aes_enc_block] = (unsigned long)cx_aes_enc_block,
  [_NR_cx_aes_gcm_check_tag] = (unsigned long)cx_aes_gcm_check_tag,
  [_NR_cx_aes_gcm_decrypt_and_auth] = (unsigned long)cx_aes_gcm_decrypt_and_auth,
  [_NR_cx_aes_gcm_encrypt_and_tag] = (unsigned long)cx_aes_gcm_encrypt_and_tag,
  [_NR_cx_aes_gcm_finish] = (unsigned long)cx_aes_gcm_finish,
  [_NR_cx_aes_gcm_init] = (unsigned long)cx_aes_gcm_init,
  [_NR_cx_aes_gcm_set_key] = (unsigned long)cx_aes_gcm_set_key,
  [_NR_cx_aes_gcm_start] = (unsigned long)cx_aes_gcm_start,
  [_NR_cx_aes_gcm_update_aad] = (unsigned long)cx_aes_gcm_update_aad,
  [_NR_cx_aes_gcm_update] = (unsigned long)cx_aes_gcm_update,
  [_NR_cx_aes_init_key_no_throw] = (unsigned long)cx_aes_init_key_no_throw,
  [_NR_cx_aes_iv_no_throw] = (unsigned long)cx_aes_iv_no_throw,
  [_NR_cx_aes_no_throw] = (unsigned long)cx_aes_no_throw,
  [_NR_cx_blake2b] = (unsigned long)cx_blake2b,
  [_NR_cx_blake2b_final] = (unsigned long)cx_blake2b_final,
  [_NR_cx_blake2b_get_output_size] = (unsigned long)cx_blake2b_get_output_size,
  [_NR_cx_blake2b_init2_no_throw] = (unsigned long)cx_blake2b_init2_no_throw,
  [_NR_cx_blake2b_init_no_throw] = (unsigned long)cx_blake2b_init_no_throw,
  [_NR_cx_blake2b_update] = (unsigned long)cx_blake2b_update,
  [_NR_cx_cipher_enc_dec] = (unsigned long)cx_cipher_enc_dec,
  [_NR_cx_cipher_finish] = (unsigned long)cx_cipher_finish,
  [_NR_cx_cipher_init] = (unsigned long)cx_cipher_init,
  [_NR_cx_cipher_setiv] = (unsigned long)cx_cipher_setiv,
  [_NR_cx_cipher_setkey] = (unsigned long)cx_cipher_setkey,
  [_NR_cx_cipher_setup] = (unsigned long)cx_cipher_setup,
  [_NR_cx_cipher_set_padding] = (unsigned long)cx_cipher_set_padding,
  [_NR_cx_cipher_update] = (unsigned long)cx_cipher_update,
  [_NR_cx_crc16] = (unsigned long)cx_crc16,
  [_NR_cx_crc16_update] = (unsigned long)cx_crc16_update,
  [_NR_cx_crc32] = (unsigned long)cx_crc32,
  [_NR_cx_decode_coord] = (unsigned long)cx_decode_coord,
  [_NR_cx_des_dec_block] = (unsigned long)cx_des_dec_block,
  [_NR_cx_des_enc_block] = (unsigned long)cx_des_enc_block,
  [_NR_cx_des_init_key_no_throw] = (unsigned long)cx_des_init_key_no_throw,
  [_NR_cx_des_iv_no_throw] = (unsigned long)cx_des_iv_no_throw,
  [_NR_cx_des_no_throw] = (unsigned long)cx_des_no_throw,
  [_NR_cx_ecdh_no_throw] = (unsigned long)cx_ecdh_no_throw,
  [_NR_cx_ecdsa_sign_no_throw] = (unsigned long)cx_ecdsa_sign_no_throw,
  [_NR_cx_ecdsa_verify_no_throw] = (unsigned long)cx_ecdsa_verify_no_throw,
  [_NR_cx_ecfp_add_point_no_throw] = (unsigned long)cx_ecfp_add_point_no_throw,
  [_NR_cx_ecfp_decode_sig_der] = (unsigned long)cx_ecfp_decode_sig_der,
  [_NR_cx_ecfp_encode_sig_der] = (unsigned long)cx_ecfp_encode_sig_der,
  [_NR_cx_ecfp_generate_pair2_no_throw] = (unsigned long)cx_ecfp_generate_pair2_no_throw,
  [_NR_cx_ecfp_generate_pair_no_throw] = (unsigned long)cx_ecfp_generate_pair_no_throw,
  [_NR_cx_ecfp_init_private_key_no_throw] = (unsigned long)cx_ecfp_init_private_key_no_throw,
  [_NR_cx_ecfp_init_public_key_no_throw] = (unsigned long)cx_ecfp_init_public_key_no_throw,
  [_NR_cx_ecfp_scalar_mult_no_throw] = (unsigned long)cx_ecfp_scalar_mult_no_throw,
  [_NR_cx_ecschnorr_sign_no_throw] = (unsigned long)cx_ecschnorr_sign_no_throw,
  [_NR_cx_ecschnorr_verify] = (unsigned long)cx_ecschnorr_verify,
  [_NR_cx_eddsa_get_public_key_internal] = (unsigned long)cx_eddsa_get_public_key_internal,
  [_NR_cx_eddsa_get_public_key_no_throw] = (unsigned long)cx_eddsa_get_public_key_no_throw,
  [_NR_cx_eddsa_sign_no_throw] = (unsigned long)cx_eddsa_sign_no_throw,
  [_NR_cx_eddsa_verify_no_throw] = (unsigned long)cx_eddsa_verify_no_throw,
  [_NR_cx_edwards_compress_point_no_throw] = (unsigned long)cx_edwards_compress_point_no_throw,
  [_NR_cx_edwards_decompress_point_no_throw] = (unsigned long)cx_edwards_decompress_point_no_throw,
  [_NR_cx_encode_coord] = (unsigned long)cx_encode_coord,
  [_NR_cx_hash_final] = (unsigned long)cx_hash_final,
  [_NR_cx_hash_get_info] = (unsigned long)cx_hash_get_info,
  [_NR_cx_hash_get_size] = (unsigned long)cx_hash_get_size,
  [_NR_cx_hash_init] = (unsigned long)cx_hash_init,
  [_NR_cx_hash_init_ex] = (unsigned long)cx_hash_init_ex,
  [_NR_cx_hash_no_throw] = (unsigned long)cx_hash_no_throw,
  [_NR_cx_hash_ripemd160] = (unsigned long)cx_hash_ripemd160,
  [_NR_cx_hash_sha256] = (unsigned long)cx_hash_sha256,
  [_NR_cx_hash_sha512] = (unsigned long)cx_hash_sha512,
  [_NR_cx_hash_update] = (unsigned long)cx_hash_update,
  [_NR_cx_hkdf_expand] = (unsigned long)cx_hkdf_expand,
  [_NR_cx_hkdf_extract] = (unsigned long)cx_hkdf_extract,
  [_NR_cx_hmac_final] = (unsigned long)cx_hmac_final,
  [_NR_cx_hmac_init] = (unsigned long)cx_hmac_init,
  [_NR_cx_hmac_no_throw] = (unsigned long)cx_hmac_no_throw,
  [_NR_cx_hmac_ripemd160_init_no_throw] = (unsigned long)cx_hmac_ripemd160_init_no_throw,
  [_NR_cx_hmac_sha224_init] = (unsigned long)cx_hmac_sha224_init,
  [_NR_cx_hmac_sha256] = (unsigned long)cx_hmac_sha256,
  [_NR_cx_hmac_sha256_init_no_throw] = (unsigned long)cx_hmac_sha256_init_no_throw,
  [_NR_cx_hmac_sha384_init] = (unsigned long)cx_hmac_sha384_init,
  [_NR_cx_hmac_sha512] = (unsigned long)cx_hmac_sha512,
  [_NR_cx_hmac_sha512_init_no_throw] = (unsigned long)cx_hmac_sha512_init_no_throw,
  [_NR_cx_hmac_update] = (unsigned long)cx_hmac_update,
  [_NR_cx_keccak_init_no_throw] = (unsigned long)cx_keccak_init_no_throw,
  [_NR_cx_math_addm_no_throw] = (unsigned long)cx_math_addm_no_throw,
  [_NR_cx_math_add_no_throw] = (unsigned long)cx_math_add_no_throw,
  [_NR_cx_math_cmp_no_throw] = (unsigned long)cx_math_cmp_no_throw,
  [_NR_cx_math_invintm_no_throw] = (unsigned long)cx_math_invintm_no_throw,
  [_NR_cx_math_invprimem_no_throw] = (unsigned long)cx_math_invprimem_no_throw,
  [_NR_cx_math_is_prime_no_throw] = (unsigned long)cx_math_is_prime_no_throw,
  [_NR_cx_math_modm_no_throw] = (unsigned long)cx_math_modm_no_throw,
  [_NR_cx_math_multm_no_throw] = (unsigned long)cx_math_multm_no_throw,
  [_NR_cx_math_mult_no_throw] = (unsigned long)cx_math_mult_no_throw,
  [_NR_cx_math_next_prime_no_throw] = (unsigned long)cx_math_next_prime_no_throw,
  [_NR_cx_math_powm_no_throw] = (unsigned long)cx_math_powm_no_throw,
  [_NR_cx_math_subm_no_throw] = (unsigned long)cx_math_subm_no_throw,
  [_NR_cx_math_sub_no_throw] = (unsigned long)cx_math_sub_no_throw,
  [_NR_cx_memxor] = (unsigned long)cx_memxor,
  [_NR_cx_pbkdf2_hmac] = (unsigned long)cx_pbkdf2_hmac,
  [_NR_cx_pbkdf2_no_throw] = (unsigned long)cx_pbkdf2_no_throw,
  [_NR_cx_ripemd160_final] = (unsigned long)cx_ripemd160_final,
  [_NR_cx_ripemd160_init_no_throw] = (unsigned long)cx_ripemd160_init_no_throw,
  [_NR_cx_ripemd160_update] = (unsigned long)cx_ripemd160_update,
  [_NR_cx_rng_no_throw] = (unsigned long)cx_rng_no_throw,
  [_NR_cx_rng_rfc6979] = (unsigned long)cx_rng_rfc6979,
  [_NR_cx_rng_rfc6979_init] = (unsigned long)cx_rng_rfc6979_init,
  [_NR_cx_rng_rfc6979_next] = (unsigned long)cx_rng_rfc6979_next,
  [_NR_cx_rng_u32_range_func] = (unsigned long)cx_rng_u32_range_func,
  [_NR_cx_sha224_init_no_throw] = (unsigned long)cx_sha224_init_no_throw,
  [_NR_cx_sha256_final] = (unsigned long)cx_sha256_final,
  [_NR_cx_sha256_init_no_throw] = (unsigned long)cx_sha256_init_no_throw,
  [_NR_cx_sha256_update] = (unsigned long)cx_sha256_update,
  [_NR_cx_sha384_init_no_throw] = (unsigned long)cx_sha384_init_no_throw,
  [_NR_cx_sha3_final] = (unsigned long)cx_sha3_final,
  [_NR_cx_sha3_get_output_size] = (unsigned long)cx_sha3_get_output_size,
  [_NR_cx_sha3_init_no_throw] = (unsigned long)cx_sha3_init_no_throw,
  [_NR_cx_sha3_update] = (unsigned long)cx_sha3_update,
  [_NR_cx_sha3_xof_init_no_throw] = (unsigned long)cx_sha3_xof_init_no_throw,
  [_NR_cx_sha512_final] = (unsigned long)cx_sha512_final,
  [_NR_cx_sha512_init_no_throw] = (unsigned long)cx_sha512_init_no_throw,
  [_NR_cx_sha512_update] = (unsigned long)cx_sha512_update,
  [_NR_cx_shake128_init_no_throw] = (unsigned long)cx_shake128_init_no_throw,
  [_NR_cx_shake256_init_no_throw] = (unsigned long)cx_shake256_init_no_throw,
  [_NR_cx_swap_buffer32] = (unsigned long)cx_swap_buffer32,
  [_NR_cx_swap_buffer64] = (unsigned long)cx_swap_buffer64,
  [_NR_cx_swap_uint32] = (unsigned long)cx_swap_uint32,
  [_NR_cx_swap_uint64] = (unsigned long)cx_swap_uint64,
  [_NR_cx_x25519] = (unsigned long)cx_x25519,
  [_NR_cx_x448] = (unsigned long)cx_x448,
};
