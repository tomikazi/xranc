/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#include "RRMConfig.h"

static int
memb_BIT_STRING_constraint_12(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NativeInteger_constraint_14(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_BIT_STRING_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_Member_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	10	/* (SIZE(10..10)) */};
static asn_per_constraints_t asn_PER_memb_Member_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_15 CC_NOTUSED = {
	{ 1, 0 }	/* (-8..7) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -8,  7 }	/* (-8..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	10	/* (SIZE(10..10)) */};
static asn_per_constraints_t asn_PER_memb_Member_constr_21 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
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
	sizeof(struct RRMConfig__crnti),
	offsetof(struct RRMConfig__crnti, _asn_ctx),
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

static asn_TYPE_member_t asn_MBR_pa_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_XICIC_PA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_pa_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pa_specs_6 = {
	sizeof(struct RRMConfig__pa),
	offsetof(struct RRMConfig__pa, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pa_6 = {
	"pa",
	"pa",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pa_tags_6,
	sizeof(asn_DEF_pa_tags_6)
		/sizeof(asn_DEF_pa_tags_6[0]) - 1, /* 1 */
	asn_DEF_pa_tags_6,	/* Same as above */
	sizeof(asn_DEF_pa_tags_6)
		/sizeof(asn_DEF_pa_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_pa_6,
	1,	/* Single element */
	&asn_SPC_pa_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_start_prb_dl_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_start_prb_dl_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_start_prb_dl_specs_8 = {
	sizeof(struct RRMConfig__start_prb_dl),
	offsetof(struct RRMConfig__start_prb_dl, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_start_prb_dl_8 = {
	"start-prb-dl",
	"start-prb-dl",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_start_prb_dl_tags_8,
	sizeof(asn_DEF_start_prb_dl_tags_8)
		/sizeof(asn_DEF_start_prb_dl_tags_8[0]) - 1, /* 1 */
	asn_DEF_start_prb_dl_tags_8,	/* Same as above */
	sizeof(asn_DEF_start_prb_dl_tags_8)
		/sizeof(asn_DEF_start_prb_dl_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_start_prb_dl_8,
	1,	/* Single element */
	&asn_SPC_start_prb_dl_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_end_prb_dl_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_end_prb_dl_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_end_prb_dl_specs_10 = {
	sizeof(struct RRMConfig__end_prb_dl),
	offsetof(struct RRMConfig__end_prb_dl, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_end_prb_dl_10 = {
	"end-prb-dl",
	"end-prb-dl",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_end_prb_dl_tags_10,
	sizeof(asn_DEF_end_prb_dl_tags_10)
		/sizeof(asn_DEF_end_prb_dl_tags_10[0]) - 1, /* 1 */
	asn_DEF_end_prb_dl_tags_10,	/* Same as above */
	sizeof(asn_DEF_end_prb_dl_tags_10)
		/sizeof(asn_DEF_end_prb_dl_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_end_prb_dl_10,
	1,	/* Single element */
	&asn_SPC_end_prb_dl_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_subframe_bitmask_dl_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_Member_constr_13, &asn_PER_memb_Member_constr_13,  memb_BIT_STRING_constraint_12 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_subframe_bitmask_dl_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_subframe_bitmask_dl_specs_12 = {
	sizeof(struct RRMConfig__subframe_bitmask_dl),
	offsetof(struct RRMConfig__subframe_bitmask_dl, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subframe_bitmask_dl_12 = {
	"subframe-bitmask-dl",
	"subframe-bitmask-dl",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_subframe_bitmask_dl_tags_12,
	sizeof(asn_DEF_subframe_bitmask_dl_tags_12)
		/sizeof(asn_DEF_subframe_bitmask_dl_tags_12[0]) - 1, /* 1 */
	asn_DEF_subframe_bitmask_dl_tags_12,	/* Same as above */
	sizeof(asn_DEF_subframe_bitmask_dl_tags_12)
		/sizeof(asn_DEF_subframe_bitmask_dl_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_subframe_bitmask_dl_12,
	1,	/* Single element */
	&asn_SPC_subframe_bitmask_dl_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_p0_ue_pusch_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_15, &asn_PER_memb_Member_constr_15,  memb_NativeInteger_constraint_14 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_p0_ue_pusch_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_p0_ue_pusch_specs_14 = {
	sizeof(struct RRMConfig__p0_ue_pusch),
	offsetof(struct RRMConfig__p0_ue_pusch, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_p0_ue_pusch_14 = {
	"p0-ue-pusch",
	"p0-ue-pusch",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_p0_ue_pusch_tags_14,
	sizeof(asn_DEF_p0_ue_pusch_tags_14)
		/sizeof(asn_DEF_p0_ue_pusch_tags_14[0]) - 1, /* 1 */
	asn_DEF_p0_ue_pusch_tags_14,	/* Same as above */
	sizeof(asn_DEF_p0_ue_pusch_tags_14)
		/sizeof(asn_DEF_p0_ue_pusch_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_p0_ue_pusch_14,
	1,	/* Single element */
	&asn_SPC_p0_ue_pusch_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_start_prb_ul_16[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_start_prb_ul_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_start_prb_ul_specs_16 = {
	sizeof(struct RRMConfig__start_prb_ul),
	offsetof(struct RRMConfig__start_prb_ul, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_start_prb_ul_16 = {
	"start-prb-ul",
	"start-prb-ul",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_start_prb_ul_tags_16,
	sizeof(asn_DEF_start_prb_ul_tags_16)
		/sizeof(asn_DEF_start_prb_ul_tags_16[0]) - 1, /* 1 */
	asn_DEF_start_prb_ul_tags_16,	/* Same as above */
	sizeof(asn_DEF_start_prb_ul_tags_16)
		/sizeof(asn_DEF_start_prb_ul_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_start_prb_ul_16,
	1,	/* Single element */
	&asn_SPC_start_prb_ul_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_end_prb_ul_18[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_end_prb_ul_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_end_prb_ul_specs_18 = {
	sizeof(struct RRMConfig__end_prb_ul),
	offsetof(struct RRMConfig__end_prb_ul, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_end_prb_ul_18 = {
	"end-prb-ul",
	"end-prb-ul",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_end_prb_ul_tags_18,
	sizeof(asn_DEF_end_prb_ul_tags_18)
		/sizeof(asn_DEF_end_prb_ul_tags_18[0]) - 1, /* 1 */
	asn_DEF_end_prb_ul_tags_18,	/* Same as above */
	sizeof(asn_DEF_end_prb_ul_tags_18)
		/sizeof(asn_DEF_end_prb_ul_tags_18[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_end_prb_ul_18,
	1,	/* Single element */
	&asn_SPC_end_prb_ul_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_subframe_bitmask_ul_20[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_Member_constr_21, &asn_PER_memb_Member_constr_21,  memb_BIT_STRING_constraint_20 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_subframe_bitmask_ul_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_subframe_bitmask_ul_specs_20 = {
	sizeof(struct RRMConfig__subframe_bitmask_ul),
	offsetof(struct RRMConfig__subframe_bitmask_ul, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subframe_bitmask_ul_20 = {
	"subframe-bitmask-ul",
	"subframe-bitmask-ul",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_subframe_bitmask_ul_tags_20,
	sizeof(asn_DEF_subframe_bitmask_ul_tags_20)
		/sizeof(asn_DEF_subframe_bitmask_ul_tags_20[0]) - 1, /* 1 */
	asn_DEF_subframe_bitmask_ul_tags_20,	/* Same as above */
	sizeof(asn_DEF_subframe_bitmask_ul_tags_20)
		/sizeof(asn_DEF_subframe_bitmask_ul_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_subframe_bitmask_ul_20,
	1,	/* Single element */
	&asn_SPC_subframe_bitmask_ul_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRMConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRMConfig, ecgi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecgi"
		},
	{ ATF_POINTER, 10, offsetof(struct RRMConfig, crnti),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_crnti_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crnti"
		},
	{ ATF_POINTER, 9, offsetof(struct RRMConfig, pci_arfcn),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCI_ARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pci-arfcn"
		},
	{ ATF_POINTER, 8, offsetof(struct RRMConfig, pa),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_pa_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pa"
		},
	{ ATF_POINTER, 7, offsetof(struct RRMConfig, start_prb_dl),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_start_prb_dl_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"start-prb-dl"
		},
	{ ATF_POINTER, 6, offsetof(struct RRMConfig, end_prb_dl),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_end_prb_dl_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"end-prb-dl"
		},
	{ ATF_POINTER, 5, offsetof(struct RRMConfig, subframe_bitmask_dl),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_subframe_bitmask_dl_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframe-bitmask-dl"
		},
	{ ATF_POINTER, 4, offsetof(struct RRMConfig, p0_ue_pusch),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_p0_ue_pusch_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p0-ue-pusch"
		},
	{ ATF_POINTER, 3, offsetof(struct RRMConfig, start_prb_ul),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_start_prb_ul_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"start-prb-ul"
		},
	{ ATF_POINTER, 2, offsetof(struct RRMConfig, end_prb_ul),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_end_prb_ul_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"end-prb-ul"
		},
	{ ATF_POINTER, 1, offsetof(struct RRMConfig, subframe_bitmask_ul),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_subframe_bitmask_ul_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframe-bitmask-ul"
		},
};
static const int asn_MAP_RRMConfig_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_RRMConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRMConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ecgi */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crnti */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pci-arfcn */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pa */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* start-prb-dl */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* end-prb-dl */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* subframe-bitmask-dl */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* p0-ue-pusch */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* start-prb-ul */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* end-prb-ul */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* subframe-bitmask-ul */
};
asn_SEQUENCE_specifics_t asn_SPC_RRMConfig_specs_1 = {
	sizeof(struct RRMConfig),
	offsetof(struct RRMConfig, _asn_ctx),
	asn_MAP_RRMConfig_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_RRMConfig_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRMConfig = {
	"RRMConfig",
	"RRMConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_RRMConfig_tags_1,
	sizeof(asn_DEF_RRMConfig_tags_1)
		/sizeof(asn_DEF_RRMConfig_tags_1[0]), /* 1 */
	asn_DEF_RRMConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRMConfig_tags_1)
		/sizeof(asn_DEF_RRMConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRMConfig_1,
	11,	/* Elements count */
	&asn_SPC_RRMConfig_specs_1	/* Additional specs */
};

