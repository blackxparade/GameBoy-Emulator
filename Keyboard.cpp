#include "Keyboard.h"
using namespace std;

Keyboard::Keyboard(const Uint8 *KeyboardState) {
  this->state = KeyboardState;
}

Uint8 Keyboard::printer() {
  cout << state[SDL_SCANCODE_SPACE] << endl;
  return state[SDL_SCANCODE_SPACE];
}
