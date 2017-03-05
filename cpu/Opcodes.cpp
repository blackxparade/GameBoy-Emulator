#include "CPU.h"

int CPU::LDnnn_0x06(uint8_t n, uint8_t nn) {
  B = n;
  return 8;
}

int CPU::LDnnn_0x0e(uint8_t n, uint8_t nn) {
  C = n;
  return 8;
}

int CPU::LDnnn_0x16(uint8_t n, uint8_t nn) {
  D = n;
  return 8;
}

int CPU::LDnnn_0x1e(uint8_t n, uint8_t nn) {
  E = n;
  return 8;
}

int CPU::LDnnn_0x26(uint8_t n, uint8_t nn) {
  H = n;
  return 8;
}

int CPU::LDnnn_0x2e(uint8_t n, uint8_t nn) {
  L = n;
  return 8;
}

int CPU::LDr1r2_0x7f(uint8_t n, uint8_t nn) {
  A = A;
  return 4;
}

int CPU::LDr1r2_0x78(uint8_t n, uint8_t nn) {
  A = B;
  return 4;
}

int CPU::LDr1r2_0x79(uint8_t n, uint8_t nn) {
  A = C;
  return 4;
}

int CPU::LDr1r2_0x7a(uint8_t n, uint8_t nn) {
  A = D;
  return 4;
}

int CPU::LDr1r2_0x7b(uint8_t n, uint8_t nn) {
  A = E;
  return 4;
}

int CPU::LDr1r2_0x7c(uint8_t n, uint8_t nn) {
  A = H;
  return 4;
}

int CPU::LDr1r2_0x7d(uint8_t n, uint8_t nn) {
  A = L;
  return 4;
}
