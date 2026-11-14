/* Keyball44 dual-half build for the PMW3389 trackball.
 *
 * Only the optical sensor differs from the PMW3360 `vial_dual` keymap, and that
 * lives in rules.mk (POINTING_DEVICE_DRIVER = pmw3389). Everything else --
 * Vial UID, layer count, auto-mouse, OLED -- is inherited verbatim so an
 * existing Vial layout keeps working after flashing this firmware.
 *
 * If this variant ever needs its own layers, copy ../vial_dual/keymap.c here
 * and edit it; until then it stays a single source of truth.
 */

#include "../vial_dual/keymap.c"
