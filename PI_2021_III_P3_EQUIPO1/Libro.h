#ifndef LIBRO_H
#define LIBRO_H
#include <string>

class Libro
{
public:
	Libro();
	Libro(int, int, int, double, std::string, std::string, std::string, std::string);
	void establecerIDlibro(int);
	int obtenerIDlibro()const;
	void establecerA�oEdicion(int);
	int obtenerA�oEdicion()const;
	void establecerNumeroVolumen(int);
	int obtenerNumeroVolumen()const;
	void establecerPrecio(double);
	double obtenerPrecio()const;
	void establecerNombreLibro(std::string);
	std::string obtenerNombreLibro()const;
	void establecerNombreAutor(std::string);
	std::string obtenerNombreAutor()const;
	void establecerEditorial(std::string);
	std::string obtenerEditorial()const;
	void establecerCategoria(std::string);
	std::string obtenerCategoria()const;

	std::string asignarCategoria()const;
	void registrarLibro();
	void imprimirLibro()const;

private:
	int IDlibro;
	int a�oEdicion;
	int numeroVolumenes;
	double precio;
	char nombreLibro[15];
	char nombreAutor[10];
	char editorial[15];
	char categoria[20];
	//Sucursal sucursal;
	//Estante estante;

};


#endif // !LIBRO_H

