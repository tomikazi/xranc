/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#include "SchedMeasReportPerUE.h"

static asn_TYPE_member_t asn_MBR_sched_report_serv_cells_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SchedMeasRepPerServCell,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sched_report_serv_cells_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sched_report_serv_cells_specs_4 = {
	sizeof(struct SchedMeasReportPerUE__sched_report_serv_cells),
	offsetof(struct SchedMeasReportPerUE__sched_report_serv_cells, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sched_report_serv_cells_4 = {
	"sched-report-serv-cells",
	"sched-report-serv-cells",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sched_report_serv_cells_tags_4,
	sizeof(asn_DEF_sched_report_serv_cells_tags_4)
		/sizeof(asn_DEF_sched_report_serv_cells_tags_4[0]) - 1, /* 1 */
	asn_DEF_sched_report_serv_cells_tags_4,	/* Same as above */
	sizeof(asn_DEF_sched_report_serv_cells_tags_4)
		/sizeof(asn_DEF_sched_report_serv_cells_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_sched_report_serv_cells_4,
	1,	/* Single element */
	&asn_SPC_sched_report_serv_cells_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SchedMeasReportPerUE_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SchedMeasReportPerUE, ecgi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecgi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SchedMeasReportPerUE, crnti),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CRNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crnti"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SchedMeasReportPerUE, sched_report_serv_cells),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_sched_report_serv_cells_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sched-report-serv-cells"
		},
};
static const ber_tlv_tag_t asn_DEF_SchedMeasReportPerUE_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SchedMeasReportPerUE_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ecgi */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crnti */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sched-report-serv-cells */
};
asn_SEQUENCE_specifics_t asn_SPC_SchedMeasReportPerUE_specs_1 = {
	sizeof(struct SchedMeasReportPerUE),
	offsetof(struct SchedMeasReportPerUE, _asn_ctx),
	asn_MAP_SchedMeasReportPerUE_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SchedMeasReportPerUE = {
	"SchedMeasReportPerUE",
	"SchedMeasReportPerUE",
	&asn_OP_SEQUENCE,
	asn_DEF_SchedMeasReportPerUE_tags_1,
	sizeof(asn_DEF_SchedMeasReportPerUE_tags_1)
		/sizeof(asn_DEF_SchedMeasReportPerUE_tags_1[0]), /* 1 */
	asn_DEF_SchedMeasReportPerUE_tags_1,	/* Same as above */
	sizeof(asn_DEF_SchedMeasReportPerUE_tags_1)
		/sizeof(asn_DEF_SchedMeasReportPerUE_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SchedMeasReportPerUE_1,
	3,	/* Elements count */
	&asn_SPC_SchedMeasReportPerUE_specs_1	/* Additional specs */
};

