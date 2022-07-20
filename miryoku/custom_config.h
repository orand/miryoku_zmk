// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T, &hm LC(LG(LS(LALT))) G, &hm LC(LG(LS(LALT))) M,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_MEDIA ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM BSPC,    &lt U_FUN DEL,     U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &to U_NUM,         &to U_NAV,         U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              &trans,              &trans,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &to U_SYM,         &to U_MOUSE,       U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              &trans,              &trans,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_NA,              &kp F14,           &kp F15,          &u_bt_sel_4,        &u_bt_sel_5,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_HFN \
&kp LC(LG(LS(LA(F1)))), 	&kp LC(LG(LS(LA(F2)))), 	&kp LC(LG(LS(LA(F3)))), 	&kp LC(LG(LS(LA(F4)))), 	&kp LC(LG(LS(LA(F5)))),    		&kp LC(LG(LS(LA(F6)))), 	&kp LC(LG(LS(LA(F7)))), 	&kp LC(LG(LS(LA(F8)))), 	&kp LC(LG(LS(LA(F9)))), 	&kp LC(LG(LS(LA(F10)))), \
&kp LC(LG(LS(LA(F11)))), 	&kp LC(LG(LS(LA(F12)))), 	&kp LC(LG(LS(LA(F13)))), 	&kp LC(LG(LS(LA(F14)))), 	&kp LC(LG(LS(LA(F15)))),    	&kp LC(LG(LS(LA(F16)))), 	&kp LC(LG(LS(LA(F17)))), 	&kp LC(LG(LS(LA(F18)))), 	&kp LC(LG(LS(LA(F19)))), 	&kp LC(LG(LS(LA(F20)))), \
U_NA, 						U_NA, 						U_NA, 						U_NA, 						U_NA,    						&kp LC(LG(LA(F1))), 	&kp LC(LG(LA(F2))), 	&kp LC(LG(LA(F3))), 	&kp LC(LG(LA(F4))), 	&kp LC(LG(LA(F5))), \
U_NP,              			U_NP,              			U_NA,              			&trans,              			&trans,              				&kp LC(LG(LA(F6))),        	&kp LC(LG(LA(F7))),         &kp LC(LG(LA(F8))),        	U_NP,              			U_NP

#define MIRYOKU_LAYERMAPPING_HFN MIRYOKU_MAPPING
