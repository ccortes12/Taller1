#pragma once
#include<string>

using namespace std;

class ListaPlaneta
{
public:
	ListaPlaneta();//Constructor por defecto
	ListaPlaneta(int s); //Constructor 
	~ListaPlaneta(); //Destructor

private:
	int largo;
	Planeta *Lista;
};

