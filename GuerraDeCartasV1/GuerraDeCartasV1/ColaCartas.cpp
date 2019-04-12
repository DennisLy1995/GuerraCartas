#include "pch.h"
#include "ColaCartas.h"
#include <iostream>
using namespace std;

ColaCartas::ColaCartas()
{
	longitud = 0;
	frente = NULL;
	final = NULL;
}

int ColaCartas::getLong() {
	return longitud;
}

void ColaCartas::setFrente(Nodo * x) {
	frente = x;
}

Nodo * ColaCartas::getFrente() {
	return frente;
}

void ColaCartas::setFinal(Nodo * y) {
	final = y;
}

Nodo * ColaCartas::getFinal() {
	return final;
}

bool ColaCartas::esVacia() {
	bool resp = false;
	if (getFrente() == NULL) {
		resp = true;
	}
	return resp;
}

void ColaCartas::insertarCarta(Carta x) {
	Nodo * nuevo = new Nodo(x);

	if (this->esVacia()) {
		setFrente(nuevo);
		setFinal(nuevo);
	}
	else {
		getFinal()->setSig(nuevo);
		setFinal(nuevo);
	}
	longitud++;
	cout << "\nSe ha añadido la carta a la cola\n" << endl;
}

Nodo* ColaCartas::tomarCarta() {
	Nodo* nodoCarta = NULL;

	if (this->esVacia()) {
		cout << "No hay cartas en la cola" << endl;
	}
	else {
		Nodo * aux = getFrente();
		nodoCarta = aux;
		setFrente(aux->getSig());
		aux->setSig(NULL);
		delete aux;
		longitud--;
	}

	return nodoCarta;
}
