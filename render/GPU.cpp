#include "GPU.h"
#include <fstream>
#include <iostream>
#include <thread>
#define NO_STDIO_REDIRECT
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
    //freopen( "CON", "wt", stdout );
    //freopen( "CON", "wt", stderr );
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
  const Uint8 *state = SDL_GetKeyboardState(NULL);
  int i = 0;
  while (true) {
    //cout << "yay " << endl;

    pixels[i] = GREEN[rand() % 4];
    //pixels[i] = 0x7FFFD4;
    SDL_UpdateTexture(texture, NULL, pixels, CANVAS_WIDTH * sizeof(uint32_t));

    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    if ((SDL_PollEvent(&event) && (event.type == SDL_QUIT))
        || (i>= CANVAS_WIDTH * CANVAS_HEIGHT)
        || state[SDL_SCANCODE_ESCAPE])
          break;

    if (state[SDL_SCANCODE_SPACE]) cout << "SPACE BABY!" << endl;
    SDL_Delay(100);
    i++;
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}
