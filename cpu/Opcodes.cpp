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

int CPU::LDr1r2_0x0a(uint8_t n, uint8_t nn) {
  uint16_t BC = (uint16_t)(B << 8) | C;
  A = intRAM[BC];
  return 8;
}

int CPU::LDr1r2_0x1a(uint8_t n, uint8_t nn) {
  uint16_t DE = (uint16_t)(D << 8) | E;
  A = intRAM[DE];
  return 8;
}

int CPU::LDr1r2_0xfa(uint8_t n, uint8_t nn) {
  A = intRAM[nn];
  return 16;
}

int CPU::LDr1r2_0x3e(uint8_t n, uint8_t nn) {
  A = n;
  return 8;
}

int CPU::LDr1r2_0x47(uint8_t n, uint8_t nn) {
  B = A;
  return 4;
}

int CPU::LDr1r2_0x4f(uint8_t n, uint8_t nn) {
  C = A;
  return 4;
}

int CPU::LDr1r2_0x57(uint8_t n, uint8_t nn) {
  D = A;
  return 4;
}

int CPU::LDr1r2_0x5f(uint8_t n, uint8_t nn) {
  E = A;
  return 4;
}

int CPU::LDr1r2_0x67(uint8_t n, uint8_t nn) {
  H = A;
  return 4;
}

int CPU::LDr1r2_0x6f(uint8_t n, uint8_t nn) {
  L = A;
  return 4;
}

int CPU::LDr1r2_0x02(uint8_t n, uint8_t nn) {
  uint16_t BC = (uint16_t)(B << 8) | C;
  intRAM[BC] = A;
  return 8;
}

int CPU::LDr1r2_0x12(uint8_t n, uint8_t nn) {
  uint16_t DE = (uint16_t)(D << 8) | E;
  intRAM[DE] = A;
  return 8;
}

int CPU::LDr1r2_0x77(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = A;
  return 8;
}

int CPU::LDr1r2_0xea(uint8_t n, uint8_t nn) {
  intRAM[(uint16_t)n] = A;
  return 16;
}

int CPU::LDr1r2_0xf2(uint8_t n, uint8_t nn) {
  A = intRAM[0xff00] + C;
  return 8;
}

int CPU::LDr1r2_0xe2(uint8_t n, uint8_t nn) {
  intRAM[intRAM[0xff00] + C] = A;
  return 8;
}

int CPU::LDDr1r2_0x3a(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  A = intRAM[HL];
  HL--;
  H = HL >> 8;
  L = HL | 0x00ff;
  return 8;
}

int CPU::LDDr1r2_0x32(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = A;
  HL--;
  H = HL >> 8;
  L = HL | 0x00ff;
  return 8;
}

int CPU::LDIr1r2_0x2a(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  A = intRAM[HL];
  HL++;
  H = HL >> 8;
  L = HL | 0x00ff;
  return 8;
}

int CPU::LDIr1r2_0x22(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  intRAM[HL] = A;
  HL++;
  H = HL >> 8;
  L = HL | 0x00ff;
  return 8;
}

int CPU::LDHr1r2_0xe0(uint8_t n, uint8_t nn) {
  intRAM[0xff00 + n] = A;
  return 12;
}

int CPU::LDHr1r2_0xf0(uint8_t n, uint8_t nn) {
  A = intRAM[0xff00 + n];
  return 12;
}

int CPU::LDnnn_0x01(uint8_t n, uint8_t nn) {
  B = n;
  C = nn;
  return 12;
}

int CPU::LDnnn_0x11(uint8_t n, uint8_t nn) {
  D = n;
  E = nn;
  return 12;
}

int CPU::LDnnn_0x21(uint8_t n, uint8_t nn) {
  H = n;
  L = nn;
  return 12;
}

int CPU::LDnnn_0x31(uint8_t n, uint8_t nn) {
  SP = (((uint16_t)n) << 8) | nn;
  return 12;
}

int CPU::LDr1r2_0xf9(uint8_t n, uint8_t nn) {
  SP = (uint16_t)(H << 8) | L;
  return 8;
}

/// TODO: correct the carry bit settings!
int CPU::LDHLr1r2_0xf8(uint8_t n, uint8_t nn) {
  if (SP + n > UINT16_MAX) {
    uint16_t value = 0xffff;
    fill(FLAG, FLAG+8, 0);
    FLAG[2] = FLAG[3] = 1;
    H = value >> 8;
    L = value & 0x00ff;
  } else {
    fill(FLAG, FLAG+8, 0);
    uint16_t value = SP + n;
    H = value >> 8;
    L = value & 0x00ff;
  }
  return 12;
}

