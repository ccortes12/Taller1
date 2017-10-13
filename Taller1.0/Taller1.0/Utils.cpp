#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

int menuPrincipal() {
	int opcion;
	cout << "Seleccione opcion\n1. Agregar un nuevo dato \n2. Listado de naves \n3. Listado de Astronautas ordenado por años de exp" << endl;
	cout << "4. Manejar astronautas \n5. Estado de mision \n6. Limpiar datos corruptos \n7. Crear archivos \n8. SALIR \n" << endl;
	cin >> opcion;
	return opcion;
}

