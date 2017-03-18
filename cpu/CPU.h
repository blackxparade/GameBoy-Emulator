#ifndef CPU_H
#define CPU_H

#include <vector>
#include <cstdint>

using namespace std;

class CPU {
  private:
    char * path;
    vector<uint8_t> ROM_bytes;
    vector<uint16_t> STACK;
    uint8_t * intRAM;
    typedef int (CPU::*OPCODE)(uint8_t, uint8_t);
    OPCODE OpcodeTable[255];

    // 8-bit registers
    uint8_t A, B, C, D, E, F, H, L;
    // 16-bit registers: StackPointer, ProgramCounter
    uint16_t SP, // Points to the current stack position.
             PC; // Points to the next instruction to be executed in the RAM.

    int FLAG[8]; // Z N H C 0 0 0 0
    /*
    Zero Flag (Z):
        This bit is set when the result of a math operation is zero or two
        values match when using the CP instruction.

    Substract Flag (N):
        This bit is set if a substraction was performed in the last math
        instruction.

    Half Carry Flag (H):
        This bit is set if a carry occurred from the lower nibble in the
        last math operation.

    Carry Flag (C):
        This bit is set if a carry occurred from the last math operation
        or if register A is the smaller value when executing the CP instruction.
    */

    void init();

  public:
    CPU(char*);
    vector<uint8_t> fetchRom();

    int opcode(uint8_t, uint8_t, uint8_t);

    // 8 - bit loads


    // LD nn, n ----------------------------
    int LDnnn_0x06(uint8_t, uint8_t);
    int LDnnn_0x0e(uint8_t, uint8_t);
    int LDnnn_0x16(uint8_t, uint8_t);
    int LDnnn_0x1e(uint8_t, uint8_t);
    int LDnnn_0x26(uint8_t, uint8_t);
    int LDnnn_0x2e(uint8_t, uint8_t);

