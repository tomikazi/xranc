/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#ifndef	_L2MeasConfig_H_
#define	_L2MeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ECGI.h"
#include "L2ReportInterval.h"
#include "CRNTI.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* L2MeasConfig */
typedef struct L2MeasConfig {
	ECGI_t	 ecgi;
	struct L2MeasConfig__crnti {
		A_SEQUENCE_OF(CRNTI_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *crnti;
	L2ReportInterval_t	 report_intervals;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} L2MeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_L2MeasConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_L2MeasConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_L2MeasConfig_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _L2MeasConfig_H_ */
#include <asn_internal.h>
