#ifndef GPU_H
#define GPU_H
#include <iostream>
#include <cstdint>
#include <SDL2/SDL.h>
#include "../Keyboard.h"

class GPU {

  private:
    const int WINDOW_WIDTH = 512;
    const int WINDOW_HEIGHT = 512;
    const int CANVAS_WIDTH = 16;
    const int CANVAS_HEIGHT = 16;
    Keyboard* keyb;
    SDL_Window* window;
    SDL_Event event;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    uint32_t* pixels;

  void init();
  void render();
  public:

      const uint32_t GREEN[5] = {
        0x0f380f,
        0x306230,
        0x8bac0f,
        0x9bbc0f,
        0xaaaaaa };

      const uint32_t GRAY[5] = {
        0x383838,
        0x626262,
        0xacacac,
        0xbcbcbc,
        0xc8c8c8 };


    GPU();
    GPU(uint32_t[]);
    int setPixel(int, int, uint32_t);


};
#endif
