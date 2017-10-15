#include "stdafx.h"
#include "ListaNaves.h"


ListaNaves::ListaNaves()
{
}

ListaNaves::ListaNaves(int largo) :arr(new Nave[largo]), largo(largo)
{
	for (int i = 0; i < largo; i++) {
		arr[i] = Nave();
	}
}

ListaNaves & ListaNaves::operator=(const ListaNaves & list)
{
	// TODO: insertar una instrucción return aquí
	Nave *elem = new Nave[list.largo];
	for (int i = 0; i < list.largo; i++) {
		elem[i] = list.arr[i];
	}
	delete[] arr;
	arr = elem;
	largo = list.largo;
	return *this;
}

ListaNaves::ListaNaves(ListaNaves && list) :arr(list.arr), largo(list.largo)
{
	list.arr = nullptr;
	list.largo = 0;
}

ListaNaves & ListaNaves::operator=(ListaNaves && lst)
{
	// TODO: insertar una instrucción return aquí
	delete[]arr;
	arr = lst.arr;
	largo = lst.largo;

	lst.arr = nullptr;
	lst.largo = 0;
	return *this;
}


ListaNaves::~ListaNaves()
{
	delete[]arr;
}
