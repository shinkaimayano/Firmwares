// Copyright 2022 Shinkai Mayano (@Shinkai Mayano)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MIDI_ADVANCED

#define RGB_DI_PIN GP27
#define DRIVER_LED_TOTAL 3
#define RGBLED_NUM 3
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT