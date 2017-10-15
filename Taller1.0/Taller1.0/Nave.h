#pragma once
#include<iostream>

using namespace std;
class Nave
{
public:
	Nave(); //Constructor por defecto
	Nave(string nombre, string destino, int maxTripulantes, string listaSuministros[]);//Constructor con parametros
	Nave(const Nave &nav2);//Constructor copia
	~Nave(); //Destructor

	//Getters 
	string getNombre();
	string getDestino();
	int getTripulantes();
	string* getLista();

	//Sobrecargas
	bool operator ==(const Nave & nav); //Objeto igual

private:
	//Atributos del objeto Nave
	string nombre;
	string destino;
	int maxTripulantes;
	string *listaSuministros;

};