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
	//cout << "\nCatidad de cartas en pila: " << masoBarajado->getLong() << endl;
}
