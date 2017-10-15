#pragma once
#include<iostream>
#include<string>

using namespace std;

class Planeta
{
public:
	Planeta();//Constructor por defecto
	Planeta(string nombre, double distanciaTierra, string habilitado, string listaRequerimientos[] ); //Constructor con parametros
	Planeta(const Planeta &plan);//Constructor copia
	~Planeta();

	//Getters
	string getNombre();
	double getDistancia();
	string getHabilitado();
	string* getLista();

	//Sobrecarga
	bool operator ==(const Planeta & plant); //Sobrecarga de ==

private:
	//Atributos de la clase
	string nombre;
	double distanciaTierra;
	string habilitado;
	string *listaRequerimientos;

};

