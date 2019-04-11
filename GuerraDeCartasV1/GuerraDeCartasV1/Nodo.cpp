#include "pch.h"
#include "Nodo.h"
#include <iostream>

Nodo::Nodo() {
	valor = 0;
	sig = NULL;
}

Nodo::Nodo(int x) {
	valor = x;
	sig = NULL;
}

void Nodo::setValor(int x) {
	valor = x;
}

int Nodo::getValor() {
	return valor;
}

void Nodo::setSig(Nodo *x) {
	sig = x;
}

Nodo *Nodo::getSig() {
	return sig;
}
