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
	int contador = 0;
	Carta retorno;
	bool breaker = false;

	if (getCabeza() != NULL) {
		Nodo* aux;
		aux = getCabeza();

		if (getCabeza()->getCarta().getValor() == valor) {
			retorno = getCabeza()->getCarta();
			setCabeza(getCabeza()->getSig());
			delete aux;
			longitud--;
		}
		else {
			Nodo* ant = getCabeza(); 
			Nodo* act = getCabeza()->getSig();
			if (act == NULL) {
				if (cabeza->getCarta().getValor() == valor) {
					retorno = cabeza->getCarta();
				}
			}
			else {
				while (breaker == false) {
					if (act->getCarta().getValor() == valor) {
						retorno = act->getCarta();
						breaker = true;
					}
					else {
						contador++;
						if (contador == (getLong() - 1)) {
							breaker = true;
						}
						else {
							ant = ant->getSig();
							act = act->getSig();
						}
					}
				}
				ant->setSig(act->getSig());
				delete act;
				longitud--;

			}
			
			
		}
		
	}
	else {	
	}
	return retorno;
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