    // LD r1, r2 ---------------------------
    // LD A, n
    int LDr1r2_0x7f(uint8_t, uint8_t);
    int LDr1r2_0x78(uint8_t, uint8_t);
    int LDr1r2_0x79(uint8_t, uint8_t);
    int LDr1r2_0x7a(uint8_t, uint8_t);
    int LDr1r2_0x7b(uint8_t, uint8_t);
    int LDr1r2_0x7c(uint8_t, uint8_t);
    int LDr1r2_0x7d(uint8_t, uint8_t);
    int LDr1r2_0x7e(uint8_t, uint8_t);
    // LD B, n
    int LDr1r2_0x40(uint8_t, uint8_t);
    int LDr1r2_0x41(uint8_t, uint8_t);
    int LDr1r2_0x42(uint8_t, uint8_t);
    int LDr1r2_0x43(uint8_t, uint8_t);
    int LDr1r2_0x44(uint8_t, uint8_t);
    int LDr1r2_0x45(uint8_t, uint8_t);
    int LDr1r2_0x46(uint8_t, uint8_t);
    // LD C, n
    int LDr1r2_0x48(uint8_t, uint8_t);
    int LDr1r2_0x49(uint8_t, uint8_t);
    int LDr1r2_0x4a(uint8_t, uint8_t);
    int LDr1r2_0x4b(uint8_t, uint8_t);
    int LDr1r2_0x4c(uint8_t, uint8_t);
    int LDr1r2_0x4d(uint8_t, uint8_t);
    int LDr1r2_0x4e(uint8_t, uint8_t);
    // LD D, n
    int LDr1r2_0x50(uint8_t, uint8_t);
    int LDr1r2_0x51(uint8_t, uint8_t);
    int LDr1r2_0x52(uint8_t, uint8_t);
    int LDr1r2_0x53(uint8_t, uint8_t);
    int LDr1r2_0x54(uint8_t, uint8_t);
    int LDr1r2_0x55(uint8_t, uint8_t);
    int LDr1r2_0x56(uint8_t, uint8_t);
    // LD E, n
    int LDr1r2_0x58(uint8_t, uint8_t);
    int LDr1r2_0x59(uint8_t, uint8_t);
    int LDr1r2_0x5a(uint8_t, uint8_t);
    int LDr1r2_0x5b(uint8_t, uint8_t);
    int LDr1r2_0x5c(uint8_t, uint8_t);
    int LDr1r2_0x5d(uint8_t, uint8_t);
    int LDr1r2_0x5e(uint8_t, uint8_t);
    // LD H, n
    int LDr1r2_0x60(uint8_t, uint8_t);
    int LDr1r2_0x61(uint8_t, uint8_t);
    int LDr1r2_0x62(uint8_t, uint8_t);
    int LDr1r2_0x63(uint8_t, uint8_t);
    int LDr1r2_0x64(uint8_t, uint8_t);
    int LDr1r2_0x65(uint8_t, uint8_t);
    int LDr1r2_0x66(uint8_t, uint8_t);
    // LD L, n
    int LDr1r2_0x68(uint8_t, uint8_t);
    int LDr1r2_0x69(uint8_t, uint8_t);
    int LDr1r2_0x6a(uint8_t, uint8_t);
    int LDr1r2_0x6b(uint8_t, uint8_t);
    int LDr1r2_0x6c(uint8_t, uint8_t);
    int LDr1r2_0x6d(uint8_t, uint8_t);
    int LDr1r2_0x6e(uint8_t, uint8_t);
    // LD (HL), n
    int LDr1r2_0x70(uint8_t, uint8_t);
    int LDr1r2_0x71(uint8_t, uint8_t);
    int LDr1r2_0x72(uint8_t, uint8_t);
    int LDr1r2_0x73(uint8_t, uint8_t);
    int LDr1r2_0x74(uint8_t, uint8_t);
    int LDr1r2_0x75(uint8_t, uint8_t);
    int LDr1r2_0x36(uint8_t, uint8_t);
    // LD A, n
    int LDr1r2_0x0a(uint8_t, uint8_t);
    int LDr1r2_0x1a(uint8_t, uint8_t);
    int LDr1r2_0xfa(uint8_t, uint8_t);
    int LDr1r2_0x3e(uint8_t, uint8_t);
    // LD n, A
    int LDr1r2_0x47(uint8_t, uint8_t);
    int LDr1r2_0x4f(uint8_t, uint8_t);
    int LDr1r2_0x57(uint8_t, uint8_t);
    int LDr1r2_0x5f(uint8_t, uint8_t);
    int LDr1r2_0x67(uint8_t, uint8_t);
    int LDr1r2_0x6f(uint8_t, uint8_t);
    int LDr1r2_0x02(uint8_t, uint8_t);
    int LDr1r2_0x12(uint8_t, uint8_t);
    int LDr1r2_0x77(uint8_t, uint8_t);
    int LDr1r2_0xea(uint8_t, uint8_t);
    int LDr1r2_0xf2(uint8_t, uint8_t);
    int LDr1r2_0xe2(uint8_t, uint8_t);
    // LDD r1, r2
    int LDDr1r2_0x3a(uint8_t, uint8_t);
    int LDDr1r2_0x32(uint8_t, uint8_t);
    int LDIr1r2_0x2a(uint8_t, uint8_t);
    int LDIr1r2_0x22(uint8_t, uint8_t);
    int LDHr1r2_0xe0(uint8_t, uint8_t);
    int LDHr1r2_0xf0(uint8_t, uint8_t);



    // 16 - bit loads
    int LDnnn_0x01(uint8_t, uint8_t);
    int LDnnn_0x11(uint8_t, uint8_t);
    int LDnnn_0x21(uint8_t, uint8_t);
    int LDnnn_0x31(uint8_t, uint8_t);
    int LDr1r2_0xf9(uint8_t, uint8_t);
    int LDHLr1r2_0xf8(uint8_t, uint8_t);
    int LDr1r2_0x08(uint8_t, uint8_t);

