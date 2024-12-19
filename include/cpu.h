#ifndef CPU_H
#define CPU_H

#include <inttypes.h>


struct CPU 
{
	// accumulator & flag registers
	// carry flag, bit 4
	// half carry flag, bit 5
	// sub flag, bit 6
	// Z-flag, bit 7
	uint16_t AF_register;
	uint16_t pc;
	//stack pointer
	uint16_t sp;
	//address buss
	uint16_t addr;
	//registers BC, DE, HL, as induvidual 8bit registers
	uint8_t regs[6];
};


uint8_t fetch(uint16_t);

void decode(uint8_t); 


#endif
