#include "pch.h"
#include "ListaCartas.h"
#include <iostream>
using namespace std;

ListaCartas::ListaCartas()
{
	setCabeza(NULL);
	longitud = 0;
}

void ListaCartas::setCabeza(Nodo* x) {
	this->cabeza = x;
}

Nodo* ListaCartas::getCabeza() {
	return cabeza;
}

void ListaCartas::setLong(int x) {
	this->longitud = x;
}

int ListaCartas::getLong() {
	return longitud;
}

void ListaCartas::insertarCarta(Carta carta) {
	Nodo * nuevo = new Nodo(carta);

	if (getCabeza() == NULL) {
		setCabeza(nuevo);
	}
	else if (nuevo->getCarta().getNumCarta() < getCabeza()->getCarta().getNumCarta()) {
		nuevo->setSig(getCabeza());
		setCabeza(nuevo);
	}
	else {//insertar al medio o al final
		Nodo * ant = getCabeza();
		Nodo * act = getCabeza()->getSig();

		while (act != NULL && act->getCarta().getNumCarta() < nuevo->getCarta().getNumCarta()) {
			ant = ant->getSig();
			act = act->getSig();
		}

		nuevo->setSig(ant->getSig());
		ant->setSig(nuevo);
	}

	longitud++;
}

void ListaCartas::mostrarListaCartas() {
	Nodo * aux = getCabeza();

	while (aux != NULL) {
		aux->getCarta().mostrarCarta();
		aux = aux->getSig();
	}
}

Nodo* ListaCartas::sacarCarta(int numCarta)
{
	Nodo* infoCarta = NULL;

	if (getCabeza() != NULL) {
		Nodo* aux;
		aux = getCabeza();

		if (getCabeza()->getCarta().getNumCarta() == numCarta) {
			infoCarta = getCabeza();
			setCabeza(getCabeza()->getSig());
			delete aux;
		}
		else {
			Nodo* ant = getCabeza(), * act = getCabeza()->getSig();

			while (act != NULL && act->getCarta().getNumCarta() != numCarta) {
				ant = ant->getSig();
				act = act->getSig();
			}

			ant->setSig(act->getSig());
			infoCarta = act;
			delete act;
		}
		longitud--;
	}
	else {
		cout << "--No hay cartas en la lista" << endl;
	}

	return infoCarta;
}

Carta ListaCartas::buscarCarta(int valor) {

	Carta retorno;
	Nodo* aux = getCabeza();

	while (aux != NULL) {
		if (aux->getCarta().getValor() == valor) {
			retorno = aux->getCarta();
		}
		aux = aux->getSig();
	}

	return retorno;

}

