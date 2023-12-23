// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define U_MT(MOD, TAP) &u_mt MOD TAP
#if defined(MIRYOKU_HOME_MOD_RIGHT_POSITIONS)
#define LHM &lhm
#else
#define LHM &hm
#endif

#if defined(MIRYOKU_HOME_MOD_LEFT_POSITIONS)
#define RHM &rhm
#else
#define RHM &hm
#endif

#define U_LT(LAYER, TAP) &u_lt LAYER TAP
