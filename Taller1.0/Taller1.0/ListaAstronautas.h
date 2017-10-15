#pragma once
class ListaAstronautas
{
public:
	ListaAstronautas();//Constructor por defecto
	ListaAstronautas(int sz);//Constructor con largo definido
	ListaAstronautas & operator =(const ListaAstronautas& lst); //Constructor asignacion
	ListaAstronautas(ListaAstronautas&& lst);//Constructor movimiento
	ListaAstronautas& operator =(ListaAstronautas&& lst); //Asignacion del movimiento
	void agregar(Astronauta astr);
	bool isEmpty();
	bool isLlena();
	bool eliminar(Astronauta astr);
	int buscarElemento(Astronauta astr);
	int getCantElems();
	void desplegarLista();

	~ListaAstronautas();

	Astronauta *arr;

private:

	int cantElems;
	int largo;
};

