#include "pch.h"
#include "Carta.h"
#include <iostream>
using namespace std;

Carta::Carta()
{
}

Carta::Carta(int numCarta, int valor, string simbolo, string valorSimb)
{
	this->numCarta = numCarta;
	this->valor = valor;
	this->simbolo = simbolo;
	this->valorSimb = valorSimb;
}

void Carta::setNumCarta(int numCarta) {
	this->numCarta = numCarta;
}

int Carta::getNumCarta() {
	return numCarta;
}

void Carta::setValor(int valor) {
	this->valor = valor;
}

int Carta::getValor() {
	return valor;
}

void Carta::setSimbolo(string simbolo) {
	this->simbolo = simbolo;
}

string Carta::getSimbolo() {
	return simbolo;
}

void Carta::setValorSimb(string ValorSimb) {
	this->valorSimb = ValorSimb;
}

string Carta::getValorSimb() {
	return valorSimb;
}

void Carta::mostrarCarta() {
	cout << "Peso: " << getValor() << endl;
	cout << "Carta: " << getValorSimb() << endl;
	cout << "-----------------" << endl;
}

string Carta::siguienteSimbolo(int actual)
{
	string simbolo = "";

	switch (actual) {
	case 1:
		simbolo = "Corazon";
		break;
	case 2:
		simbolo = "Diamante";
		break;
	case 3:
		simbolo = "Trebol";
		break;
	case 4:
		simbolo = "Pica";
		break;

	}

	return simbolo;
}
