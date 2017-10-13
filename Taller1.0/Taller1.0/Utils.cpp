#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

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
	ifstream archivo("Astronautas.txt");
	if (archivo.is_open) {
		while (getline(archivo, linea)) {

			cout << linea << endl;

		}
	}
	archivo.close();
}