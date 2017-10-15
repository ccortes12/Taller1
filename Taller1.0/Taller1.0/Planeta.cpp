#include "stdafx.h"
#include "Planeta.h"
#include<string>

using namespace std;

Planeta::Planeta()
{
}

Planeta::Planeta(string nombre, double distanciaTierra, string habilitado, string listaRequerimientos[])
{
	this->nombre = nombre;
	this->distanciaTierra = distanciaTierra;
	this->habilitado = habilitado;
	this->listaRequerimientos = listaRequerimientos;
}

Planeta::Planeta(const Planeta & plan) :
	nombre(plan.nombre), distanciaTierra(plan.distanciaTierra), habilitado(plan.habilitado),
	listaRequerimientos(plan.listaRequerimientos) {}


Planeta::~Planeta()
{
}

string Planeta::getNombre()
{
	return string(nombre);
}

double Planeta::getDistancia()
{
	return distanciaTierra;
}

string Planeta::getHabilitado()
{
	return string(habilitado);
}

string* Planeta::getLista()
{
	return listaRequerimientos;
}

bool Planeta::operator==(const Planeta & plant)
{
	return(this->nombre == plant.nombre && this->habilitado == plant.habilitado && this->listaRequerimientos == plant.listaRequerimientos && this->distanciaTierra == plant.distanciaTierra);
}
