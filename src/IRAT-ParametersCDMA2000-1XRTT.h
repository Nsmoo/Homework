/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_IRAT_ParametersCDMA2000_1XRTT_H_
#define	_IRAT_ParametersCDMA2000_1XRTT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandList1XRTT.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersCDMA2000_1XRTT__tx_Config1XRTT {
	IRAT_ParametersCDMA2000_1XRTT__tx_Config1XRTT_single	= 0,
	IRAT_ParametersCDMA2000_1XRTT__tx_Config1XRTT_dual	= 1
} e_IRAT_ParametersCDMA2000_1XRTT__tx_Config1XRTT;
typedef enum IRAT_ParametersCDMA2000_1XRTT__rx_Config1XRTT {
	IRAT_ParametersCDMA2000_1XRTT__rx_Config1XRTT_single	= 0,
	IRAT_ParametersCDMA2000_1XRTT__rx_Config1XRTT_dual	= 1
} e_IRAT_ParametersCDMA2000_1XRTT__rx_Config1XRTT;

/* IRAT-ParametersCDMA2000-1XRTT */
typedef struct IRAT_ParametersCDMA2000_1XRTT {
	SupportedBandList1XRTT_t	 supportedBandList1XRTT;
	long	 tx_Config1XRTT;
	long	 rx_Config1XRTT;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersCDMA2000_1XRTT_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tx_Config1XRTT_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rx_Config1XRTT_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersCDMA2000_1XRTT;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersCDMA2000_1XRTT_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersCDMA2000_1XRTT_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersCDMA2000_1XRTT_H_ */
#include <asn_internal.h>