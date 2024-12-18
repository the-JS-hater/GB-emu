#include "../include/cpu.h"


// CPU clock cycles per sec
const int CLOCK_FREQ = 4194304; 
// CPU clock cycles per frame, if framerate is 60
const int FRAME_CYCLES = CLOCK_FREQ / 60;


// accumulator & flag registers
// carry flag, bit 4
// half carry flag, bit 5
// sub flag, bit 6
// Z-flag, bit 7
uint16_t AF_register = {0};
// these three are general purpose registers
// can be used as either singular 16bit registers
// or treated as double 8bit registers
uint16_t BC_register = {0};
uint16_t DE_register = {0};
uint16_t HL_register = {0};
// stack pointer
uint16_t stack_ptr = {0};
// program counter
uint16_t pc = {0};

