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
    int LDr1r2_0x7f(uint8_t, uint8_t);
    int LDr1r2_0x78(uint8_t, uint8_t);
    int LDr1r2_0x79(uint8_t, uint8_t);
    int LDr1r2_0x7a(uint8_t, uint8_t);
    int LDr1r2_0x7b(uint8_t, uint8_t);
    int LDr1r2_0x7c(uint8_t, uint8_t);
    int LDr1r2_0x7d(uint8_t, uint8_t);



};
#endif
