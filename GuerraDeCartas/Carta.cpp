#include "Carta.h"

Carta::Carta()
{
}

Carta::Carta(int numCarta, int valor, string simbolo, string valorSimb)
{
	this->numCarta = numCarta;
	this->valor = valor;
	this->simbolo = simbolo;
	this->valorSimb = valorSimb;
}