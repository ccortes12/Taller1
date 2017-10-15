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

void ListaAstronautas::agregar(Astronauta astr)
{
	
	
	if (isLlena()) {

		cout << "Lista llena, no puede exceder en los espacios del vector" << endl;
	
	}
	
	this->arr[this->cantElems] = astr;
	++(this->cantElems);

}

bool ListaAstronautas::isEmpty()
{
	if (this->cantElems == 0) {

		return true;
	}
	return false;

}

bool ListaAstronautas::isLlena()
{
	if (this->cantElems == (this->largo - 1)) {
		return true;

	}
	
	return false;
}

bool ListaAstronautas::eliminar(Astronauta astr)
{
	return false;
}


void ListaAstronautas::desplegarLista()
{
	for (int i = 0; i < this->cantElems; i++) {

		cout << "[Dato " << (i + 1) << ":" << arr[i].getNombre()<< "]" << endl;

	}


}

int ListaAstronautas::buscarElemento(Astronauta astr)
{
	if (isEmpty()) {

		return -1;
	}
		
	for (int i = 0; i < (this->cantElems); i++) {

		if (arr[i] == astr) {

			return i;
		}
	}
	
	return -1;
}


bool ListaAstronautas::existeElemento(Astronauta astr)
{
	if (isEmpty()) {

		return false;
	}

	for (int i = 0; i < (this->cantElems); i++) {

		if (arr[i] == astr) {

			return true;
		}
	}
	
	
	return false;
}

int ListaAstronautas::getCantElems()
{
	return this->cantElems;
}

ListaAstronautas::~ListaAstronautas() {
	delete[]arr;
}