int CPU::LDr1r2_0x08(uint8_t n, uint8_t nn) {
  intRAM[((((uint16_t)n) << 8) | nn)] = SP;
  return 20;
}

int CPU::PUSH_0xf5(uint8_t n, uint8_t nn) {
  STACK.push_back(((uint16_t)A << 8) | F);
  SP-=2;
  return 16;
}

int CPU::PUSH_0xc5(uint8_t n, uint8_t nn) {
  STACK.push_back(((uint16_t)B << 8) | C);
  SP-=2;
  return 16;
}

int CPU::PUSH_0xd5(uint8_t n, uint8_t nn) {
  STACK.push_back(((uint16_t)D << 8) | E);
  SP-=2;
  return 16;
}

int CPU::PUSH_0xe5(uint8_t n, uint8_t nn) {
  STACK.push_back(((uint16_t)H << 8) | L);
  SP-=2;
  return 16;
}

int CPU::POP_0xf1(uint8_t n, uint8_t nn) {
  uint16_t value = STACK[STACK.size()-1];
  STACK.pop_back();
  A = value >> 8;
  F = value & 0x00ff;
  SP+=2;
  return 12;
}

int CPU::POP_0xc1(uint8_t n, uint8_t nn) {
  uint16_t value = STACK[STACK.size()-1];
  STACK.pop_back();
  B = value >> 8;
  C = value & 0x00ff;
  SP+=2;
  return 12;
}

int CPU::POP_0xd1(uint8_t n, uint8_t nn) {
  uint16_t value = STACK[STACK.size()-1];
  STACK.pop_back();
  D = value >> 8;
  E = value & 0x00ff;
  SP+=2;
  return 12;
}

int CPU::POP_0xe1(uint8_t n, uint8_t nn) {
  uint16_t value = STACK[STACK.size()-1];
  STACK.pop_back();
  H = value >> 8;
  L = value & 0x00ff;
  SP+=2;
  return 12;
}