    // PUSH nn
    int PUSH_0xf5(uint8_t, uint8_t);
    int PUSH_0xc5(uint8_t, uint8_t);
    int PUSH_0xd5(uint8_t, uint8_t);
    int PUSH_0xe5(uint8_t, uint8_t);
    // POP nn
    int POP_0xf1(uint8_t, uint8_t);
    int POP_0xc1(uint8_t, uint8_t);
    int POP_0xd1(uint8_t, uint8_t);
    int POP_0xe1(uint8_t, uint8_t);


    // 8 - bit ALU

    // ADD
    int ADD_0x87(uint8_t, uint8_t);
    int ADD_0x80(uint8_t, uint8_t);
    int ADD_0x81(uint8_t, uint8_t);
    int ADD_0x82(uint8_t, uint8_t);
    int ADD_0x83(uint8_t, uint8_t);
    int ADD_0x84(uint8_t, uint8_t);
    int ADD_0x85(uint8_t, uint8_t);
    int ADD_0x86(uint8_t, uint8_t);
    int ADD_0xc6(uint8_t, uint8_t);
    // ADC
    int ADC_0x8f(uint8_t, uint8_t);
    int ADC_0x88(uint8_t, uint8_t);
    int ADC_0x89(uint8_t, uint8_t);
    int ADC_0x8a(uint8_t, uint8_t);
    int ADC_0x8b(uint8_t, uint8_t);
    int ADC_0x8c(uint8_t, uint8_t);
    int ADC_0x8d(uint8_t, uint8_t);
    int ADC_0x8e(uint8_t, uint8_t);
    int ADC_0xce(uint8_t, uint8_t);
    // AND
    int AND_0xa7(uint8_t, uint8_t);
    int AND_0xa0(uint8_t, uint8_t);
    int AND_0xa1(uint8_t, uint8_t);
    int AND_0xa2(uint8_t, uint8_t);
    int AND_0xa3(uint8_t, uint8_t);
    int AND_0xa4(uint8_t, uint8_t);
    int AND_0xa5(uint8_t, uint8_t);
    int AND_0xa6(uint8_t, uint8_t);
    int AND_0xe6(uint8_t, uint8_t);
    // OR
    int OR_0xb7(uint8_t, uint8_t);
    int OR_0xb0(uint8_t, uint8_t);
    int OR_0xb1(uint8_t, uint8_t);
    int OR_0xb2(uint8_t, uint8_t);
    int OR_0xb3(uint8_t, uint8_t);
    int OR_0xb4(uint8_t, uint8_t);
    int OR_0xb5(uint8_t, uint8_t);
    int OR_0xb6(uint8_t, uint8_t);
    int OR_0xf6(uint8_t, uint8_t);
    // XOR
    int XOR_0xaf(uint8_t, uint8_t);
    int XOR_0xa8(uint8_t, uint8_t);
    int XOR_0xa9(uint8_t, uint8_t);
    int XOR_0xaa(uint8_t, uint8_t);
    int XOR_0xab(uint8_t, uint8_t);
    int XOR_0xac(uint8_t, uint8_t);
    int XOR_0xad(uint8_t, uint8_t);
    int XOR_0xae(uint8_t, uint8_t);
    int XOR_0xee(uint8_t, uint8_t);
    // INC
    int INC_0x3c(uint8_t, uint8_t);
    int INC_0x04(uint8_t, uint8_t);
    int INC_0x0c(uint8_t, uint8_t);
    int INC_0x14(uint8_t, uint8_t);
    int INC_0x1c(uint8_t, uint8_t);
    int INC_0x24(uint8_t, uint8_t);
    int INC_0x2c(uint8_t, uint8_t);
    int INC_0x34(uint8_t, uint8_t);
    // INC 16 - bit
    int INC_0x03(uint8_t, uint8_t);
    int INC_0x13(uint8_t, uint8_t);
    int INC_0x23(uint8_t, uint8_t);
    int INC_0x33(uint8_t, uint8_t);





};
#endif
