/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#ifndef	_ProdSpecEntry_H_
#define	_ProdSpecEntry_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProdSpecEntryType.h"
#include "PrivateCode.h"
#include "FEFString.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProdSpecEntry */
typedef struct ProdSpecEntry {
	ProdSpecEntryType_t	 spec_type;
	PrivateCode_t	 component_id;
	FEFString_t	 prod_spec;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProdSpecEntry_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProdSpecEntry;

#ifdef __cplusplus
}
#endif

#endif	/* _ProdSpecEntry_H_ */
