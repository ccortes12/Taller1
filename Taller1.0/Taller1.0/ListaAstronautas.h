#pragma once
class ListaAstronautas
{
public:
	ListaAstronautas();//Constructor por defecto
	ListaAstronautas(int sz);//Constructor con largo definido
	ListaAstronautas & operator =(const ListaAstronautas& lst); //Constructor asignacion
	ListaAstronautas(ListaAstronautas&& lst);//Constructor movimiento
	ListaAstronautas& operator =(ListaAstronautas&& lst); //Asignacion del movimiento

	~ListaAstronautas();

	Astronauta *arr;

private:

	int largo;
};

