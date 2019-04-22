#pragma once

#include "ListaCartas.h"
#include "Carta.h"

using namespace std;

class JuegoCartas
{
public:
	JuegoCartas();
	~JuegoCartas();
	ListaCartas* getMasoOriginal();
	int getContador();
	void setContador(int value);
	void reiniciarContador();
	bool GenerarMaso();
	void sumarContador();
	void restarContador();
	Carta buscarCarta(int carta);
	void JugarGuerraCartas();
	void jugarDosJugadores();
	void jugarTresJugadores();
	void jugarCuatroJugadores();

private:
	ListaCartas* masoOriginal = new ListaCartas();
	int contador;
};
