/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#include "RRMConfigStatus.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Member_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_Member_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_crnti_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_CRNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_crnti_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_crnti_specs_3 = {
	sizeof(struct RRMConfigStatus__crnti),
	offsetof(struct RRMConfigStatus__crnti, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crnti_3 = {
	"crnti",
	"crnti",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_crnti_tags_3,
	sizeof(asn_DEF_crnti_tags_3)
		/sizeof(asn_DEF_crnti_tags_3[0]) - 1, /* 1 */
	asn_DEF_crnti_tags_3,	/* Same as above */
	sizeof(asn_DEF_crnti_tags_3)
		/sizeof(asn_DEF_crnti_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_crnti_3,
	1,	/* Single element */
	&asn_SPC_crnti_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_Member_value2enum_6[] = {
	{ 0,	7,	"success" },
	{ 1,	7,	"failure" }
};
static const unsigned int asn_MAP_Member_enum2value_6[] = {
	1,	/* failure(1) */
	0	/* success(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_Member_specs_6 = {
	asn_MAP_Member_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_Member_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Member_tags_6[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_6 = {
	"ENUMERATED",
	"ENUMERATED",
	&asn_OP_NativeEnumerated,
	asn_DEF_Member_tags_6,
	sizeof(asn_DEF_Member_tags_6)
		/sizeof(asn_DEF_Member_tags_6[0]), /* 1 */
	asn_DEF_Member_tags_6,	/* Same as above */
	sizeof(asn_DEF_Member_tags_6)
		/sizeof(asn_DEF_Member_tags_6[0]), /* 1 */
	{ &asn_OER_type_Member_constr_6, &asn_PER_type_Member_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Member_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_status_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_Member_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_status_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_status_specs_5 = {
	sizeof(struct RRMConfigStatus__status),
	offsetof(struct RRMConfigStatus__status, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_status_5 = {
	"status",
	"status",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_status_tags_5,
	sizeof(asn_DEF_status_tags_5)
		/sizeof(asn_DEF_status_tags_5[0]) - 1, /* 1 */
	asn_DEF_status_tags_5,	/* Same as above */
	sizeof(asn_DEF_status_tags_5)
		/sizeof(asn_DEF_status_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_status_5,
	1,	/* Single element */
	&asn_SPC_status_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRMConfigStatus_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRMConfigStatus, ecgi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecgi"
		},
	{ ATF_POINTER, 1, offsetof(struct RRMConfigStatus, crnti),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_crnti_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crnti"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRMConfigStatus, status),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_status_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"status"
		},
};
static const int asn_MAP_RRMConfigStatus_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_RRMConfigStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRMConfigStatus_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ecgi */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crnti */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* status */
};
asn_SEQUENCE_specifics_t asn_SPC_RRMConfigStatus_specs_1 = {
	sizeof(struct RRMConfigStatus),
	offsetof(struct RRMConfigStatus, _asn_ctx),
	asn_MAP_RRMConfigStatus_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRMConfigStatus_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRMConfigStatus = {
	"RRMConfigStatus",
	"RRMConfigStatus",
	&asn_OP_SEQUENCE,
	asn_DEF_RRMConfigStatus_tags_1,
	sizeof(asn_DEF_RRMConfigStatus_tags_1)
		/sizeof(asn_DEF_RRMConfigStatus_tags_1[0]), /* 1 */
	asn_DEF_RRMConfigStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRMConfigStatus_tags_1)
		/sizeof(asn_DEF_RRMConfigStatus_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRMConfigStatus_1,
	3,	/* Elements count */
	&asn_SPC_RRMConfigStatus_specs_1	/* Additional specs */
};

