#include "render/GPU.h"
#include "cpu/CPU.h"
#include <iostream>
#include <bitset>


using namespace std;

int main(int argc, char* argv[]) {
  GPU * gpu = new GPU();
  CPU * cpu = new CPU(argv[1]);


/*
  string s;
  uint8_t test1 = 0x31;
  uint8_t test2 = 0x17;
  bitset<8> b(test1);
  s = b.to_string();
  cout << "Test1 bitset: " << s << endl;
  cout << "Test1: " << bitset<8>(test1) << endl;
  cout << "Test2: " << bitset<8>(test2) << endl;
  cout << "----------------------" << endl;
  uint16_t test16 = (uint16_t)(test1 << 8) + test2;
  cout << "Test16: " << bitset<16>(test16) << endl;
*/

  return 0;
}
