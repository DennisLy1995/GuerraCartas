#include "pch.h"
#include "Jugador.h"

Jugador::Jugador()
{
}

Jugador::Jugador(string nombre) {
	this->nombre = nombre;
}

void Jugador::setNombre(string nombre) {
	this->nombre = nombre;
}

string Jugador::getNombre() {
	return nombre;
}

void Jugador::setMazo(Carta carta) {
	mazo->insertarCarta(carta);
}

ColaCartas* Jugador::getMazo() {
	return mazo;
}

void Jugador::setCartasGanadas(Carta carta) {
	cartasGanadas->insertarCarta(carta);
}

ListaCartas* Jugador::getCartasGanadas() {
	return cartasGanadas;
}

int Jugador::obtenerPuntaje() {
	return cartasGanadas->getLong();
}