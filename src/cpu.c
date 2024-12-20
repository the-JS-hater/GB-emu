#include "../include/cpu.h"


// CPU clock cycles per sec
const int CLOCK_FREQ = 4194304; 
// CPU clock cycles per frame, if framerate is 60
const int FRAME_CYCLES = CLOCK_FREQ / 60;

//AF_register, PC, SP, addr, registers
struct CPU cpu = {0,0,0,0, {0,0,0,0,0,0}};


uint8_t fetch(uint16_t pc) 
{
	//TODO:
	
	//return a 8bit OP-code fetched from ?
	return 0;
}


//Will probably decode AND execute instruction
void decode(uint8_t opcode) 
{
	//TODO:
	switch (opcode) 
	{
		//NOP
		case 0x00: break;
		//LD BC, n16
		case 0x01: break;
		//LD [BC], A
		case 0x02: break;
		//INC BC
		case 0x03: break;
		//INC B
		case 0x04: break;
		//DEC B
		case 0x05: break;
		//LD B, n8
		case 0x06: break;
		//RLCA
		case 0x07: break;
		//LD [a16], SP 
		case 0x08: break;
		//ADD HL, BC
		case 0x09: break;
		//LD A, [BC] 
		case 0x0A: break;
		//DEC BC
		case 0x0B: break;
		//INC C
		case 0x0C: break;
		//DEC C
		case 0x0D: break;
		//LD C, n8
		case 0x0E: break;
		//RRCA
		case 0x0F: break;
		//STOP n8
		case 0x10: break;
		//LD DE, n16
		case 0x11: break;
		//LD [DE], A
		case 0x12: break;
		//INC DE
		case 0x13: break;
		//INC D
		case 0x14: break;
		//DEC D
		case 0x15: break;
		//LD D, n8
		case 0x16: break;
		//RLA
		case 0x17: break;
		//JR e8 
		case 0x18: break;
		//ADD HL, DE
		case 0x19: break;
		//LD A, [DE]
		case 0x1A: break;
		//DEC DE
		case 0x1B: break;
		//INC E 
		case 0x1C: break;
		//DEC E
		case 0x1D: break;
		//LD E, n8
		case 0x1E: break;
		//RRA
		case 0x1F: break;
		//JR NZ, e8 
		case 0x20: break;
		//LD HL, n16 
		case 0x21: break;
		//LD [HL+], A
		case 0x22: break;
		//INC HL 
		case 0x23: break;
		//INC H 
		case 0x24: break;
		//DEC H 
		case 0x25: break;
		//LD H, n8
		case 0x26: break;
		//DAA
		case 0x27: break;
		//JR Z, e8 
		case 0x28: break;
		//ADD HL, HL
		case 0x29: break;
		//LD A, [HL+]
		case 0x2A: break;
		//DEC HL 
		case 0x2B: break;
		//INC L
		case 0x2C: break;
		//DEC L
		case 0x2D: break;
		//LD L, n8
		case 0x2E: break;
		//CPL
		case 0x2F: break;
		//JR NC, e8
		case 0x30: break;
		//LD SP, n16
		case 0x31: break;
		//LD [HL-], A
		case 0x32: break;
		//INC SP
		case 0x33: break;
		//INC [HL] 
		case 0x34: break;
		//DEC [HL]
		case 0x35: break;
		//LD [HL], n8
		case 0x36: break;
		//SCF
		case 0x37: break;
		//JR C, e8
		case 0x38: break;
		//ADD HL, SP 
		case 0x39: break;
		//LD A, [HL-] 
		case 0x3A: break;
		//DEC SP
		case 0x3B: break;
		//INC A 
		case 0x3C: break;
		//DEC A 
		case 0x3D: break;
		//LD A, n8
		case 0x3E: break;
		//CCF
		case 0x3F: break;
		//LD B, B
		case 0x40: break;
		//LD B, C
		case 0x41: break;
		//LD B, D
		case 0x42: break;
		//LD B, E
		case 0x43: break;
		//LD B, H
		case 0x44: break;
		//LD B, L 
		case 0x45: break;
		//LD B, [HL]
		case 0x46: break;
		//LD B, A
		case 0x47: break;
		//LD C, B
		case 0x48: break;
		//LD C, C
		case 0x49: break;
		//LD C, D
		case 0x4A: break;
		//LD C, E
		case 0x4B: break;
		//LD C, H
		case 0x4C: break;
		//LD C, L
		case 0x4D: break;
		//LD C, [HL] 
		case 0x4E: break;
		//LD C, A
		case 0x4F: break;
		//LD D, B
		case 0x50: break;
		//LD D, C
		case 0x51: break;
		//LD D, D
		case 0x52: break;
		//LD D, E
		case 0x53: break;
		//LD D, H
		case 0x54: break;
		//LD D, L
		case 0x55: break;
		//LD D, [HL]
		case 0x56: break;
		//LD D, A 
		case 0x57: break;
		//LD E, B
		case 0x58: break;
		//LD E, B
		case 0x59: break;
		//LD E, C 
		case 0x5A: break;
		//LD E, D
		case 0x5B: break;
		//LD E, E 
		case 0x5C: break;
		//LD E, H 
		case 0x5D: break;
		//LD E, L 
		case 0x5E: break;
		//LD E, [HL] 
		case 0x5F: break;
		//LD E, A 
		case 0x60: break;
		//LD H, B 
		case 0x61: break;
		//LD H, C 
		case 0x62: break;
		//LD H, D
		case 0x63: break;
		//LD H, E 
		case 0x64: break;
		//LD H, H 
		case 0x65: break;
		//LD H, L 
		case 0x66: break;
		//LD H, [HL] 
		case 0x67: break;
		//LD H, A 
		case 0x68: break;
		//LD L, B
		case 0x69: break;
		//LD L, C
		case 0x6A: break;
		//LD L, D 
		case 0x6B: break;
		//LD L, E 
		case 0x6C: break;
		//LD L, H
		case 0x6D: break;
		//LD L, L 
		case 0x6E: break;
		//LD L, [HL] 
		case 0x6F: break;
		//LD L, A 
		case 0x70: break;
		//LD [HL], B 
		case 0x71: break;
		//LD [HL], C 
		case 0x72: break;
		//LD [HL], D
		case 0x73: break;
		//LD [HL], E 
		case 0x74: break;
		//LD [HL], H 
		case 0x75: break;
		//LD [HL], L
		case 0x76: break;
		//HALT
		case 0x77: break;
		//LD [HL], A 
		case 0x78: break;
		//LD A, B
		case 0x79: break;
		//LD A, C 
		case 0x7A: break;
		//LD A, D 
		case 0x7B: break;
		//LD A, E 
		case 0x7C: break;
		//LD A, H 
		case 0x7D: break;
		//LD A, L
		case 0x7E: break;
		//LD A, [HL] 
		case 0x7F: break;
		//LD A, A 
		case 0x80: break;
		//ADD A, B 
		case 0x81: break;
		//ADD A, C 
		case 0x82: break;
		//ADD A, D
		case 0x83: break;
		//ADD A, E
		case 0x84: break;
		//ADD A, H
		case 0x85: break;
		//ADD A, L
		case 0x86: break;
		//ADD A, [HL]
		case 0x87: break;
		
		case 0x88: break;

		case 0x89: break;

		case 0x8A: break;

		case 0x8B: break;

		case 0x8C: break;

		case 0x8D: break;

		case 0x8E: break;

		case 0x8F: break;

		case 0x90: break;

		case 0x91: break;

		case 0x92: break;

		case 0x93: break;

		case 0x94: break;

		case 0x95: break;

		case 0x96: break;

		case 0x97: break;

		case 0x98: break;

		case 0x99: break;

		case 0x9A: break;

		case 0x9B: break;

		case 0x9C: break;

		case 0x9D: break;

		case 0x9E: break;

		case 0x9F: break;

		case 0xA0: break;

		case 0xA1: break;

		case 0xA2: break;

		case 0xA3: break;

		case 0xA4: break;

		case 0xA5: break;

		case 0xA6: break;

		case 0xA7: break;

		case 0xA8: break;

		case 0xA9: break;

		case 0xAA: break;

		case 0xAB: break;

		case 0xAC: break;

		case 0xAD: break;

		case 0xAE: break;

		case 0xAF: break;

		case 0xB0: break;

		case 0xB1: break;

		case 0xB2: break;

		case 0xB3: break;

		case 0xB4: break;

		case 0xB5: break;

		case 0xB6: break;

		case 0xB7: break;

		case 0xB8: break;

		case 0xB9: break;

		case 0xBA: break;

		case 0xBB: break;

		case 0xBC: break;

		case 0xBD: break;

		case 0xBE: break;

		case 0xBF: break;

		case 0xC0: break;

		case 0xC1: break;

		case 0xC2: break;

		case 0xC3: break;

		case 0xC4: break;

		case 0xC5: break;

		case 0xC6: break;

		case 0xC7: break;

		case 0xC8: break;

		case 0xC9: break;

		case 0xCA: break;

		case 0xCB: break;

		case 0xCC: break;

		case 0xCD: break;

		case 0xCE: break;

		case 0xCF: break;

		case 0xD0: break;

		case 0xD1: break;

		case 0xD2: break;

		case 0xD3: break;

		case 0xD4: break;

		case 0xD5: break;

		case 0xD6: break;

		case 0xD7: break;

		case 0xD8: break;

		case 0xD9: break;

		case 0xDA: break;

		case 0xDB: break;

		case 0xDC: break;

		case 0xDD: break;

		case 0xDE: break;

		case 0xDF: break;

		case 0xE0: break;

		case 0xE1: break;

		case 0xE2: break;

		case 0xE3: break;

		case 0xE4: break;

		case 0xE5: break;

		case 0xE6: break;

		case 0xE7: break;

		case 0xE8: break;

		case 0xE9: break;

		case 0xEA: break;

		case 0xEB: break;

		case 0xEC: break;

		case 0xED: break;

		case 0xEE: break;

		case 0xEF: break;

		case 0xF0: break;

		case 0xF1: break;

		case 0xF2: break;

		case 0xF3: break;

		case 0xF4: break;

		case 0xF5: break;

		case 0xF6: break;

		case 0xF7: break;

		case 0xF8: break;

		case 0xF9: break;

		case 0xFA: break;

		case 0xFB: break;

		case 0xFC: break;

		case 0xFD: break;

		case 0xFE: break;

		case 0xFF: break;
	}

	return;
}



