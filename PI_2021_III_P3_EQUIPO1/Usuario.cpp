#include "Usuario.h"
#include <iostream>
#include <string>

using namespace std;

Usuario::Usuario() {
	establecerNombre("   ");
	establecerContrase�a("   ");
}
Usuario::Usuario(string _nombre, string _contrase�a) {
	establecerNombre(_nombre);
	establecerContrase�a(_contrase�a);
}
void Usuario::establecerNombre(string _nombre) {
	int longitud = (int)_nombre.size();
	if (longitud < 2)
		cerr << "Nombre no valido." << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_nombre.copy(nombre, longitud);
	nombre[longitud] = '\0';
}
string Usuario::obtenerNombre()const {
	return nombre;
}
void Usuario::establecerContrase�a(string _contrase�a) {
	int longitud = (int)_contrase�a.size();
	if (longitud < 2)
		cerr << "Nombre no valido." << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_contrase�a.copy(contrase�a, longitud);
	contrase�a[longitud] = '\0';
}
string Usuario::obtenerContrase�a()const {
	return contrase�a;
}

bool Usuario::darAcceso(string nom, string con)const {
	string nombre, contrase�a;
	bool acceso = true;
	nombre = obtenerNombre();
	contrase�a = obtenerContrase�a();

	if ((nom == nombre) && (con == contrase�a))
	{
		acceso = true;
	}
	else
	{
		acceso = false;
	}
	return acceso;
}
