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
	cout << "\nSe ha a�adido una carta a la pila\n" << endl;
}

void PilaCartas::popCarta() {
	Nodo * aux;

	if (getTope() != NULL) {
		aux = getTope();
		setTope(aux->getSig());
		longitud--;
		aux = NULL;
		delete aux;
	}
	else {
		cout << "\nNo hay cartas en la pila" << endl;
	}
}