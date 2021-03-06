/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-INIT"
 *     found in "../supl-init.asn"
 */

#ifndef _SUPLINIT_H
#define _SUPLINIT_H

#include <asn_application.h>

/* Including external dependencies */
#include "KeyIdentity.h"
#include "MAC.h"
#include "PosMethod.h"
#include "SLPMode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct Notification;
    struct SLPAddress;
    struct QoP;

    /* SUPLINIT */
    typedef struct SUPLINIT
    {
        PosMethod_t posMethod;
        struct Notification *notification /* OPTIONAL */;
        struct SLPAddress *sLPAddress /* OPTIONAL */;
        struct QoP *qoP /* OPTIONAL */;
        SLPMode_t sLPMode;
        MAC_t *mAC /* OPTIONAL */;
        KeyIdentity_t *keyIdentity /* OPTIONAL */;
        /*
         * This type is extensible,
         * possible extensions are below.
         */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } SUPLINIT_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_SUPLINIT;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Notification.h"
#include "QoP.h"
#include "SLPAddress.h"

#endif /* _SUPLINIT_H_ */
#include <asn_internal.h>
