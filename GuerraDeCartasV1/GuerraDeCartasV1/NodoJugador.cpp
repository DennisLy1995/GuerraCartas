#include "pch.h"
#include "NodoJugador.h"
#include <iostream>

NodoJugador::NodoJugador()
{
}

NodoJugador::NodoJugador(Jugador jugador)
{
	this->jugador = jugador;
	this->sig = NULL;
}

void NodoJugador::setJugador(Jugador jugador)
{
	this->jugador = jugador;
}

Jugador NodoJugador::getJugador(void)
{
	return jugador;
}

void NodoJugador::setSig(NodoJugador* x)
{
	sig = x;
}

NodoJugador* NodoJugador::getSig(void)
{
	return sig;
}
