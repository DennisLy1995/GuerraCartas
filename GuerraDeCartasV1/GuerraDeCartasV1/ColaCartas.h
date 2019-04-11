#pragma once
#ifndef COLACARTAS_H
#define COLACARTAS_H
#include "Nodo.h"
class ColaCartas
{
private:
	int longitud;
	Nodo * frente;
	Nodo * final;
public:
	ColaCartas();
	int getLong(void);
	void setFrente(Nodo*);
	Nodo * getFrente(void);
	void setFinal(Nodo*);
	Nodo * getFinal(void);
	bool esVacia();
	void insertarCarta(Carta);
	void tomarCarta();//atender
};
#endif // !COLACARTAS_H