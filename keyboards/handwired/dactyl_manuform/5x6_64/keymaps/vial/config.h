/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
// #define MATRIX_DEBUG
// #define CONSOLE_ENABLE
// #define MASTER_LEFT
#define MASTER_RIGHT
// #define SOFT_SERIAL_PIN D0
// #define EE_HANDS
#define SPLIT_USB_DETECT
#define SPLIT_WATCHDOG_ENABLE

#define VIAL_KEYBOARD_UID {0x62, 0x7D, 0x14, 0x2C, 0x99, 0x09, 0x3E, 0xA2}
#define VIAL_INSECURE = yes

// Reducing the number of layers to save space
#define DYNAMIC_KEYMAP_LAYER_COUNT 2
