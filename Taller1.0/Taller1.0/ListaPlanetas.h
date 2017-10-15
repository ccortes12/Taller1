#pragma once
class ListaPlanetas
{
public:
	ListaPlanetas();//Constructor por defecto
	ListaPlanetas(int sz);//Constructos con largo
	ListaPlanetas & operator=(const ListaPlanetas& lst);//Constructor asignacion
	ListaPlanetas(ListaPlanetas && lst);//Constructor movimiento
	ListaPlanetas& operator=(ListaPlanetas &&lst);//Asignacion del movimiento
	~ListaPlanetas();

	Planeta *arr;
private:
	int largo;
};

