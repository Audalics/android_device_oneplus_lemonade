/*
 * Copyright (C) 2021 crDroid Android Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t lemonade_info = {
    .brand = "OnePlus",
    .device = "OnePlus9",
    .name = "OnePlus9_EEA",
    .model = "LE2113",
    .build_fingerprint = "OnePlus/OnePlus9_EEA/OnePlus9:11/RKQ1.201105.002/2105252328:user/release-keys",
};

void vendor_load_properties() {
    set_dalvik_heap();
    set_variant_props(lemonade_info);
}