/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_UECapabilityEnquiry_v1560_IEs_H_
#define	_UECapabilityEnquiry_v1560_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UECapabilityEnquiry-v1560-IEs */
typedef struct UECapabilityEnquiry_v1560_IEs {
	OCTET_STRING_t	*requestedCapabilityCommon_r15	/* OPTIONAL */;
	struct UECapabilityEnquiry_v1560_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_v1560_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityEnquiry_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityEnquiry_v1560_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_v1560_IEs_H_ */
#include <asn_internal.h>