int CPU::ADD_0x87(uint8_t n, uint8_t nn) {
  A = A + A;
  if ((((A & 0xf) + (A & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADD_0x80(uint8_t n, uint8_t nn) {
  A = A + B;
  if ((((A & 0xf) + (B & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADD_0x81(uint8_t n, uint8_t nn) {
  A = A + C;
  if ((((A & 0xf) + (C & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADD_0x82(uint8_t n, uint8_t nn) {
  A = A + D;
  if ((((A & 0xf) + (D & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADD_0x83(uint8_t n, uint8_t nn) {
  A = A + E;
  if ((((A & 0xf) + (E & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADD_0x84(uint8_t n, uint8_t nn) {
  A = A + H;
  if ((((A & 0xf) + (H & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADD_0x85(uint8_t n, uint8_t nn) {
  A = A + L;
  if ((((A & 0xf) + (L & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADD_0x86(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  A = A + intRAM[HL];
  if ((((A & 0xf) + (intRAM[HL] & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 8;
}

int CPU::ADD_0xc6(uint8_t n, uint8_t nn) {
  A = A + n;
  if ((((A & 0xf) + (n & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 8;
}

int CPU::ADC_0x8f(uint8_t n, uint8_t nn) {
  A = A + A;
  A += FLAG[3];
  if ((((A & 0xf) + ((A+FLAG[3]) & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADC_0x88(uint8_t n, uint8_t nn) {
  A = A + B;
  A += FLAG[3];
  if ((((A & 0xf) + ((B+FLAG[3]) & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADC_0x89(uint8_t n, uint8_t nn) {
  A = A + C;
  A += FLAG[3];
  if ((((A & 0xf) + ((C+FLAG[3]) & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADC_0x8a(uint8_t n, uint8_t nn) {
  A = A + D;
  A += FLAG[3];
  if ((((A & 0xf) + ((D+FLAG[3]) & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADC_0x8b(uint8_t n, uint8_t nn) {
  A = A + E;
  A += FLAG[3];
  if ((((A & 0xf) + ((E+FLAG[3]) & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADC_0x8c(uint8_t n, uint8_t nn) {
  A = A + H;
  A += FLAG[3];
  if ((((A & 0xf) + ((H+FLAG[3]) & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADC_0x8d(uint8_t n, uint8_t nn) {
  A = A + L;
  A += FLAG[3];
  if ((((A & 0xf) + ((L+FLAG[3]) & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::ADC_0x8e(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  A = A + intRAM[HL];
  A += FLAG[3];
  if ((((A & 0xf) + ((intRAM[HL]+FLAG[3]) & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 8;
}

int CPU::ADC_0xce(uint8_t n, uint8_t nn) {
  A = A + n;
  A += FLAG[3];
  if ((((A & 0xf) + ((n+FLAG[3]) & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  if (A > 255) FLAG[3] = 1;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 8;
}

int CPU::AND_0xa7(uint8_t n, uint8_t nn) {
  A = A & A;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 1;
  FLAG[3] = 0;
  return 4;
}

int CPU::AND_0xa0(uint8_t n, uint8_t nn) {
  A = A & B;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 1;
  FLAG[3] = 0;
  return 4;
}

int CPU::AND_0xa1(uint8_t n, uint8_t nn) {
  A = A & C;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 1;
  FLAG[3] = 0;
  return 4;
}

int CPU::AND_0xa2(uint8_t n, uint8_t nn) {
  A = A & D;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 1;
  FLAG[3] = 0;
  return 4;
}

int CPU::AND_0xa3(uint8_t n, uint8_t nn) {
  A = A & E;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 1;
  FLAG[3] = 0;
  return 4;
}

int CPU::AND_0xa4(uint8_t n, uint8_t nn) {
  A = A & H;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 1;
  FLAG[3] = 0;
  return 4;
}

int CPU::AND_0xa5(uint8_t n, uint8_t nn) {
  A = A & L;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 1;
  FLAG[3] = 0;
  return 4;
}

int CPU::AND_0xa6(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  A = A & intRAM[HL];
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 1;
  FLAG[3] = 0;
  return 8;
}

int CPU::AND_0xe6(uint8_t n, uint8_t nn) {
  A = A & n;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 1;
  FLAG[3] = 0;
  return 8;
}

int CPU::OR_0xb7(uint8_t n, uint8_t nn) {
  A = A | A;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::OR_0xb0(uint8_t n, uint8_t nn) {
  A = A | B;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::OR_0xb1(uint8_t n, uint8_t nn) {
  A = A | C;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::OR_0xb2(uint8_t n, uint8_t nn) {
  A = A | D;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::OR_0xb3(uint8_t n, uint8_t nn) {
  A = A | E;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::OR_0xb4(uint8_t n, uint8_t nn) {
  A = A | H;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::OR_0xb5(uint8_t n, uint8_t nn) {
  A = A | L;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::OR_0xb6(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  A = A | intRAM[HL];
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::OR_0xf6(uint8_t n, uint8_t nn) {
  A = A | n;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::XOR_0xaf(uint8_t n, uint8_t nn) {
  A = A ^ A;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::XOR_0xa8(uint8_t n, uint8_t nn) {
  A = A ^ B;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::XOR_0xa9(uint8_t n, uint8_t nn) {
  A = A ^ C;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::XOR_0xaa(uint8_t n, uint8_t nn) {
  A = A ^ D;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::XOR_0xab(uint8_t n, uint8_t nn) {
  A = A ^ E;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::XOR_0xac(uint8_t n, uint8_t nn) {
  A = A ^ H;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::XOR_0xad(uint8_t n, uint8_t nn) {
  A = A ^ L;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 4;
}

int CPU::XOR_0xae(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  A = A ^ intRAM[HL];
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::XOR_0xee(uint8_t n, uint8_t nn) {
  A = A ^ n;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}






int CPU::INC_0x3c(uint8_t n, uint8_t nn) {
  if ((((A & 0xf) + (1 & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  A++;
  if (A == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::INC_0x04(uint8_t n, uint8_t nn) {
  if ((((C & 0xf) + (1 & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  B++;
  if (B == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::INC_0x0c(uint8_t n, uint8_t nn) {
  if ((((C & 0xf) + (1 & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  C++;
  if (C == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::INC_0x14(uint8_t n, uint8_t nn) {
  if ((((D & 0xf) + (1 & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  D++;
  if (D == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::INC_0x1c(uint8_t n, uint8_t nn) {
  if ((((E & 0xf) + (1 & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  E++;
  if (E == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::INC_0x24(uint8_t n, uint8_t nn) {
  if ((((H & 0xf) + (1 & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  H++;
  if (H == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::INC_0x2c(uint8_t n, uint8_t nn) {
  if ((((L & 0xf) + (1 & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  L++;
  if (L == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 4;
}

int CPU::INC_0x34(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  if ((((intRAM[HL] & 0xf) + (1 & 0xf)) & 0x10) == 0x10) FLAG[2] = 1;
  intRAM[HL]++;
  if (intRAM[HL] == 0) FLAG[0] = 1;
  FLAG[1] = 0;
  return 12;
}

int CPU::INC_0x03(uint8_t n, uint8_t nn) {
  uint16_t BC = (uint16_t)(B << 8) | C;
  BC++;
  B = BC >> 8;
  C = BC & 0x00ff;
  return 8;
}

int CPU::INC_0x13(uint8_t n, uint8_t nn) {
  uint16_t DE = (uint16_t)(D << 8) | E;
  DE++;
  D = DE >> 8;
  E = DE & 0x00ff;
  return 8;
}

int CPU::INC_0x23(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  HL++;
  H = HL >> 8;
  L = HL & 0x00ff;
  return 8;
}

int CPU::INC_0x33(uint8_t n, uint8_t nn) {
  SP++;
  return 8;
}






int CPU::DEC_0x0b(uint8_t n, uint8_t nn) {
  uint16_t BC = (uint16_t)(B << 8) | C;
  BC--;
  B = BC >> 8;
  C = BC & 0x00ff;
  return 8;
}

int CPU::DEC_0x1b(uint8_t n, uint8_t nn) {
  uint16_t DE = (uint16_t)(D << 8) | E;
  DE--;
  D = DE >> 8;
  E = DE & 0x00ff;
  return 8;
}

int CPU::DEC_0x2b(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  HL--;
  H = HL >> 8;
  L = HL & 0x00ff;
  return 8;
}

int CPU::DEC_0x3b(uint8_t n, uint8_t nn) {
  SP--;
  return 8;
}

int CPU::SWAP_0xcb_37(uint8_t n, uint8_t nn) {
  uint8_t lower = A & 0x0f;
  uint8_t upper = A & 0xf0;
  A = (uint8_t)(upper << 4) | lower;
  if (A == 0) FLAG[0] = 0;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::SWAP_0xcb_30(uint8_t n, uint8_t nn) {
  uint8_t lower = B & 0x0f;
  uint8_t upper = B & 0xf0;
  B = (uint8_t)(upper << 4) | lower;
  if (B == 0) FLAG[0] = 0;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::SWAP_0xcb_31(uint8_t n, uint8_t nn) {
  uint8_t lower = C & 0x0f;
  uint8_t upper = C & 0xf0;
  C = (uint8_t)(upper << 4) | lower;
  if (C == 0) FLAG[0] = 0;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::SWAP_0xcb_32(uint8_t n, uint8_t nn) {
  uint8_t lower = D & 0x0f;
  uint8_t upper = D & 0xf0;
  D = (uint8_t)(upper << 4) | lower;
  if (D == 0) FLAG[0] = 0;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::SWAP_0xcb_33(uint8_t n, uint8_t nn) {
  uint8_t lower = E & 0x0f;
  uint8_t upper = E & 0xf0;
  E = (uint8_t)(upper << 4) | lower;
  if (E == 0) FLAG[0] = 0;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::SWAP_0xcb_34(uint8_t n, uint8_t nn) {
  uint8_t lower = H & 0x0f;
  uint8_t upper = H & 0xf0;
  H = (uint8_t)(upper << 4) | lower;
  if (H == 0) FLAG[0] = 0;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::SWAP_0xcb_35(uint8_t n, uint8_t nn) {
  uint8_t lower = L & 0x0f;
  uint8_t upper = L & 0xf0;
  L = (uint8_t)(upper << 4) | lower;
  if (L == 0) FLAG[0] = 0;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 8;
}

int CPU::SWAP_0xcb_36(uint8_t n, uint8_t nn) {
  uint16_t HL = (uint16_t)(H << 8) | L;
  uint8_t lower = intRAM[HL] & 0x0f;
  uint8_t upper = intRAM[HL] & 0xf0;
  intRAM[HL] = (uint8_t)(upper << 4) | lower;
  if (intRAM[HL] == 0) FLAG[0] = 0;
  FLAG[1] = 0;
  FLAG[2] = 0;
  FLAG[3] = 0;
  return 16;
}
