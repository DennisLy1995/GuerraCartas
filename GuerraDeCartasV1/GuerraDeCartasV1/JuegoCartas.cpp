#include "pch.h"
#include "JuegoCartas.h"
#include <iostream>



JuegoCartas::JuegoCartas()
{
}

JuegoCartas::~JuegoCartas()
{
}

ListaCartas JuegoCartas::getMasoOriginal()
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
	bool checker = false;
	string simbolo = "";
	string valorSimbolo = "";
	Carta* cartaTemp = new Carta();
	try {
		
		
		for (int a = 1; a < 5;a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "A: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "2: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "3: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "4: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "5: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "6: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "7: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "8: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "9: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}


		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "10: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "J: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "Q: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		for (int a = 1; a < 5; a++) {
			simbolo = Carta::siguienteSimbolo(a);
			valorSimbolo = "K: " + simbolo;
			cartaTemp = new Carta(a, valorMaso, simbolo, valorSimbolo);
			this->getMasoOriginal().insertarCarta(*cartaTemp);
			valorMaso++;
		}

		this->getMasoOriginal().mostrarListaCartas();

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


