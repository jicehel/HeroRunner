#pragma once

#include <Gamebuino-Meta.h>

#define   EMPTY    31
#define   HERO     7
#define   ENNEMI   21
#define   GROUND   28
#define   ROPE     32
#define   SCALE    33
#define   GOLD     34
#define   V_SCALE  36
#define  TILE_COUNT 8

#define SCREEN_WIDTH 160
#define TILE_SIZE 8

#define SLICE_HEIGHT 8

#define ROW_SIZE (16*160*2)
#define ROWS_COUNT (128/16)

extern uint8_t CURRENT_SCREEN;
#define MENU_SCREEN 0
#define GAME_SCREEN 1

#define GAME_SLICES 15
#define MAP_WIDTH 20
#define MAP_FULL_SIZE (MAP_WIDTH * GAME_SLICES)
