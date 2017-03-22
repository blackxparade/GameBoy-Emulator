#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <iostream>
#include <cstdint>
#include <list>
#include <SDL2/SDL.h>

class Keyboard {

private:
  const Uint8 *state;

public:
  Keyboard(const Uint8 *KeyboardState);
  Uint8 printer();

};
#endif
