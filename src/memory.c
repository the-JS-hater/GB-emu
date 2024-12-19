#include "../include/memory.h"


// FFFF is the interupt register
uint8_t IE_register = {0};

//16 kiB fixed bank
//0000 -> 3FFF
uint8_t fixed_bank[16384] = {0}; 

//16 kiB RAM switchable bank
//4000 -> 7FFF
uint8_t switch_bank[16384] = {0}; 

//8 kiB VRAM
//8000 -> 9FFF
uint8_t video_ram[8192] = {0};

//8 kiB external RAM
//A000 -> BFFF
uint8_t ext_ram[8192] = {0}; 

//NOTE: it's possible i might be able to just combine the 2 various WRAM banks

//4 kiB WRAM
//C000 -> CFFF
uint8_t work_ram1[4096] = {0};
//4 kiB WRAM
//D000 -> DFFF
uint8_t work_ram2[4096] = {0};

//--------------------------
//E000 -> FDFF is prohibited
//--------------------------

//OAM, 40 objects with 4 bytes each
//FE00 -> FE9F
uint8_t object_attr_mem[160] = {0};

//--------------------------
//FEA0 -> FEFF is prohibited
//--------------------------

// I/O register memory
uint8_t IO_regs[128] = {0}; 

// High RAM
// FF80 -> FFFE
uint8_t h_ram[127] = {0};


void memWrite(uint8_t data) 
{
	//TODO:
	return;
}

uint8_t memRead(uint16_t addr)
{
	//TODO:
	return 0;
}



