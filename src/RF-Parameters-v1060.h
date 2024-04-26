/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_RF_Parameters_v1060_H_
#define	_RF_Parameters_v1060_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandCombinationExt-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RF-Parameters-v1060 */
typedef struct RF_Parameters_v1060 {
	SupportedBandCombinationExt_r10_t	 supportedBandCombinationExt_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1060_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1060;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1060_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v1060_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_v1060_H_ */
#include <asn_internal.h>