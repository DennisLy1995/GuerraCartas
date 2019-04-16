#pragma once
#ifndef CARTA_H
#define CARTA_H
#include <string>
using namespace std;
class Carta
{
private:
	int numCarta;
	int valor;
	string simbolo;
	string valorSimb;
public:
	Carta();
	Carta(int, int, string, string);
	void setNumCarta(int);
	int getNumCarta(void);
	void setValor(int);
	int getValor(void);
	void setSimbolo(string);
	string getSimbolo(void);
	void setValorSimb(string);
	string getValorSimb(void);
	void mostrarCarta(void);
	static string siguienteSimbolo(int actual);
};
#endif // !CARTA_H