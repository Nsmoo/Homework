/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_I_RNTI_r15_H_
#define	_I_RNTI_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* I-RNTI-r15 */
typedef BIT_STRING_t	 I_RNTI_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_I_RNTI_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_I_RNTI_r15;
asn_struct_free_f I_RNTI_r15_free;
asn_struct_print_f I_RNTI_r15_print;
asn_constr_check_f I_RNTI_r15_constraint;
ber_type_decoder_f I_RNTI_r15_decode_ber;
der_type_encoder_f I_RNTI_r15_encode_der;
xer_type_decoder_f I_RNTI_r15_decode_xer;
xer_type_encoder_f I_RNTI_r15_encode_xer;
oer_type_decoder_f I_RNTI_r15_decode_oer;
oer_type_encoder_f I_RNTI_r15_encode_oer;
per_type_decoder_f I_RNTI_r15_decode_uper;
per_type_encoder_f I_RNTI_r15_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _I_RNTI_r15_H_ */
#include <asn_internal.h>