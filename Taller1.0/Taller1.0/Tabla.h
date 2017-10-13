#pragma once
#include<iostream>
#include<string>

using namespace std;

template<class Lista>
class Tabla
{
public:
	Tabla();//Constructor por defecto
	Tabla(const int largo);//Constructor con parametros
	Tabla(const Tabla &otro); //Constructor copia
	Tabla& operator =(const Tabla &otro);//Constructor de asignacion
	Tabla(Tabla&& list); //Constructor de movimiento
	Tabla& operator=(Lista&& list);// Asignacion del movimiento
	~Tabla(); //Destructor

	Lista *ptr;
	int largo;

};

