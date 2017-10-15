#include "stdafx.h"
#include<iostream>
#include<string>


#include<fstream>
#include<ostream>
#include<sstream>

using namespace std;

int menuPrincipal() {
	int opcion;
	do {
		cout << "Seleccione opcion\n1. Agregar un nuevo dato \n2. Listado de naves \n3. Listado de Astronautas ordenado por años de exp" << endl;
		cout << "4. Manejar astronautas \n5. Estado de mision \n6. Limpiar datos corruptos \n7. Crear archivos \n8. SALIR \n" << endl;
		cin >> opcion;
		if (opcion < 1 || opcion > 8) {
			cout << "Opcion no valida ingrese nuevamente\n" << endl;
		}
	} while (opcion < 1 || opcion > 8);return opcion;
}

int subMenu1() {
	int opcion;
	do {
		cout << "\nAgregar nuevo dato:\n1. Astronauta\n2.Nave\n3.Planeta\n" << endl;
		cin >> opcion;

		if (opcion < 1 || opcion >3) {
			cout << "Opcion no valida, Ingrese nuevamente\n" << endl;
		}
	} while (opcion < 1 || opcion >3); return opcion;

}

int subMenu4()
{
	int opcion;
	do {
		cout << "\nManejar astronautas:\n1. Agregar astronauta a una nave\n2. Mover Astronauta\n" << endl;
		cin >> opcion;

		if (opcion < 1 || opcion >2) {
			cout << "Opcion no valida, Ingrese nuevamente\n" << endl;
		}
	} while (opcion < 1 || opcion >2); return opcion;
}

void leerArchAstronautas() {

	string linea;
	bool indicador = false; //Indica si ya fue creada la lista
	ifstream archivoEntrada;
	archivoEntrada.open("Astronautas.txt");

	if (archivoEntrada.fail()) {
		cout << "El archivo no se abrio correctamente" << endl;
		exit(1);
	}
	else {
		//Archivo abierto
		cout << "\nCargando datos desde archivo 'Astronautas.txt' ...." << endl;
		ListaAstronautas listaAstronautas;
		while (getline(archivoEntrada, linea)) { //Hasta que no llegue al fin del archivo
			int i = 0;
			stringstream ss(linea);
			string palabra;
			

			if (!indicador) { //Entra una vez para crear listaAstronautas
				int largo = atoi(palabra.c_str());
				ListaAstronautas listAstronauta(largo);
				
				indicador = true;

			}
			else {

				while (!ss.eof()) {

					getline(ss, palabra, ','); string nombre = palabra;
					getline(ss, palabra, ','); int edad = atoi(palabra.c_str());
					getline(ss, palabra, ','); int anosExp = atoi(palabra.c_str());
					string nave;
					try {
						getline(ss, palabra, ',');
						nave = palabra;
					}
					catch (...) {//catch all
						nave = "";
					}

					Astronauta *ast = new Astronauta(nombre, edad, anosExp, nave);


					i++;
				}
			}
		}
	}
	
}