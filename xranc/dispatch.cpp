/*
 * Copyright 2019-present Open Networking Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <XRANCPDU.h>
#include "dispatch.h"
#include "cell_config.h"

void dispatch(uint8_t *buffer, size_t buf_size) {
    XRANCPDU *pdu = 0;
    asn_dec_rval_t rval;
    rval = asn_decode(0, ATS_BER, &asn_DEF_XRANCPDU, (void **)&pdu, buffer, buf_size);
    switch (rval.code) {
        case RC_OK:
            break;
        case RC_WMORE:
        case RC_FAIL:
        default:
            ASN_STRUCT_FREE(asn_DEF_XRANCPDU, pdu);
            return;
    }

    switch (pdu->hdr.api_id) {
        case XRANC_API_ID_cellConfigReport:
            cell_config_response(pdu);
            break;
        default:
            printf("Message %lu not handled\n", pdu->hdr.api_id);
    }
}