#include "pch.h"
#include "JuegoCartas.h"
#include "PilaCartas.h"
#include <iostream>
#include <cstdlib>
#include <time.h>



JuegoCartas::JuegoCartas()
{
}

JuegoCartas::~JuegoCartas()
{
}

ListaCartas *JuegoCartas::getMasoOriginal()
{
	return masoOriginal;
}

int JuegoCartas::getContador()
{
	return contador;
}

void JuegoCartas::setContador(int value)
{
	contador = value;
}

void JuegoCartas::reiniciarContador()
{
	contador = 0;
}


bool JuegoCartas::GenerarMaso()
{
	int valorMaso = 1;
	bool checker = true;
	string simbolo = "";
	string valorSimbolo = "";
	Carta* cartaTemp = new Carta();
	try {
		
		
		for (int a = 1; a < 5;a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "A-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}
		
		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "2-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "3-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "4-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "5-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "6-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "7-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "8-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "9-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}


		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "10-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "J-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "Q-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "K-" + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}
		

		masoOriginal->mostrarListaCartas();

	}
	catch (exception e) {
		checker = false;
		cout << "Ha ocurrido un error al generar el maso.";
	}


	return checker;
}



void JuegoCartas::sumarContador()
{
	contador++;
}

void JuegoCartas::restarContador()
{
	contador--;
}

Carta JuegoCartas::buscarCarta(int carta)
{
	Carta temp = masoOriginal->buscarCarta(carta);

	return Carta();
}

void JuegoCartas::JugarGuerraCartas()
{
	bool breaker = false;
	int cantJugadores = 0;
	int numerosRandom = 0;
	Carta temp;

	while (breaker == false) {
		if (cantJugadores < 2 || cantJugadores > 4) {
			cout << "Ingrese la cantidad de jugadores (minimo 2 - maximo 4)" << endl;
			cin >> cantJugadores;
		}
		else {
			breaker = true;
		}
		
	}

	switch (cantJugadores) {

	case 2:
		jugarDosJugadores();
		break;

	case 3:
		jugarTresJugadores();
		break;

	case 4:
		jugarCuatroJugadores();
		break;

	default:
		break;

	}

}

void JuegoCartas::jugarDosJugadores()
{
	bool breaker = false;
	bool breakerMaso1 = false;
	bool breakerMaso2 = false;
	int numeroRandom = 0;
	Carta temp;
	PilaCartas *masoJugador1 = new PilaCartas();
	PilaCartas *masoJugador2 = new PilaCartas();

	srand(time(NULL));

	while (breaker == false) {
		breakerMaso1 = false;
		breakerMaso2 = false;
		if (masoOriginal->getLong() == 0) {
			breaker = true;
		}
		else {
			while (breakerMaso1 == false) {

				breakerMaso1 = false;
				numeroRandom = 1 + (rand() % 51);
				if (numeroRandom < 52) {
					temp = masoOriginal->sacarCarta(numeroRandom);
					if (temp.getSimbolo() == "Corazon" || temp.getSimbolo() == "Diamante" || temp.getSimbolo() == "Trebol" || temp.getSimbolo() == "Pica") {
						masoJugador1->pushCarta(temp);
						breakerMaso1 = true;
					}
				}
				
			}
			
		}

		if (masoOriginal->getLong() == 0) {
			breaker = true;
		}
		else {
			while (breakerMaso2 == false) {

				breakerMaso2 = false;
				numeroRandom = 1 + (rand() % 51);
				if (numeroRandom < 52) {
				temp = masoOriginal->sacarCarta(numeroRandom);
				if (temp.getSimbolo() == "Corazon" || temp.getSimbolo() == "Diamante" || temp.getSimbolo() == "Trebol" || temp.getSimbolo() == "Pica") {
					masoJugador2->pushCarta(temp);
					breakerMaso2 = true;
				}
				}
				
			}
			
		}

		cout << "maso del jugador 1: " << masoJugador1->getLong() << endl << endl;
		cout << "maso del jugador 2: " << masoJugador2->getLong() << endl << endl;

	}

	

}

void JuegoCartas::jugarTresJugadores()
{
}

void JuegoCartas::jugarCuatroJugadores()
{
}


