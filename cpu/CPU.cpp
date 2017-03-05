#include "CPU.h"
#include <iostream>
#include <fstream>

using namespace std;

CPU::CPU(char* path) {
  intRAM = new uint8_t[65535];
  this->path = path;
  cout << path << endl;
  ROM_bytes = fetchRom();
  init();
}

vector<uint8_t> CPU::fetchRom() {

  ifstream ifs(path, ios::binary|ios::ate);
  ifstream::pos_type pos = ifs.tellg();

  vector<uint8_t> bytes(pos);

  ifs.seekg(0, ios::beg);
  ifs.read((char*)&bytes[0], pos);
  cout << bytes.size() << endl;

  return bytes;
}

void CPU::init() {
  PC = 0x100; // initialize to $100
  SP = 0xfffe; // initialize to $FFFE

  OpcodeTable[0x06] = &CPU::LDnnn_0x06;
  OpcodeTable[0x0e] = &CPU::LDnnn_0x0e;
  OpcodeTable[0x16] = &CPU::LDnnn_0x16;
  OpcodeTable[0x1e] = &CPU::LDnnn_0x1e;
  OpcodeTable[0x26] = &CPU::LDnnn_0x26;
  OpcodeTable[0x2e] = &CPU::LDnnn_0x2e;

  OpcodeTable[0x7f] = &CPU::LDr1r2_0x7f;
  OpcodeTable[0x78] = &CPU::LDr1r2_0x78;
  OpcodeTable[0x79] = &CPU::LDr1r2_0x79;
  OpcodeTable[0x7a] = &CPU::LDr1r2_0x7a;
  OpcodeTable[0x7b] = &CPU::LDr1r2_0x7b;
  OpcodeTable[0x7c] = &CPU::LDr1r2_0x7c;
  OpcodeTable[0x7d] = &CPU::LDr1r2_0x7d;


}





