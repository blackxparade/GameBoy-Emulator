#include "GPU.h"
#include <iostream>
using namespace std;

GPU::GPU() {
  cout << "yay!" << endl;
  init();
  render();
}

void GPU::init() {
  pixels = new uint32_t[CANVAS_WIDTH * CANVAS_HEIGHT];

  if (SDL_Init(SDL_INIT_VIDEO) < 0)
    cout << "Error! " << SDL_GetError() << endl;
  else {
    SDL_CreateWindowAndRenderer(WINDOW_WIDTH,
                                WINDOW_HEIGHT,
                                SDL_WINDOW_RESIZABLE,
                                &window,
                                &renderer);

    SDL_SetWindowTitle(window, "GameBoy Emulator");
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);

    texture = SDL_CreateTexture(renderer,
                                SDL_PIXELFORMAT_RGB888,
                                SDL_TEXTUREACCESS_STATIC,
                                CANVAS_WIDTH,
                                CANVAS_HEIGHT);

    memset(pixels, 0, CANVAS_WIDTH * CANVAS_HEIGHT * sizeof(uint32_t));
  }
}

void GPU::render() {
  int i = 0;

  while (true) {
    //cout << "SPACE ";
    pixels[i] = GREEN[rand() % 4];
    //pixels[i] = 0x7FFFD4;
    SDL_UpdateTexture(texture, NULL, pixels, CANVAS_WIDTH * sizeof(uint32_t));

    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
    i++;
    SDL_Delay(100);

    if ((SDL_PollEvent(&event) && event.type == SDL_QUIT)
        || i>= CANVAS_WIDTH * CANVAS_HEIGHT)
          break;
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}
