#pragma once
#ifndef NODO_H
#define NODO_H
#include "Carta.h"
class Nodo
{
private:
	Carta carta;
	Nodo * sig;
public:
	Nodo();
	Nodo(Carta);
	void setCarta(Carta);
	Carta getCarta(void);
	void setSig(Nodo*);
	Nodo * getSig(void);
};

#endif