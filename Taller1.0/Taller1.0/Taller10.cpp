// Taller10.cpp: define el punto de entrada de la aplicación de consola.
//
#include<iostream>
#include<string>
#include "stdafx.h"


using namespace std;

int main()
{
	
	leerArchAstronautas();//Lectura archivo astronauta


	int opcion1, opcion4;
	int opcion = menuPrincipal();
	
	do {
		//Switch del programa principal
		switch (opcion)
		{
		case 1: //Agregar dato

			opcion1 = subMenu1();

			switch (opcion1) {

			case 1: //Agregar Astronauta

				break;
			case 2: //Agregar Nave

				break;

			case 3: //Agregar Planeta

				break;
			}

			break;///break case 1

		case 2: //Listado de naves

			break;

		case 3: //Listado de astronautas ordenado

			break;

		case 4: //Manejar astronautas
			opcion4 = subMenu4();

			switch (opcion4)
			{
			case 1: //Agregar astronauta a una nave

				break;
			case 2://Mover astronauta

				break;
			}

			break;///break case 4

		case 5: //Estado mision

			break;

		case 6: //Limpiar datos corruptos

			break;

		case 7: //Crear archivos

			break;

		case 8: //FIN PROGRAMA

			break;

		}
		opcion = menuPrincipal();
	} while (opcion != 8);

	system("pause");
    return 0;
}