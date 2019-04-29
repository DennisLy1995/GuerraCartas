#include "pch.h"
#include <iostream>
#include "Jugador.h"
#include "JuegoCartas.h"
using namespace std;

int procesarOpcion(int opcion);
void mostrarMenu();

void mostrarMenu() {
	cout << "Por favor, seleccione una de las siguientes opciones:" << endl;
	cout << "1. Iniciar juego." << endl;
	cout << "2. Ver reglas del juego." << endl;
	cout << "3. Salir. " << endl;
}



int main()
{
	int opc = 0;
	while (opc != -1) {
		mostrarMenu();
		cin >> opc;
		opc = procesarOpcion(opc);
	}
}

int procesarOpcion(int posicion) {
	int retorno = 0;
	JuegoCartas* juego = new JuegoCartas();
	

	switch (posicion)
	{
	case 1:
		juego->GenerarMaso();
		juego->barajarMaso();
		juego->ingresarJugadores();
		juego->repartirCartas();
		juego->iniciarJuego();
		retorno = 1;
		break;
	case 2:
		cout << "===========================================================================================================\n\n                             Reglas del juego Guerra de cartas\n\n   1.Juego entre 2 y 4 jugadores.\n\n   2.El naipe de 52 cartas se repartira entre los jugadores.\n\n   3.Por turno cada jugador mostrara la ultima carta en su pila de cartas.\n\n   4.El jugador con la carta cuyo valor sea el mas alto, ganara todas las cartas\n\t4.1.Las cartas ganadas en el turno no entran mas en juego, se colocan por aparte.\n\n   5.El jugador con mas cartas al final, es el ganador.\n\n\n   Nota: En caso de un empate, los jugadores tendran que seleccionar enter para generar un numero aleatorio,\n      el jugador con el numero mas grande gana las cartas del turno.\n\n===========================================================================================================\n\n" << endl;
		retorno = 1;
		break;
	case 3:
		cout << "Saliendo del juego..." << endl;
		retorno = -1;
		break;
	default:
		retorno = 1;
	}
	return retorno;
}