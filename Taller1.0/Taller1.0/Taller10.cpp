// Taller10.cpp: define el punto de entrada de la aplicación de consola.
//
#include<iostream>
#include<string>
#include "stdafx.h"


using namespace std;

int main()
{
	int opcion;

	do {
		//Ciclo para repetir el ingreso de opcion del usuario
		opcion = menuPrincipal();
		if (opcion < 0 || opcion > 8) {
			cout << "Opcion no valida ingrese nuevamente\n" << endl;
		}
	} while (opcion < 0 || opcion > 8);


	





	

	system("pause");
    return 0;
}