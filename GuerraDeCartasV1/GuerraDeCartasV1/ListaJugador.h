#pragma once
#ifndef LISTAJUGADOR_H
#define LISTAJUGADOR_H
#include "NodoJugador.h"
class ListaJugador
{
private:
	NodoJugador* cabeza;
	int longitud;
public:
	ListaJugador();
	void setCabeza(NodoJugador*);
	NodoJugador* getCabeza(void);
	void setLong(int);
	int getLong(void);
	void annadirJugador(Jugador);
	void mostrarListaJugadores(void);
	void sacarJugador(int);
	Jugador buscarJugador(int);
	void modificarJugador(Jugador);
};
#endif // !LISTACARTAS_H
