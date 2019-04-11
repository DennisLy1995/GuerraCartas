#include "pch.h"
#include <iostream>

#include <iostream>
using namespace std;

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