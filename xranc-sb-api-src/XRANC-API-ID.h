/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#ifndef	_XRANC_API_ID_H_
#define	_XRANC_API_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum XRANC_API_ID {
	XRANC_API_ID_cellConfigRequest	= 0,
	XRANC_API_ID_cellConfigReport	= 1,
	XRANC_API_ID_uEAdmissionRequest	= 2,
	XRANC_API_ID_uEAdmissionResponse	= 3,
	XRANC_API_ID_uEAdmissionStatus	= 4,
	XRANC_API_ID_uEContextUpdate	= 5,
	XRANC_API_ID_uEReconfigInd	= 6,
	XRANC_API_ID_uEReleaseInd	= 7,
	XRANC_API_ID_bearerAdmissionRequest	= 8,
	XRANC_API_ID_bearerAdmissionResponse	= 9,
	XRANC_API_ID_bearerAdmissionStatus	= 10,
	XRANC_API_ID_bearerReleaseInd	= 11,
	XRANC_API_ID_hORequest	= 12,
	XRANC_API_ID_hOFailure	= 13,
	XRANC_API_ID_hOComplete	= 14,
	XRANC_API_ID_rXSigMeasReport	= 15,
	XRANC_API_ID_l2MeasConfig	= 16,
	XRANC_API_ID_radioMeasReportPerUE	= 17,
	XRANC_API_ID_radioMeasReportPerCell	= 18,
	XRANC_API_ID_schedMeasReportPerUE	= 19,
	XRANC_API_ID_schedMeasReportPerCell	= 20,
	XRANC_API_ID_pDCPMeasReportPerUe	= 21,
	XRANC_API_ID_uECapabilityInfo	= 22,
	XRANC_API_ID_uECapabilityEnquiry	= 23,
	XRANC_API_ID_scellAdd	= 24,
	XRANC_API_ID_scellAddStatus	= 25,
	XRANC_API_ID_scellDelete	= 26,
	XRANC_API_ID_rRMConfig	= 27,
	XRANC_API_ID_rRMConfigStatus	= 28,
	XRANC_API_ID_seNBAdd	= 29,
	XRANC_API_ID_seNBAddStatus	= 30,
	XRANC_API_ID_seNBDelete	= 31,
	XRANC_API_ID_trafficSplitConfig	= 32,
	XRANC_API_ID_hoCause	= 33,
	XRANC_API_ID_rRCMeasConfig	= 34
	/*
	 * Enumeration is extensible
	 */
} e_XRANC_API_ID;

/* XRANC-API-ID */
typedef long	 XRANC_API_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_XRANC_API_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_XRANC_API_ID;
extern const asn_INTEGER_specifics_t asn_SPC_XRANC_API_ID_specs_1;
asn_struct_free_f XRANC_API_ID_free;
asn_struct_print_f XRANC_API_ID_print;
asn_constr_check_f XRANC_API_ID_constraint;
ber_type_decoder_f XRANC_API_ID_decode_ber;
der_type_encoder_f XRANC_API_ID_encode_der;
xer_type_decoder_f XRANC_API_ID_decode_xer;
xer_type_encoder_f XRANC_API_ID_encode_xer;
oer_type_decoder_f XRANC_API_ID_decode_oer;
oer_type_encoder_f XRANC_API_ID_encode_oer;
per_type_decoder_f XRANC_API_ID_decode_uper;
per_type_encoder_f XRANC_API_ID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _XRANC_API_ID_H_ */
#include <asn_internal.h>