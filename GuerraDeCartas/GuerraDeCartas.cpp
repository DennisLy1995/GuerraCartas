// GuerraDeCartas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
