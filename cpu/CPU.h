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



};
#endif
