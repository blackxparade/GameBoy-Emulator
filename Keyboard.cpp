#include "Keyboard.h"
using namespace std;

Keyboard::Keyboard(const Uint8 *KeyboardState) {
  this->state = KeyboardState;
}

Uint8 Keyboard::printer() {

  if (state[SDL_SCANCODE_SPACE]) {
    cout << "SPACE key pressed." << endl;
    return SDL_SCANCODE_SPACE;
  }

  if (state[SDL_SCANCODE_RETURN]) {
    cout << "RETURN key pressed." << endl;
    return SDL_SCANCODE_RETURN;
  }

  if (state[SDL_SCANCODE_ESCAPE]) {
    cout << "ESCAPE key pressed." << endl;
    return SDL_SCANCODE_ESCAPE;
  }

  return -1;
}
