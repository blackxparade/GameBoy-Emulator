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
  OpcodeTable[0x7e] = &CPU::LDr1r2_0x7e;

  OpcodeTable[0x40] = &CPU::LDr1r2_0x40;
  OpcodeTable[0x41] = &CPU::LDr1r2_0x41;
  OpcodeTable[0x42] = &CPU::LDr1r2_0x42;
  OpcodeTable[0x43] = &CPU::LDr1r2_0x43;
  OpcodeTable[0x44] = &CPU::LDr1r2_0x44;
  OpcodeTable[0x45] = &CPU::LDr1r2_0x45;
  OpcodeTable[0x46] = &CPU::LDr1r2_0x46;

  OpcodeTable[0x48] = &CPU::LDr1r2_0x48;
  OpcodeTable[0x49] = &CPU::LDr1r2_0x49;
  OpcodeTable[0x4a] = &CPU::LDr1r2_0x4a;
  OpcodeTable[0x4b] = &CPU::LDr1r2_0x4b;
  OpcodeTable[0x4c] = &CPU::LDr1r2_0x4c;
  OpcodeTable[0x4d] = &CPU::LDr1r2_0x4d;
  OpcodeTable[0x4e] = &CPU::LDr1r2_0x4e;

  OpcodeTable[0x50] = &CPU::LDr1r2_0x50;
  OpcodeTable[0x51] = &CPU::LDr1r2_0x51;
  OpcodeTable[0x52] = &CPU::LDr1r2_0x52;
  OpcodeTable[0x53] = &CPU::LDr1r2_0x53;
  OpcodeTable[0x54] = &CPU::LDr1r2_0x54;
  OpcodeTable[0x55] = &CPU::LDr1r2_0x55;
  OpcodeTable[0x56] = &CPU::LDr1r2_0x56;

  OpcodeTable[0x58] = &CPU::LDr1r2_0x58;
  OpcodeTable[0x59] = &CPU::LDr1r2_0x59;
  OpcodeTable[0x5a] = &CPU::LDr1r2_0x5a;
  OpcodeTable[0x5b] = &CPU::LDr1r2_0x5b;
  OpcodeTable[0x5c] = &CPU::LDr1r2_0x5c;
  OpcodeTable[0x5d] = &CPU::LDr1r2_0x5d;
  OpcodeTable[0x5e] = &CPU::LDr1r2_0x5e;

  OpcodeTable[0x60] = &CPU::LDr1r2_0x60;
  OpcodeTable[0x61] = &CPU::LDr1r2_0x61;
  OpcodeTable[0x62] = &CPU::LDr1r2_0x62;
  OpcodeTable[0x63] = &CPU::LDr1r2_0x63;
  OpcodeTable[0x64] = &CPU::LDr1r2_0x64;
  OpcodeTable[0x65] = &CPU::LDr1r2_0x65;
  OpcodeTable[0x66] = &CPU::LDr1r2_0x66;

  OpcodeTable[0x68] = &CPU::LDr1r2_0x68;
  OpcodeTable[0x69] = &CPU::LDr1r2_0x69;
  OpcodeTable[0x6a] = &CPU::LDr1r2_0x6a;
  OpcodeTable[0x6b] = &CPU::LDr1r2_0x6b;
  OpcodeTable[0x6c] = &CPU::LDr1r2_0x6c;
  OpcodeTable[0x6d] = &CPU::LDr1r2_0x6d;
  OpcodeTable[0x6e] = &CPU::LDr1r2_0x6e;

  OpcodeTable[0x70] = &CPU::LDr1r2_0x70;
  OpcodeTable[0x71] = &CPU::LDr1r2_0x71;
  OpcodeTable[0x72] = &CPU::LDr1r2_0x72;
  OpcodeTable[0x73] = &CPU::LDr1r2_0x73;
  OpcodeTable[0x74] = &CPU::LDr1r2_0x74;
  OpcodeTable[0x75] = &CPU::LDr1r2_0x75;
  OpcodeTable[0x36] = &CPU::LDr1r2_0x36;

  OpcodeTable[0x0a] = &CPU::LDr1r2_0x0a;
  OpcodeTable[0x1a] = &CPU::LDr1r2_0x1a;
  OpcodeTable[0xfa] = &CPU::LDr1r2_0xfa;
  OpcodeTable[0x3e] = &CPU::LDr1r2_0x3e;

  OpcodeTable[0x47] = &CPU::LDr1r2_0x47;
  OpcodeTable[0x4f] = &CPU::LDr1r2_0x4f;
  OpcodeTable[0x57] = &CPU::LDr1r2_0x57;
  OpcodeTable[0x5f] = &CPU::LDr1r2_0x5f;
  OpcodeTable[0x67] = &CPU::LDr1r2_0x67;
  OpcodeTable[0x6f] = &CPU::LDr1r2_0x6f;
  OpcodeTable[0x02] = &CPU::LDr1r2_0x02;
  OpcodeTable[0x12] = &CPU::LDr1r2_0x12;
  OpcodeTable[0x77] = &CPU::LDr1r2_0x77;
  OpcodeTable[0xea] = &CPU::LDr1r2_0xea;
  OpcodeTable[0xf2] = &CPU::LDr1r2_0xf2;
  OpcodeTable[0xe2] = &CPU::LDr1r2_0xe2;

  OpcodeTable[0x3a] = &CPU::LDDr1r2_0x3a;
  OpcodeTable[0x32] = &CPU::LDDr1r2_0x32;
  OpcodeTable[0x2a] = &CPU::LDIr1r2_0x2a;
  OpcodeTable[0x22] = &CPU::LDIr1r2_0x22;
  OpcodeTable[0xe0] = &CPU::LDHr1r2_0xe0;
  OpcodeTable[0xf0] = &CPU::LDHr1r2_0xf0;

  OpcodeTable[0x01] = &CPU::LDnnn_0x01;
  OpcodeTable[0x11] = &CPU::LDnnn_0x11;
  OpcodeTable[0x21] = &CPU::LDnnn_0x21;
  OpcodeTable[0x31] = &CPU::LDnnn_0x31;
  OpcodeTable[0xf9] = &CPU::LDr1r2_0xf9;
  OpcodeTable[0xf8] = &CPU::LDHLr1r2_0xf8;
  OpcodeTable[0x08] = &CPU::LDr1r2_0x08;

  OpcodeTable[0xf5] = &CPU::PUSH_0xf5;
  OpcodeTable[0xc5] = &CPU::PUSH_0xc5;
  OpcodeTable[0xd5] = &CPU::PUSH_0xd5;
  OpcodeTable[0xe5] = &CPU::PUSH_0xe5;
  OpcodeTable[0xf1] = &CPU::POP_0xf1;
  OpcodeTable[0xc1] = &CPU::POP_0xc1;
  OpcodeTable[0xd1] = &CPU::POP_0xd1;
  OpcodeTable[0xe1] = &CPU::POP_0xe1;

  OpcodeTable[0x87] = &CPU::ADD_0x87;
  OpcodeTable[0x80] = &CPU::ADD_0x80;
  OpcodeTable[0x81] = &CPU::ADD_0x81;
  OpcodeTable[0x82] = &CPU::ADD_0x82;
  OpcodeTable[0x83] = &CPU::ADD_0x83;
  OpcodeTable[0x84] = &CPU::ADD_0x84;
  OpcodeTable[0x85] = &CPU::ADD_0x85;
  OpcodeTable[0x86] = &CPU::ADD_0x86;
  OpcodeTable[0xc6] = &CPU::ADD_0xc6;

  OpcodeTable[0x8f] = &CPU::ADC_0x8f;
  OpcodeTable[0x88] = &CPU::ADC_0x88;
  OpcodeTable[0x89] = &CPU::ADC_0x89;
  OpcodeTable[0x8a] = &CPU::ADC_0x8a;
  OpcodeTable[0x8b] = &CPU::ADC_0x8b;
  OpcodeTable[0x8c] = &CPU::ADC_0x8c;
  OpcodeTable[0x8d] = &CPU::ADC_0x8d;
  OpcodeTable[0x8e] = &CPU::ADC_0x8e;
  OpcodeTable[0xce] = &CPU::ADC_0xce;

  OpcodeTable[0xa7] = &CPU::AND_0xa7;
  OpcodeTable[0xa0] = &CPU::AND_0xa0;
  OpcodeTable[0xa1] = &CPU::AND_0xa1;
  OpcodeTable[0xa2] = &CPU::AND_0xa2;
  OpcodeTable[0xa3] = &CPU::AND_0xa3;
  OpcodeTable[0xa4] = &CPU::AND_0xa4;
  OpcodeTable[0xa5] = &CPU::AND_0xa5;
  OpcodeTable[0xa6] = &CPU::AND_0xa6;
  OpcodeTable[0xe6] = &CPU::AND_0xe6;

  OpcodeTable[0xb7] = &CPU::OR_0xb7;
  OpcodeTable[0xb0] = &CPU::OR_0xb0;
  OpcodeTable[0xb1] = &CPU::OR_0xb1;
  OpcodeTable[0xb2] = &CPU::OR_0xb2;
  OpcodeTable[0xb3] = &CPU::OR_0xb3;
  OpcodeTable[0xb4] = &CPU::OR_0xb4;
  OpcodeTable[0xb5] = &CPU::OR_0xb5;
  OpcodeTable[0xb6] = &CPU::OR_0xb6;
  OpcodeTable[0xf6] = &CPU::OR_0xf6;

  OpcodeTable[0xaf] = &CPU::XOR_0xaf;
  OpcodeTable[0xa8] = &CPU::XOR_0xa8;
  OpcodeTable[0xa9] = &CPU::XOR_0xa9;
  OpcodeTable[0xaa] = &CPU::XOR_0xaa;
  OpcodeTable[0xab] = &CPU::XOR_0xab;
  OpcodeTable[0xac] = &CPU::XOR_0xac;
  OpcodeTable[0xad] = &CPU::XOR_0xad;
  OpcodeTable[0xae] = &CPU::XOR_0xae;
  OpcodeTable[0xee] = &CPU::XOR_0xee;

  OpcodeTable[0x3c] = &CPU::INC_0x3c;
  OpcodeTable[0x04] = &CPU::INC_0x04;
  OpcodeTable[0x0c] = &CPU::INC_0x0c;
  OpcodeTable[0x14] = &CPU::INC_0x14;
  OpcodeTable[0x1c] = &CPU::INC_0x1c;
  OpcodeTable[0x24] = &CPU::INC_0x24;
  OpcodeTable[0x2c] = &CPU::INC_0x2c;
  OpcodeTable[0x34] = &CPU::INC_0x34;

  OpcodeTable[0x03] = &CPU::INC_0x03;
  OpcodeTable[0x13] = &CPU::INC_0x13;
  OpcodeTable[0x23] = &CPU::INC_0x23;
  OpcodeTable[0x33] = &CPU::INC_0x33;


}
