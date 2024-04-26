/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src`
 */

#include "UEInformationResponse-r9-IEs.h"

static asn_TYPE_member_t asn_MBR_rach_Report_r9_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEInformationResponse_r9_IEs__rach_Report_r9, numberOfPreamblesSent_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfPreamblesSent_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfPreamblesSent-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEInformationResponse_r9_IEs__rach_Report_r9, contentionDetected_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"contentionDetected-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_rach_Report_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rach_Report_r9_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberOfPreamblesSent-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* contentionDetected-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_rach_Report_r9_specs_2 = {
	sizeof(struct UEInformationResponse_r9_IEs__rach_Report_r9),
	offsetof(struct UEInformationResponse_r9_IEs__rach_Report_r9, _asn_ctx),
	asn_MAP_rach_Report_r9_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rach_Report_r9_2 = {
	"rach-Report-r9",
	"rach-Report-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_rach_Report_r9_tags_2,
	sizeof(asn_DEF_rach_Report_r9_tags_2)
		/sizeof(asn_DEF_rach_Report_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_rach_Report_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_rach_Report_r9_tags_2)
		/sizeof(asn_DEF_rach_Report_r9_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_rach_Report_r9_2,
	2,	/* Elements count */
	&asn_SPC_rach_Report_r9_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UEInformationResponse_r9_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UEInformationResponse_r9_IEs, rach_Report_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_rach_Report_r9_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-Report-r9"
		},
	{ ATF_POINTER, 2, offsetof(struct UEInformationResponse_r9_IEs, rlf_Report_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLF_Report_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-Report-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct UEInformationResponse_r9_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEInformationResponse_v930_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UEInformationResponse_r9_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_UEInformationResponse_r9_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEInformationResponse_r9_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-Report-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlf-Report-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_r9_IEs_specs_1 = {
	sizeof(struct UEInformationResponse_r9_IEs),
	offsetof(struct UEInformationResponse_r9_IEs, _asn_ctx),
	asn_MAP_UEInformationResponse_r9_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UEInformationResponse_r9_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_r9_IEs = {
	"UEInformationResponse-r9-IEs",
	"UEInformationResponse-r9-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEInformationResponse_r9_IEs_tags_1,
	sizeof(asn_DEF_UEInformationResponse_r9_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationResponse_r9_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEInformationResponse_r9_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEInformationResponse_r9_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationResponse_r9_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEInformationResponse_r9_IEs_1,
	3,	/* Elements count */
	&asn_SPC_UEInformationResponse_r9_IEs_specs_1	/* Additional specs */
};
