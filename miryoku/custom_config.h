// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH


#define MIRYOKU_CLIPBOARD_MAC
#define HRM_TAPPING_TERM 400
#define HRM_QUICK_TAP 175
#define HRM_PRIOR_IDLE 280

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
HRM_L(LSHFT, A),     HRM_L(LALT, S),     HRM_L(LCTRL, D),    HRM_L(LGUI, F),    &kp G,             &kp H,             HRM_R(LGUI, J),    HRM_R(LCTRL, K),    HRM_R(LALT, L),     HRM_R(LSHFT, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
HRM_L(LSHFT, A),     HRM_L(LALT, R),     HRM_L(LCTRL, S),    HRM_L(LGUI, T),    &kp G,             &kp M,             HRM_L(LGUI, N),    HRM_L(LCTRL, E),    HRM_L(LALT, I),     HRM_L(LSHFT, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
