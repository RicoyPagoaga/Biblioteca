#ifndef USUARIO_H
#define USUARIO_H
#include <string>

class Usuario
{
public:
	Usuario();
	Usuario(std::string, std::string);
	void establecerNombre(std::string);
	std::string obtenerNombre()const;
	void establecerContrase�a(std::string);
	std::string obtenerContrase�a()const;

	bool darAcceso(std::string, std::string) const;




private:
	char nombre[15];
	char contrase�a[15];
};


#endif // !USUARIO_H