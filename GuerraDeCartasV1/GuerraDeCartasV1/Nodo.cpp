#include "pch.h"
#include "Nodo.h"
#include <iostream>

Nodo::Nodo() {
}

Nodo::Nodo(Carta carta) {
	this->carta = carta;
	this->sig = NULL;
}

void Nodo::setCarta(Carta carta) {
	this->carta = carta;
}

Carta Nodo::getCarta() {
	return carta;
}

void Nodo::setSig(Nodo *x) {
	sig = x;
}

Nodo *Nodo::getSig() {
	return sig;
}
