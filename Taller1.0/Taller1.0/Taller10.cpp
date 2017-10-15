// Taller10.cpp: define el punto de entrada de la aplicación de consola.
//
#include<iostream>
#include<string>
#include "stdafx.h"
#include "ListaAstronautas.h"
#include "Astronauta.h"



using namespace std;

int main()
{
	/*
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
	*/
	/*
	Astronauta astr = Astronauta("CHORIZO", 56, 30, "PLEXMOVIL");
	Astronauta astr1 = Astronauta("PLEXMAN", 80, 120, "PLEXSHIP");
	ListaAstronautas list = ListaAstronautas(8);*/
	/*
	list.agregar(astr);
	list.agregar(astr1);
	list.desplegarLista();
	cout << list.getCantElems() << endl;

	list.eliminar(astr);

	list.desplegarLista();

	bool existe = list.buscarElemento(astr1);

	if (existe) {

		cout << "Existe elemento" << endl;

	}else {

		cout << "No existe elemento" << endl;

	}
	*/
	ListaAstronautas list = leerArchAstronautas();

	list.desplegarLista();
	
	
	return 0;

	
	}