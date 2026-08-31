/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_KEYBOARD_UID {0x97, 0xD0, 0xA5, 0x97, 0x57, 0x48, 0xD0, 0x4F}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

/* 固定手性：本镜像烧录到左半。
 * RP2040 的 EEPROM 由 flash 模拟，刷 .uf2 会一并覆盖，
 * 因此每次刷机都必须刷入对应手性的镜像。 */
#define EE_HANDS
#define INIT_EE_HANDS_LEFT
