#include "stdafx.h"
#include "Astronauta.h"
#include<string>

using namespace std;

Astronauta::Astronauta()
{
}

Astronauta::Astronauta(string nombre, int edad, int anosExp, string naveAsig = "No asignada")
{
	this->nombre = nombre;
	this->edad = edad;
	this->anosExp = anosExp;
	this->naveAsig = naveAsig;
}

Astronauta::Astronauta(const Astronauta & astr) :
	nombre(astr.nombre), edad(astr.edad), anosExp(astr.anosExp), naveAsig(astr.naveAsig) {}

Astronauta::~Astronauta()
{
}

string Astronauta::getNombre()
{
	return nombre;
}

int Astronauta::getEdad()
{
	return edad;
}

int Astronauta::getAnosExp()
{
	return anosExp;
}

string Astronauta::getNave()
{
	return naveAsig;
}

void Astronauta::setNave(string nave)
{
	this->naveAsig = nave;
}
