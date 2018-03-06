/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 *
 * Copyright 2018 Abhijit Gadgil.
 */

/**
 * @file timer.c
 * @brief Linux implementation of the timer interface.
 */

#include <stddef.h>
#include <sys/types.h>
#include <stdint.h>
#include <stdbool.h>

#include "timer_platform.h"

bool has_timer_expired(Timer *timer) {
	return false;
}

void countdown_ms(Timer *timer, uint32_t timeout) {
	return;
}

uint32_t left_ms(Timer *timer) {
	return 0;
}

void countdown_sec(Timer *timer, uint32_t timeout) {
	return;
}

void init_timer(Timer *timer) {
}
