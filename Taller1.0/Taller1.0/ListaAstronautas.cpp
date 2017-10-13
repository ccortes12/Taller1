#include "stdafx.h"
#include "ListaAstronautas.h"


ListaAstronautas::ListaAstronautas()
{
}

ListaAstronautas::ListaAstronautas(int sz): arr(new Astronauta[sz]), largo(sz)
{
	for (int i = 0; i < sz; i++) {
		arr[i] = Astronauta();
	}
}

ListaAstronautas & ListaAstronautas::operator=(const ListaAstronautas & lst)
{
	// TODO: insertar una instrucción return aquí

	Astronauta *elem = new Astronauta[lst.largo];
	for (int i = 0; i < lst.largo; i++) {
		elem[i] = lst.arr[i];
	}
	delete[] arr;
	arr = elem;
	largo = lst.largo;
	return *this;
}

ListaAstronautas::ListaAstronautas(ListaAstronautas && lst) : arr(lst.arr), largo(lst.largo)
{
	lst.arr = nullptr;
	lst.largo = 0;
}

ListaAstronautas & ListaAstronautas::operator=(ListaAstronautas && lst)
{
	// TODO: insertar una instrucción return aquí
	delete[]arr;
	arr = lst.arr;
	largo = lst.largo;

	lst.arr = nullptr;
	lst.largo = 0;
	return *this;
}


ListaAstronautas::~ListaAstronautas()
{
	delete[]arr;
}
