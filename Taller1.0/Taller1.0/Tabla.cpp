#include "stdafx.h"
#include "Tabla.h"
#include"string"

using namespace std;

template<class Lista>
Tabla<Lista>::Tabla()
{
}

template<class Lista>
Tabla<Lista>::Tabla(const int largo)
{
	ptr = new Lista[largo];
}

template<class Lista>
Tabla<Lista>::Tabla(const Tabla & otro): ptr(new Lista[otro.largo]), largo(otro.largo)
{
	for (int i = 0; i < largo; i++) {
		ptr[i] = otro.ptr[i];
	}
}

template<class Lista>
Tabla & Tabla<Lista>::operator=(const Tabla & otro)
{
	// TODO: insertar una instrucción return aquí
	Lista *elem = new Lista[otro.largo];
	for (int i = 0; i < largo; i++) {
		elem[i] = otro.ptr[i];
	}
	delete[] ptr;
	ptr = elem;
	largo = otro.largo;
	return *this;
}

template<class Lista>
Tabla<Lista>::Tabla(Tabla && list) : ptr(list.ptr), largo(list.largo)
{
	list.ptr = nullptr;
	list.largo = 0;
}

template<class Lista>
Tabla & Tabla<Lista>::operator=(Lista && list)
{
	// TODO: insertar una instrucción return aquí
	delete[] ptr;
	ptr = list.ptr;
	largo = list.largo;

	list.ptr = nullptr;
	list.largo = 0;
	return *this;
}

template<class Lista>
Tabla<Lista>::~Tabla()
{
	delete[] ptr;
}
