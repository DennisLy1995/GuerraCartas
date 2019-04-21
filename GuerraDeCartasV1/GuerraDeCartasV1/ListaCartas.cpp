#include "pch.h"
#include "ListaCartas.h"

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

Carta ListaCartas::sacarCarta(int valor)
{

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
