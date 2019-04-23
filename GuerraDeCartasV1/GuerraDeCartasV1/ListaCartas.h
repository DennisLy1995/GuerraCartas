#pragma once
#ifndef LISTACARTAS_H
#define LISTACARTAS_H
#include "Nodo.h"
class ListaCartas
{
private:
	Nodo * cabeza;
	int longitud;
public:
	ListaCartas();
	void setCabeza(Nodo*);
	Nodo * getCabeza(void);
	void setLong(int);
	int getLong(void);
	void insertarCarta(Carta); //insertar ordenado
	void mostrarListaCartas();
	//Carta sacarCarta(int numCarta);
	Carta buscarCarta(int valor);
	Carta buscarCartaPorNum(int valor);
};
#endif // !LISTACARTAS_H