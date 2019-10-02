/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#ifndef	_TrafficSplitConfig_H_
#define	_TrafficSplitConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CRNTI.h"
#include "ECGI.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TrafficSplitPercentage;

/* TrafficSplitConfig */
typedef struct TrafficSplitConfig {
	CRNTI_t	 crnti;
	ECGI_t	 ecgi;
	struct TrafficSplitConfig__traffic_split_percent {
		A_SEQUENCE_OF(struct TrafficSplitPercentage) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} traffic_split_percent;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficSplitConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficSplitConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficSplitConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficSplitConfig_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TrafficSplitPercentage.h"

#endif	/* _TrafficSplitConfig_H_ */
#include <asn_internal.h>