#include "pch.h"
#include "PilaCartas.h"
#include <iostream>
using namespace std;

PilaCartas::PilaCartas()
{
	setTope(NULL);
	longitud = 0;
}

void PilaCartas::setTope(Nodo * x) {
	tope = x;
}

Nodo * PilaCartas::getTope(void) {
	return tope;
}

int PilaCartas::getLong(void) {
	return longitud;
}

bool PilaCartas::esVacia() {
	bool vacia = false;
	if (getTope() == NULL) {
		vacia = true;
	}

	return vacia;
}

void PilaCartas::pushCarta(Carta x) {
	Nodo * nuevo = new Nodo(x);

	if (getTope() == NULL) {
		setTope(nuevo);
	}
	else {
		nuevo->setSig(getTope());
		setTope(nuevo);
	}
	longitud++;
}

Carta PilaCartas::popCarta() {
	Nodo * aux;
	Carta carta(0,0,"0","0");

	if (getTope() != NULL) {
		aux = getTope();
		carta = aux->getCarta();
		setTope(aux->getSig());
		longitud--;
		aux = NULL;
		delete aux;
	}
	else {
		cout << "\nNo hay cartas en la pila" << endl;
	}

	return carta;
}

bool PilaCartas::buscarEnPila(int valor)
{
	
	Nodo* aux = getTope();
	bool x = false;

	while (aux != NULL) {
		if (aux->getCarta().getNumCarta() == valor) {
			x = true;
		}
		aux = aux->getSig();
	}

	return x;
}