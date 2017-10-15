#pragma once
class ListaNaves
{
public:
	ListaNaves();//Constructor por defecto
	ListaNaves(int largo);// Constructor
	ListaNaves & operator =(const ListaNaves& list);//Constructor asignacion
	ListaNaves(ListaNaves&& list);//Constructor movimiento
	ListaNaves & operator=(ListaNaves &&lst);//Asignacion de movimiento
	~ListaNaves();

	Nave *arr;

private:
	int largo;
};

