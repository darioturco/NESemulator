#include "CPU.h"

CPU::CPU(){
	// Registers init
	a = 0x00;		// Acumulator
	x = 0x00;		// X
	y = 0x00;		// Y
	stkp = 0x00;	// Stack Pointer
	status = 0x00;  // Status
	pc = 0x0000;	// Program Counter

	// Memory init
}