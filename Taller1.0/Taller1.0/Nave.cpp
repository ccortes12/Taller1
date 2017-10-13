#include "stdafx.h"
#include "Nave.h"
#include <string>

using namespace std;

Nave::Nave()
{
}

Nave::Nave(string nombre, string destino, int maxTripulantes, string listaSuministros[])
{
	this->nombre = nombre;
	this->destino = destino;
	this->maxTripulantes = maxTripulantes;
	this->listaSuministros = listaSuministros;
}

Nave::Nave(const Nave & nav2) :
	nombre(nav2.nombre), destino(nav2.destino), maxTripulantes(nav2.maxTripulantes), listaSuministros(nav2.listaSuministros) {}


Nave::~Nave()
{
	
}

string Nave::getNombre()
{
	return string(nombre);
}

string Nave::getDestino()
{
	return string(destino);
}

int Nave::getTripulantes()
{
	return maxTripulantes;
}

string* Nave::getLista()
{
	return listaSuministros;
}
