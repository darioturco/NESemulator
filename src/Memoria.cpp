#include "Memoria.h"

void Memoria::write(uint16_t addr, uint8_t data){
	if(addr >= 0x0000 && addr <= 0xFFFF){
		ram[addr] = data;
	}
}

uint8_t Memoria::read(uint16_t addr, bool bReadOnly){
	if(addr >= 0x0000 && addr <= 0xFFFF){
		return ram[addr];
	}else{
		return 0x00;
	}
}
