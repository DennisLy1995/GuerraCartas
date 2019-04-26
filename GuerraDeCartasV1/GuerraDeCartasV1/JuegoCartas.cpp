#include "pch.h"
#include "JuegoCartas.h"
#include "PilaCartas.h"
#include <iostream>
#include <stdlib.h>
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

PilaCartas* JuegoCartas::getMasoBarajado()
{
	return masoBarajado;
}

void JuegoCartas::setJugador(Jugador jugador)
{
	jugadores->annadirJugador(jugador);
}

ListaJugador* JuegoCartas::getJugadores()
{
	return jugadores;
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
		
		//int numCarta, int valor, string simbolo, string valorSimb
		for (int a = 1; a < 5;a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "A-" + simbolo;
			cartaTemp = new Carta(valorMaso, 14, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}
		
		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "2-" + simbolo;
			cartaTemp = new Carta(valorMaso, 2, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "3-" + simbolo;
			cartaTemp = new Carta(valorMaso, 3, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "4-" + simbolo;
			cartaTemp = new Carta(valorMaso, 4, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "5-" + simbolo;
			cartaTemp = new Carta(valorMaso, 5, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "6-" + simbolo;
			cartaTemp = new Carta(valorMaso, 6, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "7-" + simbolo;
			cartaTemp = new Carta(valorMaso, 7, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "8-" + simbolo;
			cartaTemp = new Carta(valorMaso, 8, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "9-" + simbolo;
			cartaTemp = new Carta(valorMaso, 9, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}


		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "10-" + simbolo;
			cartaTemp = new Carta(valorMaso, 10, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "J-" + simbolo;
			cartaTemp = new Carta(valorMaso, 11, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "Q-" + simbolo;
			cartaTemp = new Carta(valorMaso, 12, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "K-" + simbolo;
			cartaTemp = new Carta(valorMaso, 13, simbolo, valorSimbolo);
			masoOriginal->insertarCarta(*cartaTemp);
			valorMaso++;
		}

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

void JuegoCartas::barajarMaso(void)
{
	
	Carta carta;
	int num;
	bool x = false;
	srand(time(NULL));

	for (int i = 1; i <= masoOriginal->getLong(); i++) {
		do {
			num = 1 + rand() % (52 + 1 - 1);
			x = masoBarajado->buscarEnPila(num);
			if (x != true) {
				carta = masoOriginal->buscarCartaPorNum(num);
				masoBarajado->pushCarta(carta);
			}
		} while (x == true);
	}

	cout << "Se ha barajado el maso" << endl;
	//cout << "\nCatidad de cartas en pila: " << masoBarajado->getLong() << endl;
}

void JuegoCartas::ingresarJugadores(void)
{
	int cantJugadores;
	string nombre;

	do {
		cout << "\nDigite la catidad de jugadores que desea ingresar (Maximo 4, minimo 2)" << endl;
		cin >> cantJugadores;

		if (cantJugadores >= 2 && cantJugadores <= 4) {
			for (int i = 0; i < cantJugadores; i++) {
				cout << "\nDigite el nombre del jugador " << i + 1 << endl;
				cin >> nombre;
				Jugador jugador(i + 1, nombre);
				jugadores->annadirJugador(jugador);
			}
		}
		else {
			cout << "\nPor favor ingrese una cantidad de jugadores de 2 a 4" << endl;
		}
	} while (cantJugadores < 2 || cantJugadores > 4);

	jugadores->mostrarListaJugadores();
}

void JuegoCartas::repartirCartas(void)
{
	int cont = 1, cantCartas;
	

	if (jugadores->getLong() == 3) {
		cantCartas = masoBarajado->getLong() - 1;
	}
	else {
		cantCartas = masoBarajado->getLong();
	}

	for (int i = 1; i <= cantCartas; i++) {
		if (cont == 1) {
			darCarta(cont);
			cont++;
		}
		else if (cont == 2) {
			darCarta(cont);
			if (jugadores->getLong() == 2) {
				cont = 1;
			}
			else {
				cont++;
			}
		}
		else if (cont == 3) {
			darCarta(cont);
			if (jugadores->getLong() == 3) {
				cont = 1;
			}
			else {
				cont++;
			}
		}
		else if (cont == 4) {
			darCarta(cont);
			if (jugadores->getLong() == 4) {
				cont = 1;
			}
		}
	}
}

void JuegoCartas::darCarta(int cont)
{
	Jugador jugador = jugadores->buscarJugador(cont);
	Carta carta = masoBarajado->popCarta();
	jugador.setMazo(carta);
	jugadores->modificarJugador(jugador);
}

void JuegoCartas::iniciarJuego()
{
	switch (this->getJugadores()->getLong()) {
	case 2:
		this->jugarEntreDos();
		break;
	case 3:
		this->jugarEntreTres();
		break;
	case 4:
		this->jugarEntreCuatro();
		break;
	default:
		cout << "Solo pueden haber entre 2 y 4 jugadores." << endl;
		break;
	}
}

void JuegoCartas::jugarEntreDos()
{
	cout << "Partida entre 2 jugadores" << endl << endl;

}

void JuegoCartas::jugarEntreTres()
{
	cout << "Partida entre 3 jugadores" << endl << endl;

}

void JuegoCartas::jugarEntreCuatro()
{
	cout << "Partida entre 4 jugadores" << endl << endl;

}


