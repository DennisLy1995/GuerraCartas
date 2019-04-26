#include "pch.h"
#include "ListaJugador.h"
#include <iostream>
using namespace std;

ListaJugador::ListaJugador()
{
	setCabeza(NULL);
	longitud = 0;
}

void ListaJugador::setCabeza(NodoJugador* x)
{
	this->cabeza = x;
}

NodoJugador* ListaJugador::getCabeza(void)
{
	return cabeza;
}

void ListaJugador::setLong(int x)
{
	this->longitud = x;
}

int ListaJugador::getLong(void)
{
	return longitud;
}

void ListaJugador::annadirJugador(Jugador jugador)
{
	NodoJugador* nuevo = new NodoJugador(jugador);

	if (getCabeza() == NULL) {
		setCabeza(nuevo);
	}
	else if (nuevo->getJugador().getNumJugador() < getCabeza()->getJugador().getNumJugador()) {
		nuevo->setSig(getCabeza());
		setCabeza(nuevo);
	}
	else {//insertar al medio o al final
		NodoJugador* ant = getCabeza();
		NodoJugador* act = getCabeza()->getSig();

		while (act != NULL && act->getJugador().getNumJugador() < nuevo->getJugador().getNumJugador()) {
			ant = ant->getSig();
			act = act->getSig();
		}

		nuevo->setSig(ant->getSig());
		ant->setSig(nuevo);
	}

	longitud++;
}

void ListaJugador::mostrarListaJugadores(void)
{
	NodoJugador* aux = getCabeza();
	
	while (aux != NULL) {
		aux->getJugador().mostrarJugador();
		aux = aux->getSig();
	}
}

void ListaJugador::sacarJugador(int numJugador)
{
	if (getCabeza() != NULL) {
		NodoJugador* aux;
		aux = getCabeza();

		if (getCabeza()->getJugador().getNumJugador() == numJugador) {
			setCabeza(getCabeza()->getSig());
			delete aux;
		}
		else {
			NodoJugador* ant = getCabeza(), * act = getCabeza()->getSig();

			while (act != NULL && act->getJugador().getNumJugador() != numJugador) {
				ant = ant->getSig();
				act = act->getSig();
			}

			ant->setSig(act->getSig());
			delete act;
		}
		longitud--;
	}
	else {
		cout << "--No hay jugadores registrados" << endl;
	}
}

Jugador ListaJugador::buscarJugador(int numJug)
{
	Jugador retorno;
	NodoJugador* aux = getCabeza();

	while (aux != NULL) {
		if (aux->getJugador().getNumJugador() == numJug) {
			retorno = aux->getJugador();
		}
		aux = aux->getSig();
	}

	return retorno;
}

void ListaJugador::modificarJugador(Jugador jugador)
{
	NodoJugador* aux = getCabeza();

	while (aux != NULL) {

		if (aux->getJugador().getNumJugador() == jugador.getNumJugador()) {
			aux->setJugador(jugador);
		}
		aux = aux->getSig();
	}
}
