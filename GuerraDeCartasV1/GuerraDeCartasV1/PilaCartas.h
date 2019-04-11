#pragma once
#ifndef PILACARTAS_H
#define PILACARTAS_H
#include "Nodo.h"
class PilaCartas
{
private:
	Nodo * tope;
	int longitud;
public:
	PilaCartas();
	void setTope(Nodo *);
	Nodo * getTope(void);
	int getLong(void);
	bool esVacia(void);
	void pushCarta(Carta);
	void popCarta(void);
};
#endif // !PILACARTAS_H