int CPU::opcode(uint8_t opcode, uint8_t n, uint8_t nn) {
  switch(opcode) {

    // LD nn, n ----------------------------

    case 0x06: B = n; return 8;
    case 0x0e: C = n; return 8;
    case 0x16: D = n; return 8;
    case 0x1e: E = n; return 8;
    case 0x26: H = n; return 8;
    case 0x2e: L = n; return 8;

    // LD r1, r2 ---------------------------

    case 0x7f: A = A; return 4;
    case 0x78: A = B; return 4;
    case 0x79: A = C; return 4;
    case 0x7a: A = D; return 4;
    case 0x7b: A = E; return 4;
    case 0x7c: A = H; return 4;
    case 0x7d: A = L; return 4;
    case 0x7e: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      A = intRAM[HL];
      return 8;
    }
    case 0x40: B = B; return 4;
    case 0x41: B = C; return 4;
    case 0x42: B = D; return 4;
    case 0x43: B = E; return 4;
    case 0x44: B = H; return 4;
    case 0x45: B = L; return 4;
    case 0x46: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      B = intRAM[HL];
      return 8;
    }
    case 0x48: C = B; return 4;
    case 0x49: C = C; return 4;
    case 0x4a: C = D; return 4;
    case 0x4b: C = E; return 4;
    case 0x4c: C = H; return 4;
    case 0x4d: C = L; return 4;
    case 0x4e: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      C = intRAM[HL];
      return 8;
    }
    case 0x50: D = B; return 4;
    case 0x51: D = C; return 4;
    case 0x52: D = D; return 4;
    case 0x53: D = E; return 4;
    case 0x54: D = H; return 4;
    case 0x55: D = L; return 4;
    case 0x56: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      D = intRAM[HL];
      return 8;
    }
    case 0x58: E = B; return 4;
    case 0x59: E = C; return 4;
    case 0x5a: E = D; return 4;
    case 0x5b: E = E; return 4;
    case 0x5c: E = H; return 4;
    case 0x5d: E = L; return 4;
    case 0x5e: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      E = intRAM[HL];
      return 8;
    }
    case 0x60: H = B; return 4;
    case 0x61: H = C; return 4;
    case 0x62: H = D; return 4;
    case 0x63: H = E; return 4;
    case 0x64: H = H; return 4;
    case 0x65: H = L; return 4;
    case 0x66: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      H = intRAM[HL];
      return 8;
    }
    case 0x68: L = B; return 4;
    case 0x69: L = C; return 4;
    case 0x6a: L = D; return 4;
    case 0x6b: L = E; return 4;
    case 0x6c: L = H; return 4;
    case 0x6d: L = L; return 4;
    case 0x6e: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      L = intRAM[HL];
      return 8;
    }
    case 0x70: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = B;
      return 8;
    }
    case 0x71: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = C;
      return 8;
    }
    case 0x72: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = D;
      return 8;
    }
    case 0x73: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = E;
      return 8;
    }
    case 0x74: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = H;
      return 8;
    }
    case 0x75: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = L;
      return 8;
    }
    case 0x36: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = n;
      return 12;
    }

    // LD A,n -----------------------------

    //case 0x7f: A = A; return 4;
    //case 0x78: A = B; return 4;
    //case 0x79: A = C; return 4;
    //case 0x7a: A = D; return 4;
    //case 0x7b: A = E; return 4;
    //case 0x7c: A = H; return 4;
    //case 0x7d: A = L; return 4;
    case 0x0a: {
      uint16_t BC = (uint16_t)(B << 8) | C;
      A = intRAM[BC];
      return 8;
    }
    case 0x1a: {
      uint16_t DE = (uint16_t)(D << 8) | E;
      A = intRAM[DE];
      return 8;
    }
    /*
    case 0x7e: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      A = intRAM[HL];
      return 8;
    }
    */
    case 0xfa: {
      A = intRAM[nn];
      return 16;
    }
    case 0x3e: A = n; return 8;

    // LD n, A -----------------------------------

    //case 0x7f: A = A; return 4;
    case 0x47: B = A; return 4;
    case 0x4f: C = A; return 4;
    case 0x57: D = A; return 4;
    case 0x5f: E = A; return 4;
    case 0x67: H = A; return 4;
    case 0x6f: L = A; return 4;
    case 0x02: {
      uint16_t BC = (uint16_t)(B << 8) | C;
      intRAM[BC] = A;
      return 8;
    }
    case 0x12: {
      uint16_t DE = (uint16_t)(D << 8) | E;
      intRAM[DE] = A;
      return 8;
    }
    case 0x77: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = A;
      return 8;
    }
    case 0xea: {
      intRAM[(uint16_t)n] = A;
      return 16;
    }

    // LD A, (C) --------------------------------------

    case 0xf2: A = intRAM[0xff00] + C; return 8;

    // LD (C), A --------------------------------------

    case 0xe2: intRAM[intRAM[0xff00] + C] = A; return 8;

    // LDD A, (HL) ------------------------------------

    case 0x3a: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      A = intRAM[HL];
      HL--;
      H = HL >> 8;
      L = HL | 0x00ff;
      return 8;
    }

    // LDD (HL), A ------------------------------------

    case 0x32: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = A;
      HL--;
      H = HL >> 8;
      L = HL | 0x00ff;
      return 8;
    }

    // LDI A, (HL) -------------------------------------

    case 0x2a: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      A = intRAM[HL];
      HL++;
      H = HL >> 8;
      L = HL | 0x00ff;
      return 8;
    }

    // LDI (HL), A -------------------------------------

    case 0x22: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      intRAM[HL] = A;
      HL++;
      H = HL >> 8;
      L = HL | 0x00ff;
      return 8;
    }

    // LDH (n), A --------------------------------------

    case 0xe0: intRAM[0xff00 + n] = A; return 12;

    // LDH A, (n) --------------------------------------

    case 0xf0: A = intRAM[0xff00 + n]; return 12;



    // ===================================================================
    // 16-BIT LOADS ======================================================
    // ===================================================================



    // LD n, nn

    case 0x01: B = n; C = nn; return 12;
    case 0x11: D = n; E = nn; return 12;
    case 0x21: H = n; L = nn; return 12;
    case 0x31: SP = (((uint16_t)n) << 8) | nn; return 12;

    // LD SP, HL

    case 0xf9: SP = (uint16_t)(H << 8) | L; return 8;

    // LDHL SP, n

    case 0xf8: {
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

    // LD (nn), SP

    case 0x08: intRAM[((((uint16_t)n) << 8) | nn)] = SP; return 20;

    // PUSH nn

    case 0xf5: STACK.push_back(((uint16_t)A << 8) | F); SP-=2; return 16;
    case 0xc5: STACK.push_back(((uint16_t)B << 8) | C); SP-=2; return 16;
    case 0xd5: STACK.push_back(((uint16_t)D << 8) | E); SP-=2; return 16;
    case 0xe5: STACK.push_back(((uint16_t)H << 8) | L); SP-=2; return 16;

    // POP nn

    case 0xf1: {
      uint16_t value = STACK[STACK.size()-1];
      STACK.pop_back();
      A = value >> 8;
      F = value & 0x00ff;
      SP+=2;
      return 12;
    }

    case 0xc1: {
      uint16_t value = STACK[STACK.size()-1];
      STACK.pop_back();
      B = value >> 8;
      C = value & 0x00ff;
      SP+=2;
      return 12;
    }

    case 0xd1: {
      uint16_t value = STACK[STACK.size()-1];
      STACK.pop_back();
      D = value >> 8;
      E = value & 0x00ff;
      SP+=2;
      return 12;
    }

    case 0xe1: {
      uint16_t value = STACK[STACK.size()-1];
      STACK.pop_back();
      H = value >> 8;
      L = value & 0x00ff;
      SP+=2;
      return 12;
    }




    // ===================================================================
    // 8-BIT ALU =========================================================
    // ===================================================================

    case 0x87: {
      A = A + A;
      if (A > 15) FLAG[2] = 1;
      if (A > 255) FLAG[3] = 1;
      if (A == 0) FLAG[0] = 1;
      FLAG[1] = 0;
      return 4;
    }

    case 0x80: {
      A = A + B;
      if (A > 15) FLAG[2] = 1;
      if (A > 255) FLAG[3] = 1;
      if (A == 0) FLAG[0] = 1;
      FLAG[1] = 0;
      return 4;
    }

    case 0x81: {
      A = A + C;
      if (A > 15) FLAG[2] = 1;
      if (A > 255) FLAG[3] = 1;
      if (A == 0) FLAG[0] = 1;
      FLAG[1] = 0;
      return 4;
    }

    case 0x82: {
      A = A + D;
      if (A > 15) FLAG[2] = 1;
      if (A > 255) FLAG[3] = 1;
      if (A == 0) FLAG[0] = 1;
      FLAG[1] = 0;
      return 4;
    }

    case 0x83: {
      A = A + E;
      if (A > 15) FLAG[2] = 1;
      if (A > 255) FLAG[3] = 1;
      if (A == 0) FLAG[0] = 1;
      FLAG[1] = 0;
      return 4;
    }

    case 0x84: {
      A = A + H;
      if (A > 15) FLAG[2] = 1;
      if (A > 255) FLAG[3] = 1;
      if (A == 0) FLAG[0] = 1;
      FLAG[1] = 0;
      return 4;
    }

    case 0x85: {
      A = A + L;
      if (A > 15) FLAG[2] = 1;
      if (A > 255) FLAG[3] = 1;
      if (A == 0) FLAG[0] = 1;
      FLAG[1] = 0;
      return 4;
    }

    case 0x86: {
      uint16_t HL = (uint16_t)(H << 8) | L;
      A = A + intRAM[HL];
      if (A > 15) FLAG[2] = 1;
      if (A > 255) FLAG[3] = 1;
      if (A == 0) FLAG[0] = 1;
      FLAG[1] = 0;
      return 8;
    }

    case 0xc6: {
      A = A + n;
      if (A > 15) FLAG[2] = 1;
      if (A > 255) FLAG[3] = 1;
      if (A == 0) FLAG[0] = 1;
      FLAG[1] = 0;
      return 8;
    }



  }
  return 0;
}
