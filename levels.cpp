#include "levels.h"
#include "defines.h"

const uint8_t level1[MAP_FULL_SIZE] = {
V_SCALE,GROUND, GROUND, EMPTY,  EMPTY,  EMPTY,  GOLD,   EMPTY,  EMPTY,  EMPTY,  EMPTY,  GOLD,   GOLD,   EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND, GROUND, GROUND,
V_SCALE,GROUND, GROUND, EMPTY,  SCALE,  GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND, GROUND,
V_SCALE,GROUND, EMPTY,  GOLD,   SCALE,  EMPTY,  EMPTY,  EMPTY,  GOLD,   EMPTY,  GROUND, GROUND, GROUND, GROUND, GROUND, EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND,
V_SCALE,EMPTY,  SCALE,  GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, EMPTY,  GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, EMPTY,  EMPTY,  EMPTY,  EMPTY,
V_SCALE,EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND, GROUND, EMPTY,  GROUND, GROUND, GROUND, V_SCALE,GROUND, V_SCALE,EMPTY,  V_SCALE,V_SCALE,V_SCALE,
V_SCALE,GROUND, GROUND, GROUND, GROUND, SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND, GROUND, V_SCALE,EMPTY,  V_SCALE,EMPTY,  EMPTY,  V_SCALE,EMPTY,
V_SCALE,EMPTY,  GROUND, GROUND, GROUND, SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND, EMPTY,  V_SCALE,V_SCALE,V_SCALE,EMPTY,  EMPTY,  V_SCALE,EMPTY,
V_SCALE,EMPTY,  EMPTY,  GOLD,   GOLD,   SCALE,  GOLD,   EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND, EMPTY,  V_SCALE,EMPTY,  V_SCALE,EMPTY,  EMPTY,  V_SCALE,EMPTY,
V_SCALE,EMPTY,  GROUND, GROUND, GROUND, GROUND, GROUND, SCALE,  GROUND, EMPTY,  EMPTY,  EMPTY,  EMPTY,  V_SCALE,EMPTY,  V_SCALE,EMPTY,  V_SCALE,V_SCALE,V_SCALE,
V_SCALE,EMPTY,  EMPTY,  GOLD,   GOLD,   EMPTY,  EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  GOLD,   GOLD,   EMPTY,  EMPTY,  EMPTY,
V_SCALE,GROUND, GROUND, GROUND, GROUND, GROUND, EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND, SCALE,  GROUND, GROUND, GROUND, EMPTY,  EMPTY,
V_SCALE,EMPTY,  GROUND, GROUND, GROUND, EMPTY,  EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,
V_SCALE,EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  EMPTY,  GROUND, GROUND, GROUND, EMPTY,  EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND,
V_SCALE,EMPTY,  EMPTY,  EMPTY,  EMPTY,  HERO,   EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  EMPTY,  EMPTY,  GOLD,   GROUND, GROUND,
GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND,
};

const uint8_t level2[MAP_FULL_SIZE] = {
EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  V_SCALE,EMPTY,  EMPTY,  GROUND,
GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND, GROUND, SCALE,  GROUND,
EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND, GROUND, GROUND, GROUND, GROUND, EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND,
EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND, EMPTY,  EMPTY,  EMPTY,  GROUND, EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND,
GOLD,   GOLD,   GOLD,   EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND, EMPTY,  EMPTY,  EMPTY,  GROUND, GROUND, GROUND, EMPTY,  SCALE,  GROUND,
GROUND, GROUND, GROUND, GROUND, GROUND, EMPTY,  SCALE,  GROUND, SCALE,  GROUND, GROUND, GOLD,   GOLD,   GOLD,   GROUND, EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND,
EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND, SCALE,  GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND,
EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND,
GOLD,   GOLD,   EMPTY,  ROPE,   ROPE,   EMPTY,  SCALE,  EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  GROUND,
GROUND, GROUND, GROUND, EMPTY,  EMPTY,  GROUND, GROUND, EMPTY,  SCALE,  GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND,
GROUND, GROUND, GROUND, EMPTY,  EMPTY,  GROUND, GROUND, EMPTY,  SCALE,  EMPTY,  EMPTY,  GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND,
GROUND, EMPTY,  GROUND, EMPTY,  EMPTY,  GROUND, EMPTY,  EMPTY,  SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND,
EMPTY,  EMPTY,  GROUND, EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  SCALE,  EMPTY,  EMPTY,  GROUND, GROUND, SCALE,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  EMPTY,  GROUND,
EMPTY,  GOLD,   EMPTY,  EMPTY,  EMPTY,  HERO,   EMPTY,  EMPTY,  SCALE,  EMPTY,  EMPTY,  GROUND, GROUND, SCALE,  GOLD,   GOLD,   GOLD,   GOLD,   GOLD,   GROUND,
GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND, GROUND,
};

const uint8_t * levels[] = {
  level1, level2
};