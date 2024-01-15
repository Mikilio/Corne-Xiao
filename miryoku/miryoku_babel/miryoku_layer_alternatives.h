// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once


#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, Q),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, M),     \
&kp W,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           U_MT(RALT, SLASH), &kp SQT,           \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),  U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
U_MT(LGUI, Y),     U_MT(LALT, I),     U_MT(LCTRL, E),    U_MT(LSHFT, A),    &kp DOT,           &kp D,             U_MT(LSHFT, S),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, B),     \
&kp J,             U_MT(RALT, SLASH), &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             U_MT(RALT, P),     &kp V,             \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),  U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp D,             &kp H,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
&kp Z,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),  U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
&kp Z,             U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),  U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp K,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
&kp Z,             U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT(LGUI, A),     U_MT(LALT, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    &kp I,             &kp D,             U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, S),     \
&kp SLASH,         U_MT(RALT, Q),     &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             U_MT(RALT, V),     &kp Z,             \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),  U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
U_MT(LGUI, S),     U_MT(LALT, H),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp COMMA,         &kp DOT,           U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
&kp F,             U_MT(RALT, M),     &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             U_MT(RALT, K),     &kp Y,             \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),  U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, H),    U_MT(LSHFT, T),    &kp G,             &kp Y,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
&kp Z,             U_MT(RALT, X),     &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),  U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
&kp Z,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),  U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
&kp Y,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_PAD, TAB),  U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, Q),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, M),     \
&kp W,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           U_MT(RALT, SLASH), &kp SQT,           \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
U_MT(LGUI, Y),     U_MT(LALT, I),     U_MT(LCTRL, E),    U_MT(LSHFT, A),    &kp DOT,           &kp D,             U_MT(LSHFT, S),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, B),     \
&kp J,             U_MT(RALT, SLASH), &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             U_MT(RALT, P),     &kp V,             \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp D,             &kp H,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
&kp Z,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
&kp Q,              &kp W,              &kp F,              &kp P,              &kp B,             &kp J,             &kp L,              &kp U,              &kp Y,              &kp SQT,            \
U_LMT(LGUI, A),     U_LMT(LALT, R),     U_LMT(LCTRL, S),    U_LMT(LSHFT, T),    &kp G,             &kp M,             U_RMT(LSHFT, N),    U_RMT(LCTRL, E),    U_RMT(LALT, I),     U_RMT(LGUI, O),     \
&kp Z,              U_LMT(RALT, X),      &kp C,              &kp D,             &kp V,             &kp K,             &kp H,              &kp COMMA,          U_RMT(RALT, DOT),   &kp SLASH,          \
U_NP,               U_NP,               U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),   U_NP,               U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp K,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
&kp Z,             U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT(LGUI, A),     U_MT(LALT, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    &kp I,             &kp D,             U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, S),     \
&kp SLASH,         U_MT(RALT, Q),     &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             U_MT(RALT, V),     &kp Z,             \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
U_MT(LGUI, S),     U_MT(LALT, H),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp COMMA,         &kp DOT,           U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
&kp F,             U_MT(RALT, M),     &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             U_MT(RALT, K),     &kp Y,             \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, H),    U_MT(LSHFT, T),    &kp G,             &kp Y,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
&kp Z,             U_MT(RALT, X),     &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
&kp Z,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
&kp Y,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_PAD, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           &kp D,             &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &kp P,             &kp V,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp K,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         &kp DOT,           &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &kp K,             &kp Y,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             &kp Y,             &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &tog U_TAP,         &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,        &kp  RET,          &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           &kp D,             &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &kp P,             &kp V,             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,        &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,        &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,        &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp K,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,        &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,        &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         &kp DOT,           &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &kp K,             &kp Y,             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,        &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             &kp Y,             &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,        &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &tog U_TAP,        &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
&kp F13,           &kp F14,           &kp F15,           &kp F16,           &kp F17,           &kp F18,           &kp F19,           &kp F20,           &kp F21,           &kp F22,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp F23,           &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_PAD \
&kp F13,           &kp F14,           &kp F15,           &kp F16,           &kp F17,           &kp KP_DIVIDE,     &kp KP_N7,         &kp KP_N8,         &kp KP_N9,         &kp KP_MINUS,      \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp F23,           &kp KP_MULTIPLY,   &kp KP_N4,         &kp KP_N5,         &kp KP_N6,         &kp KP_PLUS,       \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             &kp KP_CLEAR,      &kp KP_N1,         &kp KP_N2,         &kp KP_N3,         &kp KP_EQUAL,      \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp KP_ENTER,      &kp KP_N0,         &kp KP_DOT,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
&kp F13,           &kp F14,           &kp F15,           &kp F16,           &kp F17,           U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp F23,           U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_GAME,      U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_GAME,      U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_PAD,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_GAME,      U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
