/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#ifndef	_ScellAddStatus_H_
#define	_ScellAddStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CRNTI.h"
#include "ECGI.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ScellAddStatus__status__Member {
	ScellAddStatus__status__Member_success	= 0,
	ScellAddStatus__status__Member_failure	= 1
} e_ScellAddStatus__status__Member;

/* Forward declarations */
struct PCI_ARFCN;

/* ScellAddStatus */
typedef struct ScellAddStatus {
	CRNTI_t	 crnti;
	ECGI_t	 ecgi;
	struct ScellAddStatus__scells_ind {
		A_SEQUENCE_OF(struct PCI_ARFCN) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} scells_ind;
	struct ScellAddStatus__status {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} status;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ScellAddStatus_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_Member_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ScellAddStatus;
extern asn_SEQUENCE_specifics_t asn_SPC_ScellAddStatus_specs_1;
extern asn_TYPE_member_t asn_MBR_ScellAddStatus_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PCI-ARFCN.h"

#endif	/* _ScellAddStatus_H_ */
#include <asn_internal.h>
