// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "zmk-helpers/helper.h"
#include "zmk-helpers/key-labels/totem.h"

/* Settting up some global defaults and HomeRow Mods, based on urob's personal ZMK config */
/* Global defaults */

#define QUICK_TAP_MS 175

&sk {
  release-after-ms = <900>;
  quick-release;
};

&sl { // Allow sticky mods to chord across sticky layers.
  ignore-modifiers;
};

&lt {
  flavor = "balanced";
  tapping-term-ms = <200>;
  quick-tap-ms = <QUICK_TAP_MS>;
};

/* Homerow mods */

#define KEYS_L K00  K01  K02  K03  K04 K10  K11  K12  K13  K14  K20  K21  K22  K23 K24

#define KEYS_R K05  K06  K07  K08  K09 K15  K16  K17  K18  K19 K25  K26  K27  K28  K29

#define THUMBS K32 K33 K34 K35 K36 K37

#define MAKE_HRM(NAME, HOLD, TAP, TRIGGER_POS)                                 \
  ZMK_HOLD_TAP(NAME, bindings = <HOLD>, <TAP>; flavor = "balanced";            \
               tapping-term-ms = <400>; quick-tap-ms = <QUICK_TAP_MS>;         \
               require-prior-idle-ms = <280>; hold-trigger-on-release;         \
               hold-trigger-key-positions = <TRIGGER_POS>;)

MAKE_HRM(hml, &kp, &kp, KEYS_R THUMBS) // Left-hand HRMs.
MAKE_HRM(hmr, &kp, &kp, KEYS_L THUMBS) // Right-hand HRMs.

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_CLIPBOARD_MAC

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_BASE( \
K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
K10, K11, K12, &hml LGUI F, K14,      K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
K10  K11  K12  &hml LGUI F  K14       K15  K16  K17  K18  K19 \
K00  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K09 \
          K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 33 34
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 35 36
