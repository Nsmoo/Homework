/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#ifndef	_VarLogMeasConfig_r11_H_
#define	_VarLogMeasConfig_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LoggingDuration-r10.h"
#include "LoggingInterval-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AreaConfiguration_r10;
struct AreaConfiguration_v1130;

/* VarLogMeasConfig-r11 */
typedef struct VarLogMeasConfig_r11 {
	struct AreaConfiguration_r10	*areaConfiguration_r10	/* OPTIONAL */;
	struct AreaConfiguration_v1130	*areaConfiguration_v1130	/* OPTIONAL */;
	LoggingDuration_r10_t	 loggingDuration_r10;
	LoggingInterval_r10_t	 loggingInterval_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarLogMeasConfig_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarLogMeasConfig_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AreaConfiguration-r10.h"
#include "AreaConfiguration-v1130.h"

#endif	/* _VarLogMeasConfig_r11_H_ */
#include <asn_internal.h>
