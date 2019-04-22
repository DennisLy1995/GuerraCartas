#pragma once
#ifndef NODOJUGADOR_H
#define NODOJUGADOR_H
#include "Jugador.h"
class NodoJugador
{
private:
	Jugador jugador;
	NodoJugador* sig;
public:
	NodoJugador();
	NodoJugador(Jugador);
	void setJugador(Jugador);
	Jugador getJugador(void);
	void setSig(NodoJugador*);
	NodoJugador* getSig(void);
};

#endif