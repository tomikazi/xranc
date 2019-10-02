/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#ifndef	_UECapabilityInfo_H_
#define	_UECapabilityInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CRNTI.h"
#include "ECGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CACap;
struct DCCap;

/* UECapabilityInfo */
typedef struct UECapabilityInfo {
	CRNTI_t	 crnti;
	ECGI_t	 ecgi;
	struct CACap	*ca_cap	/* OPTIONAL */;
	struct DCCap	*dc_cap	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityInfo_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CACap.h"
#include "DCCap.h"

#endif	/* _UECapabilityInfo_H_ */
#include <asn_internal.h>