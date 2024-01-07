// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define U_MT(MOD, TAP) &u_mt MOD TAP

#if defined(MIRYOKU_HOME_MOD_RIGHT_POSITIONS)
#define U_LMT(MOD, TAP) &u_lmt MOD TAP
#else
#define U_LMT(MOD, TAP) &u_mt MOD TAP
#endif

#if defined(MIRYOKU_HOME_MOD_LEFT_POSITIONS)
#define U_RMT(MOD, TAP) &u_rmt MOD TAP
#else
#define U_RMT(MOD, TAP) &u_mt MOD TAP
#endif

#define U_LT(LAYER, TAP) &u_lt LAYER TAP
