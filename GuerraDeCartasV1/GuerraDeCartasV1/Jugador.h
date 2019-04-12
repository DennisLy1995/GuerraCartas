#pragma once
#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "ColaCartas.h"
#include "ListaCartas.h"
using namespace std;
class Jugador
{
private:
	string nombre;
	ColaCartas* mazo = new ColaCartas();
	ListaCartas* cartasGanadas = new ListaCartas(); //Se puede obtener el puntaje de acuerdo a la longitud de la lista
public:
	Jugador();
	Jugador(string);
	void setNombre(string);
	string getNombre(void);
	void setMazo(Carta);//Se añaden cartas al mazo una por una
	ColaCartas* getMazo(void);//Se obtiene la cola de cartas del jugador
	void setCartasGanadas(Carta);//Se añaden cartas a la lista una por una
	ListaCartas* getCartasGanadas(void);//Se obtiene la lista de cartas ganadas
	int obtenerPuntaje();//Se obtine el puntaje que lleva el jugador
};
#endif // !JUGADOR_H