/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_TDD_UE_Capability_NB_r15_H_
#define	_TDD_UE_Capability_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDD_UE_Capability_NB_r15__ue_Category_NB_r15 {
	TDD_UE_Capability_NB_r15__ue_Category_NB_r15_nb2	= 0
} e_TDD_UE_Capability_NB_r15__ue_Category_NB_r15;

/* Forward declarations */
struct PhyLayerParameters_NB_r13;
struct PhyLayerParameters_NB_v1430;
struct PhyLayerParameters_NB_v1530;

/* TDD-UE-Capability-NB-r15 */
typedef struct TDD_UE_Capability_NB_r15 {
	long	*ue_Category_NB_r15	/* OPTIONAL */;
	struct PhyLayerParameters_NB_r13	*phyLayerParametersRel13_r15	/* OPTIONAL */;
	struct PhyLayerParameters_NB_v1430	*phyLayerParametersRel14_r15	/* OPTIONAL */;
	struct PhyLayerParameters_NB_v1530	*phyLayerParameters_v1530	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_UE_Capability_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_Category_NB_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TDD_UE_Capability_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_TDD_UE_Capability_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_TDD_UE_Capability_NB_r15_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-NB-r13.h"
#include "PhyLayerParameters-NB-v1430.h"
#include "PhyLayerParameters-NB-v1530.h"

#endif	/* _TDD_UE_Capability_NB_r15_H_ */
#include <asn_internal.h>