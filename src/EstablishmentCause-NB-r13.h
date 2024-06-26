/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_EstablishmentCause_NB_r13_H_
#define	_EstablishmentCause_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EstablishmentCause_NB_r13 {
	EstablishmentCause_NB_r13_mt_Access	= 0,
	EstablishmentCause_NB_r13_mo_Signalling	= 1,
	EstablishmentCause_NB_r13_mo_Data	= 2,
	EstablishmentCause_NB_r13_mo_ExceptionData	= 3,
	EstablishmentCause_NB_r13_delayTolerantAccess_v1330	= 4,
	EstablishmentCause_NB_r13_spare3	= 5,
	EstablishmentCause_NB_r13_spare2	= 6,
	EstablishmentCause_NB_r13_spare1	= 7
} e_EstablishmentCause_NB_r13;

/* EstablishmentCause-NB-r13 */
typedef long	 EstablishmentCause_NB_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EstablishmentCause_NB_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EstablishmentCause_NB_r13;
extern const asn_INTEGER_specifics_t asn_SPC_EstablishmentCause_NB_r13_specs_1;
asn_struct_free_f EstablishmentCause_NB_r13_free;
asn_struct_print_f EstablishmentCause_NB_r13_print;
asn_constr_check_f EstablishmentCause_NB_r13_constraint;
ber_type_decoder_f EstablishmentCause_NB_r13_decode_ber;
der_type_encoder_f EstablishmentCause_NB_r13_encode_der;
xer_type_decoder_f EstablishmentCause_NB_r13_decode_xer;
xer_type_encoder_f EstablishmentCause_NB_r13_encode_xer;
oer_type_decoder_f EstablishmentCause_NB_r13_decode_oer;
oer_type_encoder_f EstablishmentCause_NB_r13_encode_oer;
per_type_decoder_f EstablishmentCause_NB_r13_decode_uper;
per_type_encoder_f EstablishmentCause_NB_r13_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EstablishmentCause_NB_r13_H_ */
#include <asn_internal.h>
