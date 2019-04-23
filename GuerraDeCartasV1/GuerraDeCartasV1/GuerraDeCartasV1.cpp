#include "pch.h"
#include <iostream>
#include "Jugador.h"
#include "JuegoCartas.h"
using namespace std;

void pruebaJugador(void); //solamente para prueba
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
		//juego->JugarGuerraCartas();
		retorno = 1;
		break;
	case 2:
		cout << "Reglas del juego:" << endl; // Esto se debería de cambiar
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


void pruebaJugador() { //Metodo solamente creado para probar que la sintaxis o funcionalidad funcionan
	Jugador jugador;
	Carta carta;
	ListaCartas* listaTemp = new ListaCartas();

	Carta temp (1,1,"jajaja","jajajaja");
	listaTemp->insertarCarta(temp);
	listaTemp->mostrarListaCartas();

	//Nodo* nodocarta;

	/*nodocarta = jugador.getMazo()->tomarCarta();
	nodocarta->getCarta();*/
	
	//carta = jugador.getMazo()->tomarCarta()->getCarta();
}