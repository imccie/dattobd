// SPDX-License-Identifier: GPL-2.0-only

/*
 * Copyright (C) 2015 Datto Inc.
 */

#include "includes.h"

static inline void dummy(void){
	submit_bio(NULL);
}
