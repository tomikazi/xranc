/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#include "PDCPMeasReportPerUe.h"

static int
memb_qci_vals_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_data_vol_dl_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_data_vol_ul_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pkt_delay_dl_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pkt_delay_ul_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pkt_discard_rate_dl_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pkt_loss_rate_dl_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pkt_loss_rate_ul_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_throughput_dl_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_throughput_ul_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 9)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_qci_vals_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_qci_vals_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_data_vol_dl_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_data_vol_dl_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_data_vol_ul_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_data_vol_ul_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pkt_delay_dl_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_pkt_delay_dl_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pkt_delay_ul_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_pkt_delay_ul_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pkt_discard_rate_dl_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_pkt_discard_rate_dl_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pkt_loss_rate_dl_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_pkt_loss_rate_dl_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pkt_loss_rate_ul_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_pkt_loss_rate_ul_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_throughput_dl_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_throughput_dl_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_throughput_ul_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_type_throughput_ul_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_qci_vals_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_qci_vals_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_data_vol_dl_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_data_vol_dl_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_data_vol_ul_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_data_vol_ul_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pkt_delay_dl_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_pkt_delay_dl_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pkt_delay_ul_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_pkt_delay_ul_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pkt_discard_rate_dl_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_pkt_discard_rate_dl_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pkt_loss_rate_dl_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_pkt_loss_rate_dl_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pkt_loss_rate_ul_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_pkt_loss_rate_ul_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_throughput_dl_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_throughput_dl_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_throughput_ul_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..9)) */};
static asn_per_constraints_t asn_PER_memb_throughput_ul_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_qci_vals_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_QCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_qci_vals_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_qci_vals_specs_4 = {
	sizeof(struct PDCPMeasReportPerUe__qci_vals),
	offsetof(struct PDCPMeasReportPerUe__qci_vals, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_qci_vals_4 = {
	"qci-vals",
	"qci-vals",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_qci_vals_tags_4,
	sizeof(asn_DEF_qci_vals_tags_4)
		/sizeof(asn_DEF_qci_vals_tags_4[0]) - 1, /* 1 */
	asn_DEF_qci_vals_tags_4,	/* Same as above */
	sizeof(asn_DEF_qci_vals_tags_4)
		/sizeof(asn_DEF_qci_vals_tags_4[0]), /* 2 */
	{ &asn_OER_type_qci_vals_constr_4, &asn_PER_type_qci_vals_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_qci_vals_4,
	1,	/* Single element */
	&asn_SPC_qci_vals_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_data_vol_dl_6[] = {
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
static const ber_tlv_tag_t asn_DEF_data_vol_dl_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_data_vol_dl_specs_6 = {
	sizeof(struct PDCPMeasReportPerUe__data_vol_dl),
	offsetof(struct PDCPMeasReportPerUe__data_vol_dl, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_data_vol_dl_6 = {
	"data-vol-dl",
	"data-vol-dl",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_data_vol_dl_tags_6,
	sizeof(asn_DEF_data_vol_dl_tags_6)
		/sizeof(asn_DEF_data_vol_dl_tags_6[0]) - 1, /* 1 */
	asn_DEF_data_vol_dl_tags_6,	/* Same as above */
	sizeof(asn_DEF_data_vol_dl_tags_6)
		/sizeof(asn_DEF_data_vol_dl_tags_6[0]), /* 2 */
	{ &asn_OER_type_data_vol_dl_constr_6, &asn_PER_type_data_vol_dl_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_data_vol_dl_6,
	1,	/* Single element */
	&asn_SPC_data_vol_dl_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_data_vol_ul_8[] = {
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
static const ber_tlv_tag_t asn_DEF_data_vol_ul_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_data_vol_ul_specs_8 = {
	sizeof(struct PDCPMeasReportPerUe__data_vol_ul),
	offsetof(struct PDCPMeasReportPerUe__data_vol_ul, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_data_vol_ul_8 = {
	"data-vol-ul",
	"data-vol-ul",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_data_vol_ul_tags_8,
	sizeof(asn_DEF_data_vol_ul_tags_8)
		/sizeof(asn_DEF_data_vol_ul_tags_8[0]) - 1, /* 1 */
	asn_DEF_data_vol_ul_tags_8,	/* Same as above */
	sizeof(asn_DEF_data_vol_ul_tags_8)
		/sizeof(asn_DEF_data_vol_ul_tags_8[0]), /* 2 */
	{ &asn_OER_type_data_vol_ul_constr_8, &asn_PER_type_data_vol_ul_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_data_vol_ul_8,
	1,	/* Single element */
	&asn_SPC_data_vol_ul_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pkt_delay_dl_10[] = {
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
static const ber_tlv_tag_t asn_DEF_pkt_delay_dl_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pkt_delay_dl_specs_10 = {
	sizeof(struct PDCPMeasReportPerUe__pkt_delay_dl),
	offsetof(struct PDCPMeasReportPerUe__pkt_delay_dl, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pkt_delay_dl_10 = {
	"pkt-delay-dl",
	"pkt-delay-dl",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pkt_delay_dl_tags_10,
	sizeof(asn_DEF_pkt_delay_dl_tags_10)
		/sizeof(asn_DEF_pkt_delay_dl_tags_10[0]) - 1, /* 1 */
	asn_DEF_pkt_delay_dl_tags_10,	/* Same as above */
	sizeof(asn_DEF_pkt_delay_dl_tags_10)
		/sizeof(asn_DEF_pkt_delay_dl_tags_10[0]), /* 2 */
	{ &asn_OER_type_pkt_delay_dl_constr_10, &asn_PER_type_pkt_delay_dl_constr_10, SEQUENCE_OF_constraint },
	asn_MBR_pkt_delay_dl_10,
	1,	/* Single element */
	&asn_SPC_pkt_delay_dl_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pkt_delay_ul_12[] = {
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
static const ber_tlv_tag_t asn_DEF_pkt_delay_ul_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pkt_delay_ul_specs_12 = {
	sizeof(struct PDCPMeasReportPerUe__pkt_delay_ul),
	offsetof(struct PDCPMeasReportPerUe__pkt_delay_ul, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pkt_delay_ul_12 = {
	"pkt-delay-ul",
	"pkt-delay-ul",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pkt_delay_ul_tags_12,
	sizeof(asn_DEF_pkt_delay_ul_tags_12)
		/sizeof(asn_DEF_pkt_delay_ul_tags_12[0]) - 1, /* 1 */
	asn_DEF_pkt_delay_ul_tags_12,	/* Same as above */
	sizeof(asn_DEF_pkt_delay_ul_tags_12)
		/sizeof(asn_DEF_pkt_delay_ul_tags_12[0]), /* 2 */
	{ &asn_OER_type_pkt_delay_ul_constr_12, &asn_PER_type_pkt_delay_ul_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_pkt_delay_ul_12,
	1,	/* Single element */
	&asn_SPC_pkt_delay_ul_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pkt_discard_rate_dl_14[] = {
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
static const ber_tlv_tag_t asn_DEF_pkt_discard_rate_dl_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pkt_discard_rate_dl_specs_14 = {
	sizeof(struct PDCPMeasReportPerUe__pkt_discard_rate_dl),
	offsetof(struct PDCPMeasReportPerUe__pkt_discard_rate_dl, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pkt_discard_rate_dl_14 = {
	"pkt-discard-rate-dl",
	"pkt-discard-rate-dl",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pkt_discard_rate_dl_tags_14,
	sizeof(asn_DEF_pkt_discard_rate_dl_tags_14)
		/sizeof(asn_DEF_pkt_discard_rate_dl_tags_14[0]) - 1, /* 1 */
	asn_DEF_pkt_discard_rate_dl_tags_14,	/* Same as above */
	sizeof(asn_DEF_pkt_discard_rate_dl_tags_14)
		/sizeof(asn_DEF_pkt_discard_rate_dl_tags_14[0]), /* 2 */
	{ &asn_OER_type_pkt_discard_rate_dl_constr_14, &asn_PER_type_pkt_discard_rate_dl_constr_14, SEQUENCE_OF_constraint },
	asn_MBR_pkt_discard_rate_dl_14,
	1,	/* Single element */
	&asn_SPC_pkt_discard_rate_dl_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pkt_loss_rate_dl_16[] = {
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
static const ber_tlv_tag_t asn_DEF_pkt_loss_rate_dl_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pkt_loss_rate_dl_specs_16 = {
	sizeof(struct PDCPMeasReportPerUe__pkt_loss_rate_dl),
	offsetof(struct PDCPMeasReportPerUe__pkt_loss_rate_dl, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pkt_loss_rate_dl_16 = {
	"pkt-loss-rate-dl",
	"pkt-loss-rate-dl",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pkt_loss_rate_dl_tags_16,
	sizeof(asn_DEF_pkt_loss_rate_dl_tags_16)
		/sizeof(asn_DEF_pkt_loss_rate_dl_tags_16[0]) - 1, /* 1 */
	asn_DEF_pkt_loss_rate_dl_tags_16,	/* Same as above */
	sizeof(asn_DEF_pkt_loss_rate_dl_tags_16)
		/sizeof(asn_DEF_pkt_loss_rate_dl_tags_16[0]), /* 2 */
	{ &asn_OER_type_pkt_loss_rate_dl_constr_16, &asn_PER_type_pkt_loss_rate_dl_constr_16, SEQUENCE_OF_constraint },
	asn_MBR_pkt_loss_rate_dl_16,
	1,	/* Single element */
	&asn_SPC_pkt_loss_rate_dl_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pkt_loss_rate_ul_18[] = {
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
static const ber_tlv_tag_t asn_DEF_pkt_loss_rate_ul_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pkt_loss_rate_ul_specs_18 = {
	sizeof(struct PDCPMeasReportPerUe__pkt_loss_rate_ul),
	offsetof(struct PDCPMeasReportPerUe__pkt_loss_rate_ul, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pkt_loss_rate_ul_18 = {
	"pkt-loss-rate-ul",
	"pkt-loss-rate-ul",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pkt_loss_rate_ul_tags_18,
	sizeof(asn_DEF_pkt_loss_rate_ul_tags_18)
		/sizeof(asn_DEF_pkt_loss_rate_ul_tags_18[0]) - 1, /* 1 */
	asn_DEF_pkt_loss_rate_ul_tags_18,	/* Same as above */
	sizeof(asn_DEF_pkt_loss_rate_ul_tags_18)
		/sizeof(asn_DEF_pkt_loss_rate_ul_tags_18[0]), /* 2 */
	{ &asn_OER_type_pkt_loss_rate_ul_constr_18, &asn_PER_type_pkt_loss_rate_ul_constr_18, SEQUENCE_OF_constraint },
	asn_MBR_pkt_loss_rate_ul_18,
	1,	/* Single element */
	&asn_SPC_pkt_loss_rate_ul_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_throughput_dl_20[] = {
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
static const ber_tlv_tag_t asn_DEF_throughput_dl_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_throughput_dl_specs_20 = {
	sizeof(struct PDCPMeasReportPerUe__throughput_dl),
	offsetof(struct PDCPMeasReportPerUe__throughput_dl, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_throughput_dl_20 = {
	"throughput-dl",
	"throughput-dl",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_throughput_dl_tags_20,
	sizeof(asn_DEF_throughput_dl_tags_20)
		/sizeof(asn_DEF_throughput_dl_tags_20[0]) - 1, /* 1 */
	asn_DEF_throughput_dl_tags_20,	/* Same as above */
	sizeof(asn_DEF_throughput_dl_tags_20)
		/sizeof(asn_DEF_throughput_dl_tags_20[0]), /* 2 */
	{ &asn_OER_type_throughput_dl_constr_20, &asn_PER_type_throughput_dl_constr_20, SEQUENCE_OF_constraint },
	asn_MBR_throughput_dl_20,
	1,	/* Single element */
	&asn_SPC_throughput_dl_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_throughput_ul_22[] = {
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
static const ber_tlv_tag_t asn_DEF_throughput_ul_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_throughput_ul_specs_22 = {
	sizeof(struct PDCPMeasReportPerUe__throughput_ul),
	offsetof(struct PDCPMeasReportPerUe__throughput_ul, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_throughput_ul_22 = {
	"throughput-ul",
	"throughput-ul",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_throughput_ul_tags_22,
	sizeof(asn_DEF_throughput_ul_tags_22)
		/sizeof(asn_DEF_throughput_ul_tags_22[0]) - 1, /* 1 */
	asn_DEF_throughput_ul_tags_22,	/* Same as above */
	sizeof(asn_DEF_throughput_ul_tags_22)
		/sizeof(asn_DEF_throughput_ul_tags_22[0]), /* 2 */
	{ &asn_OER_type_throughput_ul_constr_22, &asn_PER_type_throughput_ul_constr_22, SEQUENCE_OF_constraint },
	asn_MBR_throughput_ul_22,
	1,	/* Single element */
	&asn_SPC_throughput_ul_specs_22	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDCPMeasReportPerUe_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, ecgi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecgi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, crnti),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CRNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crnti"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, qci_vals),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_qci_vals_4,
		0,
		{ &asn_OER_memb_qci_vals_constr_4, &asn_PER_memb_qci_vals_constr_4,  memb_qci_vals_constraint_1 },
		0, 0, /* No default value */
		"qci-vals"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, data_vol_dl),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_data_vol_dl_6,
		0,
		{ &asn_OER_memb_data_vol_dl_constr_6, &asn_PER_memb_data_vol_dl_constr_6,  memb_data_vol_dl_constraint_1 },
		0, 0, /* No default value */
		"data-vol-dl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, data_vol_ul),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_data_vol_ul_8,
		0,
		{ &asn_OER_memb_data_vol_ul_constr_8, &asn_PER_memb_data_vol_ul_constr_8,  memb_data_vol_ul_constraint_1 },
		0, 0, /* No default value */
		"data-vol-ul"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, pkt_delay_dl),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_pkt_delay_dl_10,
		0,
		{ &asn_OER_memb_pkt_delay_dl_constr_10, &asn_PER_memb_pkt_delay_dl_constr_10,  memb_pkt_delay_dl_constraint_1 },
		0, 0, /* No default value */
		"pkt-delay-dl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, pkt_delay_ul),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_pkt_delay_ul_12,
		0,
		{ &asn_OER_memb_pkt_delay_ul_constr_12, &asn_PER_memb_pkt_delay_ul_constr_12,  memb_pkt_delay_ul_constraint_1 },
		0, 0, /* No default value */
		"pkt-delay-ul"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, pkt_discard_rate_dl),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_pkt_discard_rate_dl_14,
		0,
		{ &asn_OER_memb_pkt_discard_rate_dl_constr_14, &asn_PER_memb_pkt_discard_rate_dl_constr_14,  memb_pkt_discard_rate_dl_constraint_1 },
		0, 0, /* No default value */
		"pkt-discard-rate-dl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, pkt_loss_rate_dl),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_pkt_loss_rate_dl_16,
		0,
		{ &asn_OER_memb_pkt_loss_rate_dl_constr_16, &asn_PER_memb_pkt_loss_rate_dl_constr_16,  memb_pkt_loss_rate_dl_constraint_1 },
		0, 0, /* No default value */
		"pkt-loss-rate-dl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, pkt_loss_rate_ul),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_pkt_loss_rate_ul_18,
		0,
		{ &asn_OER_memb_pkt_loss_rate_ul_constr_18, &asn_PER_memb_pkt_loss_rate_ul_constr_18,  memb_pkt_loss_rate_ul_constraint_1 },
		0, 0, /* No default value */
		"pkt-loss-rate-ul"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, throughput_dl),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_throughput_dl_20,
		0,
		{ &asn_OER_memb_throughput_dl_constr_20, &asn_PER_memb_throughput_dl_constr_20,  memb_throughput_dl_constraint_1 },
		0, 0, /* No default value */
		"throughput-dl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCPMeasReportPerUe, throughput_ul),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_throughput_ul_22,
		0,
		{ &asn_OER_memb_throughput_ul_constr_22, &asn_PER_memb_throughput_ul_constr_22,  memb_throughput_ul_constraint_1 },
		0, 0, /* No default value */
		"throughput-ul"
		},
};
static const ber_tlv_tag_t asn_DEF_PDCPMeasReportPerUe_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCPMeasReportPerUe_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ecgi */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crnti */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* qci-vals */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* data-vol-dl */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* data-vol-ul */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pkt-delay-dl */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pkt-delay-ul */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pkt-discard-rate-dl */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* pkt-loss-rate-dl */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* pkt-loss-rate-ul */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* throughput-dl */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* throughput-ul */
};
asn_SEQUENCE_specifics_t asn_SPC_PDCPMeasReportPerUe_specs_1 = {
	sizeof(struct PDCPMeasReportPerUe),
	offsetof(struct PDCPMeasReportPerUe, _asn_ctx),
	asn_MAP_PDCPMeasReportPerUe_tag2el_1,
	12,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	12,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDCPMeasReportPerUe = {
	"PDCPMeasReportPerUe",
	"PDCPMeasReportPerUe",
	&asn_OP_SEQUENCE,
	asn_DEF_PDCPMeasReportPerUe_tags_1,
	sizeof(asn_DEF_PDCPMeasReportPerUe_tags_1)
		/sizeof(asn_DEF_PDCPMeasReportPerUe_tags_1[0]), /* 1 */
	asn_DEF_PDCPMeasReportPerUe_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCPMeasReportPerUe_tags_1)
		/sizeof(asn_DEF_PDCPMeasReportPerUe_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDCPMeasReportPerUe_1,
	12,	/* Elements count */
	&asn_SPC_PDCPMeasReportPerUe_specs_1	/* Additional specs */
};
