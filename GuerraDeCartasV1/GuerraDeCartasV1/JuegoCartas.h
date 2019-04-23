#pragma once

#include "ListaCartas.h"
#include "PilaCartas.h"
#include "Carta.h"

using namespace std;

class JuegoCartas
{
public:
	JuegoCartas();
	~JuegoCartas();
	ListaCartas* getMasoOriginal();
	PilaCartas* getMasoBarajado();
	int getContador();
	void setContador(int value);
	void reiniciarContador();
	bool GenerarMaso();
	void sumarContador();
	void restarContador();
	Carta buscarCarta(int carta);
	void barajarMaso(void);

private:
	ListaCartas* masoOriginal = new ListaCartas();
	PilaCartas* masoBarajado = new PilaCartas();
	int contador;
};
