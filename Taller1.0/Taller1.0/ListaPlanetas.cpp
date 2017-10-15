#include "stdafx.h"
#include "ListaPlanetas.h"


ListaPlanetas::ListaPlanetas()
{
}

ListaPlanetas::ListaPlanetas(int sz) : arr((new Planeta[sz])), largo(sz)
{
	for (int i = 0; i < sz; i++) {
		arr[i] = Planeta();
	}
}

ListaPlanetas & ListaPlanetas::operator=(const ListaPlanetas & lst)
{
	// TODO: insertar una instrucción return aquí
	Planeta *elem = new Planeta[lst.largo];
	for (int i = 0; i < lst.largo; i++) {
		elem[i] = lst.arr[i];
	}
	delete[] arr;
	arr = elem;
	largo = lst.largo;
	return *this;
}

ListaPlanetas::ListaPlanetas(ListaPlanetas && lst): arr(lst.arr), largo(lst.largo)
{
	lst.arr = nullptr;
	lst.largo = 0;
}

ListaPlanetas & ListaPlanetas::operator=(ListaPlanetas && lst)
{
	// TODO: insertar una instrucción return aquí
	delete[] arr;
	arr = lst.arr;
	largo = lst.largo;

	lst.arr = nullptr;
	lst.largo = 0;
	return *this;
}


ListaPlanetas::~ListaPlanetas()
{
	delete[]arr;
}
