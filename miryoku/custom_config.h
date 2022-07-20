// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T, &hm LC(LG(LS(LALT))) G, &hm LC(LG(LS(LALT))) M,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_MEDIA ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM BSPC,    &lt U_FUN DEL,     U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_NA,              &kp F14,           &kp F15,          &u_bt_sel_4,        &u_bt_sel_5,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_HFN \
&kp LC(LG(LS(LALT(F1)))), &kp LC(LG(LS(LALT(F2)))), &kp LC(LG(LS(LALT(F3)))), &kp LC(LG(LS(LALT(F4)))), &kp LC(LG(LS(LALT(F5)))),    &kp LC(LG(LS(LALT(F6)))), &kp LC(LG(LS(LALT(F7)))), &kp LC(LG(LS(LALT(F8)))), &kp LC(LG(LS(LALT(F9)))), &kp LC(LG(LS(LALT(F10)))), \
&kp LC(LG(LS(LALT(F11)))), &kp LC(LG(LS(LALT(F12)))), &kp LC(LG(LS(LALT(F13)))), &kp LC(LG(LS(LALT(F14)))), &kp LC(LG(LS(LALT(F15)))),    &kp LC(LG(LS(LALT(F16)))), &kp LC(LG(LS(LALT(F17)))), &kp LC(LG(LS(LALT(F18)))), &kp LC(LG(LS(LALT(F19)))), &kp LC(LG(LS(LALT(F20)))), \
U_NA, U_NA, U_NA, U_NA, U_NA,    &kp LC(LG(LS(LALT(F21)))), &kp LC(LG(LS(LALT(F22)))), &kp LC(LG(LS(LALT(F23)))), &kp LC(LG(LS(LALT(F24)))), &kp LC(LG(LALT(F1))), \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp LC(LG(LALT(F2))),        &kp LC(LG(LALT(F3))),          &kp LC(LG(LALT(F4))),        U_NP,              U_NP
