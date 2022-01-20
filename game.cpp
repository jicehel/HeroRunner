#include "game.h"
#include "defines.h"
#include "tileset.h"
#include "draw.h"
#include "title.h"

#include "levels.h"

uint8_t underlevel[MAP_FULL_SIZE];
extern uint8_t editorlevel[];

uint8_t level[MAP_FULL_SIZE];
uint8_t current_level = 0;
bool finished = false;
bool has_player = true;

void updateGame();

void initLevel(uint8_t id) {
  for (uint8_t i = 0; i < MAP_FULL_SIZE; i++) {
      level[i] = levels[id][i];
    }
}

void updateGame()
{

}




void startLevel(uint8_t id)
{
  CURRENT_SCREEN == GAME_SCREEN;
  gb.lights.clear();
  current_level = id;
  initLevel(id);
}

void gameTick()
{
  updateGame();
  if (CURRENT_SCREEN != GAME_SCREEN)
  {
    return;
  }

  for (uint8_t sliceIndex = 0; sliceIndex < GAME_SLICES; sliceIndex++)
  {
    uint16_t * buffer = sliceIndex % 2 == 0 ? buffer1 : buffer2;
    
    for (int16_t s = 0; s < MAP_WIDTH;s++)
    {
      const uint16_t * sprBegin = &tileset[ level[sliceIndex * MAP_WIDTH + s] * TILE_SIZE * TILE_SIZE ];
      for (int y = 0; y < TILE_SIZE; y++)
      {
        memcpy(&buffer[SCREEN_WIDTH * y + s * TILE_SIZE + 2], sprBegin + y * TILE_SIZE, TILE_SIZE*2);
      }
    }
    
    if (sliceIndex != 0) waitForPreviousDraw();
    
    drawScreenSlice(sliceIndex * SLICE_HEIGHT, SLICE_HEIGHT, buffer);
  }

  uint16_t * buffer_black = GAME_SLICES % 2 == 0 ? buffer1 : buffer2;
  memset(buffer_black, 0x00, SCREEN_WIDTH * 16);
  waitForPreviousDraw();

  drawScreenSlice(120, 8, buffer_black);
  waitForPreviousDraw();

}

void convertTile(uint8_t from, uint8_t to)
{
  for (uint8_t k = 0; k < MAP_FULL_SIZE; k++)
  {
    if (level[k] == from)
    {
      level[k] = to;
    }
  }
}
