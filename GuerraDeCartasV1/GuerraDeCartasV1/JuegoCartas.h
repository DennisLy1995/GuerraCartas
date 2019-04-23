#pragma once

#include "ListaCartas.h"
#include "PilaCartas.h"
#include "Carta.h"
#include "ListaJugador.h"

using namespace std;

class JuegoCartas
{
public:
	JuegoCartas();
	~JuegoCartas();
	ListaCartas* getMasoOriginal();
	PilaCartas* getMasoBarajado();
	void setJugador(Jugador);
	ListaJugador* getJugadores();
	int getContador();
	void setContador(int value);
	void reiniciarContador();
	bool GenerarMaso();
	void sumarContador();
	void restarContador();
	Carta buscarCarta(int carta);
	void barajarMaso(void);
	void ingresarJugadores(void);
	void repartirCartas(void);
	void darCarta(int);

private:
	ListaCartas* masoOriginal = new ListaCartas();
	PilaCartas* masoBarajado = new PilaCartas();
	ListaJugador* jugadores = new ListaJugador();
	int contador;
};
