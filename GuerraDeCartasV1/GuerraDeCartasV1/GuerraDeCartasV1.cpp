#include "pch.h"
#include <iostream>
#include "Jugador.h"
using namespace std;

void pruebaJugador(void); //solamente para prueba

void mostrarMenu() {
	cout << "Por favor, seleccione una de las siguientes opciones:" << endl;
	cout << "1. Iniciar juego." << endl;
	cout << "2. Ver reglas del juego." << endl;
	cout << "3. Salir. " << endl;
}

int procesarOpcion(int opcion) {
	switch (opcion)
	{
	case 1:
		cout << "Iniciando juego..." << endl; // Esto se debería de cambiar
		return 1;
		break;
	case 2:
		cout << "Reglas del juego:" << endl; // Esto se debería de cambiar
		return 1;
		break;
	case 3:
		cout << "Saliendo del juego..." << endl;
		return -1;
		break;
	default:
		return -1;
	}
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

void pruebaJugador() { //Metodo solamente creado para probar que la sintaxis o funcionalidad funcionan
	Jugador jugador;
	Carta carta;
	//Nodo* nodocarta;

	/*nodocarta = jugador.getMazo()->tomarCarta();
	nodocarta->getCarta();*/
	
	carta = jugador.getMazo()->tomarCarta()->getCarta();
}