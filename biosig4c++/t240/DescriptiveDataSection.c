/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#include <asn_internal.h>

#include "DescriptiveDataSection.h"

static asn_TYPE_member_t asn_MBR_realtimesadescs_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RealTimeSampleArrayDescriptiveDataSection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_realtimesadescs_tags_4[] = {
	(ASN_TAG_CLASS_APPLICATION | (7020 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_realtimesadescs_specs_4 = {
	sizeof(struct DescriptiveDataSection__realtimesadescs),
	offsetof(struct DescriptiveDataSection__realtimesadescs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_realtimesadescs_4 = {
	"realtimesadescs",
	"realtimesadescs",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_realtimesadescs_tags_4,
	sizeof(asn_DEF_realtimesadescs_tags_4)
		/sizeof(asn_DEF_realtimesadescs_tags_4[0]) - 1, /* 1 */
	asn_DEF_realtimesadescs_tags_4,	/* Same as above */
	sizeof(asn_DEF_realtimesadescs_tags_4)
		/sizeof(asn_DEF_realtimesadescs_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_realtimesadescs_4,
	1,	/* Single element */
	&asn_SPC_realtimesadescs_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_timesadescs_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TimeSampleArrayDescriptiveDataSection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_timesadescs_tags_6[] = {
	(ASN_TAG_CLASS_APPLICATION | (7021 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_timesadescs_specs_6 = {
	sizeof(struct DescriptiveDataSection__timesadescs),
	offsetof(struct DescriptiveDataSection__timesadescs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timesadescs_6 = {
	"timesadescs",
	"timesadescs",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_timesadescs_tags_6,
	sizeof(asn_DEF_timesadescs_tags_6)
		/sizeof(asn_DEF_timesadescs_tags_6[0]) - 1, /* 1 */
	asn_DEF_timesadescs_tags_6,	/* Same as above */
	sizeof(asn_DEF_timesadescs_tags_6)
		/sizeof(asn_DEF_timesadescs_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_timesadescs_6,
	1,	/* Single element */
	&asn_SPC_timesadescs_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_distributionsadescs_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DistributionSampleArrayDescriptiveDataSection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_distributionsadescs_tags_8[] = {
	(ASN_TAG_CLASS_APPLICATION | (7022 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_distributionsadescs_specs_8 = {
	sizeof(struct DescriptiveDataSection__distributionsadescs),
	offsetof(struct DescriptiveDataSection__distributionsadescs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_distributionsadescs_8 = {
	"distributionsadescs",
	"distributionsadescs",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_distributionsadescs_tags_8,
	sizeof(asn_DEF_distributionsadescs_tags_8)
		/sizeof(asn_DEF_distributionsadescs_tags_8[0]) - 1, /* 1 */
	asn_DEF_distributionsadescs_tags_8,	/* Same as above */
	sizeof(asn_DEF_distributionsadescs_tags_8)
		/sizeof(asn_DEF_distributionsadescs_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_distributionsadescs_8,
	1,	/* Single element */
	&asn_SPC_distributionsadescs_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_numericdescs_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NumericDescriptiveDataSection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_numericdescs_tags_10[] = {
	(ASN_TAG_CLASS_APPLICATION | (7023 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_numericdescs_specs_10 = {
	sizeof(struct DescriptiveDataSection__numericdescs),
	offsetof(struct DescriptiveDataSection__numericdescs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numericdescs_10 = {
	"numericdescs",
	"numericdescs",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_numericdescs_tags_10,
	sizeof(asn_DEF_numericdescs_tags_10)
		/sizeof(asn_DEF_numericdescs_tags_10[0]) - 1, /* 1 */
	asn_DEF_numericdescs_tags_10,	/* Same as above */
	sizeof(asn_DEF_numericdescs_tags_10)
		/sizeof(asn_DEF_numericdescs_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_numericdescs_10,
	1,	/* Single element */
	&asn_SPC_numericdescs_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_enumerationdescs_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_EnumerationDescriptiveDataSection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_enumerationdescs_tags_12[] = {
	(ASN_TAG_CLASS_APPLICATION | (7024 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_enumerationdescs_specs_12 = {
	sizeof(struct DescriptiveDataSection__enumerationdescs),
	offsetof(struct DescriptiveDataSection__enumerationdescs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_enumerationdescs_12 = {
	"enumerationdescs",
	"enumerationdescs",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_enumerationdescs_tags_12,
	sizeof(asn_DEF_enumerationdescs_tags_12)
		/sizeof(asn_DEF_enumerationdescs_tags_12[0]) - 1, /* 1 */
	asn_DEF_enumerationdescs_tags_12,	/* Same as above */
	sizeof(asn_DEF_enumerationdescs_tags_12)
		/sizeof(asn_DEF_enumerationdescs_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_enumerationdescs_12,
	1,	/* Single element */
	&asn_SPC_enumerationdescs_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DescriptiveDataSection_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DescriptiveDataSection, handle),
		(ASN_TAG_CLASS_APPLICATION | (2337 << 2)),
		0,
		&asn_DEF_Handle,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"handle"
		},
	{ ATF_POINTER, 6, offsetof(struct DescriptiveDataSection, placeholder),
		(ASN_TAG_CLASS_APPLICATION | (6499 << 2)),
		0,
		&asn_DEF_Placeholder,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"placeholder"
		},
	{ ATF_POINTER, 5, offsetof(struct DescriptiveDataSection, realtimesadescs),
		(ASN_TAG_CLASS_APPLICATION | (7020 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_realtimesadescs_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"realtimesadescs"
		},
	{ ATF_POINTER, 4, offsetof(struct DescriptiveDataSection, timesadescs),
		(ASN_TAG_CLASS_APPLICATION | (7021 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_timesadescs_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"timesadescs"
		},
	{ ATF_POINTER, 3, offsetof(struct DescriptiveDataSection, distributionsadescs),
		(ASN_TAG_CLASS_APPLICATION | (7022 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_distributionsadescs_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"distributionsadescs"
		},
	{ ATF_POINTER, 2, offsetof(struct DescriptiveDataSection, numericdescs),
		(ASN_TAG_CLASS_APPLICATION | (7023 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numericdescs_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numericdescs"
		},
	{ ATF_POINTER, 1, offsetof(struct DescriptiveDataSection, enumerationdescs),
		(ASN_TAG_CLASS_APPLICATION | (7024 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_enumerationdescs_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"enumerationdescs"
		},
};
static ber_tlv_tag_t asn_DEF_DescriptiveDataSection_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DescriptiveDataSection_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (2337 << 2)), 0, 0, 0 }, /* handle at 748 */
    { (ASN_TAG_CLASS_APPLICATION | (6499 << 2)), 1, 0, 0 }, /* placeholder at 751 */
    { (ASN_TAG_CLASS_APPLICATION | (7020 << 2)), 2, 0, 0 }, /* realtimesadescs at 755 */
    { (ASN_TAG_CLASS_APPLICATION | (7021 << 2)), 3, 0, 0 }, /* timesadescs at 759 */
    { (ASN_TAG_CLASS_APPLICATION | (7022 << 2)), 4, 0, 0 }, /* distributionsadescs at 763 */
    { (ASN_TAG_CLASS_APPLICATION | (7023 << 2)), 5, 0, 0 }, /* numericdescs at 767 */
    { (ASN_TAG_CLASS_APPLICATION | (7024 << 2)), 6, 0, 0 } /* enumerationdescs at 771 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DescriptiveDataSection_specs_1 = {
	sizeof(struct DescriptiveDataSection),
	offsetof(struct DescriptiveDataSection, _asn_ctx),
	asn_MAP_DescriptiveDataSection_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DescriptiveDataSection = {
	"DescriptiveDataSection",
	"DescriptiveDataSection",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DescriptiveDataSection_tags_1,
	sizeof(asn_DEF_DescriptiveDataSection_tags_1)
		/sizeof(asn_DEF_DescriptiveDataSection_tags_1[0]), /* 1 */
	asn_DEF_DescriptiveDataSection_tags_1,	/* Same as above */
	sizeof(asn_DEF_DescriptiveDataSection_tags_1)
		/sizeof(asn_DEF_DescriptiveDataSection_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DescriptiveDataSection_1,
	7,	/* Elements count */
	&asn_SPC_DescriptiveDataSection_specs_1	/* Additional specs */
};

