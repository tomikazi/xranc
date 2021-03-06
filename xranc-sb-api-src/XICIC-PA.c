/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-API"
 * 	found in "../xranc-sb-api/xRAN-API-IEs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#include "XICIC-PA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_XICIC_PA_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_XICIC_PA_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_XICIC_PA_value2enum_1[] = {
	{ 0,	9,	"dB-minus6" },
	{ 1,	14,	"dB-minus4dot77" },
	{ 2,	9,	"dB-minus3" },
	{ 3,	14,	"dB-minus1dot77" },
	{ 4,	4,	"dB-0" },
	{ 5,	4,	"dB-1" },
	{ 6,	4,	"dB-2" },
	{ 7,	4,	"dB-3" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_XICIC_PA_enum2value_1[] = {
	4,	/* dB-0(4) */
	5,	/* dB-1(5) */
	6,	/* dB-2(6) */
	7,	/* dB-3(7) */
	3,	/* dB-minus1dot77(3) */
	2,	/* dB-minus3(2) */
	1,	/* dB-minus4dot77(1) */
	0	/* dB-minus6(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_XICIC_PA_specs_1 = {
	asn_MAP_XICIC_PA_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_XICIC_PA_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_XICIC_PA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_XICIC_PA = {
	"XICIC-PA",
	"XICIC-PA",
	&asn_OP_NativeEnumerated,
	asn_DEF_XICIC_PA_tags_1,
	sizeof(asn_DEF_XICIC_PA_tags_1)
		/sizeof(asn_DEF_XICIC_PA_tags_1[0]), /* 1 */
	asn_DEF_XICIC_PA_tags_1,	/* Same as above */
	sizeof(asn_DEF_XICIC_PA_tags_1)
		/sizeof(asn_DEF_XICIC_PA_tags_1[0]), /* 1 */
	{ &asn_OER_type_XICIC_PA_constr_1, &asn_PER_type_XICIC_PA_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_XICIC_PA_specs_1	/* Additional specs */
};

