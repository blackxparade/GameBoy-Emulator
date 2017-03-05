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

int CPU::LDr1r2_0x7e(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  A = intRAM[HL];
  return 8;
}

int CPU::LDr1r2_0x40(uint8_t n, uint8_t nn) {
  B = B;
  return 4;
}

int CPU::LDr1r2_0x41(uint8_t n, uint8_t nn) {
  B = C;
  return 4;
}

int CPU::LDr1r2_0x42(uint8_t n, uint8_t nn) {
  B = D;
  return 4;
}

int CPU::LDr1r2_0x43(uint8_t n, uint8_t nn) {
  B = E;
  return 4;
}

int CPU::LDr1r2_0x44(uint8_t n, uint8_t nn) {
  B = H;
  return 4;
}

int CPU::LDr1r2_0x45(uint8_t n, uint8_t nn) {
  B = L;
  return 4;
}

int CPU::LDr1r2_0x46(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  B = intRAM[HL];
  return 8;
}

int CPU::LDr1r2_0x48(uint8_t n, uint8_t nn) {
  C = B;
  return 4;
}

int CPU::LDr1r2_0x49(uint8_t n, uint8_t nn) {
  C = C;
  return 4;
}

int CPU::LDr1r2_0x4a(uint8_t n, uint8_t nn) {
  C = D;
  return 4;
}

int CPU::LDr1r2_0x4b(uint8_t n, uint8_t nn) {
  C = E;
  return 4;
}

int CPU::LDr1r2_0x4c(uint8_t n, uint8_t nn) {
  C = H;
  return 4;
}

int CPU::LDr1r2_0x4d(uint8_t n, uint8_t nn) {
  C = L;
  return 4;
}

int CPU::LDr1r2_0x4e(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  C = intRAM[HL];
  return 8;
}

int CPU::LDr1r2_0x50(uint8_t n, uint8_t nn) {
  D = B;
  return 4;
}

int CPU::LDr1r2_0x51(uint8_t n, uint8_t nn) {
  D = C;
  return 4;
}

int CPU::LDr1r2_0x52(uint8_t n, uint8_t nn) {
  D = D;
  return 4;
}

int CPU::LDr1r2_0x53(uint8_t n, uint8_t nn) {
  D = E;
  return 4;
}

int CPU::LDr1r2_0x54(uint8_t n, uint8_t nn) {
  D = H;
  return 4;
}

int CPU::LDr1r2_0x55(uint8_t n, uint8_t nn) {
  D = L;
  return 4;
}

int CPU::LDr1r2_0x56(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  D = intRAM[HL];
  return 8;
}

int CPU::LDr1r2_0x58(uint8_t n, uint8_t nn) {
  E = B;
  return 4;
}

int CPU::LDr1r2_0x59(uint8_t n, uint8_t nn) {
  E = C;
  return 4;
}

int CPU::LDr1r2_0x5a(uint8_t n, uint8_t nn) {
  E = D;
  return 4;
}

int CPU::LDr1r2_0x5b(uint8_t n, uint8_t nn) {
  E = E;
  return 4;
}

int CPU::LDr1r2_0x5c(uint8_t n, uint8_t nn) {
  E = H;
  return 4;
}

int CPU::LDr1r2_0x5d(uint8_t n, uint8_t nn) {
  E = L;
  return 4;
}

int CPU::LDr1r2_0x5e(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  E = intRAM[HL];
  return 8;
}

int CPU::LDr1r2_0x60(uint8_t n, uint8_t nn) {
  H = B;
  return 4;
}

int CPU::LDr1r2_0x61(uint8_t n, uint8_t nn) {
  H = C;
  return 4;
}

int CPU::LDr1r2_0x62(uint8_t n, uint8_t nn) {
  H = D;
  return 4;
}

int CPU::LDr1r2_0x63(uint8_t n, uint8_t nn) {
  H = E;
  return 4;
}

int CPU::LDr1r2_0x64(uint8_t n, uint8_t nn) {
  H = H;
  return 4;
}

int CPU::LDr1r2_0x65(uint8_t n, uint8_t nn) {
  H = L;
  return 4;
}

int CPU::LDr1r2_0x66(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  H = intRAM[HL];
  return 8;
}

int CPU::LDr1r2_0x68(uint8_t n, uint8_t nn) {
  L = B;
  return 4;
}

int CPU::LDr1r2_0x69(uint8_t n, uint8_t nn) {
  L = C;
  return 4;
}

int CPU::LDr1r2_0x6a(uint8_t n, uint8_t nn) {
  L = D;
  return 4;
}

int CPU::LDr1r2_0x6b(uint8_t n, uint8_t nn) {
  L = E;
  return 4;
}

int CPU::LDr1r2_0x6c(uint8_t n, uint8_t nn) {
  L = H;
  return 4;
}

int CPU::LDr1r2_0x6d(uint8_t n, uint8_t nn) {
  L = L;
  return 4;
}

int CPU::LDr1r2_0x6e(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  L = intRAM[HL];
  return 8;
}

int CPU::LDr1r2_0x70(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = B;
  return 8;
}

int CPU::LDr1r2_0x71(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = C;
  return 8;
}

int CPU::LDr1r2_0x72(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = D;
  return 8;
}

int CPU::LDr1r2_0x73(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = E;
  return 8;
}

int CPU::LDr1r2_0x74(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = H;
  return 8;
}

int CPU::LDr1r2_0x75(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = L;
  return 8;
}

int CPU::LDr1r2_0x36(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = n;
  return 12;
}
