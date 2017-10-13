#pragma once
#include<string>
#include<iostream>

using namespace std;

class Astronauta
{
public:
	Astronauta();//Constructor por defecto
	//Constructor con parametros
	Astronauta(string nombre, int edad, int anosExp, string naveAsig = "No Asignado"); //Valor por defecto
	Astronauta(const Astronauta &astr); //Constructor copia
	~Astronauta(); //Destructor

	//Getters and setters
	string getNombre();
	int getEdad();
	int getAnosExp();
	string getNave();

	void setNave(string nave);//Set para asignar la nave

private:
	//Atributos de la clase
	string nombre;
	int edad;
	int anosExp;
	string naveAsig;
};

