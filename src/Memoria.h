#include "stdio.h"
#include "cstdint"

class Memoria{
public:

	// Constructor / Destructor
	Memoria();
	~Memoria();
	
	// Metodos
	void write(uint16_t addr, uint8_t data);
	uint8_t read(uint16_t addr, bool bReadOnly = false);

private:

	// Memoria ram con 64KB de memoria 
	uint8_t ram[64 * 1024];

};